#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_GEOMETRYCOLLECTION_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_GEOMETRYCOLLECTION_H

#include "spatialobject/config.h"
#include "geometry.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				namespace Private{
					class CGeometryCollectionPrivate;
				}
				namespace Utility{
					class CGeometryHelper;

				}
				/// <summary>
				/// 几何体集合类，可以包含多种类型的几何体。
				/// </summary>
				class EV_GEOMETRY_DLL CGeometryCollection
					: public EarthView::World::Spatial::Geometry::CGeometry
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CGeometryCollection();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CGeometryCollection();
ev_private:
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="geoms">几何对象指针</param>
					/// <param name="size">几何对象数目</param>
					/// <returns></returns>
					CGeometryCollection(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_geoms,_in ev_uint32 size);
					/// <summary>
					/// 默认参数构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CGeometryCollection(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 获取几何对象数目
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_uint32 getGeometryNum() const;
					/// <summary>
					/// 获取指定索引的几何对象
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <returns></returns>
					virtual const EarthView::World::Spatial::Geometry::IGeometry* getGeometryRef(_in ev_uint32 index) const;

					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* getGeometry(_in ev_uint32 index) const;
					/// <summary>
					/// 增加一个几何对象到指定索引处
					/// </summary>
					/// <param name="geoms">待增加的几何对象</param>
					/// <param name="index">指定索引</param>
					/// <returns></returns>
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_geoms,ev_int32 index);
					/// <summary>
					/// 移除几何对象
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <param name="count">移除数目</param>
					/// <returns></returns>
					virtual ev_uint32 remove(_in ev_uint32 index,_in ev_uint32 count);
					/// <summary>
					/// 清空所有几何对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void clear();
					EarthView::World::Spatial::Geometry::CGeometryCollection clone2() const;

					virtual ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_geom,ev_uint32 index);
					/*****************************************************/
					/************EarthView::World::Spatial::Geometry::IGeometry 接口声明************************/
					/*****************************************************/
					/// <summary> 
					/// 判断几何体是否有效
					/// </summary>
					/// <returns>如果有效，返回true；否则，返回false</returns>
					virtual ev_bool isValid() const;
					/// <summary> 
					/// 判断几何体是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果为空，返回true；否则，返回false</returns>
					virtual ev_bool isEmpty() const;
					/// <summary> 
					/// 获取几何体对象的外边框对象。
					/// 点的外边框对象为空；线的外边框对象是两个端点；面的外边框对象是外边界。
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回Geometry对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const;
					/// <summary> 
					/// 统一设置Z值
					/// </summary>
					/// <param name="z">坐标轴Z值</param>
					/// <returns></returns>
					virtual ev_void makeZ(ev_real64 z);
					/// <summary> 
					/// 统一设置M值
					/// </summary>
					/// <param name="m">坐标轴M值</param>
					/// <returns></returns>
					virtual ev_void makeM(ev_real64 m);

					/// <summary> 
					/// 深度拷贝几何体对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>拷贝后的几何体对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;
					
					/// <summary> 
					/// 判断该几何体对象是否与指定几何体对象形状相同。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="tolerance">指定误差范围</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果相等，则返回true；否则，返回false</returns>
					virtual ev_bool isEquals(const EarthView::World::Spatial::Geometry::IGeometry* geom,ev_real64 tolerance,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
										
					/// <summary>
					/// 平移几何体，默认提供中心点平移
					/// </summary>
					/// <param name="x">X轴方向平移值</param>
					/// <param name="y">Y轴方向平移值</param>
					/// <param name="z">Z轴方向平移值</param>
					/// <returns></returns>
					virtual ev_void translate(_in ev_real64 x,_in ev_real64 y,_in ev_real64 z);
					/// <summary>
					/// 旋转几何体，默认提供包围盒中心点旋转
					/// </summary>
					/// <param name="xRef">旋转参考点X值</param>
					/// <param name="yRef">旋转参考点Y值</param>
					/// <param name="zRef">旋转参考点Z值</param>
					/// <param name="x">X轴方向旋转角度</param>
					/// <param name="y">Y轴方向旋转角度</param>
					/// <param name="z">Z轴方向旋转角度</param>
					/// <returns></returns>
					virtual ev_void rotate(_in ev_real64 xRef,_in ev_real64 yRef,_in ev_real64 zRef,_in ev_real64 xAngle,_in ev_real64 yAngle,_in ev_real64 zAngle);
					/// <summary>
					/// 旋转几何体，默认提供包围盒中心点缩放
					/// </summary>
					/// <param name="x">X轴方向缩放比例，[-1,1]</param>
					/// <param name="y">Y轴方向缩放比例，[-1,1]</param>
					/// <param name="z">Z轴方向缩放比例，[-1,1]</param>
					/// <returns></returns>
					virtual ev_void scale(_in ev_real64 xRef,_in ev_real64 yRef,_in ev_real64 zRef,_in ev_real64 x,_in ev_real64 y,_in ev_real64 z);
					/// <summary>
					/// 投影坐标转换，默认采取布尔莎算法。七参数不足7个，按默认为0处理。
					/// </summary>
					/// <param name="sr">新坐标系统</param>
					/// <param name="seven">七参数，顺序为：offsetX,offsetY,offsetZ,scaleX,scaleY,scaleZ,radio</param>
					/// <param name="count">七参数数目</param>
					/// <returns></returns>
					virtual ev_void projects(const EarthView::World::Spatial::Geometry::ISpatialReference * sr,ev_real64 * sevenParam,ev_uint32 count);
					virtual ev_void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
					//virtual ev_void update();

					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* mirror(const EarthView::World::Spatial::Geometry::IGeometry* line) const;
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* split(const EarthView::World::Spatial::Geometry::IGeometry* splitLine) const;
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* clip(const EarthView::World::Spatial::Geometry::IGeometry* clipRegion) const;
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(const EarthView::World::Spatial::Geometry::IGeometry* point,ev_real64 tolerance,EarthView::World::Spatial::Geometry::EVGeometrySnapType & snap) const;
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* snapToSegment(const EarthView::World::Spatial::Geometry::IGeometry* point,ev_real64 tolerance) const;
					virtual ev_bool movePointTo(const EarthView::World::Spatial::Geometry::IGeometry* frmPoint,const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint);
					virtual ev_bool addPointTo(const EarthView::World::Spatial::Geometry::IGeometry* cpy_point);
					virtual ev_bool deletePoint(const EarthView::World::Spatial::Geometry::IGeometry* point);
				protected:
					virtual ev_void recalculateEnvelope();
					virtual CEnvelope getEnvelope() const;
					virtual ev_void setZMarker(ev_bool z);
					virtual ev_void setMMarker(ev_bool m);

					ev_void clone2(EarthView::World::Spatial::Geometry::CGeometryCollection* obj)const;
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CGeometryCollection(_in const CGeometryCollection & obj);
					EarthView::World::Spatial::Geometry::CGeometryCollection& operator=(_in const EarthView::World::Spatial::Geometry::CGeometryCollection & obj);
ev_private:
					CGeometryCollection(_in EV_GEOMETY_PRIVATE_PREFIX::CGeometryCollectionPrivate* ref_p);
				private:
					EV_DEFINE_CLASS_PRIVATE(CGeometryCollection);
					friend class EarthView::World::Spatial::Geometry::Utility::CGeometryHelper;
				};
			}
		}
	}
}

#endif
