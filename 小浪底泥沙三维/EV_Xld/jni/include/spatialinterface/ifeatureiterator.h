#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_IFEATUREITERATOR_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_IFEATUREITERATOR_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/ifeature.h"
#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				/// <summary>
				/// 要素查询结果迭代器，用于遍历查询结果，只能向前移动，不可后退。
				/// </summary>
				class EV_INTERFACE_DLL IFeatureIterator :
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					virtual ~IFeatureIterator();
				public:
					/// <summary>
					/// 下一个结果
					/// </summary>
					/// <returns>如果移动到最后，返回NULL；否则，返回值有效</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeature* next();
					/// <summary>
					/// 获取查询结果集中的要素字段
					/// </summary>
					/// <returns>字段集合</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFields() const;
					/// <summary>
					/// 获取指定索引的字段
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <returns>ture，成功；false，失败</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getField(ev_uint32 index) const;
					/// <summary>
					/// 能否找到指定字段名称
					/// </summary>
					/// <param name="fieldName">字段名称</param>
					/// <returns>如果找到，返回索引；如果找不到，返回-1</returns>
					virtual ev_int32 findField(const EVString& fieldName) const;
ev_private:
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					IFeatureIterator( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					IFeatureIterator();
				private:
					/// <summary>
					/// 拷贝构造函数
					/// </summary>
					C_DISABLE_COPY(IFeatureIterator);
				};
			}
		}
	}
}

#endif
