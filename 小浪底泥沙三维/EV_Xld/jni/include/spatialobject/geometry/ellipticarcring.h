#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ELLIPTICARCRING_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ELLIPTICARCRING_H

#include "curvering.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 椭圆环基类，是所有椭圆环的基类
				class EV_GEOMETRY_DLL CEllipticArcRing
					: public EarthView::World::Spatial::Geometry::CCurveRing
				{
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEllipticArcRing();
				ev_private:
					/// <summary>
					/// 创建构造函数
					/// </summary>
					/// <param name="pList">参数列表</param>
					/// <returns></returns>
					CEllipticArcRing(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEllipticArcRing();			
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
					virtual EarthView::World::Spatial::Geometry::CPoint getCenterPoint2() const;
					/// <summary>
					/// 获取椭圆弧起点
					/// </summary>
					/// <param name=""></param>
					/// <returns>起点</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::CPoint* getArcFromPoint() const;
					virtual EarthView::World::Spatial::Geometry::CPoint getArcFromPoint2() const;
					/// <summary>
					/// 获取椭圆弧终点
					/// </summary>
					/// <param name=""></param>
					/// <returns>终点</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::CPoint* getArcToPoint() const;
					virtual EarthView::World::Spatial::Geometry::CPoint getArcToPoint2() const;
					/// <summary>
					/// 获取长轴半径
					/// </summary>
					/// <param name=""></param>
					/// <returns>椭圆长轴半径</returns>
					virtual ev_real64 getSemiMajorAxe() const;
					/// <summary>
					/// 获取短轴半径
					/// </summary>
					/// <param name=""></param>
					/// <returns>椭圆短轴半径</returns>
					virtual ev_real64 getSemiMinorAxe() const;
					/// <summary>
					/// 获取旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>旋转角度</returns>
					virtual ev_real64 getRotation() const;
					/// <summary>
					/// 获取椭圆弧起始角度
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
					/// 获取椭圆弧长度
					/// </summary>
					/// <param name=""></param>
					/// <returns>椭圆弧长度</returns>
					virtual ev_real64 getArcLength() const;
					/// <summary>
					/// 设置椭圆环
					/// </summary>
					/// <param name="centerPoint">椭圆中心点</param>
					/// <param name="assistantPoint1">辅助点，用于确定旋转角度</param>
					/// <param name="assistantPoint2">辅助点，椭圆外接矩形顶点，用于确定长短半轴</param>
					/// <param name="fromAngle">椭圆环起始角度</param>
					/// <param name="sweepAngle">椭圆环对椭圆中心张角</param>
					/// <returns></returns>
					virtual ev_void setEllipticArcRingByThreePoint(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						const EarthView::World::Spatial::Geometry::CPoint& assistantPoint1,
						const EarthView::World::Spatial::Geometry::CPoint& assistantPoint2,
						ev_real64 fromAngle,ev_real64 sweepAngle);
					/// <summary>
					/// 设置椭圆弧
					/// </summary>
					/// <param name="centerPoint">椭圆中心点</param>
					/// <param name="semiMajorAxe">椭圆长半轴</param>
					/// <param name="semiMinorAx">椭圆短半轴</param>
					/// <param name="rotatedAngle">椭圆长轴与x轴夹角</param>
					/// <param name="fromAngle">椭圆弧起始角度</param>
					/// <param name="sweepAngle">椭圆弧对椭圆中心的张角</param>
					/// <returns></returns>
					virtual ev_void setEllipticArcRingByRadius(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						ev_real64 semiMajorAxe,ev_real64 semiMinorAxe,ev_real64 angle,
						ev_real64 fromAngle,ev_real64 sweepAngle);
					/// <summary>
					/// 设置中心点
					/// </summary>
					/// <param name="point">中心点位置</param>
					/// <returns></returns>
					virtual ev_void setCenterPoint(const EarthView::World::Spatial::Geometry::CPoint& point);
					/// <summary>
					/// 设置长半轴值
					/// </summary>
					/// <param name="value">长半轴长度</param>
					/// <returns></returns>
					virtual ev_void setSemiMajorAxe(ev_real64 value);
					/// <summary>
					/// 设置短半轴值
					/// </summary>
					/// <param name="value">短半轴长度</param>
					/// <returns></returns>
					virtual ev_void setSemiMinorAxe(ev_real64 value);
					/// <summary>
					/// 设置旋转角度[-360,360]
					/// </summary>
					/// <param name="value">旋转角度</param>
					/// <returns></returns>
					virtual ev_void setRotation(ev_real64 value);
					/// <summary>
					/// 设置起始角度
					/// </summary>
					/// <param name="value">起始角度</param>
					/// <returns></returns>
					virtual ev_void setFromAngle(ev_real64 value);
					/// <summary>
					/// 设置椭圆弧张角
					/// </summary>
					/// <param name="value">张角</param>
					/// <returns></returns>
					virtual ev_void setSweepAngle(ev_real64 value);	
					/// <summary>
					/// 获取面积（无效）
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_real64 getArea() const;			
					/// <summary>
					/// 转为折线
					/// </summary>
					/// <param name="smooth">平滑度</param>
					/// <returns></returns>
					//virtual EarthView::World::Spatial::Geometry::CLineString* toLineString(ev_uint32 smooth) const;
					virtual EarthView::World::Spatial::Geometry::CLineString toLineString2(ev_uint32 smooth) const;
					/// <summary>
					/// 获取起点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>起点坐标</returns>
					virtual const EarthView::World::Spatial::Geometry::CCoordinate* getArcFromCoordinateRef() const;
					virtual EarthView::World::Spatial::Geometry::CCoordinate getArcFromCoordinate() const;
					/// <summary>
					/// 获取终点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>终点坐标</returns>
					virtual const EarthView::World::Spatial::Geometry::CCoordinate* getArcToCoordinateRef() const;
					virtual EarthView::World::Spatial::Geometry::CCoordinate getArcToCoordinate() const;
					/// <summary>
					/// 获取中心点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>中心点坐标</returns>
					virtual const EarthView::World::Spatial::Geometry::CCoordinate* getCenterCoordinateRef() const;
					virtual EarthView::World::Spatial::Geometry::CCoordinate getCenterCoordinate() const;

					//virtual IGeometry* clone() const;
					virtual ev_int32 add(const EarthView::World::Spatial::Geometry::CCurve & curve,ev_int32 index);
					virtual ev_int32 remove(ev_uint32 index,ev_int32 size);
					virtual ev_int32 clear();
				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CEllipticArcRing* ring)const;
				public:
					EarthView::World::Spatial::Geometry::CEllipticArcRing clone2() const;

					CEllipticArcRing(const CEllipticArcRing& obj);
					EarthView::World::Spatial::Geometry::CEllipticArcRing& operator=(const EarthView::World::Spatial::Geometry::CEllipticArcRing & obj);
				};
			}
		}
	}
}

#endif
