#ifndef EARTHVIEW_WORLD_SPATILA_GEOMETRY_ELLIPSE_H
#define EARTHVIEW_WORLD_SPATILA_GEOMETRY_ELLIPSE_H

#include "polygon.h"
#include "ellipticring.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 椭圆面类。
				/// </summary>
				class EV_GEOMETRY_DLL CEllipse
					:public EarthView::World::Spatial::Geometry::CPolygon
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEllipse();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEllipse();					
ev_private:
					/// <summary>
					/// 创建构造函数
					/// </summary>
					/// <param name="pList">参数列表</param>
					/// <returns></returns>
					CEllipse(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 设置椭圆环
					/// </summary>
					/// <param name="ring">椭圆环</param>
					/// <returns></returns>
					ev_void setEllipticRing(const EarthView::World::Spatial::Geometry::CEllipticRing& ring);

					/// <summary>
					/// 获取椭圆环
					/// </summary>
					/// <param name=""></param>
					/// <returns>椭圆环</returns>
					const EarthView::World::Spatial::Geometry::CEllipticRing* getEllipticRingRef() const;
					EarthView::World::Spatial::Geometry::CEllipticRing getEllipticRing() const;
					/// <summary>
					/// 获取椭圆环
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					//EarthView::World::Spatial::Geometry::CEllipticRing* getEllipticRingRef();
					/// <summary>
					/// 获取椭圆中心点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getCenterPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getCenterPoint2() const;
					/// <summary>
					/// 获取椭圆中心点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getCenterCoordinateRef() const;
					EarthView::World::Spatial::Geometry::CCoordinate getCenterCoordinate() const;
					/// <summary>
					/// 获取椭圆长半轴
					/// </summary>
					/// <param name=""></param>
					/// <returns>长半轴</returns>
					ev_real64 getSemiMajorAxe() const;
					/// <summary>
					/// 获取椭圆短半轴
					/// </summary>
					/// <param name=""></param>
					/// <returns>短半轴</returns>
					ev_real64 getSemiMinorAxe() const;
					/// <summary>
					/// 获取椭圆旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getRotatedAngle() const;

					/// <summary>
					/// 获取椭圆面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>面积</returns>
					ev_real64 getArea() const;
					/// <summary>
					/// 复制椭圆面
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;
					/// <summary>
					/// 判断是否包含另一个几何对象
					/// </summary>
					/// <param name="geom">另一个几何对象</param>
					/// <param name="dimension">另一个几何对象的维度</param>
					/// <returns></returns>
					ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					
					virtual ev_bool addExteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing & path);
					virtual ev_bool addInteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing & path,ev_uint32 exteriorIndex);
					virtual ev_bool removeExteriorRing(ev_uint32 exteriorIndex);
					virtual ev_bool removeInteriorRing(ev_uint32 exteriorIndex, ev_uint32 interiorIndex);
					virtual ev_uint32 clearInteriorRing(ev_uint32 exteriorIndex);
					virtual ev_uint32 clearAllRing();
				public:
					EarthView::World::Spatial::Geometry::CEllipse clone2() const;
					CEllipse(const CEllipse& obj);
					EarthView::World::Spatial::Geometry::CEllipse& operator=(const EarthView::World::Spatial::Geometry::CEllipse& obj);
				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CEllipse* ellipse)const;
				};
			}
		}
	}
}

#endif
