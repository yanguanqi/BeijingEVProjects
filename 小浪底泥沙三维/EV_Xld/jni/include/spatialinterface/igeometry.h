#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETYR_IGEOMETRY_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETYR_IGEOMETRY_H

#include "core/memoryallocatedobject.h"
#include "core/datastream.h"
#include "spatialinterface/config.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialinterface/ienvelope.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{

				/// <summary>
				/// 几何体类型枚举
				/// </summary>
				enum EVGeometryType
				{
					/// <summary>
					/// 位置类型
					/// </summary>
					GT_UNKNOWN         = 0,
					/// <summary>
					/// 点类型
					/// </summary>
					GT_POINT           = 1,
					/// <summary>
					/// 折线类型
					/// </summary>
					GT_POLYLINE        = 2,
					/// <summary>
					/// 面类型
					/// </summary>
					GT_POLYGON         = 3,
					/// <summary>
					/// 多点类型
					/// </summary>
					GT_MULTIPOINT      = 4,
					/// <summary>
					/// 曲线Path
					/// </summary>
					GT_CURVEPATH       = 5,
					/// <summary>
					/// 曲线环
					/// </summary>
					GT_CURVERING       = 6,
					/// <summary>
					/// 圆弧
					/// </summary>
					GT_CIRCLEARC       = 7,
					/// <summary>
					/// 椭圆弧
					/// </summary>
					GT_ELLIPTICARC     = 8,
					/// <summary>
					/// 圆面
					/// </summary>
					GT_CIRCLE          = 9,
					/// <summary>
					/// 椭圆面
					/// </summary>
					GT_ELLIPSE         = 10,
					/// <summary>
					/// 三角面
					/// </summary>
					GT_TRIANGLE        = 11,
					/// <summary>
					/// 矩形面
					/// </summary>
					GT_RECTANGLE       = 12,
					/// <summary>
					/// 多点类型
					/// </summary>
					GT_CONE            = 13,
					/// <summary>
					/// 贝赛尔曲线
					/// </summary>
					GT_BEZIERCURVE     = 14,
					/// <summary>
					/// 贝赛尔曲面
					/// </summary>
					GT_BEZIERSURFACE   = 15,

					GT_TRIANGLESTRIP   = 16,
					GT_TRIANGLEFAN     = 17,
					GT_BOX,					
					GT_CYLINDER,			
					/// <summary>
					/// 几何体集合
					/// </summary>
					GT_GEOMETRYCOLLECTION,
					/// <summary>
					/// 两点线
					/// </summary>
					GT_LINE,
					GT_SPHERE,
					GT_ELLIPSESPHERE,//GT_TETRAHEDRON,
					/// <summary>
					/// 线串
					/// </summary>
					GT_LINESTRING,
					/// <summary>
					/// 圆环
					/// </summary>
					GT_CIRCLERING,
					/// <summary>
					/// 圆拱形环
					/// </summary>
					GT_CIRCLECHORDRING,
					/// <summary>
					/// 圆扇形环
					/// </summary>
					GT_CIRCLESECTORRING,
					/// <summary>
					/// 椭圆环
					/// </summary>
					GT_ELLIPTICRING,
					/// <summary>
					/// 椭圆拱形环
					/// </summary>
					GT_ELLIPTICCHORDRING,
					/// <summary>
					/// 椭圆扇形环
					/// </summary>
					GT_ELLIPTICSECTORRING,
					/// <summary>
					/// 四边形环
					/// </summary>
					GT_RECTANGLERING,
					/// <summary>
					/// 三角形环
					/// </summary>
					GT_TRIANGLERING,
					/// <summary>
					/// 圆扇形面
					/// </summary>
					GT_CIRCLESECTOR,
					/// <summary>
					/// 圆拱形面
					/// </summary>
					GT_CIRCLECHORD,
					/// <summary>
					/// 椭圆扇形面
					/// </summary>
					GT_ELLIPTICSECTOR,
					/// <summary>
					/// 椭圆拱形面
					/// </summary>
					GT_ELLIPTICCHORD,
					/// <summary>
					/// 实体类型
					/// </summary>
					GT_ENTITY          = 111,
					GT_ENTITY_TEMPL,
					GT_EFFECT
				};

				/// <summary>
				/// WKB格式的几何体类型
				/// </summary>
				enum EVWKBGeometryType
				{
					/// <summary>
					/// 未知类型
					/// </summary>
					WKBGT_Unknown                     = 0,

					// 2D
					/// <summary>
					/// 点
					/// </summary>
					WKBGT_Point                       = 1,
					/// <summary>
					/// 线
					/// </summary>
					WKBGT_LineString                  = 2,
					/// <summary>
					/// 面
					/// </summary>
					WKBGT_Polygon                     = 3,
					/// <summary>
					/// 多点
					/// </summary>
					WKBGT_MultiPoint                  = 4,
					/// <summary>
					/// 多线
					/// </summary>
					WKBGT_MultiLineString             = 5,
					/// <summary>
					/// 多面
					/// </summary>
					WKBGT_MultiPolygon                = 6,
					/// <summary>
					/// 几何体集合
					/// </summary>
					WKBGT_GeometryCollection          = 7,
					// 扩展
					//evgsWKBGeomTypeLinearRing                  = 50,
					//evgsWKBGeomTypeLine                        = 51,
					//evgsWKBGeomTypeTriangle                    = 61,

					// 3D
					/// <summary>
					/// 三维点
					/// </summary>
					WKBGT_PointZ                      = 1001,
					/// <summary>
					/// 三维线
					/// </summary>
					WKBGT_LineStringZ                 = 1002,
					/// <summary>
					/// 三维面
					/// </summary>
					WKBGT_PolygonZ                    = 1003,
					/// <summary>
					/// 三维多点
					/// </summary>
					WKBGT_MultiPointZ                 = 1004,
					/// <summary>
					/// 三维多线
					/// </summary>
					WKBGT_MultiLineStringZ            = 1005,
					/// <summary>
					/// 三维多面
					/// </summary>
					WKBGT_MultiPolygonZ               = 1006,
					/// <summary>
					/// 三维几何体集合
					/// </summary>
					WKBGT_GeometryCollectionZ         = 1007,
					// 扩展
					//evgsWKBGeomTypeLinearRingZ                 = 150,
					//evgsWKBGeomTypeLineZ                       = 151,
					//evgsWKBGeomTypeTriangleZ                   = 161,

					/// <summary>
					/// 带M的点
					/// </summary>
					WKBGT_PointM                      = 2001,
					/// <summary>
					/// 带M的线
					/// </summary>
					WKBGT_LineStringM                 = 2002,
					/// <summary>
					/// 带M的面
					/// </summary>
					WKBGT_PolygonM                    = 2003,
					/// <summary>
					/// 带M的多点
					/// </summary>
					WKBGT_MultiPointM                 = 2004,
					/// <summary>
					/// 带M的多线
					/// </summary>
					WKBGT_MultiLineStringM            = 2005,
					/// <summary>
					/// 带M的多面
					/// </summary>
					WKBGT_MultiPolygonM               = 2006,
					/// <summary>
					/// 带M的几何体集合
					/// </summary>
					WKBGT_GeometryCollectionM         = 2007,
					// 扩展
					//evgsWKBGeomTypeLinearRingM                 = 1050,
					//evgsWKBGeomTypeLineM                       = 1051,
					//evgsWKBGeomTypeTriangleM                   = 1061,

					/// <summary>
					/// 带M的三维点
					/// </summary>
					WKBGT_PointZM                     = 3001,
					/// <summary>
					/// 带M的三维线
					/// </summary>
					WKBGT_LineStringZM                = 3002,
					/// <summary>
					/// 带M的三维面
					/// </summary>
					WKBGT_PolygonZM                   = 3003,
					/// <summary>
					/// 带M的三维多点
					/// </summary>
					WKBGT_MultiPointZM                = 3004,
					/// <summary>
					/// 带M的三维多线
					/// </summary>
					WKBGT_MultiLineStringZM           = 3005,
					/// <summary>
					/// 带M的三维多面
					/// </summary>
					WKBGT_MultiPolygonZM              = 3006,
					/// <summary>
					/// 带M的三维几何体集合
					/// </summary>
					WKBGT_GeometryCollectionZM        = 3007,
					// 扩展
					//evgsWKBGeomTypeLinearRingZM                = 150,
					//evgsWKBGeomTypeLineZM                      = 151,
					//evgsWKBGeomTypeTriangleZM                  = 161,
				};				
				/// <summary>
				/// 几何体接口
				/// </summary>
				class EV_INTERFACE_DLL IGeometry :
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~IGeometry();
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
					/// 获取几何体对象的外边框对象。
					/// 点的外边框对象为空；线的外边框对象是两个端点；面的外边框对象是外边界。
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回Geometry对象</returns>
					virtual IGeometry* getBoundary() const;
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
					/// 设置空间坐标系
					/// </summary>
					/// <param name="sr">空间坐标系</param>
					/// <returns></returns>
					virtual ev_void setSpatialReferenceRef(const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
					//virtual IGeometry* locateAlong(ev_real64 m) const;
					//virtual IGeometry* locateBetween(ev_real64 minM,ev_real64 maxM) const;
					/// <summary> 
					/// 深度拷贝几何体对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>拷贝后的几何体对象</returns>
					virtual IGeometry* clone() const;
					//virtual EVString toString(EVDataFormatType type) const;
					//virtual ev_void toStream(EVString type, EarthView::World::Core::CDataStream & stream) cosnt;
					/// <summary> 
					/// 判断该几何体对象是否包含指定几何体对象。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果包含，则返回true；否则，返回false</returns>
					virtual ev_bool isContains(const IGeometry* geom,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 判断该几何体对象是否与指定几何体对象形状相同。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="tolerance">指定误差范围</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果相等，则返回true；否则，返回false</returns>
					virtual ev_bool isEquals(const IGeometry* geom,ev_real64 tolerance,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 判断该几何体对象是否相离指定几何体对象。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果相离，则返回true；否则，返回false</returns>
					virtual ev_bool isDisjoin(const IGeometry* geom,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 判断该几何体对象是否相交指定几何体对象。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果相交，则返回true；否则，返回false</returns>
					virtual ev_bool isIntersects(const IGeometry* geom,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 判断该几何体对象是否被包含在指定几何体对象。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果被包含，则返回true；否则，返回false</returns>
					virtual ev_bool isWithin(const IGeometry* geom,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 判断该几何体对象是否与指定几何体对象相接。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果相接，则返回true；否则，返回false</returns>
					virtual ev_bool isTouches(const IGeometry* geom,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 判断该几何体对象是否跨越指定几何体对象。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果跨越，则返回true；否则，返回false</returns>
					virtual ev_bool isCrosses(const IGeometry* geom,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 判断该几何体对象是否与指定几何体对象有空间关系。
					/// 空间关系，利用九交模型进行描述。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="relateMatrix">空间关系九交矩阵</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果有关系，则返回true；否则，返回false</returns>
					virtual ev_bool isRelates(const IGeometry* geom,EVString relateMatrix,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 创建一个Buffer几何体。
					/// </summary>
					/// <param name="tolerance">指定容差范围</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>新Buffer对象</returns>
					virtual IGeometry* buffer(ev_real64 tolerance,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 获取凸多边形。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>如果几何体对象本身就是凸多边形，则返回自身；否则，重新获取新几何体对象。</returns>
					virtual IGeometry* convexHull(EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 获取几何体对象与指定几何体对象之间的不同部分，该不同部分只包含该几何体对象，不包含指定几何体对象
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>返回不同部分的几何体</returns>
					virtual IGeometry* difference(const IGeometry* geom,EarthView::World::Spatial::Geometry::EVDimensionType dimension)const;
					/// <summary> 
					/// 获取几何体对象与指定几何体对象之间最小距离。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>几何体之间的最小距离</returns>
					virtual ev_real64 distance(const IGeometry* geom,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
                    /// <summary> 
					/// 获取几何体对象与指定几何体对象之间的相交部分。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>返回不同部分的几何体</returns>
					virtual IGeometry* intersects(const IGeometry* geom,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 获取几何体对象与指定几何体对象之间的相叠加。
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>返回不同部分的几何体</returns>
					virtual IGeometry* overlaps(const IGeometry* geom,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 获取几何体对象与指定几何体对象之间的不同部分，该部分包括该几何体对象也包括指定几何体对象
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>返回不同部分的几何体</returns>
					virtual IGeometry* symDifference(const IGeometry* geom,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
					/// <summary> 
					/// 获取几何体对象与指定几何体对象合并后的新几何体对象
					/// 目前，只支持2维几何体对象的空间关系。
					/// </summary>
					/// <param name="geom">指定几何体对象</param>
					/// <param name="dimension">指定几何体维数</param>
					/// <returns>返回不同部分的几何体</returns>
					virtual IGeometry* unions(const IGeometry* geom,EarthView::World::Spatial::Geometry::EVDimensionType dimension) const;
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
					/// <param name="seven">七参数，顺序为：offsetX,offsetY,offsetZ,rotateX,rotateY,rotateZ,radio</param>
					/// <param name="count">七参数数目</param>
					/// <returns></returns>
					virtual ev_void projects(const EarthView::World::Spatial::Geometry::ISpatialReference * sr,ev_real64 * sevenParam,ev_uint32 count);
					/// <summary>
					/// 获取内部中心点
					/// </summary>
					/// <param name="coor">内部中心点</param>
					/// <returns>获取成功返回true,否则返回false</returns>
					virtual ev_bool getInteriorPoint(IGeometry* point) const;
ev_private:
					/// <summary> 
					/// 用于封装的构造函数
					/// </summary>
					IGeometry( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IGeometry();
				private:
					C_DISABLE_COPY(IGeometry);
				};
			}
		}
	}
}

#endif
