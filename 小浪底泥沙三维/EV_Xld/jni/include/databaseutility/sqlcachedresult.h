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
	virtual ev_int32 size();

    CVariant data(int i);
    bool isNull(int i);
    bool fetch(int i);
    bool fetchNext();
    bool fetchPrevious();
    bool fetchFirst();
    bool fetchLast();

    int colCount() const;
    ValueCache &cache();
	//<summary>
	// 执行已准备好的SQL语句
	// </summary>
	//<param name="needCursor">是否使用游标</param>
	//<returns>成功返回true，失败返回false</returns>
	//virtual ev_bool execQuery(ev_bool needCursor);
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

