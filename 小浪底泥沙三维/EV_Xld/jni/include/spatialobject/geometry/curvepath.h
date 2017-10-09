#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CURVEPATH_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_CURVEPATH_H

#include "curve.h"
#include "coordinatesequence.h"
#include "envelope.h"
#include "linestring.h"

EV_DECLARE_GEOMETRY_CLASS_PRIVATE(CCurvePath);

EV_DECLARE_GEOMETRY_CLASS_UTILITY(CGeometryHelper);

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 曲线路径类，包含了多个曲线。
				/// 其中前一个曲线的尾节点，必须和后一个曲线首节点相连。
				/// </summary>
				class EV_GEOMETRY_DLL CCurvePath
					:public EarthView::World::Spatial::Geometry::CCurve
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCurvePath();
					CCurvePath(_in const EarthView::World::Spatial::Geometry::CCoordinateSequence& coords);
					CCurvePath(_in const EarthView::World::Spatial::Geometry::CCoordinate* cpy_coords,ev_size_t size);
					CCurvePath(_in const EarthView::World::Spatial::Geometry::CPoint* cpy_points,ev_size_t size);
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CCurvePath();
ev_private:
					/// <summary>
					/// 创建构造函数
					/// </summary>
					/// <param name="pList">参数列表</param>
					/// <returns></returns>
					CCurvePath(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 获取子曲线的数目
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_uint32 getCurveCount() const;
					/// <summary>
					/// 获取指定索引的曲线对象
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					virtual _extfree EarthView::World::Spatial::Geometry::CCurve* getCurve(ev_uint32 index) const;
					/// <summary>
					/// 获取指定索引的曲线对象
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					virtual const EarthView::World::Spatial::Geometry::CCurve* getCurveRef(ev_uint32 index) const;
					/// <summary>
					/// 添加指定曲线对象到指定索引处
					/// </summary>
					/// <param name="curve">曲线对象</param>
					/// <param name="index">索引</param>
					/// <returns></returns>
					virtual ev_int32 add(const EarthView::World::Spatial::Geometry::CCurve & curve,ev_int32 index);
					/// <summary>
					/// 删除指定索引处的指定数目曲线对象
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="size">数目</param>
					/// <returns>返回成功删除数目</returns>
					virtual ev_int32 remove(ev_uint32 index,ev_int32 size);
					/// <summary>
					/// 清楚所有Path
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_int32 clear();

					EarthView::World::Spatial::Geometry::CCurvePath clone2() const;

					virtual ev_int32 replace(const EarthView::World::Spatial::Geometry::CCurve& curve,ev_uint32 index);
					///*********************************************************/
					///*****************EarthView::World::Spatial::Geometry::CCurve 接口函数实现*******************/
					///*********************************************************/
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

					virtual _extfree EarthView::World::Spatial::Geometry::CLineString* toLineString(ev_uint32 smooth) const;
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
					/// 统一设置Z值
					/// </summary>
					/// <param name="z">坐标轴Z值</param>
					/// <returns></returns>
					virtual ev_void makeZ(ev_real64 z);
					/// <summary> 
					/// 统一设置M值
					/// </summary>
					/// <param name="m">坐标轴M值</param>
					/// <returns></returns>
					virtual ev_void makeM(ev_real64 m);
					/// <summary> 
					/// 深度拷贝几何体对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>拷贝后的几何体对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;
					/// <summary> 
					/// 判断该几何体对象是否与指定几何体对象形状相同。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="tolerance">指定误差范围</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果相等，则返回true；否则，返回false</returns>
					virtual ev_bool isEquals(const EarthView::World::Spatial::Geometry::IGeometry* geom,ev_real64 tolerance,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
									
					/// <summary>
					/// 平移几何体，默认提供中心点平移
					/// </summary>
					/// <param name="x">X轴方向平移值</param>
					/// <param name="y">Y轴方向平移值</param>
					/// <param name="z">Z轴方向平移值</param>
					/// <returns></returns>
					virtual ev_void translate(_in ev_real64 x,_in ev_real64 y,_in ev_real64 z);
					/// <summary>
					/// 旋转几何体，默认提供包围盒中心点旋转
					/// </summary>
					/// <param name="xRef">旋转参考点X值</param>
					/// <param name="yRef">旋转参考点Y值</param>
					/// <param name="zRef">旋转参考点Z值</param>
					/// <param name="x">X轴方向旋转角度</param>
					/// <param name="y">Y轴方向旋转角度</param>
					/// <param name="z">Z轴方向旋转角度</param>
					/// <returns></returns>
					virtual ev_void rotate(_in ev_real64 xRef,_in ev_real64 yRef,_in ev_real64 zRef,_in ev_real64 xAngle,_in ev_real64 yAngle,_in ev_real64 zAngle);
					/// <summary>
					/// 旋转几何体，默认提供包围盒中心点缩放
					/// </summary>
					/// <param name="x">X轴方向缩放比例，[-1,1]</param>
					/// <param name="y">Y轴方向缩放比例，[-1,1]</param>
					/// <param name="z">Z轴方向缩放比例，[-1,1]</param>
					/// <returns></returns>
					virtual ev_void scale(_in ev_real64 xRef,_in ev_real64 yRef,_in ev_real64 zRef,_in ev_real64 x,_in ev_real64 y,_in ev_real64 z);
					/// <summary>
					/// 投影坐标转换，默认采取布尔莎算法。七参数不足7个，按默认为0处理。
					/// </summary>
					/// <param name="sr">新坐标系统</param>
					/// <param name="seven">七参数，顺序为：offsetX,offsetY,offsetZ,scaleX,scaleY,scaleZ,radio</param>
					/// <param name="count">七参数数目</param>
					/// <returns></returns>
					virtual ev_void projects(const EarthView::World::Spatial::Geometry::ISpatialReference * ref_sr,ev_real64 * sevenParam,ev_uint32 count);

					/// <summary>
					/// 设置路径坐标系
					/// </summary>
					/// <param name="ref_sr">坐标系</param>
					/// <returns></returns>
					virtual ev_void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);

					/// <summary>
					/// 更新
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void update();

					// Added by wangwei ,2012-12-22
					// 添加 编辑 接口
					/// <summary>
					/// 对称变换
					/// </summary>
					/// <param name="line">对称变换的参照线</param>
					/// <returns>变换后的对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* mirror(_in const EarthView::World::Spatial::Geometry::IGeometry* line) const;

					/// <summary>
					/// 分割
					/// </summary>
					/// <param name="pSplitGeom">分割几何图形（可以为点，线）</param>
					/// <returns>分割后得到的对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* split(_in const EarthView::World::Spatial::Geometry::IGeometry* pSplitGeom) const;

					/// <summary>
					/// 裁剪
					/// </summary>
					/// <param name="clipRegion">裁剪区域多边形</param>
					/// <returns>裁剪后得到的对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* clip(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion) const;			

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
					/// 移动一个点
					/// </summary>
					/// <param name="frmPoint">待移动的点</param>
					/// <param name="toPoint">目标点</param>
					/// <returns></returns>
					virtual ev_bool movePointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* frmPoint,_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_toPoint);
					/// <summary>
					/// 增加一个点
					/// </summary>
					/// <param name="point">待增加的点</param>
					/// <returns></returns>
					virtual ev_bool addPointTo(_in const EarthView::World::Spatial::Geometry::IGeometry* cpy_point);
					/// <summary>
					/// 删除一个点
					/// </summary>
					/// <param name="point">待删除的点</param>
					/// <returns></returns>
					virtual ev_bool deletePoint(_in const EarthView::World::Spatial::Geometry::IGeometry* point);

				protected:
					virtual ev_void recalculateEnvelope();

					virtual CEnvelope getEnvelope() const;

					virtual ev_void setZMarker(ev_bool z);
					virtual ev_void setMMarker(ev_bool m);

					ev_void clone2(EarthView::World::Spatial::Geometry::CCurvePath* path) const;
				public:
					CCurvePath(const CCurvePath& obj);
					EarthView::World::Spatial::Geometry::CCurvePath& operator=(const EarthView::World::Spatial::Geometry::CCurvePath& obj);
ev_private:
					CCurvePath(EV_GEOMETY_PRIVATE_PREFIX::CCurvePathPrivate* objPrivate);
				private:					
					EV_DEFINE_CLASS_PRIVATE(CCurvePath);
					friend class EarthView::World::Spatial::Geometry::Utility::CGeometryHelper;
				};
			}
		}
	}
}

#endif
