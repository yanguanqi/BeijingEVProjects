#ifndef _ODBCDRIVER_H_H_
#define _ODBCDRIVER_H_H_

#include "databaseutility/sqldriver.h"
//#include "databaseutility/sqlresult.h"
#include "databaseutility/sqlcachedresult.h"
//#ifdef _WIN32
#if EV_PLATFORM == EV_PLATFORM_WIN32
#include <sqltypes.h>
//#else
#elif EV_PLATFORM == EV_PLATFORM_ANDROID
#else
#include <unixODBC/sqltypes.h>
#endif

namespace EarthView {
	namespace World{
		namespace Core{
			namespace Database{
				class CODBCDriverPrivate;
				class CODBCPrivate;
				class CODBCDriver;
				/*class CODBCResult : public CSqlResult
				{
				public:
				CODBCResult(const CODBCDriver * db, CODBCDriverPrivate* p);
				virtual ~CODBCResult();
				ev_bool prepare(const ev_wstring& query);
				ev_bool exec();
				ev_bool reset (const ev_wstring& query);
				CVariant handle() const;
				virtual ev_void setForwardOnly(ev_bool forward);
				protected:
				ev_bool fetch(ev_int32 i);
				ev_bool fetchNext();
				ev_bool fetchFirst();
				ev_bool fetchPrevious();
				ev_bool fetchLast();
				ev_bool isNull(ev_int32 field);
				CVariant data(ev_int32 field);
				ev_int32 size();
				ev_int32 numRowsAffected() const;
				CVariant lastInsertId () const;
				CSqlRecord record() const;
				ev_void virtual_hook(int id, ev_void *data);
				ev_bool nextResult();
				private:
				CODBCPrivate *d;
				ev_wstring sqlQuery;
				};*/
				class CODBCResult : public CSqlCachedResult
				{
				public:
					CODBCResult(const CODBCDriver * db, CODBCDriverPrivate* p);
					virtual ~CODBCResult();
					ev_bool prepare(const ev_wstring& query);
					ev_bool exec();
					CVariant handle() const;
				protected:
					ev_void virtual_hook(int id, ev_void *data);
					CVariant lastInsertId() const;
					ev_bool gotoNext(ValueCache &values, ev_int32 index);
					ev_bool reset (const ev_wstring& query);
					ev_int32 numRowsAffected() const;
					CSqlRecord record() const;
				private:
					CODBCPrivate *d;
				};
				class CODBCDriver : public CSqlDriver
				{
				public:
					explicit CODBCDriver();
					CODBCDriver(SQLHANDLE* env, SQLHANDLE* con);
					virtual ~CODBCDriver();

					ev_bool hasFeature(EVDriverFeature f) const;
					ev_bool open(const ev_wstring& db,
						const ev_wstring& user ,
						const ev_wstring& password ,
						const ev_wstring& host ,
						ev_int32 port ,
						const ev_wstring& connOpts);
					void close();
					CWStringArray tables(EVTableType type) const;
					CSqlIndex primaryIndex(const ev_wstring& tablename) const;
					CSqlRecord record(const ev_wstring& tablename) const;
					CVariant handle() const;
					ev_wstring formatValue(const CSqlField &field, ev_bool trimStrings) const;
					ev_wstring escapeIdentifier(const ev_wstring &identifier, EVIdentifierType) const;
					CSqlResult *createResult() const;
				protected:
					ev_bool beginTransaction();
					ev_bool commitTransaction();
					ev_bool rollbackTransaction();
					ev_bool isIdentifierEscapedImplementation(const ev_wstring &identifier, EVIdentifierType) const;
				private:
					ev_void init();
					ev_bool endTrans();
					ev_void cleanup();
				public:
					CODBCDriverPrivate *d;
					friend class CODBCPrivate;
				};
			} // namespace Database
		} // namespace Core
	} // namespace World
} // namespace EarthView

#endif //_SQLODBCDRIVER_H_H_

