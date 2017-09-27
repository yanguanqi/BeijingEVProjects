#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ELLIPTICCHORD_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ELLIPTICCHORD_H

#include "polygon.h"
#include "ellipticchordring.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 椭圆弦面，由椭圆弧和它的弦构成的面
				/// </summary>
				class EV_GEOMETRY_DLL CEllipticChord
					: public EarthView::World::Spatial::Geometry::CPolygon
				{
				public:
				    /// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEllipticChord();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEllipticChord();
ev_private:
					/// <summary>
					/// 创建构造函数
					/// </summary>
					/// <param name="pList">参数列表</param>
					/// <returns></returns>
					CEllipticChord(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 设置椭圆弦环
					/// </summary>
					/// <param name="ring">椭圆弦环</param>
					/// <returns></returns>
					ev_void setEllipticChordRing(const EarthView::World::Spatial::Geometry::CEllipticChordRing& ring);
					/// <summary>
					/// 获取椭圆弦环
					/// </summary>
					/// <param name=""></param>
					/// <returns>椭圆弦环</returns>
					const EarthView::World::Spatial::Geometry::CEllipticChordRing* getChordRingRef() const;
					EarthView::World::Spatial::Geometry::CEllipticChordRing getChordRing() const;
					/// <summary>
					/// 获取椭圆弦环
					/// </summary>
					/// <param name=""></param>
					/// <returns>椭圆弦环</returns>
					//EarthView::World::Spatial::Geometry::CEllipticChordRing* getChordRingRef();
					/// <summary>
					/// 获取椭圆中心点
					/// </summary>
					/// <param name=""></param>
					/// <returns>椭圆中心点</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getCenterPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getCenterPoint2() const;
					/// <summary>
					/// 获取椭圆弧的起点
					/// </summary>
					/// <param name=""></param>
					/// <returns>起点</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getArcFromPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getArcFromPoint2() const;
					/// <summary>
					/// 获取椭圆弧终点
					/// </summary>
					/// <param name=""></param>
					/// <returns>终点</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getArcToPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getArcToPoint2() const;
					/// <summary>
					/// 获取椭圆中心点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>中心点坐标</returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getCenterCoordinateRef() const;
					EarthView::World::Spatial::Geometry::CCoordinate getCenterCoordinate() const;
					/// <summary>
					/// 获取椭圆弧起点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>起点坐标</returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getArcFromCoordinateRef() const;
					EarthView::World::Spatial::Geometry::CCoordinate getArcFromCoordinate() const;
					/// <summary>
					/// 获取椭圆弧终点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>终点坐标</returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getArcToCoordinateRef() const;
					EarthView::World::Spatial::Geometry::CCoordinate getArcToCoordinate() const;
					/// <summary>
					/// 获取椭圆弧长度
					/// </summary>
					/// <param name=""></param>
					/// <returns>椭圆弧长度</returns>
					ev_real64 getArcLength() const;
					/// <summary>
					/// 获取椭圆弧的起始角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>起始角度</returns>
					ev_real64 getFromAngle() const;
					/// <summary>
					/// 获取椭圆弧的终止角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>终止角度</returns>
					ev_real64 getToAngle() const;
					/// <summary>
					/// 获取椭圆旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>旋转角度</returns>
					ev_real64 getRotatedAngle() const;
					/// <summary>
					/// 获取椭圆弦面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>表面面积</returns>
					ev_real64 getArea() const;
					/// <summary>
					/// 复制椭圆弦面对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>新的椭圆弦面对象</returns>
					_extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;

					virtual ev_bool addExteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing & path);
					virtual ev_bool addInteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing & path,ev_uint32 exteriorIndex);
					virtual ev_bool removeExteriorRing(ev_uint32 exteriorIndex);
					virtual ev_bool removeInteriorRing(ev_uint32 exteriorIndex, ev_uint32 interiorIndex);
					virtual ev_uint32 clearInteriorRing(ev_uint32 exteriorIndex);
					virtual ev_uint32 clearAllRing();
				public:
					EarthView::World::Spatial::Geometry::CEllipticChord clone2() const;
					CEllipticChord(const CEllipticChord& obj);
					EarthView::World::Spatial::Geometry::CEllipticChord& operator=(const EarthView::World::Spatial::Geometry::CEllipticChord & obj);		
				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CEllipticChord* ellipseChord)const;
				};
			}
		}
	}
}

#endif
