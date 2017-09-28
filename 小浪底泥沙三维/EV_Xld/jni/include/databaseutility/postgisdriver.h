#ifndef _POSTGISDRIVER_H_H_
#define _POSTGISDRIVER_H_H_

//#include "postgreSQL/libpq-fe.h"
#include "postgreSQL/libpq-fe.h"
#include "define.h"
#include "connpool.h"
#include "sqlutility.h"
#include "sqldriver.h"
#include "sqlresult.h"
#include "sqlcachedresult.h"

namespace EarthView {
	namespace World		{
		namespace Core		{
			namespace Database {


class CPostGisDriverPrivate;
class CPostGisResultPrivate;
class CPostGisDriver;


////////////////////////////////////////////////////////////
// CPostGisResult
////////////////////////////////////////////////////////////
class CPostGisResult : public CSqlCachedResult
{
	friend class CPostGisDriver;
    friend class CPostGisResultPrivate;
public:
    explicit CPostGisResult(const CPostGisDriver* db);
    ~CPostGisResult();
    CVariant handle() const;

protected:
    bool gotoNext(CSqlCachedResult::ValueCache& row, int idx);
    bool reset(const CUnicodeString &query);
    bool prepare(const CUnicodeString &query);
    bool exec();
	bool execQuery(bool needCursor);
	PGresult* execPQ(PGconn *conn, const char *query);
    int size();
    ev_int32 numRowsAffected() const;
    CVariant lastInsertId() const;
    CSqlRecord record() const;
    ev_void virtual_hook(int id, ev_void *data);
	ev_void disableDriver();
private:
    CPostGisResultPrivate* m_private;
};

class CPostGisDriver : public CSqlDriver
{
	friend class CPostGisResult;
public:
    explicit CPostGisDriver();
    explicit CPostGisDriver(PGconn *connection);
    ~CPostGisDriver();
    bool hasFeature(EVDriverFeature f) const;
    bool open(const CUnicodeString & db,
                   const CUnicodeString & user,
                   const CUnicodeString & password,
                   const CUnicodeString & host,
                   int port,
                   const CUnicodeString & connOpts);
    void close();
    CSqlResult *createResult() const;
    bool beginTransaction();
    bool commitTransaction();
    bool rollbackTransaction();
    CWStringArray tables(EVTableType) const;

    CSqlRecord record(const CUnicodeString& tablename) const;
    CSqlIndex primaryIndex(const CUnicodeString &table) const;
    CVariant handle() const;

private:
    CPostGisDriverPrivate* m_private;
};


} // namespace Database
} // namespace Core
} // namespace World
} // namespace EarthView

#endif
