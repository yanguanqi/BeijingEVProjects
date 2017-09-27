#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ELLIPTICSECTORRING_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ELLIPTICSECTORRING_H

#include "ellipticarcring.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 椭圆扇形环类
				/// </summary>
				class EV_GEOMETRY_DLL CEllipticSectorRing
					: public EarthView::World::Spatial::Geometry::CEllipticArcRing
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEllipticSectorRing();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEllipticSectorRing();
ev_private:
					/// <summary>
					/// 默认参数构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEllipticSectorRing(EarthView::World::Core::CNameValuePairList* pList);					
				public:
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
					/// 设置椭圆扇形环
					/// </summary>
					/// <param name="centerPoint">椭圆中心点</param>
					/// <param name="assistantPoint1">第一个辅助点，是位于椭圆长轴上的任意一点（但不能与中心点重合）</param>
					/// <param name="assistantPoint2">第二个辅助点，椭圆外接矩形的顶点</param>
					/// <param name="fromAngle">椭圆弧起始角度</param>
					/// <param name="sweepAngle">椭圆弧对中心点的张角</param>
					/// <returns></returns>
					ev_void setEllipticArcRingByThreePoint(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						const EarthView::World::Spatial::Geometry::CPoint& assistantPoint1,
						const EarthView::World::Spatial::Geometry::CPoint& assistantPoint2,
						ev_real64 fromAngle,ev_real64 sweepAngle);
					/// <summary>
					/// 设置椭圆扇形环
					/// </summary>
					/// <param name="centerPoint">椭圆中心点</param>
					/// <param name="semiMajorAxe">椭圆长半轴</param>
					/// <param name="semiMinorAx">椭圆短半轴</param>
					/// <param name="angle">椭圆长轴与x轴夹角</param>
					/// <param name="fromAngle">椭圆弧起始角度</param>
					/// <param name="sweepAngle">椭圆弧对椭圆中心的张角</param>
					/// <returns></returns>
					ev_void setEllipticArcRingByRadius(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						ev_real64 semiMajorAxe,ev_real64 semiMinorAxe,ev_real64 angle,
						ev_real64 fromAngle,ev_real64 sweepAngle);
					/// <summary>
					/// 获取面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>表面面积</returns>
					ev_real64 getArea() const;
					/// <summary>
					/// 复制对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>新的椭圆扇形环</returns>
					_extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;
					ev_int32 add(const EarthView::World::Spatial::Geometry::CCurve & curve,ev_uint32 index);
					ev_int32 remove(ev_uint32 index,ev_int32 size);

					/// <summary>
					/// 投影坐标转换，默认采取布尔莎算法。七参数不足7个，按默认为0处理。
					/// </summary>
					/// <param name="sr">新坐标系统</param>
					/// <param name="seven">七参数，顺序为：offsetX,offsetY,offsetZ,scaleX,scaleY,scaleZ,radio</param>
					/// <param name="count">七参数数目</param>
					/// <returns></returns>
					virtual ev_void projects(const EarthView::World::Spatial::Geometry::ISpatialReference * sr,ev_real64 * sevenParam,ev_uint32 count);
					/// <summary>
					/// 对称变换
					/// </summary>
					/// <param name="line">对称变换的参照线</param>
					/// <returns>变换后的对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* mirror(_in const EarthView::World::Spatial::Geometry::IGeometry* line) const;

				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CEllipticSectorRing* ring)const;
					
				private:
					ev_void updateSecondLine();
				public:
					EarthView::World::Spatial::Geometry::CEllipticSectorRing clone2() const;
					CEllipticSectorRing(const CEllipticSectorRing& obj);
					EarthView::World::Spatial::Geometry::CEllipticSectorRing& operator=(const EarthView::World::Spatial::Geometry::CEllipticSectorRing & obj);
					virtual EarthView::World::Spatial::Geometry::CLineString  toLineString2(_in ev_uint32 smooth) const;
				};
			}
		}
	}
}

#endif
