#ifndef _DM7DRIVER_H_H_
#define _DM7DRIVER_H_H_

#include "databaseutility/sqldriver.h"
//#include "databaseutility/sqlresult.h"
#include "databaseutility/sqlcachedresult.h"

namespace EarthView{
	namespace World{
		namespace Core{
			namespace Database{	
				class CDM7DriverPrivate;
				class CDM7ResultPrivate;
				class CDM7Driver;
			/*	class CDM7Result : public CSqlResult
				{
				public:
					CDM7Result(const CDM7Driver* db,CDM7DriverPrivate* p);
					~CDM7Result();
					ev_void setForwardOnly(ev_bool forward);
					ev_bool reset(const ev_wstring& sqlquery);
					ev_bool prepare(const ev_wstring& query);
					ev_bool exec();
					ev_bool fetchFirst();
					ev_bool fetchNext();
					ev_bool fetchPrevious();
					ev_bool fetchLast();
					ev_bool fetch(ev_int32 i);
					CVariant data(ev_int32 i);
					ev_bool isNull(ev_int32 i);
					CSqlRecord record() const;
					ev_bool nextResult();
				private:
					CDM7ResultPrivate* m_private;
				};*/
				class CDM7Result : public CSqlCachedResult
				{
				public:
					CDM7Result(const CDM7Driver* db,CDM7DriverPrivate* p);
					~CDM7Result();
					//ev_void setForwardOnly(ev_bool forward);
					ev_bool prepare(const ev_wstring& query);
					ev_bool exec();
					CVariant handle() const;
				protected:
					ev_void virtual_hook(int id, ev_void *data);
					ev_int32 size();
					CVariant lastInsertId() const;
					ev_bool gotoNext(ValueCache &values, ev_int32 index);
					ev_bool reset (const ev_wstring& query);
					ev_int32 numRowsAffected() const;
					CSqlRecord record() const;
				private:
					CDM7ResultPrivate* m_private;
				};
				class CDM7Driver : public CSqlDriver
				{
					friend class CDM7ResultPrivate;
				public:
					CDM7Driver();
					~CDM7Driver();
					ev_bool open(const ev_wstring& db,
						const ev_wstring& user ,
						const ev_wstring& password , 
						const ev_wstring& host ,
						ev_int32 port , 
						const ev_wstring& connOpts);
					ev_void close();
					CSqlResult *createResult() const;
					CWStringArray tables(EVTableType type) const;
					CSqlRecord record(const ev_wstring& tablename) const;
					CSqlIndex primaryIndex(const ev_wstring& tablename) const;
				protected:
					ev_bool beginTransaction();
					ev_bool commitTransaction();
					ev_bool rollbackTransaction();
					
				private:
					ev_void cleanup();
					ev_bool endTrans();
					CDM7DriverPrivate* m_private;

				};

			}
		}
	}
}

#endif
