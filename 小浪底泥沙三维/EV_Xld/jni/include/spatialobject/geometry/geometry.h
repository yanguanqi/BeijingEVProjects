#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_GEOMETRY_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_GEOMETRY_H

#include "spatialinterface/igeometry.h"
#include "spatialinterface/ienvelope.h"
#include "spatialinterface/ispatialreference.h"

#include "spatialobject/config.h"
#include "envelope.h"



namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				namespace Private{
					class CGeometryPrivate;
				}
				namespace Utility{
					class CGeometryHelper;

				}
				enum EVGeometrySnapType
				{
					GST_UNKNOWN,
					GST_VERTEX,
					GST_SEGMENT
				};
				/// <summary>
				/// 几何体类，是一个基类，用于描述几何体一般性信息。
				/// </summary>
				class EV_GEOMETRY_DLL CGeometry 
					: public EarthView::World::Spatial::Geometry::IGeometry
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CGeometry();
ev_private:
					CGeometry(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 获取几何体对象的最大外包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大外包围盒，const对象，原则上该对象是不能直接修改</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
					/// <summary>
					/// 获取几何体对象的空间参考系
					/// </summary>
					/// <param name=""></param>
					/// <returns>空间参考系，const对象指针，原则上该对象是不能直接修改</returns>
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const;
					/// <summary> 
					/// 获取几何体对象的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回几何体类型</returns>
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;
					/// <summary> 
					/// 获取几何体对象的WKB类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回几何体WKB类型</returns>
					virtual EarthView::World::Spatial::Geometry::EVWKBGeometryType getWKBGeometryType() const;
                    /// <summary> 
					/// 设置空间坐标系
					/// </summary>
					/// <param name="sr">空间坐标系</param>
					/// <returns></returns>
					virtual ev_void setSpatialReferenceRef(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				    /// <summary> 
					/// 判断几何体是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果为空，返回true；否则，返回false</returns>
					virtual ev_bool isEmpty() const;
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
					/// <summary> 
					/// 获取缓冲区
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* buffer(ev_real64 tolerance,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
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
					virtual ev_void makeZ(_in ev_real64 z);
					/// <summary> 
					/// 统一设置M值
					/// </summary>
					/// <param name="m">坐标轴M值</param>
					/// <returns></returns>
					virtual ev_void makeM(_in ev_real64 m);
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
					/// 判断该几何体对象是否包含指定几何体对象。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果包含，则返回true；否则，返回false</returns>
					virtual ev_bool isContains(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 判断该几何体对象是否与指定几何体对象形状相同。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="tolerance">指定误差范围</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果相等，则返回true；否则，返回false</returns>
					virtual ev_bool isEquals(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in ev_real64 tolerance,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 判断该几何体对象是否相离指定几何体对象。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果相离，则返回true；否则，返回false</returns>
					virtual ev_bool isDisjoin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 判断该几何体对象是否相交指定几何体对象。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果相交，则返回true；否则，返回false</returns>
					virtual ev_bool isIntersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 判断该几何体对象是否被包含在指定几何体对象。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果被包含，则返回true；否则，返回false</returns>
					virtual ev_bool isWithin(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 判断该几何体对象是否与指定几何体对象相接。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果相接，则返回true；否则，返回false</returns>
					virtual ev_bool isTouches(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 判断该几何体对象是否跨越指定几何体对象。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果跨越，则返回true；否则，返回false</returns>
					virtual ev_bool isCrosses(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 判断该几何体对象是否与指定几何体对象有空间关系。
					/// 空间关系，利用九交模型进行描述。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="relateMatrix">空间关系九交矩阵</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果有关系，则返回true；否则，返回false</returns>
					virtual ev_bool isRelates(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in EVString relateMatrix,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 获取凸多边形。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果几何体对象本身就是凸多边形，则返回自身；否则，重新获取新几何体对象。</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* convexHull(_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 获取几何体对象与指定几何体对象之间的不同部分，该不同部分只包含该几何体对象，不包含指定几何体对象
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>返回不同部分的几何体</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* difference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension)const;
					/// <summary> 
					/// 获取几何体对象与指定几何体对象之间最小距离。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>几何体之间的最小距离</returns>
					virtual ev_real64 distance(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
                    /// <summary> 
					/// 获取几何体对象与指定几何体对象之间的相交部分。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>返回不同部分的几何体</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* intersects(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 获取几何体对象与指定几何体对象之间的相叠加。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>返回不同部分的几何体</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* overlaps(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 获取几何体对象与指定几何体对象之间的不同部分，该部分包括该几何体对象也包括指定几何体对象
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>返回不同部分的几何体</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* symDifference(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 获取几何体对象与指定几何体对象合并后的新几何体对象
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>返回不同部分的几何体</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* unions(_in const EarthView::World::Spatial::Geometry::IGeometry* geom,_in EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
				    /// <summary>
					/// 序列化成WKB格式流
					/// </summary>
					/// <param name="stream">数据流</param>
					/// <returns></returns>
					virtual ev_void toWKB(_inout EarthView::World::Core::CDataStream & stream) const;
					/// <summary>
					/// 序列化成WKT格式字符串
					/// </summary>
					/// <param name="wkt">字符串</param>
					/// <returns></returns>
                    virtual ev_void toWKT(_inout EVString & wkt) const;
					/// <summary>
					/// 序列化成数据流
					/// </summary>
					/// <param name="stream">数据流</param>
					/// <returns></returns>
					virtual ev_void toStream(_inout EarthView::World::Core::CDataStream & stream) const;
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
					/// 判断对象的参数是否发生变化
					/// </summary>
					/// <param name=""></param>
					/// <returns>true，表示发生变化，false，表示没有变化</returns>
					virtual ev_bool isDirty() const;
					/// <summary>
					/// 设置对象的更新标识
					/// </summary>
					/// <param name="dirty">新的更新标识</param>
					/// <returns></returns>
					virtual ev_void setDirty(ev_bool dirty);
					/// <summary>
					/// 更新对象
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void update();
					/// <summary>
					/// 用道格拉斯算法对几何对象进行化简
					/// </summary>
					/// <param name="tolerance">距离容差</param>
					/// <param name="dimension">几何对象的维度</param>
					/// <returns>化简后的几何对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* resample(ev_real64 tolerance,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;

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
					/*************************** end ******************************/

					ev_bool hasZ() const;
					ev_bool hasM() const;
					
					ev_void setZFlag(_in ev_bool z,_in ev_bool isClear);
					ev_void setMFlag(_in ev_bool m,_in ev_bool isClear);

					/// <summary> 
					/// 判断几何体是否有效
					/// </summary>
					/// <returns>如果有效，返回true；否则，返回false</returns>
					virtual ev_bool isValid() const;

					ev_bool updateGeos()const;
					/// <summary>
					/// 获取内部中心点
					/// </summary>
					/// <param name="coor">内部中心点</param>
					/// <returns>获取成功返回true,否则返回false</returns>
					virtual ev_bool getInteriorPoint(EarthView::World::Spatial::Geometry::IGeometry* point) const;
					/// <summary> 
					/// 判断几何体是否为矩形面
					/// </summary>
					virtual ev_bool isRectangle() const ;
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CGeometry();
                    /// <summary>
					/// 重新计算包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>                    
                    virtual ev_void recalculateEnvelope();

					ev_void clone2(CGeometry* geom)const;
					CGeometry(const CGeometry& obj);
					CGeometry& operator=(const CGeometry& obj);

					virtual CEnvelope getEnvelope() const;
					ev_void setGeometryType(EarthView::World::Spatial::Geometry::EVGeometryType type, /*const EVString& typeString,*/ev_int32 typeInt);
					virtual ev_void setZMarker(ev_bool z);
					virtual ev_void setMMarker(ev_bool m);
ev_private:
					CGeometry(_in EV_GEOMETY_PRIVATE_PREFIX::CGeometryPrivate* p);
				private:
					EV_DEFINE_CLASS_PRIVATE(CGeometry);
					friend class  EarthView::World::Spatial::Geometry::Utility::CGeometryHelper;
				};
			}
		}
	}
}

#endif
