#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_RECTANGLE_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_RECTANGLE_H

#include "polygon.h"
#include "rectanglering.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 长方形类，角点可以设置为圆角。
				/// </summary>
				class EV_GEOMETRY_DLL CRectangle
					:public EarthView::World::Spatial::Geometry::CPolygon
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CRectangle();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CRectangle();
					/// <summary>
					/// 参数构造函数，默认宽度落在X坐标轴上。
					/// </summary>
					/// <param name="point">右下角点</param>
					/// <param name="width">宽度</param>
					/// <param name="height">高度</param>
					/// <param name="angle">旋转角度</param>
					/// <returns></returns>
					//CRectangle(const EarthView::World::Spatial::Geometry::CPoint& point,ev_real64 width,ev_real64 height,ev_real64 angle);
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="point">右下角点</param>
					/// <param name="width">宽度</param>
					/// <param name="height">高度</param>
					/// <param name="cornerRadius">角点半径，用于控制圆角</param>
					/// <returns></returns>
					//CRectangle(const EarthView::World::Spatial::Geometry::CPoint& point,ev_real64 width,ev_real64 height,ev_real64 angle,ev_real64 cornerRadius);

ev_private:
					/// <summary>
					/// 构建构造函数
					/// </summary>
					/// <param name="pList">参数列表</param>
					/// <returns></returns>
					CRectangle(EarthView::World::Core::CNameValuePairList* pList);
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
					/// 设置矩形环
					/// </summary>
					/// <param name="ring">矩形环</param>
					/// <returns></returns>
					ev_void setRectangleRing(const EarthView::World::Spatial::Geometry::CRectangleRing& ring);

				    /// <summary>
					/// 获取矩形环
					/// </summary>
					/// <param name=""></param>
					/// <returns>矩形环</returns>
					const EarthView::World::Spatial::Geometry::CRectangleRing* getRectangleRingRef() const;
					EarthView::World::Spatial::Geometry::CRectangleRing getRectangleRing() const;
					/// <summary>
					/// 获取矩形环
					/// </summary>
					/// <param name=""></param>
					/// <returns>矩形环</returns>
					//EarthView::World::Spatial::Geometry::CRectangleRing* getRectangleRingRef();

					/// <summary>
					/// 获取第一个点，按顺时针方向
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint * getFirstPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getFirstPoint2() const;
					/// <summary>
					/// 获取第二个点，按顺时针方向
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint * getSecondPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getSecondPoint2() const;
					/// <summary>
					/// 获取第三个点，按顺时针方向
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint * getThirdPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getThirdPoint2() const;
					/// <summary>
					/// 获取第四个点，按顺时针方向
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint * getFourPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getFourPoint2() const;
					/// <summary>
					/// 获取指定索引的圆弧半径。该索引有效值为0，1。index = 0，返回第一个弧度半径
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void getCornerRadius(ev_real64& value12,ev_real64& value23,ev_bool isRadio) const;
					/// <summary>
					/// 获取矩形宽度
					/// </summary>
					/// <param name=""></param>
					/// <returns>矩形宽度</returns>
					ev_real64 getWidth() const;
					/// <summary>
					/// 获取矩形高度
					/// </summary>
					/// <param name=""></param>
					/// <returns>矩形高度</returns>
					ev_real64 getHeight() const;
					/// <summary>
					/// 设置圆角参数，通过设置长度比例，计算圆角控制点。该长度比例为
					/// 长方形两个边长的比例，范围【0，0.5】
					/// </summary>
					/// <param name="isRoundCorner">是否开启圆角设置</param>
					/// <param name="dfRadio1">长度比例</param>
					/// <param name="dfRadio2">长度比例</param>
					/// <returns></returns>
					ev_void setRoundCorner(ev_real64 value12,ev_real64 value23,ev_bool isRadio);
					/// <summary>
					/// 获取面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>表面面积</returns>
					ev_real64 getArea() const;
					/// <summary>
					/// 复制矩形对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;
					/// <summary>
					/// 判断是否与给定几何对象相交
					/// </summary>
					/// <param name="geom">指定几何对象</param>
					/// <param name="dimension">指定几何对象的维度</param>
					/// <returns></returns>
					ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 判断几何体是否为矩形面
					/// </summary>
					virtual ev_bool isRectangle() const ;
					virtual ev_bool addExteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing & path);
					virtual ev_bool addInteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing & path,ev_uint32 exteriorIndex);
					virtual ev_bool removeExteriorRing(ev_uint32 exteriorIndex);
					virtual ev_bool removeInteriorRing(ev_uint32 exteriorIndex, ev_uint32 interiorIndex);
					virtual ev_uint32 clearInteriorRing(ev_uint32 exteriorIndex);
					virtual ev_uint32 clearAllRing();
				public:
					EarthView::World::Spatial::Geometry::CRectangle clone2() const;
					CRectangle(const CRectangle& obj);
					EarthView::World::Spatial::Geometry::CRectangle& operator=(const EarthView::World::Spatial::Geometry::CRectangle & obj);
				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CRectangle* rectangle)const;
				private:
					//CRectangle(const CRectanglePrivate& privateObj);
					//CRectanglePrivate* mpPrivateRectangle;
					//friend class EarthView::World::Spatial::Geometry::Utility::CGeometryHelper;
				};
			}
		}
	}
}

#endif
