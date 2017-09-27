#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CIRCLESECTORRING_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CIRCLESECTORRING_H

#include "circlearcring.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
			    /// EarthView::World::Spatial::Geometry::CCircleSectorRing,圆扇环类，是圆扇面的边界
				/// </summary>
				class EV_GEOMETRY_DLL CCircleSectorRing
					: public EarthView::World::Spatial::Geometry::CCircleArcRing
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCircleSectorRing();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CCircleSectorRing();
ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCircleSectorRing(EarthView::World::Core::CNameValuePairList* pList);					
				public:					
					/// <summary>
					/// 通过圆上三个点，设置弦环
					/// </summary>
					/// <param name="firstPoint">第一个点</param>
					/// <param name="secondPoint">第二个点</param>
					/// <param name="controlPoint">控制点</param>
					/// <returns></returns>
					ev_void setCircleArcRingByThreePoint(const EarthView::World::Spatial::Geometry::CPoint& fromPoint,
						                       const EarthView::World::Spatial::Geometry::CPoint& toPoint,
						                       const EarthView::World::Spatial::Geometry::CPoint& controlPoint);
					/// <summary>
					/// 通过中心点以及两个控制点，设置弦环
					/// </summary>
					/// <param name="centerPoint">中心点</param>
					/// <param name="controlPoint1">第一个控制点</param>
					/// <param name="controlPoint2">第二个控制点</param>
					/// <returns></returns>
					ev_void setCircleArcRingByTwoPoint(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						                       const EarthView::World::Spatial::Geometry::CPoint& edgePoint,
											   ev_real64 sweepAngle);
					/// <summary>
					/// 通过中心点和中心角度，设置弦环
					/// </summary>
					/// <param name="centerPoint">中心点</param>
					/// <param name="radius">半径</param>
					/// <param name="fromAngle">起始角度</param>
					/// <param name="centerAngle">中心角度</param>
					/// <returns></returns>
					ev_void setCircleArcRingByRadius(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,ev_real64 radius,
						                 ev_real64 fromAngle,ev_real64 sweepAngle);
					/// <summary>
					/// 设置中心点
					/// </summary>
					/// <param name="point">中心点</param>
					/// <returns></returns>
					virtual ev_void setCenterPoint(const EarthView::World::Spatial::Geometry::CPoint& point);
					/// <summary>
					/// 设置半径
					/// </summary>
					/// <param name="value">半径</param>
					/// <returns></returns>
					virtual ev_void setRadius(ev_real64 value);
					/// <summary>
					/// 设置起始角度
					/// </summary>
					/// <param name="value">起始角度</param>
					/// <returns></returns>
					virtual ev_void setFromAngle(ev_real64 value);
					/// <summary>
					/// 设置圆心角
					/// </summary>
					/// <param name="value">圆心角</param>
					/// <returns></returns>
					virtual ev_void setSweepAngle(ev_real64 value);
					/// <summary>
					/// 获取面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>表面面积</returns>
					ev_real64 getArea() const;
					_extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;

					ev_int32 add(const EarthView::World::Spatial::Geometry::CCurve & curve,ev_uint32 index);
					ev_int32 remove(ev_uint32 index,ev_int32 size);

					virtual ev_void projects(const EarthView::World::Spatial::Geometry::ISpatialReference * sr,ev_real64 * sevenParam,ev_uint32 count);
				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CCircleSectorRing* ring)const;

				private:
					ev_void updateSecondLine();
				public:
					EarthView::World::Spatial::Geometry::CCircleSectorRing clone2() const;
					CCircleSectorRing(const CCircleSectorRing& obj);
					EarthView::World::Spatial::Geometry::CCircleSectorRing& operator=(const EarthView::World::Spatial::Geometry::CCircleSectorRing& obj);
					virtual EarthView::World::Spatial::Geometry::CLineString  toLineString2(_in ev_uint32 smooth) const;
				};
			}
		}
	}
}

#endif
