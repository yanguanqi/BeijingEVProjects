#ifndef _MYSQLDRIVER_H_H
#define _MYSQLDRIVER_H_H

#include "databaseutility/sqldriver.h"
#include "databaseutility/sqlresult.h"
#if EV_PLATFORM != EV_PLATFORM_ANDROID
#include "mysql/mysql.h"
#endif
namespace EarthView{
	namespace World{
		namespace Core{
			namespace Database{

class CMYSQLDriverPrivate;
class CMYSQLResultPrivate;
class CMYSQLDriver;
//class CSqlRecordInfo;

class CMYSQLResult : public CSqlResult
{
	friend class CMYSQLDriver;
	friend class CMYSQLResultPrivate;
public:
	explicit CMYSQLResult(const CMYSQLDriver* db);
	~CMYSQLResult();
	CVariant handle() const;
protected:
	void cleanup();
	bool fetch(int i);
	bool fetchNext();
	bool fetchLast();
	bool fetchFirst();
	CVariant data(int field);
	//bool isNull(int field);//error
	bool reset (const ev_wstring& query);
	int size();
	int numRowsAffected();
	CVariant lastInsertId() const;
	CSqlRecord record() const;
	//void virtual_hook(int id, void *data);
	bool nextResult();

#if MYSQL_VERSION_ID >= 40108
	bool prepare(const ev_wstring& stmt);
	bool exec();
#endif
private:
	CMYSQLResultPrivate* d;

};

class  CMYSQLDriver : public CSqlDriver
{
	
	friend class CMYSQLResult;
	public:
	explicit CMYSQLDriver();
	explicit CMYSQLDriver(MYSQL* con);
	~CMYSQLDriver();
	bool hasFeature(EVDriverFeature f) const;
	bool open(const ev_wstring & db,
	const ev_wstring & user,
	const ev_wstring & password,
	const ev_wstring & host,
	int port,
	const ev_wstring& connOpts);
	void close();
	CSqlResult *createResult() const;
	CWStringArray tables(EVTableType type) const;
	CSqlIndex primaryIndex(const ev_wstring& tablename) const;
	CSqlRecord record(const ev_wstring& tablename) const;
	ev_wstring formatValue(const CSqlField &field,bool trimStrings) const;
	CVariant handle() const;
	ev_wstring escapeIdentifier(const ev_wstring &identifier, EVIdentifierType type) const;

//	bool isIdentifierEscapedImplementation(const EVString &identifier, EVIdentifierType type) const;
	
protected:
	bool beginTransaction();
	bool commitTransaction();
	bool rollbackTransaction();

private:
	void init();
	CMYSQLDriverPrivate* d;
};

			}
		}
	}
}
#endif

