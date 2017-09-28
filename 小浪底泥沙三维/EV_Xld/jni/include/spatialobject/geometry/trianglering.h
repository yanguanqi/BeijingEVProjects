#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_TRIANGLERING_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_TRIANGLERING_H

#include "curvering.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				namespace Private{
					class CTriangleRingPrivate;
				}
				namespace Utility{
					class CGeometryHelper;

				}
				/// <summary>
				/// 三角环类，由一个三角形的三条边构成的环
				/// </summary>
				class EV_GEOMETRY_DLL CTriangleRing
					:public EarthView::World::Spatial::Geometry::CCurveRing
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CTriangleRing();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CTriangleRing();
ev_private:
					/// <summary>
					/// 默认参数构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CTriangleRing(_in EarthView::World::Core::CNameValuePairList * pList);
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
					/// 设置三角环的三个顶点坐标
					/// </summary>
					/// <param name="coord1">第一个顶点坐标</param>
					/// <param name="coord2">第二个顶点坐标</param>
					/// <param name="coord3">第三个顶点坐标</param>
					/// <returns></returns>
					ev_void setTriangleRing(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord1,
						                    _in const EarthView::World::Spatial::Geometry::CCoordinate& coord2,
						                    _in const EarthView::World::Spatial::Geometry::CCoordinate& coord3);
					/// <summary>
					/// 设置三角环的三个顶点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setTriangleRing(_in const EarthView::World::Spatial::Geometry::CPoint& point1,
						                    _in const EarthView::World::Spatial::Geometry::CPoint& point2,
						                    _in const EarthView::World::Spatial::Geometry::CPoint& point3);
					/// <summary>
					/// 获取第一个顶点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getFirstPoint() const;
					EarthView::World::Spatial::Geometry::CPoint getFirstPoint2() const;
					/// <summary>
					/// 获取第二个顶点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual _extfree EarthView::World::Spatial::Geometry::CPoint* getSecondPoint() const;
					virtual EarthView::World::Spatial::Geometry::CPoint getSecondPoint2() const;
					/// <summary>
					/// 获取第三个顶点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual _extfree EarthView::World::Spatial::Geometry::CPoint* getThirdPoint() const;
					virtual EarthView::World::Spatial::Geometry::CPoint getThirdPoint2() const;
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
					/// 获取第一个顶点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getFirstCoordinateRef() const;
					EarthView::World::Spatial::Geometry::CCoordinate getFirstCoordinate() const;
					/// <summary>
					/// 获取第二个顶点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getSecondCoordinateRef() const;
					EarthView::World::Spatial::Geometry::CCoordinate getSecondCoordinate() const;
					/// <summary>
					/// 获取第三个顶点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getThirdCoordinateRef() const;
					EarthView::World::Spatial::Geometry::CCoordinate getThirdCoordinate() const;
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
					/// <returns></returns>
					ev_real64 getArea() const;
					/// <summary>
					/// 获取周长
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getLength() const;
					/// <summary>
					/// 复制
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;

					ev_int32 add(const EarthView::World::Spatial::Geometry::CCurve & curve,ev_uint32 index);
					ev_int32 remove(ev_uint32 index,ev_int32 size);
				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CTriangleRing* triangleRing)const;
				public:
					EarthView::World::Spatial::Geometry::CTriangleRing clone2() const;
					CTriangleRing(const CTriangleRing& obj);
					EarthView::World::Spatial::Geometry::CTriangleRing& operator=(const EarthView::World::Spatial::Geometry::CTriangleRing & obj);	
ev_private:
					CTriangleRing(EV_GEOMETY_PRIVATE_PREFIX::CTriangleRingPrivate* privateObj);
				private:
					ev_void updateTriangle();
					EV_DEFINE_CLASS_PRIVATE(CTriangleRing);
					//CTriangleRingPrivate* mpPrivateTriangleRing;
					friend class EarthView::World::Spatial::Geometry::Utility::CGeometryHelper;
				};
			}
		}
	}
}

#endif
