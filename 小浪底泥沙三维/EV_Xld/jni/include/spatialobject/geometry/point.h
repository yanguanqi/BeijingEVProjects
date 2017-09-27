#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_POINT_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_POINT_H

#include "geometry.h"
#include "coordinate.h"
#include "envelope.h"

EV_DECLARE_GEOMETRY_CLASS_PRIVATE(CPoint);

EV_DECLARE_GEOMETRY_CLASS_UTILITY(CGeometryHelper);

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 几何体点类，该点类是三维点类。
				/// </summary>
				class EV_GEOMETRY_DLL CPoint
					:public EarthView::World::Spatial::Geometry::CGeometry
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CPoint();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CPoint();
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="x">X值</param>
					/// <param name="y">Y值</param>
					/// <returns></returns>
					CPoint(_in ev_real64 x,_in ev_real64 y);
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="x">X值</param>
					/// <param name="y">Y值</param>
					/// <param name="z">Z值</param>
					/// <returns></returns>
					CPoint(_in ev_real64 x,_in ev_real64 y,_in ev_real64 z);
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="x">X值</param>
					/// <param name="y">Y值</param>
					/// <param name="z">Z值</param>
					/// <param name="m">M值</param>
					/// <returns></returns>
					CPoint(_in ev_real64 x,_in ev_real64 y,_in ev_real64 z,_in ev_real64 m);
ev_private:
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="coord">坐标点</param>
					/// <returns></returns>
					CPoint(const EarthView::World::Spatial::Geometry::CCoordinate & coord);
					/// <summary>
					/// 创建构造函数
					/// </summary>
					/// <param name="pList">参数列表对</param>
					/// <returns></returns>
					CPoint(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 获取X值
					/// </summary>
					/// <param name=""></param>
					/// <returns>X值</returns>
					ev_real64 getX() const;
					/// <summary>
					/// 获取Y值
					/// </summary>
					/// <param name=""></param>
					/// <returns>Y值</returns>
					ev_real64 getY() const;
					/// <summary>
					/// 获取Z值
					/// </summary>
					/// <param name=""></param>
					/// <returns>Z值</returns>
					ev_real64 getZ() const;
					/// <summary>
					/// 获取M值
					/// </summary>
					/// <param name=""></param>
					/// <returns>M值</returns>
					ev_real64 getM() const;
					/// <summary>
					/// 设置X值
					/// </summary>
					/// <param name="value">X值</param>
					/// <returns></returns>
					ev_void setX(_in ev_real64 value);
					/// <summary>
					/// 设置Y值
					/// </summary>
					/// <param name="value">Y值</param>
					/// <returns></returns>
					ev_void setY(_in ev_real64 value);
					/// <summary>
					/// 设置Z值
					/// </summary>
					/// <param name="vlaue">Z值</param>
					/// <returns></returns>
					ev_void setZ(_in ev_real64 value);
					/// <summary>
					/// 设置M值
					/// </summary>
					/// <param name="value">M值</param>
					/// <returns></returns>
					ev_void setM(_in ev_real64 value);
					/// <summary>
					/// 设置XY坐标
					/// </summary>
					/// <param name="x">X值</param>
					/// <param name="y">Y值</param>
					/// <returns></returns>
					ev_void setPoint(_in ev_real64 x,_in ev_real64 y);
					/// <summary>
					/// 设置XYZ坐标
					/// </summary>
					/// <param name="x">X值</param>
					/// <param name="y">Y值</param>
					/// <param name="z">Z值</param>
					/// <returns></returns>
					ev_void setPoint(_in ev_real64 x,_in ev_real64 y,_in ev_real64 z);

					ev_void setPoint(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord);

					EarthView::World::Spatial::Geometry::CCoordinate getCoordinate() const;
					
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
					/// 序列化成WKB格式流
					/// </summary>
					/// <param name="stream">数据流</param>
					/// <returns></returns>
					//virtual ev_void toWKB(EarthView::World::Core::CDataStream & stream) const;
					/// <summary>
					/// 序列化成WKT格式字符串
					/// </summary>
					/// <param name="wkt">字符串</param>
					/// <returns></returns>
                    //virtual ev_void toWKT(EVString & wkt) const;
					/// <summary>
					/// 序列化成数据流
					/// </summary>
					/// <param name="stream">数据流</param>
					/// <returns></returns>
					//virtual ev_void toStream(EarthView::World::Core::CDataStream & stream) const;

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

					// Added by wangwei ,2012-12-22
					// 添加 编辑 接口
					/// <summary>
					/// 对称变换
					/// </summary>
					/// <param name="line">对称变换的参照线</param>
					/// <returns>变换后的对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* mirror(_in const EarthView::World::Spatial::Geometry::IGeometry* line) const;
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
				ev_private:
					/// <summary>
					/// 获取坐标点对象指针，内部指针，外部不用释放.
					/// 从此方法修改内部参数，效率较高。
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Geometry::CCoordinate* getCoordinateRef();
					/// <summary>
					/// 获取坐标点对象指针，内部指针，外部不用释放。
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EarthView::World::Spatial::Geometry::CCoordinate* getCoordinateRef() const;
				public:
					
					EarthView::World::Spatial::Geometry::CPoint clone2() const;
					CPoint(const CPoint& obj);
					EarthView::World::Spatial::Geometry::CPoint& operator=(const EarthView::World::Spatial::Geometry::CPoint& obj);		
ev_private:
					CPoint(EV_GEOMETY_PRIVATE_PREFIX::CPointPrivate* obj);

				protected:
					/// <summary>
					/// 重新计算包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>                    
                    virtual ev_void recalculateEnvelope();
					ev_void clone2(EarthView::World::Spatial::Geometry::CPoint* pt)const;
					virtual CEnvelope getEnvelope() const;
				private:
					EV_DEFINE_CLASS_PRIVATE(CPoint);
					friend class EarthView::World::Spatial::Geometry::Utility::CGeometryHelper;
				};
			}
		}
	}
}

#endif
