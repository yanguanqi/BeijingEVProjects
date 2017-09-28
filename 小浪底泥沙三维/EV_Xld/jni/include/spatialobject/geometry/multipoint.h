#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_MULTIPOINT_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_MULTIPOINT_H

#include "geometry.h"
#include "point.h"



namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				namespace Private{
					class CMultiPointPrivate;
				}
				namespace Utility{
					class CGeometryHelper;

				}
				/// <summary>
				/// 多点类，可以包含多个点对象
				/// </summary>
				class EV_GEOMETRY_DLL CMultiPoint
					:public EarthView::World::Spatial::Geometry::CGeometry
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CMultiPoint();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CMultiPoint();					
ev_private:
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CMultiPoint(const EarthView::World::Spatial::Geometry::CPoint* cpy_points[],ev_uint32 size);
					/// <summary>
					/// 创建构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CMultiPoint(EarthView::World::Core::CNameValuePairList* pList);
					/// <summary>
					/// 添加点
					/// </summary>
					/// <param name="points">点数组</param>
					/// <param name="index">插入位置索引</param>
					/// <returns></returns>
					ev_uint32 add(const EarthView::World::Spatial::Geometry::CPoint* cpy_points[],ev_uint32 size,ev_int32 index);
				public:
					/// <summary>
					/// 获取几何点数目
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_uint32 getCount() const;
					/// <summary>
					/// 获取指定索引的几何点对象
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <returns>超出索引范围，抛出异常</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getPoint(ev_uint32 index) const;
					EarthView::World::Spatial::Geometry::CPoint  getPoint2(ev_uint32 index) const;
					/// <summary>
					/// 添加几何点列表指定索引处
					/// </summary>
					/// <param name="points">几何点列表</param>
					/// <param name="size">几何点数目</param>
					/// <param name="index">指定索引</param>
					/// <returns>超出索引范围，抛出异常</returns>
					ev_uint32 add(const EarthView::World::Spatial::Geometry::CPoint* cpy_points,ev_int32 index);
					ev_uint32 add(const EarthView::World::Spatial::Geometry::CCoordinate& coord,ev_int32 index);
					/// <summary>
					/// 移除指定索引处的指定数目几何点
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <param name="size">几何点数目,size = -1,移除余下所有几何点</param>
					/// <returns>超出索引范围，抛出异常</returns>
					ev_uint32 remove(ev_uint32 index,ev_int32 size);
					/// <summary>
					/// 把指定索引几何点移动指定位置，pos > 0向上移动；pos<0 向下移动。
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <param name="pos">移动位移数目，大于0，向0方向移动，否则，向另外一个方向移动</param>
					/// <returns>超出索引范围，抛出异常</returns>
					ev_uint32 move(ev_uint32 index,ev_uint32 pos);
					/// <summary>
					/// 移除所有几何点
					/// </summary>
					/// <param name=""></param>
					/// <param name=""></param>
					/// <returns>移除几何点数目</returns>
					ev_uint32 clear();

					EarthView::World::Spatial::Geometry::CMultiPoint clone2() const;

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
					/// 设置参考坐标系
					/// </summary>
					/// <param name="sr">参考坐标系对象</param>
					/// <returns></returns>
					//virtual ev_void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr);
					/// <summary>
					/// 更新对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					//virtual ev_void update();

					// 添加 编辑 接口
					/// <summary>
					/// 对称变换
					/// </summary>
					/// <param name="line">对称变换的参照线</param>
					/// <returns>变换后的对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* mirror(_in const EarthView::World::Spatial::Geometry::IGeometry* line) const;

					/// <summary>
					/// 裁剪
					/// </summary>
					/// <param name="clipRegion">裁剪区域多边形</param>
					/// <returns>裁剪后得到的对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* clip(_in const EarthView::World::Spatial::Geometry::IGeometry* clipRegion) const;		

					/// <summary>
					/// 捕捉点
					/// </summary>
					/// <param name="point">输入点</param>
					/// <param name="tolerance">捕捉距离上限</param>
					/// <param name="snap">捕捉类型参数</param>
					/// <returns>捕捉到的点</returns>
					_extfree EarthView::World::Spatial::Geometry::IGeometry* snapToPoint(const EarthView::World::Spatial::Geometry::IGeometry* point,ev_real64 tolerance,EarthView::World::Spatial::Geometry::EVGeometrySnapType & snap) const;
ev_private:
					/// <summary>
					/// 获取指定索引的几何点
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <returns>超出索引范围，返回NULL</returns>
					EarthView::World::Spatial::Geometry::CPoint* getPointRef(ev_uint32 index);
					/// <summary>
					/// 获取指定索引的几何点
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <returns>超出索引范围，返回NULL</returns>
					const EarthView::World::Spatial::Geometry::CPoint* getPointRef(ev_uint32 index) const;
                protected:
				    /// <summary>
					/// 重新计算包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>                    
                    virtual ev_void recalculateEnvelope();
                    /// <summary>
					/// 序列化成Geos的WKB格式
					/// </summary>
					/// <param name="stream">GeosWKB格式流</param>
					/// <returns></returns>
                    virtual CEnvelope getEnvelope() const;

					ev_void clone2(EarthView::World::Spatial::Geometry::CMultiPoint* multiPoint)const;
				public:
					/// <summary>
					/// 默认拷贝构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CMultiPoint(const CMultiPoint& obj);
					EarthView::World::Spatial::Geometry::CMultiPoint& operator=(const EarthView::World::Spatial::Geometry::CMultiPoint& obj);
ev_private:
					CMultiPoint(EV_GEOMETY_PRIVATE_PREFIX::CMultiPointPrivate* ref_p);
				private:
					EV_DEFINE_CLASS_PRIVATE(CMultiPoint);
					friend class EarthView::World::Spatial::Geometry::Utility::CGeometryHelper;
				};
			}
		}
	}
}

#endif
