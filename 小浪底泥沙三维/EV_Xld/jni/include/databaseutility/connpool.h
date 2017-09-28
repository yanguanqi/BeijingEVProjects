#ifndef _CConnectionPool_h__
#define _CConnectionPool_h__

#include <deque>
#include "core/mutex.h"
//#include "postgreSQL/libpq-fe.h"
#include "postgreSQL/libpq-fe.h"
#include "core/sharedptr.h"
//using std::shared_ptr;
using namespace EarthView::World::Core;

class CConnection : public EarthView::World::Core::CAllocatedObject
{
public:
	PGconn * mConn;

	CConnection(PGconn * conn) : mConn(conn){}
};

class CConnectionPool
{
	typedef CSharedPtr<CConnection > HolderType;
	typedef std::deque<HolderType> ContType;

	EVString mdbPath;
	unsigned initialSize_;
	unsigned maxSize_;
	ContType pool_;
	//mutable CgsLock lock_;
	mutable CRecursiveMutex mMutex;
public:
	CConnectionPool() : mdbPath(), initialSize_(0), maxSize_(0) {}
	bool initial(char* dbPath, unsigned initialSize, unsigned maxSize)
	{
		mdbPath = EVString(dbPath);
		initialSize_ = initialSize;
		maxSize_ = maxSize;
		for (unsigned i=0; i < initialSize_; ++i)
		{
			PGconn* conn = PQconnectdb(mdbPath);
			if (PQstatus(conn) == CONNECTION_OK)
			{
				PQsetClientEncoding( conn, "GB18030" );
				pool_.push_back(CSharedPtr<CConnection>(new CConnection(conn)));
			}
			else
			{
                char* error = PQerrorMessage(conn);
				return false;
			}
		}
		return true;
	}

	void finalize()
	{
		ContType::iterator itr=pool_.begin();
		while ( itr!=pool_.end())
		{
			if (itr->get()->mConn)
			{
				PQfinish(itr->get()->mConn);
				itr->get()->mConn = 0;
			}			
			itr++;
		}
	}

	HolderType borrowObject()
	{
		CMutexLocker locker(&mMutex);
		
		ContType::iterator itr=pool_.begin();

		HolderType holder;
		if (itr == pool_.end())
		{
			return holder;
		}

		while ( itr!=pool_.end())
		{
			if (!itr->unique())
			{
				++itr;
			}
			else
			{
				return *itr;
			}
		}
		// all connection have been taken, check if we allowed to grow pool
		if (pool_.size() < maxSize_)
		{
			PGconn* conn = PQconnectdb(mdbPath.c_str());

			ConnStatusType type = PQstatus(conn);
            char* error = PQerrorMessage(conn);
			if (type == CONNECTION_OK)
			{
				PQsetClientEncoding( conn, "GB18030" );
				holder = CSharedPtr<CConnection>(new CConnection(conn));
				pool_.push_back(holder);
				return holder;
			}
		}
		return holder;
	}

	unsigned size() const
	{
		CMutexLocker locker(&mMutex);
		return pool_.size();		
	}

	unsigned max_size() const
	{
		CMutexLocker locker(&mMutex);
		return maxSize_;
	}

	void set_max_size(unsigned size)
	{
		CMutexLocker locker(&mMutex);
		if (maxSize_ < size)
		{
			maxSize_ = size;
		}
	}

	unsigned initial_size() const
	{
		CMutexLocker locker(&mMutex);
		return initialSize_;
	}

	void set_initial_size(unsigned size)
	{
		CMutexLocker locker(&mMutex);
		if (size > initialSize_)
		{
			initialSize_ = size;
			unsigned total_size = pool_.size();
			// ensure we don't have ghost obj's in the pool.
			if (total_size < initialSize_)
			{
				unsigned grow_size = initialSize_ - total_size ;

				for (unsigned i=0; i < grow_size; ++i)
				{
					PGconn* conn = PQconnectdb(mdbPath);
					if (PQstatus(conn) == CONNECTION_OK)
					{
						PQsetClientEncoding( conn, "GB18030" );
						pool_.push_back(CSharedPtr<CConnection>(new CConnection(conn)));
					}
				}
			}
		}
	}
};

#endif // CConnectionPool_h__
