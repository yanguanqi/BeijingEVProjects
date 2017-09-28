#ifndef _SQLITEDRIVER_H_H_
#define _SQLITEDRIVER_H_H_

#include "sqlutility.h"
#include "sqldriver.h"
#include "sqlresult.h"
#include "sqlcachedresult.h"

struct sqlite3;

namespace EarthView {
	namespace World		{
		namespace Core		{
			namespace Database {


class CSQLiteDriverPrivate;
class CSQLiteResultPrivate;
class CSQLiteDriver;

////////////////////////////////////////////////////////////
// CSQLiteResult
////////////////////////////////////////////////////////////
class CSQLiteResult : public CSqlCachedResult
{
	friend class CSQLiteDriver;
    friend class CSQLiteResultPrivate;
public:
    explicit CSQLiteResult(const CSQLiteDriver* db);
    ~CSQLiteResult();
    CVariant handle() const;

protected:
    bool gotoNext(CSqlCachedResult::ValueCache& row, int idx);
    bool reset(const ev_wstring &query);
    bool prepare(const ev_wstring &query);
    bool exec();
    ev_int32 numRowsAffected() const;
    CVariant lastInsertId() const;
    CSqlRecord record() const;
    ev_void virtual_hook(int id, ev_void *data);
	ev_void disableDriver();
private:
    CSQLiteResultPrivate* m_private;
};

class CSQLiteDriver : public CSqlDriver
{
	friend class CSQLiteResult;
public:
    explicit CSQLiteDriver();
    explicit CSQLiteDriver(sqlite3 *connection);
    ~CSQLiteDriver();
    bool hasFeature(EVDriverFeature f) const;
    bool open(const ev_wstring & db,
                   const ev_wstring & user,
                   const ev_wstring & password,
                   const ev_wstring & host,
                   int port,
                   const ev_wstring & connOpts);
    void close();
    CSqlResult *createResult() const;
    bool beginTransaction();
    bool commitTransaction();
    bool rollbackTransaction();
    CWStringArray tables(EVTableType) const;

    CSqlRecord record(const ev_wstring& tablename) const;
    CSqlIndex primaryIndex(const ev_wstring &table) const;
    CVariant handle() const;
    //ev_wstring escapeIdentifier(const ev_wstring &identifier, EVIdentifierType) const;

	ev_bool exist(const ev_wstring &dbname) const;

private:
    CSQLiteDriverPrivate* m_private;
#if EV_PLATFORM == EV_PLATFORM_ANDROID
	static ev_bool mainTempDirSet;
#endif
};



} // namespace Database
} // namespace Core
} // namespace World
} // namespace EarthView

#endif //_SQLITEDRIVER_H_H_

