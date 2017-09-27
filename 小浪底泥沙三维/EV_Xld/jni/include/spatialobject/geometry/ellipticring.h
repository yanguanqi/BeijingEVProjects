#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ELLIPTICRING_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ELLIPTICRING_H

#include "ellipticarcring.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 椭圆环类，构成一个完整的椭圆
				/// </summary>
				class EV_GEOMETRY_DLL CEllipticRing
					: public EarthView::World::Spatial::Geometry::CEllipticArcRing
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEllipticRing();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEllipticRing();
ev_private:
					/// <summary>
					/// 默认参数构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEllipticRing(EarthView::World::Core::CNameValuePairList* pList);					
				public:
					/// <summary>
					/// 设置椭圆环
					/// </summary>
					/// <param name="centerPoint">椭圆中心点</param>
					/// <param name="assistantPoint1">辅助点，用于确定旋转角度</param>
					/// <param name="assistantPoint2">辅助点，椭圆外接矩形顶点，用于确定长短半轴</param>
					/// <param name="fromAngle">椭圆环起始角度(无用参数，可以设为0）</param>
					/// <param name="sweepAngle">椭圆环对椭圆中心张角（无用参数，默认为360，可以设为0）</param>
					/// <returns></returns>
					ev_void setEllipticArcRingByThreePoint(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						const EarthView::World::Spatial::Geometry::CPoint& assistantPoint1,
						const EarthView::World::Spatial::Geometry::CPoint& assistantPoint2,
						ev_real64 fromAngle,ev_real64 sweepAngle);
					/// <summary>
					/// 设置椭圆环
					/// </summary>
					/// <param name="centerPoint">椭圆中心点</param>
					/// <param name="semiMajorAxe">椭圆长半轴</param>
					/// <param name="semiMinorAxe">椭圆短半轴</param>
					/// <param name="angle">椭圆旋转角度</param>
					/// <param name="fromAngle">椭圆环起始角度</param>
					/// <param name="sweepAngle">椭圆环对中心的张角</param>
					/// <returns></returns>
					ev_void setEllipticArcRingByRadius(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						ev_real64 semiMajorAxe,ev_real64 semiMinorAxe,ev_real64 angle,
						ev_real64 fromAngle,ev_real64 sweepAngle);
					/// <summary>
					/// 设置起始角度（不做任何处理）
					/// </summary>
					/// <param name="value">起始角度</param>
					/// <returns></returns>
					ev_void setFromAngle(ev_real64 value);
					/// <summary>
					/// 设置椭圆环的张角（不做任何处理）
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setSweepAngle(ev_real64 value);
					/// <summary>
					/// 获取椭圆面积
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getArea() const;
					/// <summary>
					/// 复制椭圆环
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;
					/// <summary>
					/// 更新椭圆环
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void update();
					/// <summary>
					/// 判断是否包含给定的几何对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CEllipticRing* ring)const;
				public:
					EarthView::World::Spatial::Geometry::CEllipticRing clone2() const;
					CEllipticRing(const CEllipticRing& obj);
					EarthView::World::Spatial::Geometry::CEllipticRing& operator=(const EarthView::World::Spatial::Geometry::CEllipticRing & obj);		
				};
			}
		}
	}
}

#endif
