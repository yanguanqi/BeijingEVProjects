#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_TRIANGLE_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_TRIANGLE_H

#include "polygon.h"
#include "trianglering.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 三角面类
				/// </summary>
				class EV_GEOMETRY_DLL CTriangle
					:public EarthView::World::Spatial::Geometry::CPolygon
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CTriangle();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CTriangle();

ev_private:

					/// <summary>
					/// 构建构造函数
					/// </summary>
					/// <param name="pList">参数列表</param>
					/// <returns></returns>
					CTriangle(EarthView::World::Core::CNameValuePairList* pList);
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
					/// 设置三角环
					/// </summary>
					/// <param name="ring">三角环</param>
					/// <returns></returns>
					ev_void setTriangleRing(const EarthView::World::Spatial::Geometry::CTriangleRing & ring);
					/// <summary>
					/// 获取三角环
					/// </summary>
					/// <param name=""></param>
					/// <returns>三角环</returns>
					const EarthView::World::Spatial::Geometry::CTriangleRing* getTriangleRingRef() const;
					/// <summary>
					/// 获取三角环
					/// </summary>
					/// <param name=""></param>
					/// <returns>三角环</returns>
					//EarthView::World::Spatial::Geometry::CTriangleRing* getTriangleRingRef();
					EarthView::World::Spatial::Geometry::CTriangleRing getTriangleRing() const;
					/// <summary>
					/// 获取第一个点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getFirstPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getFirstPoint2() const;
					/// <summary>
					/// 获取第二个点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getSecondPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getSecondPoint2() const;
					/// <summary>
					/// 获取第三个点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getThirdPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getThirdPoint2() const;
					/// <summary>
					/// 获取第一条边的长度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getFirstLength() const;
					/// <summary>
					/// 获取第二条边的长度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getSecondLength() const;
					/// <summary>
					/// 获取第三条边的长度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getThirdLength() const;
					/// <summary>
					/// 获取第一个角的角度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getFirstAngle() const;
					/// <summary>
					/// 获取第二个角的角度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getSecondAngle() const;
					/// <summary>
					/// 获取第三个角的角度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getThirdAngle() const;
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
					/// <summary>
					/// 获取第一个顶点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Geometry::CCoordinate getFirstCoordinate() const;
					/// <summary>
					/// 获取第二个顶点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Geometry::CCoordinate getSecondCoordinate() const;
					/// <summary>
					/// 获取第三个顶点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Geometry::CCoordinate getThirdCoordinate() const;
					/// <summary>
					/// 获取第一个顶点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getFirstCoordinateRef() const;
					/// <summary>
					/// 获取第二个顶点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getSecondCoordinateRef() const;
					/// <summary>
					/// 获取第三个顶点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getThirdCoordinateRef() const;	

					virtual ev_bool addExteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing & path);
					virtual ev_bool addInteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing & path,ev_uint32 exteriorIndex);
					virtual ev_bool removeExteriorRing(ev_uint32 exteriorIndex);
					virtual ev_bool removeInteriorRing(ev_uint32 exteriorIndex, ev_uint32 interiorIndex);
					virtual ev_uint32 clearInteriorRing(ev_uint32 exteriorIndex);
					virtual ev_uint32 clearAllRing();
				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CTriangle* triangle)const;
				public:
					EarthView::World::Spatial::Geometry::CTriangle clone2() const;
					CTriangle(const CTriangle& obj);
					EarthView::World::Spatial::Geometry::CTriangle& operator=(const EarthView::World::Spatial::Geometry::CTriangle & obj);				
				};
			}
		}
	}
}

#endif

