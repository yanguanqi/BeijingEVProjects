#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_BEZIERCURVE_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_BEZIERCURVE_H

#include "spatialinterface/ienvelope.h"
#include "spatialinterface/igeometry.h"

#include "curve.h"
#include "linestring.h"

EV_DECLARE_GEOMETRY_CLASS_PRIVATE(CBezierCurve);

EV_DECLARE_GEOMETRY_CLASS_UTILITY(CGeometryHelper);

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 贝赛尔曲线类
				/// </summary>
				class EV_GEOMETRY_DLL CBezierCurve
					:public EarthView::World::Spatial::Geometry::CCurve
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CBezierCurve();
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="fromPoint">起始点</param>
					/// <param name="toPoint">结束点</param>
					/// <param name="fromControlPoint">起始控制点</param>
					/// <param name="toControlPoint">起始控制点点</param>
					/// <returns></returns>
					CBezierCurve(_in const EarthView::World::Spatial::Geometry::CPoint& fromPoint,_in const EarthView::World::Spatial::Geometry::CPoint& toPoint,
						_in const EarthView::World::Spatial::Geometry::CPoint& fromControlPoint,_in const EarthView::World::Spatial::Geometry::CPoint& toControlPoint);
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CBezierCurve();
ev_private:
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="fromPoint">起始点</param>					
					/// <param name="toPoint">结束点</param>
					/// <param name="fromControlPoint">起始控制点</param>
					/// <param name="toControlPoint">起始控制点点</param>
					/// <returns></returns>
					CBezierCurve(_in const CCoordinate& fromCoordinate,_in const CCoordinate& toCoordinate,
						_in const CCoordinate& fromControlCoordinate,_in const CCoordinate& toControlCoordinate);
					/// <summary>
					/// 创建构造函数
					/// </summary>
					/// <param name="pList">参数列表</param>
					/// <returns></returns>
					CBezierCurve(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 获取起始点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getFromPoint() const;
					EarthView::World::Spatial::Geometry::CPoint  getFromPoint2() const;
					/// <summary>
					/// 获取结束点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getToPoint() const;
					EarthView::World::Spatial::Geometry::CPoint  getToPoint2() const;
					/// <summary>
					/// 获取起始点的控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getFromControlPoint() const;
					EarthView::World::Spatial::Geometry::CPoint  getFromControlPoint2() const;
					/// <summary>
					/// 获取结束点控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getToControlPoint() const;
					EarthView::World::Spatial::Geometry::CPoint  getToControlPoint2() const;
					/// <summary>
					/// 设置起始点
					/// </summary>
					/// <param name="point">起始点</param>
					/// <returns></returns>
					ev_void setFromPoint(_in const EarthView::World::Spatial::Geometry::CPoint& point);
					/// <summary>
					/// 设置结束点
					/// </summary>
					/// <param name="point">结束点</param>
					/// <returns></returns>
					ev_void setToPoint(_in const EarthView::World::Spatial::Geometry::CPoint& point);
					/// <summary>
					/// 设置起始点控制点
					/// </summary>
					/// <param name="point">起始点的控制点</param>
					/// <returns></returns>
					ev_void setFromControlPoint(_in const EarthView::World::Spatial::Geometry::CPoint& point);
					/// <summary>
					/// 设置结束点的控制点
					/// </summary>
					/// <param name="point">结束点的控制点</param>
					/// <returns></returns>
					ev_void setToControlPoint(_in const EarthView::World::Spatial::Geometry::CPoint& point);
					/// <summary>
					/// 转换成线串
					/// </summary>
					/// <param name="smooth">平滑度[0,1,2,3,4,5].参数越大，平滑度越高</param>
					/// <returns>线串对象</returns>
					virtual EarthView::World::Spatial::Geometry::CLineString  toLineString2(ev_uint32 smooth) const;
					EarthView::World::Spatial::Geometry::CBezierCurve clone2() const;
					/***********************************************************/
                    //*********************Curve接口实现********************/
					/***********************************************************/
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
					//virtual ev_bool isRing() const;
					/// <summary>
					/// 反转曲线环
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功，返回true;否则，返回false</returns>
					virtual ev_bool reverse() ;

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
					//virtual EarthView::World::Spatial::Geometry::IGeometry* getBoundary() const;
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
					//virtual EarthView::World::Spatial::Geometry::IGeometry* locateAlong(ev_real64 m) const;
					//virtual EarthView::World::Spatial::Geometry::IGeometry* locateBetween(ev_real64 minM,ev_real64 maxM) const;
					/// <summary> 
					/// 深度拷贝几何体对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>拷贝后的几何体对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* clone() const;
					//virtual EVString toString(EVDataFormatType type) const;
					//virtual ev_void toStream(EVString type, EarthView::World::Core::CDataStream & stream) cosnt;
					
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
					virtual ev_void projects(const EarthView::World::Spatial::Geometry::ISpatialReference * sr,ev_real64 * sevenParam,ev_uint32 count);
					/// <summary>
					/// 更新内部参数，用于setXX方法后，调用。
					/// 一般用于多处修改后，统一更新处理。
					/// </summary>
					/// <returns></returns>
					virtual ev_void update();

					// Added by wangwei ,2012-12-22
					// 添加 编辑 接口

					/// <summary>
					/// 根据指定线，得到镜像几何体。
					/// </summary>
					/// <param name="line">两点线</param>
					/// <returns>镜像几何体</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* mirror(const EarthView::World::Spatial::Geometry::IGeometry* line) const;
					/// <summary>
					/// 用指定几何体，分割现有几何体，得到一个几何体集合
					/// </summary>
					/// <param name="splitLine">两点线</param>
					/// <returns>分割后的几何体集合</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* split(const EarthView::World::Spatial::Geometry::IGeometry* splitLine) const;
					/// <summary>
					/// 用指定的区域，分割现有几何体，得到分割
					/// </summary>
					/// <param name="">结束点的控制点</param>
					/// <returns></returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* clip(const EarthView::World::Spatial::Geometry::IGeometry* clipRegion) const;

					/// <summary>
					/// 根据指定点，捕捉几何体上的点，可以是顶点，也可以是线上一点，由snap进行区分
					/// </summary>
					/// <param name="point">指定点</param>
					/// <param name="tolerance">容差范围</param>
					/// <param name="snap">输出，捕捉点的类型</param>
					/// <returns>捕捉点</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(const EarthView::World::Spatial::Geometry::IGeometry* point,ev_real64 tolerance,EarthView::World::Spatial::Geometry::EVGeometrySnapType & snap) const;
					/// <summary>
					/// 根据指定点， 捕捉几何体上的边
					/// </summary>
					/// <param name="point">指定点</param>
					/// <param name="tolerance">容差范围</param>
					/// <returns>单一曲线，可以是Line，也可以是Curve</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* snapToSegment(const EarthView::World::Spatial::Geometry::IGeometry* point,ev_real64 tolerance) const;
					/// <summary>
					/// 移动几何体上顶点到指定位置
					/// </summary>
					/// <param name="frmPoint">需要移动的点，该点必须上几何体上的顶点</param>
					/// <param name="toPoint">移动的位置</param>
					/// <returns>移动成功，返回true；否则，返回false</returns>
					virtual ev_bool movePointTo(const EarthView::World::Spatial::Geometry::IGeometry* frmPoint,const EarthView::World::Spatial::Geometry::IGeometry* toPoint);
					/// <summary>
					/// 添加点到几何体
					/// </summary>
					/// <param name="point">添加点，该点必须和几何体上的某一边相交</param>
					/// <returns>添加成功，返回true；否则，返回false</returns>
					virtual ev_bool addPointTo(const EarthView::World::Spatial::Geometry::IGeometry* point);
					/// <summary>
					/// 删除几何体上的点
					/// </summary>
					/// <param name="point">需要删除的点，该点必须上几何体上的顶点</param>
					/// <returns>删除成功，返回true；否则，返回false</returns>
					virtual ev_bool deletePoint(const EarthView::World::Spatial::Geometry::IGeometry* point);
ev_private:
					/// <summary>
					/// 获取起始点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCoordinate* getFromCoordinateRef();
					/// <summary>
					/// 获取起始点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const CCoordinate* getFromCoordinateRef() const;
					/// <summary>
					/// 获取结束点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCoordinate* getToCoordinateRef();
					/// <summary>
					/// 获取结束点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const CCoordinate* getToCoordinateRef() const;
					/// <summary>
					/// 获取起始点的控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCoordinate* getFromControlCoordinateRef();
					/// <summary>
					/// 获取起始点的控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const CCoordinate* getFromControlCoordinateRef() const;
					/// <summary>
					/// 获取结束点控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CCoordinate* getToControlCoordinateRef();
					/// <summary>
					/// 获取结束点控制点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const CCoordinate* getToControlCoordinateRef() const;
				protected:
				    virtual CEnvelope getEnvelope() const;
					 virtual ev_void recalculateEnvelope();

					ev_void clone2(EarthView::World::Spatial::Geometry::CBezierCurve* bezierCurve)const;
				public:
					/// <summary>
					/// 默认拷贝函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CBezierCurve(_in const CBezierCurve & obj);
					EarthView::World::Spatial::Geometry::CBezierCurve& operator=(_in const EarthView::World::Spatial::Geometry::CBezierCurve& obj);
ev_private:
					CBezierCurve(EV_GEOMETY_PRIVATE_PREFIX::CBezierCurvePrivate* p);
				private:
					EV_DEFINE_CLASS_PRIVATE(CBezierCurve);
					//EV_FRIEND_CLASS(CGeometryHelper);
					friend class EarthView::World::Spatial::Geometry::Utility::CGeometryHelper;
				};
			}
		}
	}
}

#endif
