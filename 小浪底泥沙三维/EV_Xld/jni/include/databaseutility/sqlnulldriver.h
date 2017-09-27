#ifndef _SQLNULLDIRIVER_H_H_
#define _SQLNULLDIRIVER_H_H_

#include "sqlutility.h"
#include "sqldriver.h"
#include "sqlresult.h"
#include "sqlerror.h"

namespace EarthView {
	namespace World		{
		namespace Core		{
			namespace Database {

class CSqlNullResult : public CSqlResult
{
public:
    inline explicit CSqlNullResult(const CSqlDriver* d): CSqlResult(d)
    {}
protected:
    inline CVariant data(int) { return CVariant(); }
    inline bool reset (const ev_wstring&) { return false; }
    inline bool fetch(int) { return false; }
    inline bool fetchFirst() { return false; }
    inline bool fetchLast() { return false; }
    inline bool isNull(int) { return false; }
    inline int size()  { return -1; }
    //inline int numRowsAffected() { return 0; }

    inline void setAt(int) {}
    inline void setActive(bool) {}
    //inline void setLastError(const QSqlError&) {}
    inline void setQuery(const ev_wstring&) {}
    inline void setSelect(bool) {}
    inline void setForwardOnly(bool) {}

    inline bool exec() { return false; }
    inline bool prepare(const ev_wstring&) { return false; }
    inline bool savePrepare(const ev_wstring&) { return false; }
    inline void bindValue(int, const CVariant&, EVParamType) {}
    inline void bindValue(const ev_wstring&, const CVariant&, EVParamType) {}
};

class CSqlNullDriver : public CSqlDriver
{
public:
    inline CSqlNullDriver(): CSqlDriver()
    {}
    inline bool open(const ev_wstring &, const ev_wstring & , const ev_wstring & ,
              const ev_wstring &, int, const ev_wstring&)
    { return false; }
    inline void close() {}
    inline CSqlResult *createResult() const { return new CSqlNullResult(this); }

protected:
    inline void setOpen(bool) {}
    inline void setOpenError(bool) {}
    //inline void setLastError(const QSqlError&) {}
};

} // namespace Database
} // namespace Core
} // namespace World
} // namespace EarthView

#endif //_SQLNULLDIRIVER_H_H_

