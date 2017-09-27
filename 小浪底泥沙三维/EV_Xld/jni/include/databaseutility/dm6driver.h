#ifndef _DMDRIVER_H_H_
#define _DMDRIVER_H_H_

#include "databaseutility/sqldriver.h"
#include "databaseutility/sqlresult.h"
#include "DM6/api.h"
//////此驱动适用DM6
namespace EarthView {
	namespace World{
		namespace Core{
			namespace Database{
				class CDM6DriverPrivate;
				class CDM6ResultPrivate;
				class CDM6Driver;
				class CDM6Result: public CSqlResult
				{
				public:
					CDM6Result(const CDM6Driver *db,CDM6DriverPrivate *p);
					~CDM6Result();
					ev_bool prepare(const ev_wstring& query);
					ev_bool exec();
					ev_bool reset (const ev_wstring& query);
					virtual ev_void setForwardOnly(ev_bool forward);
				//protected:
					ev_bool fetch(ev_int32 i);
					ev_bool fetchNext();
					ev_bool fetchFirst();
					ev_bool fetchPrevious();
					ev_bool fetchLast();
					ev_bool isNull(ev_int32 field);
					CVariant data(ev_int32 field);
					ev_int32 size();
					ev_int32 numRowsAffected();
					//CVariant lastInsertId () const;
					CSqlRecord record() const;
					ev_bool nextResult();
				private:
					CDM6ResultPrivate *m_private;
				};

				class EV_DLL_EXPORT CDM6Driver :public CSqlDriver
				{
				public:
					explicit CDM6Driver();
					CDM6Driver(dm_henv* henv,dm_hdbc* hdbc);
					~CDM6Driver();
					ev_bool hasFeature(EVDriverFeature f) const;//error
					ev_bool open(const ev_wstring& db,
						const ev_wstring& user ,
						const ev_wstring& password ,
						const ev_wstring& host ,
						ev_int32 port ,
						const ev_wstring& connOpts);
					void close();
					CWStringArray tables(EVTableType type) const;
					CSqlIndex primaryIndex(const ev_wstring &tablename) const;
					CSqlRecord record(const ev_wstring& tablename) const;
					//ev_wstring formatValue(const CSqlField &field, ev_bool trimStrings) const;
					CSqlResult *createResult() const;
					
				protected:
					ev_bool beginTransaction();
					ev_bool commitTransaction();
					ev_bool rollbackTransaction();
				private:
					ev_bool endTrans();
					ev_void cleanup();
					///设置数据库当前模式
					ev_void setCurrentSchema(const ev_wstring db);
					CDM6DriverPrivate* m_private;
				};
			}
		}
	}
}
#endif
