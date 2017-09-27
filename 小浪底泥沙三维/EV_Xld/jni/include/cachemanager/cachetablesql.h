#ifndef EV_CACHETABLE_SQL_H_
#define EV_CACHETABLE_SQL_H_

#include "core/stringdefines.h"
#include "core/stdheaders.h"

// <summary>
// 
// </summary>
class CacheTableSqlManager;
class CacheTableSqlFactory
{
public:
	CacheTableSqlFactory(const EVString& version);

	virtual ~CacheTableSqlFactory();

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	const EVString& getVersion() const;

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	EVString getTableSql(const EVString& tablename);

protected:
	friend class CacheTableSqlManager;

	virtual EVString getDatasetInfoTableSql() const;
	virtual EVString getDemTableSql() const;
	virtual EVString getEffectTableSql() const;
	virtual EVString getEntityTableSql() const;
	virtual EVString getImageTileTableSql() const;
	virtual EVString getModelTableSql() const;
	virtual EVString getModelTemplateTableSql() const;
	virtual EVString getOctreeTableSql() const;
	virtual EVString getVectorOctreeTableSql() const;
	virtual EVString getVectorTileTableSql() const;

private:
	EVString mVersion;
};

// <summary>
// 
// </summary>
class CacheTableSqlManager
{
public:
	CacheTableSqlManager();
	~CacheTableSqlManager();

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void registCacheTableSqlFactory(const EVString& version);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	EVString getTableSql(const EVString& version, const EVString& tablename);

protected:

private:
	map<EVString, CacheTableSqlFactory*> mCacheTableSqlFactorys;
};

#endif