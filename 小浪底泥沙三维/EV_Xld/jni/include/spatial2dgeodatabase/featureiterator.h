#ifndef _CFEATURE_ITERATOR_H_H_
#define _CFEATURE_ITERATOR_H_H_
#include "spatial2dgeodatabase/config.h"
#include "spatialinterface/ifeatureiterator.h"
#include "spatialdatabase/fields.h"
#include "spatialdatabase/queryfilter.h"
#include "spatialdatabase/attributequery.h"
#include "spatial2dgeodatabase/vectorfeatureclass.h"


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{
/// <summary>
/// 二维矢量要素迭代器
/// </summary>
class CFeatureSelection;
class EV_2DGEODATABSE_DLL CFeatureIterator : public EarthView::World::Spatial::GeoDataset::IFeatureIterator
{
	friend class CFeatureSelection;
	friend class CVectorFeatureClass;
public:
	/// <summary>
	/// 默认析构函数
	/// </summary>
	virtual ~CFeatureIterator();
public:
	/// <summary>
	/// 获取下一条记录
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回要素</returns>
	virtual EarthView::World::Spatial::GeoDataset::IFeature* next();
	/// <summary>
	/// 获取要素字段信息
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回要素字段信息</returns>
	virtual const EarthView::World::Spatial::GeoDataset::IFields* getFields() const;
	/// <summary>
	/// 通过索引获取要素某一字段信息
	/// </summary>
	/// <param name="index">索引处</param>
	/// <returns>返回要素某一字段信息</returns>
	virtual const EarthView::World::Spatial::GeoDataset::IField* getField(ev_uint32 index) const;
	/// <summary>
	/// 通过名称查找字段
	/// </summary>
	/// <param name="fieldName">字段名</param>
	/// <returns>返回查找到的字段索引</returns>
	virtual ev_int32 findField(const EVString& fieldName) const;
ev_private:
	CFeatureIterator(EarthView::World::Core::CNameValuePairList *pList);
protected:
	CFeatureIterator(EVString key,CVectorFeatureClass* fc);
private:
	CFeatureIterator(CFeatureIterator & iterator);

	EVString						m_QueryKey;
	EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass			*m_pFC;
	EarthView::World::Spatial::GeoDataset::CFields						*m_pFieldSet;
	EarthView::World::Spatial::Geometry::IGeometry					*m_pGeometry;

	EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType	m_nSpatialRelation;
	EarthView::World::Spatial::GeoDataset::IFeature					*m_pFeature;

	EarthView::World::Spatial2D::GeoDataset::CFeatureSelection			*m_pFSet;
	ev_bool m_bQueryByFeatureSelection;

	/************************************************************************/
	/* 用作内存要素的属性查询                                                                     */
	/************************************************************************/
	ev_bool                         m_bHasAttriQuery;
	EVString                        m_QuerySQL;
	EarthView::World::Spatial::GeoDataset::CAttributeQuery         *m_pAttriQuery;
	ev_void setWhereClause(EVString whereClause);
};





}}}} //End of namespace



#endif //_CFEATURE_ITERATOR_H_H_

