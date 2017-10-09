#ifndef _SQLCACHEDRESULT_H_H_
#define _SQLCACHEDRESULT_H_H_


#include "sqlutility.h"
#include "sqlresult.h"

namespace EarthView {
	namespace World		{
		namespace Core		{
			namespace Database {


class CSqlCachedResultPrivate;

class CSqlCachedResult: public CSqlResult
{
public:
    virtual ~CSqlCachedResult();

    typedef vector<CVariant> ValueCache;

protected:
    CSqlCachedResult(const CSqlDriver * db);

    void init(int colCount);
    void cleanup();
    void clearValues();

    virtual bool gotoNext(ValueCache &values, int index) = 0;

    CVariant data(int i);
    bool isNull(int i);
    bool fetch(int i);
    bool fetchNext();
    bool fetchPrevious();
    bool fetchFirst();
    bool fetchLast();

    int colCount() const;
    ValueCache &cache();

    ev_void virtual_hook(int id, void *data);
private:
    bool cacheNext();
    CSqlCachedResultPrivate *d;
};

} // namespace Database
} // namespace Core
} // namespace World
} // namespace EarthViews

#endif // _SQLCACHEDRESULT_H_H_

