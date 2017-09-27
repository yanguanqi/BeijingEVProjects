#ifndef EV_CACHE_DB_POOL_H
#define EV_CACHE_DB_POOL_H
#include "core/mutex.h"
#include "core/stdheaders.h"
#include "core/stringdefines.h"
#include "cachemanager/cachemanagerglobal.h"

namespace EarthView{ namespace World { namespace Core{ namespace Database { class CSqlDatabase; }}}}

namespace EarthView{
	namespace World{
		namespace Spatial{

			// <summary>
			// 数据库连接使用者，该类构造的时候会自动从数据库连接池获取一个缓冲数据库文件的连接
			// 该类析构的时候，会自动释放获取到的数据库连接。
			// </summary>
			class EV_CACHEMANAGER_DLL CacheDBConnectUser
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="dbfile">需要使用的缓存数据库文件名称</param>
				/// <returns></returns>
				CacheDBConnectUser(const EVString& dbfile, ev_bool autoCreateDBFile = false);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CacheDBConnectUser();

				/// <summary>
				/// 获取数据库连接对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Core::Database::CSqlDatabase* db() const ;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool isNewDB() const;
			protected:
			private:
				EVString mConnectString;
				EarthView::World::Core::Database::CSqlDatabase* mpDB;
				ev_bool mIsNewDB;
				//CTime mConstructTime;
			};


			// <summary>
			// 缓存数据库连接池类
			// </summary>
			class CacheDBConnectPool
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CacheDBConnectPool();

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CacheDBConnectPool();

				/// <summary>
				/// 获取单例对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static CacheDBConnectPool& instance();

				/// <summary>
				/// 设置工作状态
				/// </summary>
				/// <param name="workable">true 工作，false 不工作</param>
				/// <returns></returns>
				ev_void setWorkState(ev_bool workable);

				/// <summary>
				/// 设置连接池的容量(一个数据库文件可以有多少个连接)
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void setPoolCapability(ev_int32 capability);

				/// <summary>
				/// 获取连接池的容量
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getPoolCapability() const;

				/// <summary>
				/// 从连接池中获取一个给定数据库文件的连接句柄
				/// </summary>
				/// <param name="dbfile">数据库文件名称</param>
				/// <returns></returns>
				const EarthView::World::Core::Database::CSqlDatabase* getDBConnect(const EVString& dbfile, ev_bool autoCreateDBFile, ev_bool& newCreateDBFile);

				/// <summary>
				/// 删除一个数据库文件
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool deleteDBFile(const EVString& dbfile);

				
				/// <summary>
				/// 删除一个数据库文件
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 deleteDBFiles(const EVString& folder);

				/// <summary>
				/// 释放一个数据库连接对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void freeDBConnect(EarthView::World::Core::Database::CSqlDatabase* dbconnect);

				/// <summary>
				/// 释放所有数据库连接对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void releaseAllDBConnect();

				/// <summary>
				/// 管理没有使用的数据库连接对象，该函数会是否掉多余的不用的数据库连接对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void manageRestDBConnect();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getConnectListCount();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getConnectListInfo(ev_int32 index, EVString& dbFile, ev_int32& connectCount);

			protected:
			private:
				static CacheDBConnectPool sInstance;
				ev_int32 mCapability;
				ev_int32 mTotalRestConnectCount;
				ev_bool mbWorkAble;

				class DBConnectList
				{
				public:
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					DBConnectList(const EVString& dbfile);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~DBConnectList();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void tagLastUsedTime();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getRestTime();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 restConnectCount();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EarthView::World::Core::Database::CSqlDatabase* getDBConnect(ev_bool autoCreateDBFile, ev_bool& newCreateDBFile);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool deleteDBFile();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void freeDBConnect(EarthView::World::Core::Database::CSqlDatabase* dbconnect);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Core::Database::CSqlDatabase* throwOneRestConnect();

				protected:
				private:
					EVString mDBFile;
					volatile ev_int32 mCreatedCount;
					EarthView::World::Core::CMutex mCreatedCountMtx;
					EarthView::World::Core::CTime mLastUsedTime;
					ev_bool mbWorkAble;

					list<EarthView::World::Core::Database::CSqlDatabase*> mWorkingDBList;
					EarthView::World::Core::CMutex mWorkingDBListMtx;

					list<EarthView::World::Core::Database::CSqlDatabase*> mRestDBList;
					EarthView::World::Core::CMutex mRestDBListMtx;
				private:
					friend class CacheDBConnectPool;
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Core::Database::CSqlDatabase* createDBConnect(ev_bool autoCreateDBFile, ev_bool& newCreateDBFile);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void releaseDBConnect(EarthView::World::Core::Database::CSqlDatabase* dbconnect);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void releaseAllDBConncet();
				};

				map<EVString, DBConnectList*> mDBConnectPool;
				EarthView::World::Core::CMutex mDBConnectPoolMtx;

			private:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				DBConnectList* getDBConnectList(const EVString& dbfile);
			};

		}}}
#endif