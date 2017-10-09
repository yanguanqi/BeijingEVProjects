#ifndef _OCIDRIVER_H_H
#define _OCIDRIVER_H_H

#include "databaseutility/sqldriver.h"
#include "databaseutility/sqlcachedresult.h"
#include "databaseutility/sqlquery.h"

struct OCIEnv;
struct OCISvcCtx;
namespace EarthView{
	namespace World{
		namespace Core{
			namespace Database{

				struct COCIDriverPrivate;
				struct COCIResultPrivate;
				class COCICols;
				class COCIDriver;

				class COCIResult : public CSqlCachedResult
				{
					friend struct COCIResultPrivate;
					friend class COCICols;
				public:
					COCIResult(const COCIDriver * db,const COCIDriverPrivate *p);
					~COCIResult();
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
					COCIResultPrivate *d;
				};
				class COCIDriver : public CSqlDriver
				{
					friend struct COCIResultPrivate;
				public:
					explicit COCIDriver();
					COCIDriver(OCIEnv *env,OCISvcCtx *svc);
					~COCIDriver();
					ev_bool hasFeature(EVDriverFeature f) const;
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
					ev_wstring formatValue(const CSqlField &field, ev_bool trimStrings) const;
					CVariant handle() const;
					ev_wstring escapeIdentifier(const ev_wstring &identifier, EVIdentifierType) const;

				protected:
					ev_bool beginTransaction();
					ev_bool commitTransaction();
					ev_bool rollbackTransaction();
				private:
					//void loadDBLib(const EVString& dllname);
					COCIDriverPrivate *d;
				};
			} // namespace Database
		} // namespace Core
	} // namespace World
} // namespace EarthView
#endif

