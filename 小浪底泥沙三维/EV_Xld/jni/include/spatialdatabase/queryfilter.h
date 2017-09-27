#ifndef _CQUERY_FILTER_H_
#define _CQUERY_FILTER_H_

#include "spatialdatabase/spatialdatabaseconfig.h"

#include "spatialinterface/iqueryfilter.h"
#include "spatialinterface/igeometry.h"
#include "spatialobject/geometry/geometryfactory.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{

/// <summary>
/// 查询类
/// 构造查询对象
/// </summary>
class EV_SPATIALDATABASE_DLL CQueryFilter : public EarthView::World::Spatial::GeoDataset::IQueryFilter
{
ev_private:
	CQueryFilter(EarthView::World::Core::CNameValuePairList *pList);
public:
	///<summary>
	///构造函数
	///</summary>
	CQueryFilter();
	/*CQueryFilter(CQueryFilter & filter);*/
	///<summary>
	///析构函数
	///</summary>
	virtual ~CQueryFilter();
public:
	///<summary>
	///获取字段名
	///</summary>
	///<param name=""></param>
	///<returns>字段名</returns>
	virtual EVString getFieldName() const;
	///<summary>
	///获取查询条件
	///</summary>
	///<param name=""></param>
	///<returns>查询条件</returns>
	virtual EVString getWhereClause() const;
	///<summary>
	///获取查询结果的行数
	///</summary>
	///<param name=""></param>
	///<returns>行数</returns>
	virtual ev_uint32 getLimitNum() const;
	/// <summary>
	/// 获取需要跳过的行数
	/// </summary>
	/// <param name=""></param>
	/// <returns>跳过的行数</returns>
	virtual ev_uint32 getOffsetNum() const;
	///<summary>
	///设置字段名
	///</summary>
	///<param name="names">字段名</param>
	///<returns></returns>
	virtual ev_void setFieldName(const EVString& names);
	///<summary>
	///设置查询条件
	///</summary>
	///<param name="whereclause">查询条件</param>
	///<returns></returns>
	virtual ev_void setWhereClause(const EVString& whereclause);
	///<summary>
	///设置查询结果的行数
	///</summary>
	///<param name="limit">行数</param>
	///<returns></returns>
	virtual ev_void setLimitNum(ev_uint32 limit);
	/// <summary>
	/// 设置需要跳过的行数
	/// </summary>
	/// <param name="offset">跳过的行数</param>
	/// <returns></returns>
	virtual ev_void setOffsetNum(ev_uint32 offset);
	///<summary>
	///克隆
	///</summary>
	///<param name=""></param>
	///<returns>查询器</returns>
	virtual EarthView::World::Spatial::GeoDataset::IQueryFilter * clone() const;
	
	/*************************************************************
	*  \描述：获取/设置 空间查询对象
	*  \参数：[void]
	*  \返回：空间查询对象
	*  \备注: 
	***************************************************************/
	const EarthView::World::Spatial::Geometry::IGeometry* getQueryGeometryRef() const;
	ev_void setQueryGeometry(const EarthView::World::Spatial::Geometry::IGeometry* geometry);

	/*************************************************************
	*  \描述：设置/获取空间查询关系
	*  \参数：[void]
	*  \返回：[void] 
	*  \备注: 
	***************************************************************/
	ev_void setSpatialRelation(EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType spatialRelType);
	EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType getSpatialRelation();

	/*************************************************************
	*  \描述：设置/获取查询模式
	*  \参数：[void]
	*  \返回：[void] 
	*  \备注: 
	***************************************************************/
	ev_void setQueryMode(EarthView::World::Spatial::GeoDataset::EVQueryModeType queryMode);
	EarthView::World::Spatial::GeoDataset::EVQueryModeType getQueryMode() const;
	///<summary>
	///将私有成员的相关值存到流中
	///</summary>
	///<param name="stream">流</param>
	///<returns></returns>
	ev_void toBinary(EarthView::World::Core::CDataStream &stream);
	ev_void fromBinary(EarthView::World::Core::CDataStream &stream);

private:
	/* SQL语句的字段 */
	EVString m_szFields;
	/* SQL语句的WhereClause语句 */
	EVString m_szWhereClause;
	/* 空间查询对象 */
	EarthView::World::Spatial::Geometry::IGeometry* m_pQueryGeometry;
	/* 空间查询关系 */
	EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType m_nSpatialRelation;
	/* 空间查询的九交模型描述 */
	EVString m_szSpatialRelationString;
	/* 查询模式 */
	EarthView::World::Spatial::GeoDataset::EVQueryModeType m_nQueryMode;
	/* 是否先空间查询，默认为false */
	bool m_bIsFirstSpatialQuery;
	/* Buffer大小 */
	double m_dfBuffer;

	ev_int32 m_limitedNum;
	ev_int32 m_offsetNum;


};




}}}} //End of Namespaces


#endif //_CQUERY_FILTER_H_H_

