#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CIRCLECHORD_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CIRCLECHORD_H

#include "polygon.h"
#include "circlechordring.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// EarthView::World::Spatial::Geometry::CCircleChord，圆弦面类
				/// </summary>
				class EV_GEOMETRY_DLL CCircleChord
					: public EarthView::World::Spatial::Geometry::CPolygon
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCircleChord();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CCircleChord();
ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCircleChord(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 设置圆弦面的圆弦环
					/// </summary>
					/// <param name="ring">圆弦环</param>
					/// <returns></returns>
					ev_void setCircleChordRing(const EarthView::World::Spatial::Geometry::CCircleChordRing& ring);
					/// <summary>
					/// 获取圆弦环
					/// </summary>
					/// <param name=""></param>
					/// <returns>圆弦环</returns>
					const EarthView::World::Spatial::Geometry::CCircleChordRing* getCircleChordRingRef() const;
					/// <summary>
					/// 获取圆弦环
					/// </summary>
					/// <param name=""></param>
					/// <returns>圆弦环</returns>
					//EarthView::World::Spatial::Geometry::CCircleChordRing* getCircleChordRingRef();
					EarthView::World::Spatial::Geometry::CCircleChordRing getCircleChordRing() const;
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
					/// <param name="fromPoint">起始点</param>
					/// <param name="secondPoint">结束点</param>
					/// <param name="thirdPoint">控制点</param>
					/// <returns></returns>
					ev_void setCircleChord(_in const EarthView::World::Spatial::Geometry::CPoint& firstPoint,
						                   _in const EarthView::World::Spatial::Geometry::CPoint& secondPoint,
						                   _in const EarthView::World::Spatial::Geometry::CPoint& thirdPoint);
					/// <summary>
					/// 设置圆弧
					/// </summary>
					/// <param name="centerPoint">中心点</param>
					/// <param name="radius">半径</param>
					/// <param name="fromAngle">起始角度</param>
					/// <param name="sweepAngle">圆心角</param>
					/// <returns></returns>
					ev_void setCircleChord(_in const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						                   _in ev_real64 radius,_in ev_real64 fromAngle,_in ev_real64 sweepAngle);
					/// <summary>
					/// 设置圆弧
					/// </summary>
					/// <param name="centerPoint">中心点</param>
					/// <param name="fromPoint">起始点</param>
					/// <param name="sweepAngle">圆心角</param>
					/// <returns></returns>
					ev_void setCircleChord(_in const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						                   _in const EarthView::World::Spatial::Geometry::CPoint& fromPoint,
						                   _in ev_real64 sweepAngle);
					/*****************************************************/
					/************CSurface 接口实现************************/
					/*****************************************************/
					/// <summary>
					/// 获取面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>表面面积</returns>
					ev_real64 getArea() const;
					/// <summary>
					/// 复制
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;

					virtual ev_bool addExteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing & path);
					virtual ev_bool addInteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing & path,ev_uint32 exteriorIndex);
					virtual ev_bool removeExteriorRing(ev_uint32 exteriorIndex);
					virtual ev_bool removeInteriorRing(ev_uint32 exteriorIndex, ev_uint32 interiorIndex);
					virtual ev_uint32 clearInteriorRing(ev_uint32 exteriorIndex);
					virtual ev_uint32 clearAllRing();
				public:
					EarthView::World::Spatial::Geometry::CCircleChord clone2() const;
					CCircleChord(const CCircleChord& obj);
					EarthView::World::Spatial::Geometry::CCircleChord& operator=(const EarthView::World::Spatial::Geometry::CCircleChord& obj);
				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CCircleChord* circleChord)const;
				};
			}
		}
	}
}

#endif
