#ifndef EARTHVIEW_WORLD_ANNOFEATUREITERATOR_COFING_H
#define EARTHVIEW_WORLD_ANNOFEATUREITERATOR_COFING_H
#include "annotation/config.h"
#include "annotation/annofeatureclass.h"
#include "spatialinterface/igeometry.h"
#include "spatialinterface/ifeatureiterator.h"
#include "spatialinterface/iqueryfilter.h"
#include "spatialdatabase/fields.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				class EV_ANNOTATION_EXPORTS CAnnoIterator
					: public EarthView::World::Spatial::GeoDataset::IFeatureIterator
				{
					friend class CAnnoFeatureClass;
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					virtual ~CAnnoIterator();
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
					CAnnoIterator(EarthView::World::Core::CNameValuePairList *pList);
				protected:
					CAnnoIterator(EVString key,CAnnoFeatureClass* fc);
				private:
					CAnnoIterator(CAnnoIterator & iterator);

					EVString						m_QueryKey;
					EarthView::World::Spatial2D::GeoDataset::CAnnoFeatureClass			*m_pFC;
					EarthView::World::Spatial::GeoDataset::CFields						*m_pFieldSet;
					EarthView::World::Spatial::Geometry::IGeometry					*m_pGeometry;
					EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType	m_nSpatialRelation;
					EarthView::World::Spatial::GeoDataset::IFeature					*m_pFeature;
				};
			}
		}
	}
}

#endif 