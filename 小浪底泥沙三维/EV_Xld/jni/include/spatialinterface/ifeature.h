#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_IFEATURE_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_IFEATURE_H

#include "core/memoryallocatedobject.h"
#include "core/variant.h"

#include "spatialinterface/igeometry.h"
#include "spatialinterface/ienvelope.h"
#include "spatialinterface/ifield.h"
#include "spatialinterface/ifields.h"

#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				/// <summary>
				/// 要素类接口
				/// </summary>
				class EV_INTERFACE_DLL IFeature :
					public EarthView::World::Core::CAllocatedObject
				{
				public:	
					/// <summary>
					/// 默认析构函数
					/// </summary>
					virtual ~IFeature();
				public:
					/// <summary>
					/// 获取要素ID
					/// </summary>
					/// <returns>ID号，一般情况下，大于0</returns>
					virtual ev_uint32 getID() const;
					/// <summary>
					/// 获取要素的几何体类型
					/// </summary>
					/// <returns>几何体类型枚举</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;
					/// <summary>
					/// 获取要素字段集合
					/// </summary>
					/// <returns>字段集合，内部引用，外部无需释放</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const;
					/// <summary>
					/// 获取要素字段数目
					/// </summary>
					/// <returns>字段数目</returns>
					virtual ev_uint32 getFieldCount() const;
					/// <summary>
					/// 获取指定索引的要素字段
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <returns>字段对象，内部引用，外部无需释放</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(ev_uint32 index) const;
					/// <summary>
					/// 找到指定字段名称的字段
					/// </summary>
					/// <param name="fieldName">字段名称</param>
					/// <returns>如果找到，返回该索引，如果没有找到，返回-1</returns>
					virtual ev_int32 findField(const EVString& fieldName) const;
					/// <summary>
					/// 获取指定索引的字段值
					/// </summary>
					/// <param name="value">输出，字段值</param>
					/// <param name="index">指定索引</param>
					/// <returns></returns>
					virtual ev_void getValue(_out EarthView::World::Core::CVariant & value,ev_uint32 index) const;
					/// <summary>
					/// 获取要素的几何体对象
					/// </summary>
					/// <returns>内部引用，外部无需释放</returns>
					virtual const EarthView::World::Spatial::Geometry::IGeometry * getGeometryRef() const;
					/// <summary>
					/// 获取要素的外包围盒
					/// </summary>
					/// <returns>内部引用，外部无需释放</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
					/// <summary>
					/// 设置要素的几何体对象，内部拷贝该几何体
					/// </summary>
					/// <param name="geom">几何体对象</param>
					/// <returns></returns>
					virtual ev_void setGeometry(const EarthView::World::Spatial::Geometry::IGeometry * geom);
					/// <summary>
					/// 设置指定索引的字段值
					/// </summary>
					/// <param name="value">字段值</param>
					/// <param name="index">指定索引</param>
					/// <returns></returns>
					virtual ev_void setValue(const EarthView::World::Core::CVariant & value,ev_uint32 index);
					/// <summary>
					/// 在数据集上删除要素
					/// </summary>
					/// <returns>true，成功；false，失败</returns>
					virtual ev_bool deleteFeature();
					/// <summary>
					/// 在数据集上保存要素
					/// </summary>
					/// <returns>true，成功；false，失败</returns>
					virtual ev_bool saveFeature();
					/// <summary>
					/// 克隆要素
					/// </summary>
					/// <returns>返回克隆的要素，外部释放</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IFeature * clone() const;
					// --
ev_private:
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					IFeature(EarthView::World::Core::CNameValuePairList *pList);
					// --
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					IFeature();
				private:
					/// <summary>
					/// 拷贝构造函数
					/// </summary>
					C_DISABLE_COPY(IFeature);
				};
			}
		}
	}
}

#endif
