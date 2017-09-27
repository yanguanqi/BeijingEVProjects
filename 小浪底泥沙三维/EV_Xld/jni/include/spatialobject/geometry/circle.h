#ifndef EARTHVIEW_WORLD_SPATILA_GEOMETRY_CIRCLE_H
#define EARTHVIEW_WORLD_SPATILA_GEOMETRY_CIRCLE_H

#include "polygon.h"
#include "circlering.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 圆类，描述一个圆面。
				/// 圆面由一个中心点以及半径组成。
				/// </summary>
				class EV_GEOMETRY_DLL CCircle
					:public EarthView::World::Spatial::Geometry::CPolygon
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary> 
					CCircle();
					/// <summary>
					/// 参数构造函数
					/// </summary> 
					/// <param name="centerPoint">中心点位置</param>
					/// <param name="radius">半径</param>
					/// <returns></returns>
					CCircle(_in const EarthView::World::Spatial::Geometry::CPoint& centerPoint,_in ev_real64 radius);
					/// <summary>
					/// 默认析构函数
					/// </summary> 
					virtual ~CCircle();
ev_private:
					/// <summary>
					/// 参数构造函数
					/// </summary> 
					/// <param name="centerCoordinate">中心点位置</param>
					/// <param name="assistantCoordinate">辅助点位置，用于确定半径</param>
					/// <returns></returns>
					 CCircle(_in const EarthView::World::Spatial::Geometry::CCoordinate& centerCoordinate,_in const EarthView::World::Spatial::Geometry::CCoordinate& assistantCoordinate);
					/// <summary>
					/// 创建构造函数
					/// </summary> 
					/// <param name="pList">参数列表</param>
					/// <returns></returns>
					CCircle(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 设置圆面的圆环
					/// </summary> 
					/// <param name="ring">圆环</param>
					/// <returns></returns>
					ev_void setCircleRing(_in const EarthView::World::Spatial::Geometry::CCircleRing& ring);
					/// <summary>
					/// 获取圆环
					/// </summary> 
					/// <returns>圆环</returns>
					const EarthView::World::Spatial::Geometry::CCircleRing* getCircleRingRef() const;
					EarthView::World::Spatial::Geometry::CCircleRing getCircleRing() const;
					/// <summary>
					/// 获取圆环
					/// </summary> 
					/// <returns>圆环</returns>
					//EarthView::World::Spatial::Geometry::CCircleRing* getCircleRingPtr() const;
					/// <summary>
					/// 设置圆面
					/// </summary> 
					/// <param name="cPoint">圆心点</param>
					/// <param name="radius">半径</param>
					/// <returns></returns>
					ev_void setCircle(_in const EarthView::World::Spatial::Geometry::CPoint & cPoint,
						              _in ev_real64 radius);
					/// <summary>
					/// 设置圆面
					/// </summary> 
					/// <param name="centerCoordinate">圆心坐标</param>
					/// <param name="assistantCoordinate">半径</param>
					/// <returns></returns>
					ev_void setCircle(_in const EarthView::World::Spatial::Geometry::CCoordinate & ccoord,_in ev_real64 radius);
					/// <summary>
					/// 获取中心点对象
					/// </summary> 
					/// <param name=""></param>
					/// <returns>中心点对象</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getCenterPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getCenterPoint2() const;
					/// <summary>
					/// 获取圆半径
					/// </summary> 
					/// <param name=""></param>
					/// <returns>圆半径</returns>
					ev_real64 getRadius() const;
					/// <summary>
					/// 设置圆心点
					/// </summary> 
					/// <param name="point">圆心点</param>
					/// <returns></returns>
					ev_void setCenterPoint(_in const EarthView::World::Spatial::Geometry::CPoint& point);
					/// <summary>
					/// 设置圆半径
					/// </summary> 
					/// <param name="radius">半径</param>
					/// <returns></returns>
					ev_void setRadius(_in ev_real64 radius);
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
					/// 复制圆面对象
					/// </summary> 
					/// <param name=""></param>
					/// <returns>返回新的圆面对象</returns>
					_extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;
					/// <summary>
					/// 获取中心点坐标位置。
					/// </summary> 
					/// <param name=""></param>
					/// <returns>坐标点对象指针</returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getCenterCoordinateRef() const;

					EarthView::World::Spatial::Geometry::CCoordinate getCenterCoordinate() const;
					
					EarthView::World::Spatial::Geometry::CCircle clone2() const;
					virtual ev_bool addExteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing & path);
					virtual ev_bool addInteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing & path,ev_uint32 exteriorIndex);
					virtual ev_bool removeExteriorRing(ev_uint32 exteriorIndex);
					virtual ev_bool removeInteriorRing(ev_uint32 exteriorIndex, ev_uint32 interiorIndex);
					virtual ev_uint32 clearInteriorRing(ev_uint32 exteriorIndex);
					virtual ev_uint32 clearAllRing();
				public:
					CCircle(const CCircle& obj);
					EarthView::World::Spatial::Geometry::CCircle& operator=(const EarthView::World::Spatial::Geometry::CCircle& obj);
				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CCircle* circle)const;
				};
			}
		}
	}
}

#endif
