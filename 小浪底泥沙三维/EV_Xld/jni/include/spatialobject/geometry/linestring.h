#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_LINESTRING_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_LINESTRING_H

#include "curve.h"
#include "coordinate.h"
#include "coordinatesequence.h"
#include "envelope.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				namespace Private{
					class CLineStringPrivate;
				}
				namespace Utility{
					class CGeometryHelper;

				}
				/// <summary>
				/// 折线类，描述了一组首尾相连的点串。
				/// </summary>
				class EV_GEOMETRY_DLL CLineString
					:public EarthView::World::Spatial::Geometry::CCurve
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLineString();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CLineString();
					
ev_private:
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="points">几何体点列表</param>
					/// <param name="size">几何点数目</param>
					/// <returns></returns>
					CLineString(_in const EarthView::World::Spatial::Geometry::CPoint* cpy_points[],_in ev_uint32 size);
					/// <summary>
					/// 参数构造函数
					/// </summary>
					/// <param name="coords">坐标点列表</param>
					/// <param name="size">坐标点数目</param>
					/// <returns></returns>
					CLineString(_in const EarthView::World::Spatial::Geometry::CCoordinate* cpy_coords[],_in ev_uint32 size);
					/// <summary>
					/// 创建构造函数
					/// </summary>
					/// <param name="pList">参数键值对</param>
					/// <returns></returns>
					CLineString(_in EarthView::World::Core::CNameValuePairList* pList);
					/// <summary>
					/// 添加坐标点列表到指定索引处
					/// </summary>
					/// <param name="coords">指定坐标点列表</param>
					/// <param name="count">坐标点数目</param>
					/// <param name="index">插入索引位置</param>
					/// <returns></returns>
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CCoordinate* cpy_coords[],_in ev_uint32 count,_in ev_int32 index);
					/// <summary>
					/// 添加几何点列表到指定索引处
					/// </summary>
					/// <param name="coords">指定几何点列表</param>
					/// <param name="count">几何点数目</param>
					/// <param name="index">插入索引位置</param>
					/// <returns></returns>
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CPoint* cpy_points[],_in ev_uint32 count,_in ev_int32 index);
				public:
					/// <summary>
					/// 获取指定索引的几何点
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <returns>超出范围，则返回NULL</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getPoint(_in ev_uint32 index) const;
					EarthView::World::Spatial::Geometry::CPoint  getPoint2(_in ev_uint32 index) const;
					/// <summary>
					/// 获取几何点数目
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_uint32 getCount() const;					
					/// <summary>
					/// 添加坐标点到指定索引
					/// </summary>
					/// <param name="coord">坐标点</param>
					/// <param name="index">插入索引位置</param>
					/// <returns></returns>
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord,_in ev_int32 index);
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CCoordinate* cpy_coords, _in ev_uint32 size,_in ev_int32 index);
					/// <summary>
					/// 添加几何点到指定索引处
					/// </summary>
					/// <param name="point">几何点</param>
					/// <param name="index">插入索引位置</param>
					/// <returns></returns>
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CPoint& point,_in ev_int32 index);

					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CPoint* cpy_points, _in ev_uint32 size,_in ev_int32 index);
					/// <summary>
					/// 添加坐标序列到指定索引处
					/// </summary>
					/// <param name="coords">指定坐标序列</param>
					/// <param name="index">插入索引位置</param>
					/// <returns></returns>
					virtual ev_uint32 add(_in const EarthView::World::Spatial::Geometry::CCoordinateSequence& coords,_in ev_int32 index);

					virtual ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord,_in ev_uint32 index);
					virtual ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::CPoint& point,_in ev_uint32 index);
					virtual ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::CCoordinate* coords, _in ev_size_t size,_in ev_uint32 index);
					virtual ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::CPoint* cpy_points, _in ev_size_t size,_in ev_uint32 index);
					virtual ev_uint32 replace(_in const EarthView::World::Spatial::Geometry::CCoordinateSequence& coord,_in ev_uint32 index);
					/// <summary>
					/// 移除指定索引处的指定数目点
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <param name="count">指定数目</param>
					/// <returns></returns>
					virtual ev_uint32 remove(_in ev_uint32 index,_in ev_uint32 count);
					/// <summary>
					/// 查询指定点
					/// </summary>
					/// <param name="point">指定几何点</param>
					/// <param name="tolerance">容限范围</param>
					/// <returns>如果存在，则返回索引；否则，返回-1</returns>
					virtual ev_int32 queryPoint(_in const EarthView::World::Spatial::Geometry::CPoint& point,_in ev_real64 tolerance) const;

					virtual ev_int32 queryPoint(_in const EarthView::World::Spatial::Geometry::CCoordinate& coord,_in ev_real64 tolerance) const;

					EarthView::World::Spatial::Geometry::CLineString clone2() const;
					/***********************************************************/
                    //*********************Curve接口实现********************/
					/***********************************************************/

					/// <summary>
					/// 获取起始点
					/// </summary>
					/// <param name=""></param>
					/// <returns>起始点</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getStartPoint() const;
					EarthView::World::Spatial::Geometry::CPoint  getStartPoint2() const;
					/// <summary>
					/// 获取结尾点
					/// </summary>
					/// <param name=""></param>
					/// <returns>结尾点</returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getEndPoint() const;
					EarthView::World::Spatial::Geometry::CPoint  getEndPoint2() const;
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
					virtual ev_void projects(const EarthView::World::Spatial::Geometry::ISpatialReference * sr,ev_real64 * sevenParam,ev_uint32 count);
					/// <summary>
					/// 更新对象
					/// </summary>
					/// <returns></returns>
					virtual ev_void update();

					/******************** Added by wangwei ,2012-12-22 **************/
					/************************** 添加编辑接口 ************************/
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
					/// 平滑
					/// </summary>
					/// <param name="tolerance">最大的容差</param>
					/// <param name="dimType">当前几何的维度</param>
					/// <returns>捕捉到的线段</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* smooth(ev_real64 tolerance, EarthView::World::Spatial::Geometry::EVDimensionType dimType) const;

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
					/*************************** end ******************************/
ev_private:
					/// <summary>
					/// 获取坐标序列，返回内部指针，外部不用释放。
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Geometry::CCoordinateSequence* getCoordinateSequenceRef();
					EarthView::World::Spatial::Geometry::CCoordinateSequence getCoordinateSequence()const;
					/// <summary>
					/// 获取坐标序列，返回内部指针，外部不用释放。
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual const EarthView::World::Spatial::Geometry::CCoordinateSequence* getCoordinateSequenceRef() const;
				protected:
					/// <summary>
					/// 序列化成Geos的WKB格式
					/// </summary>
					/// <param name="stream">GeosWKB格式流</param>
					/// <returns></returns>
                    //virtual ev_void toGeoWKB(_inout EarthView::World::Core::CDataStream & stream) const;
					virtual ev_void recalculateEnvelope();

					virtual CEnvelope getEnvelope() const;
				protected:
					ev_void clone2(EarthView::World::Spatial::Geometry::CLineString* lineString)const;
				public:
					/// <summary>
					/// 默认拷贝构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLineString(_in const CLineString& obj);

					EarthView::World::Spatial::Geometry::CLineString& operator=(_in const EarthView::World::Spatial::Geometry::CLineString& obj);
ev_private:
					CLineString(EV_GEOMETY_PRIVATE_PREFIX::CLineStringPrivate* ref_obj);
				private:
					EV_DEFINE_CLASS_PRIVATE(CLineString);
					friend class EarthView::World::Spatial::Geometry::Utility::CGeometryHelper;
				};
			}
		}
	}
}

#endif
