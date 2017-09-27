#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CURVERING_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CURVERING_H

#include "curvepath.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 曲线环枚举类型
				/// </summary>
				enum EVCurveRingType
				{
					/// <summary>
					/// 组合环
					/// </summary>
					CRT_COMPOUND_RING          = 0,
					
					/// <summary>
					/// 圆环
					/// </summary>
					CRT_CIRCLE_RING            = 1,
					/// <summary>
					/// 圆扇环
					/// </summary>
					CRT_CIRCLE_SECTOR          = 2,
					/// <summary>
					/// 圆弦环
					/// </summary>
					CRT_CIRCLE_CHORD           = 3,

					/// <summary>
					/// 椭圆环
					/// </summary>
					CRT_ELLIPTIC_RING          = 11,
					/// <summary>
					/// 椭圆扇环
					/// </summary>
					CRT_ELLIPTIC_SECTOR        = 12,
					/// <summary>
					/// 椭圆弦环
					/// </summary>
					CRT_ELLIPTIC_CHORD         = 13,

					/// <summary>
					/// 三角形环
					/// </summary>
					CRT_TRIANGLE_RING           = 21,

					/// <summary>
					/// 四边形环
					/// </summary>
					CRT_RECTANGLE_RING         = 31,
					
					/// <summary>
					/// 等边多边形环
					/// </summary>
					CRT_EQUILATERAL_RING       = 41,
				};

				/// <summary>
				/// 曲线环类，包含了多个曲线，并要求首尾相交。
				/// </summary>
				class EV_GEOMETRY_DLL CCurveRing
					:public EarthView::World::Spatial::Geometry::CCurvePath
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCurveRing();
					CCurveRing(_in const EarthView::World::Spatial::Geometry::CCoordinateSequence& coords);
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CCurveRing();
ev_private:
					CCurveRing(_in const CCoordinate* cpy_coords,ev_size_t size);
					CCurveRing(_in const CPoint* cpy_points,ev_size_t size);
					/// <summary>
					/// 创建构造函数
					/// </summary>
					/// <param name="pList">参数列表</param>
					/// <returns></returns>
					CCurveRing(EarthView::World::Core::CNameValuePairList* pList);
				public:
					//virtual ev_int32 add(const CCurve & curve,ev_int32 index);
					/// <summary>
					/// 删除指定索引处的指定数目曲线对象
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="size">数目</param>
					/// <returns>返回成功删除数目</returns>
					//virtual ev_int32 remove(ev_uint32 index,ev_int32 size);
					/// <summary>
					/// 清楚所有Path
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					//virtual ev_int32 clear();
					/// <summary> 
					/// 获取面积
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_real64 getArea() const;

					EarthView::World::Spatial::Geometry::CCurveRing clone2() const;
					///*********************************************************/
					///*****************CCurve 接口函数实现*******************/
					///*********************************************************/
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

					virtual EarthView::World::Spatial::Geometry::CLineString  toLineString2(ev_uint32 smooth) const;
					/*****************************************************/
					/************EarthView::World::Spatial::Geometry::IGeometry 接口声明************************/
					/*****************************************************/
					/// <summary> 
					/// 判断几何体是否有效
					/// </summary>
					/// <returns>如果有效，返回true；否则，返回false</returns>
					virtual ev_bool isValid() const;
					/// <summary> 
					/// 判断几何体是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果为空，返回true；否则，返回false</returns>
					virtual ev_bool isEmpty() const;
					/// <summary> 
					/// 获取几何体对象的外边框对象。
					/// 点的外边框对象为空；线的外边框对象是两个端点；面的外边框对象是外边界。
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回Geometry对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const;
					/// <summary> 
					/// 深度拷贝几何体对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>拷贝后的几何体对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;

					/******************** Added by wangwei ,2012-12-22 **************/
					/************************** 添加编辑接口 ************************/
					/// <summary>
					/// 分割
					/// </summary>
					/// <param name="pSplitGeom">分割几何图形（可以为点，线）</param>
					/// <returns>分割后得到的对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* split(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom) const;

					/// <summary>
					/// 裁剪
					/// </summary>
					/// <param name="pClipLine">裁剪线</param>
					/// <returns>裁剪后得到的对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* clip(_in const EarthView::World::Spatial::Geometry::IGeometry* pClipLine) const;					
					/// <summary>
					/// 平滑
					/// </summary>
					/// <param name="tolerance">距离容差</param>
					/// <param name="dimension">几何对象的维度</param>
					/// <returns>平滑处理后的几何对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* smooth(ev_real64 tolerance, EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;

					/// <summary>
					/// 捕捉点
					/// </summary>
					/// <param name="point">输入点</param>
					/// <param name="tolerance">捕捉距离上限</param>
					/// <param name="snap">捕捉类型参数</param>
					/// <returns>捕捉到的点</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point,_in ev_real64 tolerance,
						                            EarthView::World::Spatial::Geometry::EVGeometrySnapType & snap) const;
					/// <summary>
					/// 捕捉线段
					/// </summary>
					/// <param name="point">输入点</param>
					/// <param name="tolerance">捕捉距离上限</param>
					/// <returns>捕捉到的线段</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* snapToSegment(_in const EarthView::World::Spatial::Geometry::IGeometry* point,_in ev_real64 tolerance) const;
					/// <summary>
					/// 增加一个点
					/// </summary>
					/// <param name="point">待增加的点</param>
					/// <returns></returns>
					virtual ev_bool addPointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point);
					
					/*************************** end ******************************/
				public:
					CCurveRing(const CCurveRing& obj);
					EarthView::World::Spatial::Geometry::CCurveRing& operator=(const EarthView::World::Spatial::Geometry::CCurveRing& obj);
				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CCurveRing* ring) const;
				private:
					//CCurveRing( CCurveRingPrivate* mpPrivate);
					//CCurveRingPrivate* mpPrivate;
					//friend class EarthView::World::Spatial::Geometry::Utility::CGeometryHelper;
				};
			}
		}
	}
}

#endif
