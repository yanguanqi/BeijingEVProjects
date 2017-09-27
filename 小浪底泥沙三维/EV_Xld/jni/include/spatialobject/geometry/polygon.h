#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_POLYGON_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_POLYGON_H

#include "surface.h"
#include "curvering.h"
#include "geom_define.h"
#include "envelope.h"

EV_DECLARE_GEOMETRY_CLASS_PRIVATE(CPolygon);

EV_DECLARE_GEOMETRY_CLASS_UTILITY(CGeometryHelper);

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				enum EVPolygonType
				{
					PT_COMPOUND                    = 0,
					PT_CIRCLE                      = 1,
					PT_CIRCLE_CHORD                = 2,
					PT_CIRCLE_SECTOR               = 3,
					PT_ELLIPSE                     = 11,
					PT_ELLIPTIC_CHORD              = 12,
					PT_ELLIPTIC_SECTOR             = 13,
					PT_TRIANGLE                     = 21,
					PT_RECTANGLE                   = 31,
					PT_EQUILATERAL                 = 41,
				};
				/// <summary>
				/// 多边形类
				/// </summary>
				class EV_GEOMETRY_DLL CPolygon 
					:public EarthView::World::Spatial::Geometry::CSurface
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CPolygon();
					CPolygon(const EarthView::World::Spatial::Geometry::CCoordinateSequence& coords);
					CPolygon(const EarthView::World::Spatial::Geometry::CPoint* cpy_point,ev_uint32 size);
					CPolygon(const EarthView::World::Spatial::Geometry::CCoordinate* cpy_coords,ev_uint32 size);
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CPolygon();
ev_private:
					CPolygon(EarthView::World::Core::CNameValuePairList * pList);
					CPolygon(const EarthView::World::Spatial::Geometry::CPoint* cpy_points[],ev_uint32 size);
				public:
					/// <summary>
					/// 获取外环数目
					/// </summary>
					/// <param name=""></param>
					/// <returns>外环数目</returns>
					ev_uint32 getExteriorRingCount() const;
					/// <summary>
					/// 获取外环
					/// </summary>
					/// <param name="index">索引位置</param>
					/// <returns>外环</returns>
					const EarthView::World::Spatial::Geometry::CCurveRing* getExteriorRing(ev_uint32 index) const;
					/// <summary>
					/// 获取指定外环的内环数目
					/// </summary>
					/// <param name="exteriorIndex">外环索引位置</param>
					/// <returns>内环数目</returns>
					ev_uint32 getInteriorRingCount(ev_uint32 exteriorIndex) const;
					/// <summary>
					/// 获取指定外环的指定索引内环
					/// </summary>
					/// <param name="exteriorIndex">外环索引位置</param>
					/// <param name="interiorIndex">内环索引位置</param>
					/// <returns>内环</returns>
					const EarthView::World::Spatial::Geometry::CCurveRing* getInteriorRing(ev_uint32 exteriorIndex,ev_uint32 interiorIndex) const;
					/// <summary>
					/// 获取曲线环数目
					/// </summary>
					/// <param name=""></param>
					/// <returns>曲线环数目</returns>
					ev_uint32 getCurveRingCount() const;
					/// <summary>
					/// 获取曲线环
					/// </summary>
					/// <param name="index">索引位置</param>
					/// <returns>曲线环</returns>
					_extfree EarthView::World::Spatial::Geometry::CCurveRing* getCurveRing(ev_uint32 index) const;
					/// <summary>
					/// 获取曲线环
					/// </summary>
					/// <param name="index">索引位置</param>
					/// <returns>曲线环</returns>
					const EarthView::World::Spatial::Geometry::CCurveRing* getCurveRingRef(ev_uint32 index) const; 

					/// <summary>
					/// 添加指定外环
					/// </summary>
					/// <param name="path">指定曲线环</param>
					/// <returns>成功添加，返回true;否则，返回false</returns>
					virtual ev_bool addExteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing & path);
					/// <summary>
					/// 添加指定外环中的指定索引内环
					/// </summary>
					/// <param name="path">指定曲线环</param>
					/// <param name="exteriorIndex">指定外环索引</param>
					/// <returns>成功添加，返回true;否则，返回false</returns>
					virtual ev_bool addInteriorRing(const EarthView::World::Spatial::Geometry::CCurveRing & path,ev_uint32 exteriorIndex);
					/// <summary>
					/// 移除指定外环
					/// </summary>
					/// <param name="exteriorIndex">指定外环索引</param>
					/// <returns>成功删除，返回true;否则，返回false</returns>
					virtual ev_bool removeExteriorRing(ev_uint32 exteriorIndex);
					/// <summary>
					/// 移除指定外环中的指定索引内环
					/// </summary>
					/// <param name="exteriorIndex">指定外环索引</param>
					/// <param name="interiorIndex">指定内环索引</param>
					/// <returns>成功删除，返回true;否则，返回false</returns>
					virtual ev_bool removeInteriorRing(ev_uint32 exteriorIndex, ev_uint32 interiorIndex);
					/// <summary>
					/// 清理所有曲线环
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_uint32 clearAllRing();
					/// <summary>
					/// 清理外环中所有内环
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_uint32 clearInteriorRing(ev_uint32 exteriorIndex);

					/// <summary>
					/// 获取面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>表面面积</returns>
					virtual ev_real64 getArea() const;

					EarthView::World::Spatial::Geometry::CPolygon clone2() const;

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
					virtual ev_void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
					virtual ev_void update();
					/// <summary> 
					/// 判断几何体是否为简单几何体。
					/// 所谓简单几何体，就是几何体对象没有自相交情况。
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果为真，返回true；否则，返回false</returns>
					virtual ev_bool isSimple() const;
					/// <summary> 
					/// 把复杂几何体重新切分，组成简单几何体对象。
					/// 内部会调用isSimple()方法，判断是否为简单几何体。
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void simplify();

					// Added by wangwei ,2012-12-22
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
					ev_void clone2(EarthView::World::Spatial::Geometry::CPolygon* polygon)const;
					virtual ev_void recalculateEnvelope();
					virtual CEnvelope getEnvelope() const;
					virtual ev_void setZMarker(ev_bool z);
					virtual ev_void setMMarker(ev_bool m);
				public:
					CPolygon(const CPolygon & obj);
					EarthView::World::Spatial::Geometry::CPolygon& operator=(const EarthView::World::Spatial::Geometry::CPolygon & obj);
ev_private:
					CPolygon(EV_GEOMETY_PRIVATE_PREFIX::CPolygonPrivate* p);
				private:
					EV_DEFINE_CLASS_PRIVATE(CPolygon)
					friend class EarthView::World::Spatial::Geometry::Utility::CGeometryHelper;
				};
			}
		}
	}
}

#endif
