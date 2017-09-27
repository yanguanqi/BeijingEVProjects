#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CURVE_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CURVE_H

#include "geometry.h"
#include "point.h"

//// using namespace EarthView::World::Spatial::Geometry::Private;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				class CLineString;
				/// <summary>
				/// 曲线类，一个基类，描述了不同曲线类型的共同特点。
				/// </summary>
				class EV_GEOMETRY_DLL CCurve
					:public EarthView::World::Spatial::Geometry::CGeometry
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CCurve();
				ev_private:
					/// <summary>
					/// 创建构造函数
					/// </summary>
					/// <param name="pList">参数列表</param>
					/// <returns></returns>
					CCurve(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 获取起始点
					/// </summary>
					/// <param name=""></param>
					/// <returns>起始点</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::CPoint* getStartPoint() const;
					virtual EarthView::World::Spatial::Geometry::CPoint  getStartPoint2() const;
					/// <summary>
					/// 获取结尾点
					/// </summary>
					/// <param name=""></param>
					/// <returns>结尾点</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::CPoint* getEndPoint() const;
					virtual EarthView::World::Spatial::Geometry::CPoint  getEndPoint2() const;
					/// <summary>
					/// 获取曲线长度
					/// </summary>
					/// <param name=""></param>
					/// <returns>曲线长度</returns>
					virtual ev_real64 getLength() const;
					/// <summary>
					/// 判断是否闭合。判断标准是首尾点相等
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果闭合，返回true;否则，返回false</returns>
					virtual ev_bool isClosed() const;
					/// <summary>
					/// 判断是否环。判断标准是必须简单曲线，然后首尾点相等。
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool isRing() const;
					/// <summary>
					/// 反转曲线环
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功，返回true;否则，返回false</returns>
					virtual ev_bool reverse();
					/// <summary>
					/// 转换成折线
					/// </summary>
					/// <param name="smooth">平滑度</param>
					/// <returns></returns>
					virtual _extfree EarthView::World::Spatial::Geometry::CLineString* toLineString(ev_uint32 smooth) const;
					//virtual EarthView::World::Spatial::Geometry::CLineString  toLineString2(ev_uint32 smooth) const;
					/////////////EarthView::World::Spatial::Geometry::IGeometry/////////////////////////////
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const;

ev_private:
					virtual EarthView::World::Spatial::Geometry::CLineString toLineString2(ev_uint32 smooth) const;
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCurve();
					/// <summary>
					/// 默认拷贝构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCurve(const CCurve& obj);
					CCurve& operator=(const CCurve& obj);

					ev_void clone2(CCurve* curve)const;
				private:
					//EV_DEFINE_CLASS_PRIVATE(CCurve);
					//friend class EarthView::World::Spatial::Geometry::Utility::CGeometryHelper;
				};
			}
		}
	}
}

#endif
