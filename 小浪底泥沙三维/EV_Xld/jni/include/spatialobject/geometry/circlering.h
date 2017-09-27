#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CIRCLERING_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CIRCLERING_H

#include "circlearcring.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
			    /// EarthView::World::Spatial::Geometry::CCircleRing，圆环类
				/// </summary>
				class EV_GEOMETRY_DLL CCircleRing
					: public EarthView::World::Spatial::Geometry::CCircleArcRing
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCircleRing();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CCircleRing();
ev_private:
					/// <summary>
					/// 默认参数构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCircleRing(EarthView::World::Core::CNameValuePairList* pList);					
				public:					
					/// <summary>
					/// 通过三个点设置圆环
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setCircleArcRingByThreePoint(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						const EarthView::World::Spatial::Geometry::CPoint& assistantPoint1,
						const EarthView::World::Spatial::Geometry::CPoint& assistantPoint2);
					/// <summary>
					/// 通过圆心和半径设置圆环
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setCircleArcRingByRadius(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						ev_real64 radius,ev_real64 fromAngle,ev_real64 sweepAngle);
					/// <summary>
					/// 通过中心点和边界点，设置圆环
					/// </summary>
					/// <param name="centerPoint">中心点</param>
					/// <param name="edgePoint">边界点</param>
					/// <returns></returns>
					ev_void setCircleArcRingByTwoPoint(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						                  const EarthView::World::Spatial::Geometry::CPoint& edgePoint,
										  ev_real64 sweepAngle);
					/// <summary>
					/// 获取面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>面积</returns>
					virtual ev_real64 getArea() const;
					/// <summary>
					/// 设置起始角度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void setFromAngle(ev_real64 value);
					/// <summary>
					/// 设置圆心角
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void setSweepAngle(ev_real64 value);
					/// <summary>
					/// 复制
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;
					/// <summary>
					/// 更新
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void update();
					/// <summary>
					/// 移动一个点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool movePointTo(const EarthView::World::Spatial::Geometry::IGeometry* frmPoint,const EarthView::World::Spatial::Geometry::IGeometry* toPoint);

					EarthView::World::Spatial::Geometry::CCircleRing clone2() const;
				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CCircleRing* ring)const;
				public:
					CCircleRing(const CCircleRing& obj);
					EarthView::World::Spatial::Geometry::CCircleRing& operator=(const EarthView::World::Spatial::Geometry::CCircleRing& obj);
				};
			}
		}
	}
}

#endif
