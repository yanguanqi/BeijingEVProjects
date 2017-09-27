#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_RECTANGLERING_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_RECTANGLERING_H

#include "curvering.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// EarthView::World::Spatial::Geometry::CRectangleRing，圆角矩形环类
				/// </summary>
				class EV_GEOMETRY_DLL CRectangleRing
					:public EarthView::World::Spatial::Geometry::CCurveRing
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CRectangleRing();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CRectangleRing();
ev_private:
					/// <summary>
					/// 默认参数构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CRectangleRing(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary> 
					/// 判断几何体是否有效
					/// </summary>
					/// <returns>如果有效，返回true；否则，返回false</returns>
					virtual ev_bool isValid() const;
					/// <summary> 
					/// 判断几何体是否为空
					/// </summary>
					/// <returns>如果为空，返回true；否则，返回false</returns>
					virtual ev_bool isEmpty() const;
					/// <summary>
					/// 设置圆角矩形环
					/// </summary>
					/// <param name="coord1">矩形第一个顶点坐标</param>
					/// <param name="coord2">矩形第二个顶点坐标</param>
					/// <param name="coord3">辅助点坐标，用于确定矩形宽度</param>
					/// <param name="isRadio">标识value12和value23是否是比值</param>
					/// <param name="value12">第一个圆角半径</param>
					/// <param name="value23">第二个圆角半径</param>
					/// <returns></returns>
					ev_void setRectangleRing(const EarthView::World::Spatial::Geometry::CCoordinate& coord1,const EarthView::World::Spatial::Geometry::CCoordinate& coord2,
						                     const EarthView::World::Spatial::Geometry::CCoordinate& coord3,ev_bool isRadio,
						                     ev_real64 value12,ev_real64 value23);
					/// <summary>
					/// 设置圆角矩形环
					/// </summary>
					/// <param name="point1">矩形第一个顶点</param>
					/// <param name="point2">矩形第二个顶点</param>
					/// <param name="point3">辅助点</param>
					/// <param name="isRadio">标识value12和value23是否是比值</param>
					/// <param name="value12">第一个圆角半径</param>
					/// <param name="value23">第二个圆角半径</param>
					/// <returns></returns>
					ev_void setRectangleRing(const EarthView::World::Spatial::Geometry::CPoint& point1,
						                     const EarthView::World::Spatial::Geometry::CPoint& point2,
						                     const EarthView::World::Spatial::Geometry::CPoint& point3,
						                     ev_bool isRadio,ev_real64 value12,ev_real64 value23);
					/// <summary>
					/// 设置圆角半径
					/// </summary>
					/// <param name="isRadio">标识value12和value23是否是比值</param>
					/// <param name="value12">第一个圆角半径</param>
					/// <param name="value23">第二个圆角半径</param>
					/// <returns></returns>
					ev_void setRoundCornerRadius(ev_bool isRadio,ev_real64 value12,ev_real64 value23);
					/// <summary>
					/// 获取第一个圆角的贝塞尔曲线控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getFirstPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getFirstPoint2() const;
					/// <summary>
					/// 获取第二个圆角的贝塞尔曲线控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getSecondPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getSecondPoint2() const;
					/// <summary>
					/// 获取第三个圆角的贝塞尔曲线控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getThirdPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getThirdPoint2() const;
					/// <summary>
					/// 获取第四个圆角的贝塞尔曲线控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getFourPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getFourPoint2() const;
					/// <summary>
					/// 获取矩形宽度
					/// </summary>
					/// <param name=""></param>
					/// <returns>宽度</returns>
					ev_real64 getWidth() const;
					/// <summary>
					/// 获取矩形高度
					/// </summary>
					/// <param name=""></param>
					/// <returns>高度</returns>
					ev_real64 getHeight() const;
					/// <summary>
					/// 获取圆角半径
					/// </summary>					
					/// <param name="value12">第一个圆角半径</param>
					/// <param name="value23">第二个圆角半径</param>
					/// <param name="isRadio">比值标识</param>
					/// <returns></returns>
					ev_void getRoundRadius(ev_real64& value12,ev_real64& value23,ev_bool isRadio) const;
					/// <summary>
					/// 获取圆角矩形的周长
					/// </summary>
					/// <param name=""></param>
					/// <returns>周长</returns>
					ev_real64 getLength() const;
					/// <summary>
					/// 获取面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>面积</returns>
					ev_real64 getArea() const;
					/// <summary>
					/// 复制圆角矩形环
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;
					/// <summary>
					/// 获取第一个圆角的贝塞尔曲线起点
					/// </summary>
					/// <param name=""></param>
					/// <returns>起点</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getFromControlPointFromFirstCorner() const;
					EarthView::World::Spatial::Geometry::CPoint getFromControlPointFromFirstCorner2() const;
					/// <summary>
					/// 获取第一个圆角的贝塞尔曲线起点终点
					/// </summary>
					/// <param name=""></param>
					/// <returns>终点</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getToControlPointFromFirstCorner() const;
					EarthView::World::Spatial::Geometry::CPoint getToControlPointFromFirstCorner2() const;
					/// <summary>
					/// 获取第二个圆角的贝塞尔曲线起点
					/// </summary>
					/// <param name=""></param>
					/// <returns>起点</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getFromControlPointFromSecondCorner() const;
					EarthView::World::Spatial::Geometry::CPoint getFromControlPointFromSecondCorner2() const;
					/// <summary>
					/// 获取第二个圆角的贝塞尔曲线终点
					/// </summary>
					/// <param name=""></param>
					/// <returns>终点</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getToControlPointFromSecondCorner() const;
					EarthView::World::Spatial::Geometry::CPoint getToControlPointFromSecondCorner2() const;
					/// <summary>
					/// 获取第三个圆角的贝塞尔曲线起点
					/// </summary>
					/// <param name=""></param>
					/// <returns>起点</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getFromControlPointFromThirdCorner() const;
					EarthView::World::Spatial::Geometry::CPoint getFromControlPointFromThirdCorner2() const;
					/// <summary>
					/// 获取第三个圆角的贝塞尔曲线终点
					/// </summary>
					/// <param name=""></param>
					/// <returns>终点</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getToControlPointFromThirdCorner() const;
					EarthView::World::Spatial::Geometry::CPoint getToControlPointFromThirdCorner2() const;
					/// <summary>
					/// 获取第四个圆角的贝塞尔曲线起点
					/// </summary>
					/// <param name=""></param>
					/// <returns>起点</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getFromControlPointFromFourCorner() const;
					EarthView::World::Spatial::Geometry::CPoint getFromControlPointFromFourCorner2() const;
					/// <summary>
					/// 获取第四个圆角的贝塞尔曲线终点
					/// </summary>
					/// <param name=""></param>
					/// <returns>终点</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getToControlPointFromFourCorner() const;
					EarthView::World::Spatial::Geometry::CPoint getToControlPointFromFourCorner2() const;
					/// <summary>
					/// 获取第一个圆角的贝塞尔曲线起点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>起点坐标</returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getFromControlCoordinateRefFromFirstCorner() const;
					EarthView::World::Spatial::Geometry::CCoordinate getFromControlCoordinateFromFirstCorner2() const;
					/// <summary>
					/// 获取第一个圆角的贝塞尔曲线终点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>终点坐标</returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getToControlCoordinateRefFromFirstCorner() const;
					EarthView::World::Spatial::Geometry::CCoordinate getToControlCoordinateFromFirstCorner2() const;
					/// <summary>
					/// 获取第二个圆角的贝塞尔曲线起点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>起点坐标</returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getFromControlCoordinateRefFromSecondCorner() const;
					EarthView::World::Spatial::Geometry::CCoordinate getFromControlCoordinateFromSecondCorner2() const;
					/// <summary>
					/// 获取第二个圆角的贝塞尔曲线终点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>终点坐标</returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getToControlCoordinateRefFromSecondCorner() const;
					EarthView::World::Spatial::Geometry::CCoordinate getToControlCoordinateFromSecondCorner2() const;
					/// <summary>
					/// 获取第三个圆角的贝塞尔曲线起点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>起点坐标</returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getFromControlCoordinateRefFromThirdCorner() const;
					EarthView::World::Spatial::Geometry::CCoordinate getFromControlCoordinateFromThirdCorner2() const;
					/// <summary>
					/// 获取第三个圆角的贝塞尔曲线终点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>终点坐标</returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getToControlCoordinateRefFromThirdCorner() const;
					EarthView::World::Spatial::Geometry::CCoordinate getToControlCoordinateFromThirdCorner2() const;
					/// <summary>
					/// 获取第四个圆角的贝塞尔曲线起点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>起点坐标</returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getFromControlCoordinateRefFromFourCorner() const;
					EarthView::World::Spatial::Geometry::CCoordinate getFromControlCoordinateFromFourCorner2() const;
					/// <summary>
					/// 获取第四个圆角的贝塞尔曲线终点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>终点坐标</returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getToControlCoordinateRefFromFourCorner() const;
					EarthView::World::Spatial::Geometry::CCoordinate getToControlCoordinateFromFourCorner2() const;
					/// <summary>
					/// 判断是否与给定几何对象相交
					/// </summary>
					/// <param name="geom">指定几何对象</param>
					/// <param name="dimension">指定几何对象的维度</param>
					/// <returns></returns>
					ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;

					virtual ev_int32 add(const EarthView::World::Spatial::Geometry::CCurve & curve,ev_uint32 index);

					virtual ev_int32 remove(ev_uint32 index,ev_int32 size);

				    virtual EarthView::World::Spatial::Geometry::CLineString toLineString2(ev_uint32 smooth) const;

				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CRectangleRing* rectangleRing)const;
				public:
					EarthView::World::Spatial::Geometry::CRectangleRing clone2() const;
					CRectangleRing(const CRectangleRing& obj);
					EarthView::World::Spatial::Geometry::CRectangleRing& operator=(const EarthView::World::Spatial::Geometry::CRectangleRing & obj);
				private:
					//CRectangleRing(const CRectangleRingPrivate& privateObj);
					//CRectangleRingPrivate* mpPrivateRectangleRing;
					//friend class EarthView::World::Spatial::Geometry::Utility::CGeometryHelper;
				};
			}
		}
	}
}

#endif
