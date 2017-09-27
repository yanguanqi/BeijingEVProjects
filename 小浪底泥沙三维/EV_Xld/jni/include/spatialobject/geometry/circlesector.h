#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CIRCLESECTOR_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CIRCLESECTOR_H

#include "polygon.h"
#include "circlesectorring.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
			    /// EarthView::World::Spatial::Geometry::CCircleSector,圆扇面类，描述由一个圆弧和圆心所形成的扇形面
				/// </summary>
				class EV_GEOMETRY_DLL CCircleSector
					: public EarthView::World::Spatial::Geometry::CPolygon
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCircleSector();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CCircleSector();
ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCircleSector(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 设置圆扇环
					/// </summary>
					/// <param name="ring">圆扇环</param>
					/// <returns></returns>
					ev_void setCircleSectorRing(const EarthView::World::Spatial::Geometry::CCircleSectorRing& ring);
					/// <summary>
					/// 获取圆扇环
					/// </summary>
					/// <param name=""></param>
					/// <returns>圆扇环</returns>
					const EarthView::World::Spatial::Geometry::CCircleSectorRing* getCircleSectorRingRef() const;
					/// <summary>
					/// 获取圆扇环
					/// </summary>
					/// <param name=""></param>
					/// <returns>圆扇环</returns>
					/*EarthView::World::Spatial::Geometry::CCircleSectorRing* getCircleSectorRingPtr() const;*/
					EarthView::World::Spatial::Geometry::CCircleSectorRing  getCircleSectorRing() const;
					/// <summary>
					/// 获取弧长度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getArcLength() const;
					/// <summary>
					/// 获取周长
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getCircumference() const;
					/// <summary>
					/// 获取起始点对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>起始点对象指针</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getFromPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getFromPoint2() const;
					/// <summary>
					/// 获取结束点对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>结束点对象指针</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getToPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getToPoint2() const;
					/// <summary>
					/// 获取中心点对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>中心点对象指针</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getCenterPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getCenterPoint2() const;
					/// <summary>
					/// 获取半径
					/// </summary>
					/// <param name=""></param>
					/// <returns>圆半径</returns>
					ev_real64 getRadius() const;
					/// <summary>
					/// 获取起始角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>起始角度</returns>
					ev_real64 getFromAngle() const;
					/// <summary>
					/// 获取结束角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>结束角度</returns>
					ev_real64 getToAngle() const;
					/// <summary>
					/// 获取中心角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>中心角度</returns>
					ev_real64 getCenterAngle() const;
					/// <summary>
					/// 设置圆弧
					/// </summary>
					/// <param name="firstPoint">圆弧起点</param>
					/// <param name="secondPoint">圆弧终点</param>
					/// <param name="thirdPoint">弦高控制点</param>
					/// <returns></returns>
					ev_void setCircleSector(const EarthView::World::Spatial::Geometry::CPoint& firstPoint,
						                    const EarthView::World::Spatial::Geometry::CPoint& secondPoint,
						                    const EarthView::World::Spatial::Geometry::CPoint& thirdPoint);
					/// <summary>
					/// 设置圆弧
					/// </summary>
					/// <param name="centerPoint">中心点</param>
					/// <param name="radius">半径</param>
					/// <param name="fromAngle">起始角度</param>
					/// <param name="sweepAngle">圆心角</param>
					/// <returns></returns>
					ev_void setCircleSector(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,ev_real64 radius,
						                 ev_real64 fromAngle,ev_real64 sweepAngle);
					/// <summary>
					/// 设置圆弧
					/// </summary>
					/// <param name="centerPoint">中心点</param>
					/// <param name="fromPoint">起始点</param>
					/// <param name="centerAngle">圆心角</param>
					/// <returns></returns>
					ev_void setCircleSector(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						                    const EarthView::World::Spatial::Geometry::CPoint& fromPoint,
						                    ev_real64 sweepAngle);

					_extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;
					ev_real64 getArea() const;

					virtual ev_bool addExteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing & path);
					virtual ev_bool addInteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing & path,ev_uint32 exteriorIndex);
					virtual ev_bool removeExteriorRing(ev_uint32 exteriorIndex);
					virtual ev_bool removeInteriorRing(ev_uint32 exteriorIndex, ev_uint32 interiorIndex);
					virtual ev_uint32 clearInteriorRing(ev_uint32 exteriorIndex);
					virtual ev_uint32 clearAllRing();
				public:
					EarthView::World::Spatial::Geometry::CCircleSector clone2() const;
					CCircleSector(const CCircleSector& obj);
					EarthView::World::Spatial::Geometry::CCircleSector& operator=(const EarthView::World::Spatial::Geometry::CCircleSector& obj);
				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CCircleSector* circleSector)const;
				};
			}
		}
	}
}

#endif
