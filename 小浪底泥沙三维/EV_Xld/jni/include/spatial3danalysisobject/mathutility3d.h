#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATHUTILITY3D_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATHUTILITY3D_H

#include "spatial3danalysisobject_config.h"
#include "core/memoryallocatedobject.h"
#include "core/core_common.h"
#include "mathengine/vector3.h"
#include "mathengine/ev_math.h"
#include "mathengine/earthradius.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				class CAltitude3DListener;
				/// <summary>
				/// 三维分析、三维测量算法类,为提高算法精度，均以EarthView::World::Spatial::Math::CVector3点为计算
				/// static函数算法不带高程
				/// 非static函数带高程，需要重载获取高程函数
				/// </summary>
				class EV_ANALYSIS3DOBJECT_DLL CMathUtility3D : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CMathUtility3D(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					CMathUtility3D();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CMathUtility3D();

					/// <summary>
					/// 获取高程控件指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>高程控件</returns>
					virtual const CAltitude3DListener* getAltitudeListener() const;
					/// <summary>
					/// 设置高程控件指针
					/// </summary>
					/// <param name="pListener">高程控件</param>
					/// <returns></returns>
					virtual ev_void setAltitudeListener(CAltitude3DListener* ref_pListener);
					/// <summary>
					/// 是否中断了计算
					/// </summary>
					/// <returns>是否停止计算</returns>
					ev_bool getNeedStop();
					/// <summary>
					/// 中断计算
					/// </summary>
					/// <param name="value">是否停止计算</param>
					ev_void setNeedStop(const ev_bool& value);
					/// <summary>
					/// 获取计算进度值
					/// </summary>
					/// <returns>计算进度值</returns>
					ev_int32 getProgressV();
					/// <summary>
					/// 获取进度值的最大值
					/// </summary>
					/// <returns>进度值的最大值</returns>
					ev_int32 getProgressM();
					/// <summary>
					/// 设置进度值及进度值的最大值
					/// </summary>
					/// <param name="progressV">进度值</param>
					/// <param name="progressM">进度值的最大值</param>
					/// <returns></returns>
					ev_void setProgressV(const ev_int32& progressV,const ev_int32& progressM);

					/// <summary>
					/// 由经纬度和半径计算出空间坐标
					/// </summary>
					/// <param name="latitude">纬度，单位为度</param>
					/// <param name="longitude">经度，单位为度</param>
					/// <param name="radius">半径</param>
					/// <returns>空间坐标</returns>
					static EarthView::World::Spatial::Math::CVector3 sphericalToCartesian(ev_real32 latitude, ev_real32 longitude, ev_real32 radius);
					/// <summary>
					/// 由经纬度和半径计算出空间坐标
					/// </summary>
					/// <param name="latitude">纬度，单位为度</param>
					/// <param name="longitude">经度，单位为度</param>
					/// <param name="radius">半径</param>
					/// <returns>空间坐标</returns>
					static EarthView::World::Spatial::Math::CVector3 sphericalToCartesian(ev_real64 latitude, ev_real64 longitude, ev_real64 radius);

					/// <summary>
					/// 计算i对应n范围内的值
					/// </summary>
					/// <param name="i">i的值</param>
					/// <param name="n">n的值</param>
					/// <returns>i对应n范围内的值</returns>
					static ev_int32 mod(ev_int32 i, ev_int32 n);
					/// <summary>
					/// 根据空间两点距离计算采样点个数
					/// </summary>
					/// <param name="pointA">顶点A（经度，纬度，高程）,地理坐标</param>
					/// <param name="pointB">顶点B（经度，纬度，高程）,地理坐标</param>
					/// <param name="givenInterval">给定的插值间隔距离</param>
					/// <param name="givenInsertNum">根据给定的插值间隔距离计算出的插值个数</param>
					/// <param name="suggestInsertNum">建议的插值个数</param>
					ev_void calculateInsertNum(_in const EarthView::World::Spatial::Math::CVector3& pointA,_in const EarthView::World::Spatial::Math::CVector3& pointB,_in ev_real64 givenInterval,_out ev_uint32& givenInsertNum,_out ev_uint32& suggestInsertNum);

					/// <summary>
					/// 判断三角形三个点顺序是否为顺时针
					/// </summary>
					/// <param name="latA">第一个点纬度</param>
					/// <param name="lonA">第一个点经度</param>
					/// <param name="latB">第二个点纬度</param>
					/// <param name="lonB">第二个点经度</param>
					/// <param name="latC">第三个点纬度</param>
					/// <param name="lonC">第三个点经度</param>
					/// <returns>三个点顺序是否为顺时针</returns>
					static ev_bool isDeasil(ev_real64 latA,ev_real64 lonA,ev_real64 latB,ev_real64 lonB,ev_real64 latC,ev_real64 lonC);
					/// <summary>
					/// 判断一点是否在多边形内部
					/// </summary>
					/// <param name="list">多边形各个闭合边界顶点(经度,纬度,0)数组的列表</param>
					/// <param name="node">判断的点，地理坐标(经度,纬度,0)</param>
					/// <returns>点是否在多边形内部</returns>
					static ev_bool isInPolygon(_in EarthView::World::Spatial::Math::VertexList &inList,EarthView::World::Spatial::Math::CVector3 node);
					/// <summary>
					/// 判断线段是否为多边形内的对角线
					/// </summary>
					/// <param name="list">多边形顶点(经度,纬度,0)列表</param>
					/// <param name="i0">线段的顶点0索引</param>
					/// <param name="i1">线段的顶点1索引</param>
					/// <returns>线段是否为多边形内的对角线</returns>
					static ev_bool isDiagonal(EarthView::World::Spatial::Math::VertexList &list, ev_int32 i0, ev_int32 i1);
					/// <summary>
					/// 多边形是否可以剖分（非自相交）
					/// </summary>
					/// <param name="pointList">多边形顶点(经度,纬度,0)列表</param>
					/// <returns>多边形是否可以剖分</returns>
					static ev_bool isTriangulable(EarthView::World::Spatial::Math::VertexList &pointList);
					/// <summary>
					/// 获取多边形形成过程中，新加点对原来没有永久自相交多边形的影响
					/// </summary>
					/// <param name="pointList">原多边形顶点地理坐标列表</param>
					/// <param name="point">新加点地理坐标</param>
					/// <param name="isMoved">新加的点是否为移动点，即只判断是否自相交</param>
					/// <returns>0:无相交，1:临时自相交，2:永久自相交</returns>
					static ev_int32 getEffectAddPoint(EarthView::World::Spatial::Math::VertexList& pointList,const EarthView::World::Spatial::Math::CVector3& point,ev_bool isMoved);
					/// <summary>
					/// 判断两条线段是否相交，不包含边界，输入点为经纬度坐标
					/// </summary>
					/// <param name="node0">线段1端点,地理坐标</param>
					/// <param name="node1">线段1端点,地理坐标</param>
					/// <param name="node2">线段2端点,地理坐标</param>
					/// <param name="node3">线段2端点,地理坐标</param>
					/// <returns>两条线段是否相交</returns>
					static ev_bool calculateIntersection(const EarthView::World::Spatial::Math::CVector3& node0,const EarthView::World::Spatial::Math::CVector3& node1,const EarthView::World::Spatial::Math::CVector3& node2,const EarthView::World::Spatial::Math::CVector3& node3);

					/// <summary>
					/// 空间插值,通过首尾两点的经纬度计算,由f来控制此点的次序，f=n/N;在0~1之间
					/// 输出对应插值的地理坐标（经度，纬度，0）。       
					/// </summary>
					/// <param name="f"></param>
					/// <param name="latA">首点纬度,角度值</param>
					/// <param name="lonA">首点经度,角度值</param>
					/// <param name="latB">尾点纬度,角度值</param>
					/// <param name="lonB">尾点经度,角度值</param>
					/// <returns>插值的Vector3d（经度，纬度，0）</returns>
					static EarthView::World::Spatial::Math::CVector3 calcuInterGeoPositionWithoutAltitude(ev_real32 f,ev_real64 latA,ev_real64 lonA,ev_real64 latB,ev_real64 lonB);
					/// <summary>
					/// 空间插值,通过首尾两点的经纬度计算,由f来控制此点的次序，f=n/N;在0~1之间
					/// 输出对应插值的世界坐标。       
					/// </summary>
					/// <param name="f"></param>
					/// <param name="latA">首点纬度,角度值</param>
					/// <param name="lonA">首点经度,角度值</param>
					/// <param name="latB">尾点纬度,角度值</param>
					/// <param name="lonB">尾点经度,角度值</param>
					/// <returns>插值的世界坐标</returns>
					static EarthView::World::Spatial::Math::CVector3 calcuInterWorldPositionWithoutAltitude(ev_real32 f,ev_real64 latA,ev_real64 lonA,ev_real64 latB,ev_real64 lonB);
					/// <summary>
					/// 计算两地理坐标点间的任一点
					/// </summary>
					/// <param name="f">在线段间位置的百分比</param>
					/// <param name="latA">点A纬度</param>
					/// <param name="lonA">点A经度</param>
					/// <param name="latB">点B纬度</param>
					/// <param name="lonB">点B经度</param>
					/// <returns>点坐标</returns>
					EarthView::World::Spatial::Math::CVector3 calcuInterGeoPosition(ev_real32 f,ev_real64 latA,ev_real64 lonA,ev_real64 latB,ev_real64 lonB);

					/// <summary>
					/// 给定两点经纬度计算方位角（正北方向偏角）
					/// </summary>
					/// <param name="latA">A点纬度,角度值</param>
					/// <param name="lonA">A点经度,角度值</param>
					/// <param name="latB">B点纬度,角度值</param>
					/// <param name="lonB">B点经度,角度值</param>
					/// <returns>方位角,弧度制</returns>
					static ev_real64 azimuth(ev_real64 latA,ev_real64 lonA,ev_real64 latB,ev_real64 lonB);
					/// <summary>
					/// 由两点间的经纬度计算出两点的圆心的夹角
					/// </summary>
					/// <param name="latA">第一点的纬度，角度值</param>
					/// <param name="lonA">第一点的经度，角度值</param>
					/// <param name="latB">第二点的纬度，角度值</param>
					/// <param name="lonB">第二点的经度，角度值</param>
					/// <returns>两点间圆心角的大小，角度值</returns>
					static ev_real64 approxAngularDistance(_in ev_real64 latA,_in ev_real64 lonA,_in ev_real64 latB,_in ev_real64 lonB);

					/// <summary>
					/// 计算两世界坐标点之间的直线距离
					/// </summary>
					/// <param name="pointStart">顶点（世界坐标）</param>
					/// <param name="pointEnd">顶点（世界坐标）</param>
					/// <returns>直线距离</returns>
					static ev_real64 lineStraightMeasure(const EarthView::World::Spatial::Math::CVector3& pointStart,const EarthView::World::Spatial::Math::CVector3& pointEnd);
					/// <summary>
					/// 计算两点的投影距离，球体大圆的一部分
					/// </summary>
					/// <param name="point0">顶点（经度，纬度，0）</param>
					/// <param name="point1">顶点（经度，纬度，0）</param>
					/// <returns>投影距离</returns>
					static ev_real64 lineProjectMeasure(const EarthView::World::Spatial::Math::CVector3& point0,const EarthView::World::Spatial::Math::CVector3& point1);
					/// <summary>
					/// 计算两地理坐标点间的贴地距离，不插值
					/// </summary>
					/// <param name="point0">顶点（经度，纬度，高程）</param>
					/// <param name="point1">顶点（经度，纬度，高程）</param>
					/// <returns>贴地距离</returns>
					ev_real64 geoLineDistanceMeasure(const EarthView::World::Spatial::Math::CVector3& pointA,const EarthView::World::Spatial::Math::CVector3& pointB);
					/// <summary>
					/// 计算两地理坐标点间的贴地距离，可控制插值个数
					/// </summary>
					/// <param name="point0">顶点（经度，纬度，高程）,地理坐标</param>
					/// <param name="point1">顶点（经度，纬度，高程）,地理坐标</param>
					/// <param name="num">拆分线段的插值个数,1表示两点间距离</param>
					/// <returns>贴地距离</returns>
					ev_real64 geoLineDistanceMeasure(const EarthView::World::Spatial::Math::CVector3& pointA,const EarthView::World::Spatial::Math::CVector3& pointB,ev_int32 number);

					/// <summary>
					/// 三角剖分函数
					/// </summary>
					/// <param name="NodeList">多边形顶点列表，地理坐标(经度,纬度,0)</param>
					/// <param name="PointList">拆分后各三角形顶点列表(地理坐标)</param>
					/// <returns>是否剖分成功</returns>
					static ev_bool triangulate(const EarthView::World::Spatial::Math::VertexList& nodeList,EarthView::World::Spatial::Math::VertexList &pointList);
					/// <summary>
					/// 分割三角形为若干小相似三角形，输出分割后小三角形各顶点
					/// </summary>
					/// <param name="num">每条边要分割的段数</param>
					/// <param name="nodeList">三角形三个顶点（经度，纬度，高程）</param>
					/// <param name="isGetAlti">是否获取高程</param>
					/// <param name="outPoints">地理坐标列表（经度，纬度，高程）</param>
					/// <param name="maxAltiIndex">最大高程索引</param>
					/// <param name="minAltiIndex">最小高程索引</param>
					/// <returns></returns>
					ev_void splitTriangle2GeoPosition(_in ev_int32 num,_in const EarthView::World::Spatial::Math::VertexList& nodeList,_in ev_bool isGetAlti,_out EarthView::World::Spatial::Math::VertexList &outPoints,_out ev_int32& maxAltiIndex,_out ev_int32& minAltiIndex);
					/// <summary>
					/// 三角形按照确定数目拆分后为所有小三角形建立索引，
					/// 与splitTriangle2GeoPosition配套使用
					/// </summary>
					/// <param name="num">每条边拆分的个数</param>
					/// <param name="indices">索引数组</param>
					ev_void splitTriang2Indices(ev_int32 num, _out EarthView::World::Core::IntVector& indices);

					/// <summary>
					/// 直接计算三角形平面面积，不进行拆分
					/// </summary>
					/// <param name="pointA">三角形顶点（世界坐标）</param>
					/// <param name="pointB">三角形顶点（世界坐标）</param>
					/// <param name="pointC">三角形顶点（世界坐标）</param>
					/// <returns>三角形平面面积</returns>
					static ev_real64 triangleAreaMeasure(const EarthView::World::Spatial::Math::CVector3& pointA, const EarthView::World::Spatial::Math::CVector3& pointB, const EarthView::World::Spatial::Math::CVector3& pointC);
					/// <summary>
					/// 计算三角形投影到球体上的面积
					/// 根据范围的不同判断是否需要使用球面面积计算或者平面面积计算
					/// </summary>
					/// <param name="pointA">顶点（经度，纬度，0）</param>
					/// <param name="pointB">顶点（经度，纬度，0）</param>
					/// <param name="pointC">顶点（经度，纬度，0）</param>
					/// <returns>投影面积</returns>
					static ev_real64 triangleProjectMeasure(const EarthView::World::Spatial::Math::CVector3& pointA, const EarthView::World::Spatial::Math::CVector3& pointB, const EarthView::World::Spatial::Math::CVector3& pointC);
					/// <summary>
					///  计算三角形区域地表贴地面积,可控制计算精度
					/// </summary>
					/// <param name="pointA">顶点（经度，纬度，0）</param>
					/// <param name="pointB">顶点（经度，纬度，0）</param>
					/// <param name="pointC">顶点（经度，纬度，0）</param>
					/// <param name="insertNum">每条边的插值个数</param>
					/// <returns>三角形区域地表贴地面积</returns>
					ev_real64 spiltTriangleSurfaceMeasure(const EarthView::World::Spatial::Math::CVector3& pointA,const EarthView::World::Spatial::Math::CVector3& pointB,const EarthView::World::Spatial::Math::CVector3& pointC,const ev_int32 insertNum);
					/// <summary>
					///  计算三角形区域地表投影面积,可控制计算精度
					/// </summary>
					/// <param name="pointA">顶点（经度，纬度，0）</param>
					/// <param name="pointB">顶点（经度，纬度，0）</param>
					/// <param name="pointC">顶点（经度，纬度，0）</param>
					/// <param name="insertNum">每条边的插值个数</param>
					/// <returns>三角形区域地表投影面积</returns>
					ev_real64 spiltTriangleProjectMeasure(const EarthView::World::Spatial::Math::CVector3& pointA,const EarthView::World::Spatial::Math::CVector3& pointB,const EarthView::World::Spatial::Math::CVector3& pointC,const ev_int32 insertNum);
					/// <summary>
					/// 多边形区域地表面积
					/// </summary>
					/// <param name="pointList">多边形顶点列表（经度，纬度，0）</param>
					/// <returns>地表面积，-1表示无法完成计算</returns>
					ev_real64 polygonSurfaceMeasure(EarthView::World::Spatial::Math::VertexList &pointList);

					/// <summary>
					/// 线段内插值，分成若干段，输出拆分后所有点的地理坐标
					/// </summary>
					/// <param name="number">插值个数</param>
					/// <param name="latA">线段端点1纬度,角度值</param>
					/// <param name="lonA">线段端点1经度,角度值</param>
					/// <param name="latB">线段端点2纬度,角度值</param>
					/// <param name="lonB">线段端点2经度,角度值</param>
					/// <param name="isGetAlti">是否获取高程</param>
					/// <param name="outPoints">拆分后所有点的地理坐标（经度，纬度，高程）的数组</param>
					/// <returns></returns>
					ev_void splitLine2GeoPosition(_in ev_int32 number,_in ev_real64 latA,_in ev_real64 lonA,
						_in ev_real64 latB,_in ev_real64 lonB,_in ev_bool isGetAlti,_out EarthView::World::Spatial::Math::VertexList &outPoints);
					/// <summary>
					/// 线段内插值，分成若干段，输出拆分后所有点的世界坐标
					/// </summary>
					/// <param name="number">拆分段数</param>
					/// <param name="latA">线段端点1纬度,角度值</param>
					/// <param name="lonA">线段端点1经度,角度值</param>
					/// <param name="latB">线段端点2纬度,角度值</param>
					/// <param name="lonB">线段端点2经度,角度值</param>
					/// <param name="isGetAlti">是否获取高程</param>
					/// <param name="outPoints">拆分后所有点的世界坐标（x,y,高程）的数组</param>
					/// <returns></returns>
					ev_void splitLine2WorldPosition(_in ev_int32 number,_in ev_real64 latA,_in ev_real64 lonA,
						_in ev_real64 latB,_in ev_real64 lonB,_in ev_bool isGetAlti,_out EarthView::World::Spatial::Math::VertexList &outPoints);
					/// <summary>
					/// 折线插值，分成若干段，输出拆分后所有点的地理坐标
					/// </summary>
					/// <param name="inpoints">输入点列表</param>
					/// <param name="insertNum">插值个数</param>
					/// <param name="isGetAlti">是否获取高度</param>
					/// <param name="outpoints">输出点列表</param>
					ev_void splitPolylineGeoPosition(_in const EarthView::World::Spatial::Math::VertexList &inpoints,_in ev_int32 insertNum,_in ev_bool isGetAlti,_out EarthView::World::Spatial::Math::VertexList &outPoints);
					/// <summary>
					/// 折线插值，分成若干段，输出拆分后所有点的世界坐标
					/// </summary>
					/// <param name="inpoints">输入点列表</param>
					/// <param name="insertNum">插值个数</param>
					/// <param name="isGetAlti">是否获取高度</param>
					/// <param name="outpoints">输出点列表</param>
					ev_void splitPolylineWorPosition(_in const EarthView::World::Spatial::Math::VertexList &inpoints,_in ev_int32 insertNum,_in ev_bool isGetAlti,_out EarthView::World::Spatial::Math::VertexList &outPoints);
					/// <summary>
					/// 给定中心点和半径得出一个圆形区域的地理坐标链表
					/// </summary>
					/// <param name="lati">中心点纬度,角度值</param>
					/// <param name="longi">中心点经度,角度值</param>
					/// <param name="radius">半径,单位：米</param>
					/// <param name="insertNum">圆弧上分成的段数</param>
					/// <param name="outPoints">圆弧上的点的集合,地理坐标(经度，纬度，高程)</param>
					ev_void splitCircle2GeoPosition(ev_real64 lati,ev_real64 longi,ev_real64 radius,ev_int32 insertNum,_out EarthView::World::Spatial::Math::VertexList &outPoints);
					/// <summary>
					/// 给定中心点和半径得出一个圆形区域的世界坐标链表
					/// </summary>
					/// <param name="lati">中心点纬度,角度值</param>
					/// <param name="longi">中心点经度,角度值</param>
					/// <param name="radius">半径,单位：米</param>
					/// <param name="insertNum">圆弧上分成的段数</param>
					/// <param name="outPoints">圆弧上的点的集合,世界坐标</param>
					ev_void splitCircle2WorldPosition(ev_real64 lati,ev_real64 longi,ev_real64 radius,ev_int32 insertNum,_out EarthView::World::Spatial::Math::VertexList &outPoints);

				protected:
					/// <summary>
					/// 高度控件
					/// </summary>
					CAltitude3DListener* mpAltitudeListener;
					/// <summary>
					/// 是否停止计算
					/// </summary>
					ev_bool mNeedStop;
					/// <summary>
					/// 进度值
					/// </summary>
					ev_int32 mProgressV;
					/// <summary>
					/// 进度值的最大值
					/// </summary>
					ev_int32 mProgressM;
				};
			}
		}
	}
}

#endif
