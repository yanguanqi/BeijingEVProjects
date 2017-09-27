#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_IQUERYFILTER_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_IQUERYFILTER_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"
#include "igeometry.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				/// <summary>
				/// 空间关系类型
				/// </summary>
				enum EVSpatialQueryRelationType
				{
					/// <summary>
					/// 未知关系
					/// </summary>
					EVSQRelTypeUnknown                     = 0,
					/// <summary>
					/// 相交
					/// </summary>
					EVSQRelTypeIntersects                  = 1,
					/// <summary>
					/// 相触
					/// </summary>
					EVSQRelTypeTouches                     = 2,
					/// <summary>
					/// 重叠
					/// </summary>
					EVSQRelTypeOverlaps                    = 3,
					/// <summary>
					/// 跨越
					/// </summary>
					EVSQRelTypeCrosses                     = 4,
					/// <summary>
					/// 被包含
					/// </summary>
					EVSQRelTypeWithin                      = 5,
					/// <summary>
					/// 包含
					/// </summary>
					EVSQRelTypeContains                    = 6,
					/// <summary>
					/// 包围盒相交
					/// </summary>
					EVSQRelTypeEnvelopeIntersects          = 7,
					/// <summary>
					/// 自定义
					/// </summary>
					EVSQRelTypeCustom                      = 8
				};

				/// <summary>
				/// 查询模式 
				/// </summary>
				enum EVQueryModeType
				{
					/// <summary>
					/// 未知模式
					/// </summary>
					EVQueryModeUnknown                     = 0,
					/// <summary>
					/// 属性查询
					/// </summary>
					EVQueryModeAttribute                   = 1,
					/// <summary>
					/// 空间查询
					/// </summary>
					EVQueryModeSpatial                     = 2,
					/// <summary>
					/// 属性和空间查询
					/// </summary>
					EVQueryModeAttributeAndSpatial         = 3
				};

				/// <summary>
				/// 查询条件，用于设置属性查询和空间查询条件
				/// </summary>
				class EV_INTERFACE_DLL IQueryFilter :
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					virtual ~IQueryFilter();
				public:
					/// <summary>
					/// 获取查询语句中字段名称
					/// 多个字段名称，用","隔离
					/// </summary>
					/// <returns>字段名称</returns>
					virtual EVString getFieldName() const;
					/// <summary>
					/// 获取查询语句中WhereClause语句
					/// </summary>
					/// <returns>WhereClause语句</returns>
					virtual EVString getWhereClause() const;
					/// <summary>
					/// 获取查询语句中 Limit限制
					/// </summary>
					/// <returns>Limit限制，默认为0</returns>
					virtual ev_uint32 getLimitNum() const;
					/// <summary>
					/// 获取查询语句中 Offset限制
					/// </summary>
					/// <returns>Offset限制，默认为0</returns>
					virtual ev_uint32 getOffsetNum() const;
					/// <summary>
					/// 获取空间查询的几何体
					/// </summary>
					/// <returns>几何体对象，内部引用。</returns>
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getQueryGeometryRef() const;
					/// <summary>
					/// 获取空间查询的空间关系条件
					/// </summary>
					/// <returns>空间关系条件</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType getSpatialRelation();
					/// <summary>
					/// 获取查询中的查询模式
					/// </summary>
					/// <returns>查询模式</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVQueryModeType getQueryMode() const;
					/// <summary>
					/// 设置查询语句中查询字段
					/// </summary>
					/// <param name="names">字段名称，多个字段，用","隔离</param>
					/// <returns></returns>
					virtual ev_void setFieldName(const EVString& names);
					/// <summary>
					/// 设置查询语句中WhereClause语句
					/// </summary>
					/// <param name="whereclause">WhereClause语句</param>
					/// <returns></returns>
					virtual ev_void setWhereClause(const EVString& whereclause);
					/// <summary>
					/// 设置查询语句中Limit限制
					/// </summary>
					/// <param name="limit">返回限制</param>
					/// <returns></returns>
					virtual ev_void setLimitNum(ev_uint32 limit);
					/// <summary>
					/// 设置查询语句中Offset限制
					/// </summary>
					/// <param name="offset">offset值</param>
					/// <returns></returns>
					virtual ev_void setOffsetNum(ev_uint32 offset);
					/// <summary>
					/// 设置空间查询几何体
					/// </summary>
					/// <param name="geometry">查询几何体</param>
					/// <returns></returns>
					virtual ev_void setQueryGeometry(const EarthView::World::Spatial::Geometry::IGeometry* geometry);
					/// <summary>
					/// 设置查询模式
					/// </summary>
					/// <param name="queryMode">查询模式</param>
					/// <returns></returns>
					virtual ev_void setQueryMode(EarthView::World::Spatial::GeoDataset::EVQueryModeType queryMode);
					/// <summary>
					/// 设置空间查询关系
					/// </summary>
					/// <param name="spatialRelType">空间查询关系</param>
					/// <returns></returns>
					virtual ev_void setSpatialRelation(EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType spatialRelType);
					/// <summary>
					/// 克隆函数
					/// </summary>
					/// <returns>查询对象</returns>
					virtual IQueryFilter * clone() const;
ev_private:
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					IQueryFilter( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					IQueryFilter();
				private:
					C_DISABLE_COPY(IQueryFilter);
				};
			}
		}
	}
}

#endif
