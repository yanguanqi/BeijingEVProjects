#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_GEOMETRYFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_GEOMETRYFACTORY_H

#include "spatialinterface/igeometry.h"
#include "spatialobject/config.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{

				class CGeometryFactory;
				/// <summary>
				/// 几何体创建工厂类，主要负责从序列化流中反序列化成几何体对象。
				/// 该类采取单件模式。
				/// </summary>
				class EV_GEOMETRY_DLL CGeometryFactory :
					public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					CGeometryFactory(_in EarthView::World::Core::CNameValuePairList *pList){}
				private:
					/// <summary>
					/// 唯一一个创建工厂实例
					/// </summary>
					static EarthView::World::Spatial::Geometry::CGeometryFactory* mpGeomFactory;
				public:				
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CGeometryFactory();
				public:
					/// <summary>
					/// 获取创建工厂实例
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					static EarthView::World::Spatial::Geometry::CGeometryFactory* getInstance();
					/// <summary>
					/// 创建空的几何体对象。
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::IGeometry* createEmptyGeometry(EarthView::World::Spatial::Geometry::EVGeometryType type) const;
					/// <summary>
					/// 通过WKB创建几何体对象
					/// </summary>
					/// <param name="stream">WKB格式数据流</param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::IGeometry* createGeometryFromWKB(EarthView::World::Core::CDataStream & stream) const;
					/// <summary>
					/// 通过WKT创建几何体对象
					/// </summary>
					/// <param name="wkt">WKT格式字符串</param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::IGeometry* createGeometryFromWKT(EVString wkt) const;
					/// <summary>
					/// 通过Shapefile数据流，创建几何体对象
					/// </summary>
					/// <param name="stream">Shapefile格式数据流</param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::IGeometry* createGeometryFromShapeFileBuffer(EarthView::World::Core::CDataStream & stream) const;
					/// <summary>
					/// 通过EarthView几何体数据流，创建几何体对象
					/// </summary>
					/// <param name="stream">EarthView格式数据流</param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::IGeometry* createGeometryFromEVGeometryBuffer(EarthView::World::Core::CDataStream & stream) const;
					/// <summary>
					/// 销毁创建的几何体对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void destroyGeometry(const EarthView::World::Spatial::Geometry::IGeometry * geom);
					/// <summary>
					/// 释放创建工厂相关参数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void release();
				private:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CGeometryFactory();
					/// <summary>
					/// 默认拷贝构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CGeometryFactory(const CGeometryFactory & obj);
				};
			}
		}
	}
}

#endif
