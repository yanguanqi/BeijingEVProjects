#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ELLIPTICARC_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_ELLIPTICARC_H

#include "curve.h"
#include "linestring.h"

EV_DECLARE_GEOMETRY_CLASS_PRIVATE(CEllipticArc);

EV_DECLARE_GEOMETRY_CLASS_UTILITY(CGeometryHelper);

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 椭圆弧类
				/// </summary>
				class EV_GEOMETRY_DLL CEllipticArc
					:public EarthView::World::Spatial::Geometry::CCurve
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEllipticArc();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEllipticArc();
					
					CEllipticArc(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						ev_real64 semiMajorAxe,ev_real64 semiMinorAx,
						ev_real64 rotatedAngle,ev_real64 fromAngle,ev_real64 sweepAngle);

ev_private:
					/// <summary>
					/// 创建构造函数
					/// </summary>
					/// <param name="pList">参数列表</param>
					/// <returns></returns>
					CEllipticArc(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 获取椭圆弧起点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getFromPoint() const;
					EarthView::World::Spatial::Geometry::CPoint  getFromPoint2() const;
					/// <summary>
					/// 获取椭圆弧终点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getToPoint() const;
					EarthView::World::Spatial::Geometry::CPoint  getToPoint2() const;
					/// <summary>
					/// 获取椭圆弧所在椭圆的中心点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					_extfree EarthView::World::Spatial::Geometry::CPoint* getCenterPoint() const;
					EarthView::World::Spatial::Geometry::CPoint  getCenterPoint2() const;
					/// <summary>
					/// 获取起始角度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getFromAngle() const;
					/// <summary>
					/// 获取终止角度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getToAngle() const;
					/// <summary>
					/// 获取椭圆弧两端点对椭圆中心的张角
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getCenterAngle() const;
					/// <summary>
					/// 获取椭圆长半轴
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getSemiMajorAxe() const;
					/// <summary>
					/// 获取椭圆短半轴
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getSemiMinorAxe() const;
					/// <summary>
					/// 获取椭圆弧两端点对椭圆中心的张角
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getSweepAngle() const;
					/// <summary>
					/// 获取椭圆长轴与x正轴的夹角
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real64 getRotatedAngle() const;
					/// <summary>
					/// 设置椭圆弧
					/// </summary>
					/// <param name="centerPoint">椭圆中心点</param>
					/// <param name="semiMajorAxe">椭圆长半轴</param>
					/// <param name="semiMinorAx">椭圆短半轴</param>
					/// <param name="rotatedAngle">椭圆长轴与x轴夹角</param>
					/// <param name="fromAngle">椭圆弧起始角度</param>
					/// <param name="sweepAngle">椭圆弧对椭圆中心的张角</param>
					/// <returns></returns>
					ev_void setEllipticArc(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						                   ev_real64 semiMajorAxe,ev_real64 semiMinorAx,
						                   ev_real64 rotatedAngle,ev_real64 fromAngle,ev_real64 sweepAngle);
					/// <summary>
					/// 设置椭圆弧
					/// </summary>
					/// <param name="centerPoint">椭圆中心点</param>
					/// <param name="assistantPoint">第一个辅助点，是位于椭圆长轴上的任意一点（但不能与中心点重合）</param>
					/// <param name="assistantPoint2">第二个辅助点，椭圆外接矩形的顶点</param>
					/// <param name="fromAngle">椭圆弧起始角度</param>
					/// <param name="sweepAngle">椭圆弧对中心点的张角</param>
					/// <returns></returns>
					ev_void setEllipticArc(const EarthView::World::Spatial::Geometry::CPoint& centerPoint,
						const EarthView::World::Spatial::Geometry::CPoint& assistantPoint,
						const EarthView::World::Spatial::Geometry::CPoint& assistantPoint2,
						         ev_real64 fromAngle,ev_real64 sweepAngle);
					/// <summary>
					/// 设置椭圆弧
					/// </summary>
					/// <param name="cx">椭圆中心x坐标</param>
					/// <param name="cy">椭圆中心y坐标</param>
					/// <param name="semiMajorAxe">椭圆长半轴</param>
					/// <param name="semiMinorAxe">椭圆短半轴</param>
					/// <param name="rotatedAngle">椭圆长轴与x正轴夹角</param>
					/// <param name="fromAngle">椭圆弧起始角度</param>
					/// <param name="sweepAngle">椭圆弧终止角度</param>
					/// <returns></returns>
					ev_void setEllipticArc(ev_real64 cx,ev_real64 cy,ev_real64 semiMajorAxe,ev_real64 semiMinorAxe,
						         ev_real64 rotatedAngle,ev_real64 fromAngle,ev_real64 sweepAngle);
					/// <summary>
					/// 将椭圆弧转换为折线
					/// </summary>
					/// <param name="smooth">平滑度</param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::Geometry::CLineString toLineString2(ev_uint32 smooth) const;
					/// <summary>
					/// 设置椭圆中心点
					/// </summary>
					/// <param name="centerPoint">椭圆中心点</param>
					/// <returns></returns>
					ev_void setCenterPoint(const EarthView::World::Spatial::Geometry::CPoint& centerPoint);
					/// <summary>
					/// 设置椭圆长半轴
					/// </summary>
					/// <param name="value">长半轴</param>
					/// <returns></returns>
					ev_void setSemiMajorAxe(ev_real64 value);
					/// <summary>
					/// 设置椭圆短半轴
					/// </summary>
					/// <param name="value">短半轴</param>
					/// <returns></returns>
					ev_void setSemiMinorAxe(ev_real64 value);
					/// <summary>
					/// 设置椭圆旋转角度
					/// </summary>
					/// <param name="value">旋转角度</param>
					/// <returns></returns>
					ev_void setRotatedAngle(ev_real64 value);
					/// <summary>
					/// 设置椭圆弧起始角度
					/// </summary>
					/// <param name="value">起始角度</param>
					/// <returns></returns>
					ev_void setFromAngle(ev_real64 value);
					/// <summary>
					/// 设置椭圆弧对椭圆中心的张角
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setSweepAngle(ev_real64 value);
ev_private:
					/// <summary>
					/// 获取椭圆弧起始点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>起点坐标</returns>
					CCoordinate* getFromCoordinateRef();
					/// <summary>
					/// 获取椭圆弧终点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>终点坐标</returns>
					CCoordinate* getToCoordinateRef();
					/// <summary>
					/// 获取椭圆中心点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>中心点坐标</returns>
					CCoordinate* getCenterCoordinateRef();
					/// <summary>
					/// 获取椭圆弧起点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>起点坐标</returns>
					const CCoordinate* getFromCoordinateRef() const;
					/// <summary>
					/// 获取椭圆弧终点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>终点坐标</returns>
					const CCoordinate* getToCoordinateRef() const;
					/// <summary>
					/// 获取椭圆弧中心点坐标
					/// </summary>
					/// <param name=""></param>
					/// <returns>中心点坐标</returns>
					const CCoordinate* getCenterCoordinateRef() const;

				public:

					///*********************************************************/
					///*****************EarthView::World::Spatial::Geometry::CCurve 接口函数实现*******************/
					///*********************************************************/
					/// <summary>
					/// 获取起始点
					/// </summary>
					/// <param name=""></param>
					/// <returns>起始点</returns>
					//virtual EarthView::World::Spatial::Geometry::CPoint* getStartPoint() const;
					virtual EarthView::World::Spatial::Geometry::CPoint  getStartPoint2() const;
					/// <summary>
					/// 获取结尾点
					/// </summary>
					/// <param name=""></param>
					/// <returns>结尾点</returns>
					//virtual EarthView::World::Spatial::Geometry::CPoint* getEndPoint() const;
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
					//ev_bool isRing() const;
					/// <summary>
					/// 反转曲线环
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功，返回true;否则，返回false</returns>
					virtual ev_bool reverse();

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
					/// 参数发生变化时更新椭圆弧
					/// </summary>
					/// <param name=""></param>
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
					/// <param name="splitLine">分割线</param>
					/// <returns>分割后得到的对象</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* split(_in const EarthView::World::Spatial::Geometry::IGeometry* splitLine) const;
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
				protected:
					/// <summary>
					/// 重新计算包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>                    
                    //virtual ev_void recalculateEnvelope();
				
					ev_void clone2(EarthView::World::Spatial::Geometry::CEllipticArc* arc)const;

					virtual CEnvelope getEnvelope() const;
				public:
					EarthView::World::Spatial::Geometry::CEllipticArc clone2() const;
					CEllipticArc(const CEllipticArc& obj);
					EarthView::World::Spatial::Geometry::CEllipticArc& operator=(const EarthView::World::Spatial::Geometry::CEllipticArc& obj);
ev_private:
					CEllipticArc(EV_GEOMETY_PRIVATE_PREFIX::CEllipticArcPrivate* p);
				private:
					EV_DEFINE_CLASS_PRIVATE(CEllipticArc);
					friend class EarthView::World::Spatial::Geometry::Utility::CGeometryHelper;
				};
			}
		}
	}
}

#endif

