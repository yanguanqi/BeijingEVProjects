#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_GOEDETICMEASURE_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_GOEDETICMEASURE_H

#include "spatialobject/config.h"
#include "spatialobject/geometry/linestring.h"
#include "spatialobject/geometry/polyline.h"
#include "spatialobject/geometry/polygon.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				/// <summary>
				/// 大地测量
				/// </summary>
				class EV_GEOMETRY_DLL CGeodesicMeasure
					:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name="dfSemiMajor">椭球长半轴</param>
					/// <param name="dfInvFlattening">椭球偏率倒数</param>
					/// <returns></returns>
					CGeodesicMeasure(ev_real64 dfSemiMajor, ev_real64 dfInvFlattening);
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CGeodesicMeasure();
					/// <summary>
					/// 测量距离（两点）
					/// </summary>
					/// <param name="longitude1">第一个点经度</param>
					/// <param name="latitude1">第一个点纬度</param>
					/// <param name="longitude2">第二个点经度</param>
					/// <param name="latitude2">第二个点纬度</param>
					/// <param name="linestring">可为NULL，两点在球面进行加密</param>
					/// <param name="count">linestring为NULL时忽略此参数，设置加密点个数</param>
					/// <returns></returns>
					virtual ev_real64 distanceMeasure(ev_real64 longitude1,ev_real64 latitude1,
						ev_real64 longitude2,ev_real64 latitude2,
						EarthView::World::Spatial::Geometry::CPolyline * polyline,ev_uint32 count);
					/// <summary>
					/// 线长度测量polyline
					/// </summary>
					/// <param name="polygon">待测量线</param>
					/// <param name="periMeter">总长度</param>
					/// <returns></returns>
					virtual ev_void polylineMeasure(EarthView::World::Spatial::Geometry::CPolyline * polyline, ev_real64 & distance);
					/// <summary>
					/// 多边形测量polygon
					/// </summary>
					/// <param name="polygon">待测量多边形</param>
					/// <param name="area">面积</param>
					/// <param name="periMeter">周长</param>
					/// <returns></returns>
					virtual ev_void polygonMeasure(EarthView::World::Spatial::Geometry::CPolygon * polygon,ev_real64 & area, ev_real64 & periMeter);
ev_private:
					/// <summary>
					/// 创建构造函数
					/// </summary>
					/// <param name="pList">参数列表</param>
					/// <returns></returns>
					CGeodesicMeasure(_in EarthView::World::Core::CNameValuePairList* pList);
				private:
					ev_real64 curvePathMeasure(const EarthView::World::Spatial::Geometry::CCurvePath * path);
				private:
					void * mpGeodesic;
				};
			}
		}
	}
}

#endif
