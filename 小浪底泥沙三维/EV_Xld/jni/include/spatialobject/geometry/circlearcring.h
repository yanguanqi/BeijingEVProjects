#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CIRCLEARCRING_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CIRCLEARCRING_H

#include "curvering.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
			    /// EarthView::World::Spatial::Geometry::CCircleArcRing，所有圆弧环的基类
				/// </summary>
				class EV_GEOMETRY_DLL CCircleArcRing
					: public EarthView::World::Spatial::Geometry::CCurveRing
				{
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCircleArcRing();
ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCircleArcRing(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CCircleArcRing();			
				public:
					/// <summary> 
					/// 判断几何体是否有效
					/// </summary>
					/// <returns>如果有效，返回true；否则，返回false</returns>
					virtual ev_bool isValid() const;
					/// <summary>
					/// 获取中心点对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>中心点对象指针</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::CPoint* getCenterPoint() const;
					virtual EarthView::World::Spatial::Geometry::CPoint  getCenterPoint2() const;
					/// <summary>
					/// 获取圆弧起点
					/// </summary>
					/// <param name=""></param>
					/// <returns>圆弧起点</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::CPoint* getArcFromPoint() const;
					virtual EarthView::World::Spatial::Geometry::CPoint  getArcFromPoint2() const;
					/// <summary>
					/// 获取圆弧终点
					/// </summary>
					/// <param name=""></param>
					/// <returns>圆弧终点</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::CPoint* getArcToPoint() const;
					virtual EarthView::World::Spatial::Geometry::CPoint  getArcToPoint2() const;
					/// <summary>
					/// 获取半径
					/// </summary>
					/// <param name=""></param>
					/// <returns>圆半径</returns>
					virtual ev_real64 getRadius() const;
					/// <summary>
					/// 获取起始角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>起始角度</returns>
					virtual ev_real64 getFromAngle() const;
					/// <summary>
					/// 获取终止角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>终止角度</returns>
					virtual ev_real64 getToAngle() const;
					/// <summary>
					/// 获取圆心角
					/// </summary>
					/// <param name=""></param>
					/// <returns>圆心角</returns>
					virtual ev_real64 getSweepAngle() const;
					/// <summary>
					/// 获取圆弧长度
					/// </summary>
					/// <param name=""></param>
					/// <returns>圆弧长度</returns>
					virtual ev_real64 getArcLength() const;
					/// <summary>
					/// 获取弦长
					/// </summary>
					/// <param name=""></param>
					/// <returns>弦长</returns>
					virtual ev_real64 getChordLength() const;
					/// <summary>
					/// 获取弦高
					/// </summary>
					/// <param name=""></param>
					/// <returns>弦高</returns>
					virtual ev_real64 getChordHeight() const;
					/// <summary>
					/// 设置圆弧环
					/// </summary>
					/// <param name="fromPoint">圆弧起点</param>
					/// <param name="toPoint">圆弧终点</param>
					/// <param name="controlPoint">控制（弦高）点</param>
					/// <returns></returns>
					virtual ev_void setCircleArcRingByThreePoint(const EarthView::World::Spatial::Geometry::CPoint& fromPoint,
						const EarthView::World::Spatial::Geometry::CPoint& toPoint,
						const EarthView::World::Spatial::Geometry::CPoint& controlPoint);
					/// <summary>
					/// 设置圆弧环
					/// </summary>
					/// <param name="centerPoint">中心点</param>
					/// <param name="radius">半径</param>
					/// <param name="fromAngle">起始角度</param>
					/// <param name="sweepAngle">圆心角</param>
					/// <returns></returns>
					virtual ev_void setCircleArcRingByRadius(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						ev_real64 radius,ev_real64 fromAngle,ev_real64 sweepAngle);
					/// <summary>
					/// 设置圆弧环
					/// </summary>
					/// <param name="centerPoint">中心点</param>
					/// <param name="edgePoint">起始点</param>
					/// <param name="sweepAngle">圆心角</param>
					/// <returns></returns>
					virtual ev_void setCircleArcRingByTwoPoint(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						                  const EarthView::World::Spatial::Geometry::CPoint& edgePoint,
										  ev_real64 sweepAngle);
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
					/// 获取圆弧环的面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>面积</returns>
					virtual ev_real64 getArea() const;
					/// <summary>
					/// 获取起始点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>起始点坐标</returns>
					virtual const EarthView::World::Spatial::Geometry::CCoordinate* getArcFromCoordinateRef() const;
					/// <summary>
					/// 获取终止点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>终止点坐标</returns>
					virtual const EarthView::World::Spatial::Geometry::CCoordinate* getArcToCoordinateRef() const;
					/// <summary>
					/// 获取中心点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>中心点坐标</returns>
					virtual const EarthView::World::Spatial::Geometry::CCoordinate* getCenterCoordinateRef() const;

					EarthView::World::Spatial::Geometry::CCircleArcRing clone2() const;
					virtual ev_int32 add(const EarthView::World::Spatial::Geometry::CCurve & curve,ev_int32 index);
					virtual ev_int32 remove(ev_uint32 index,ev_int32 size);
					virtual ev_int32 clear();
				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CCircleArcRing* ring)const;
				public:
					CCircleArcRing(const CCircleArcRing& obj);
					EarthView::World::Spatial::Geometry::CCircleArcRing& operator=(const EarthView::World::Spatial::Geometry::CCircleArcRing& obj);
				};
			}
		}
	}
}

#endif
