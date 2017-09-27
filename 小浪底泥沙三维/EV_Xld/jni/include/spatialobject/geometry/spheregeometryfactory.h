#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_SPHEREGEOMETRYFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_SPHEREGEOMETRYFACTORY_H

#include "spatialobject/config.h"
#include "coordinate.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				class CLineString;

				class EV_GEOMETRY_DLL CSphereGeometryFactory:
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					CSphereGeometryFactory(ev_real64 dfSemiMajor, ev_real64 dfInvFlattening);
					virtual ~CSphereGeometryFactory();
					/// <summary>
					/// 由圆创建球面折线
					/// </summary>
					/// <param name="centerLon">圆心经度(度)</param>
					/// <param name="centerLat">圆心纬度(度)</param>
					/// <param name="radius">半径(米)</param>
					/// <returns></returns>
					_extfree CLineString* createFromCircle(ev_real64 centerLon, ev_real64 centerLat,
						ev_real64 radius);
					/// <summary>
					/// 由椭圆创建球面折线
					/// </summary>
					/// <param name="centerLon">椭圆中心经度(度)</param>
					/// <param name="centerLat">椭圆中心纬度(度)</param>
					/// <param name="semiMajor">椭圆长半轴长度(米)</param>
					/// <param name="semiMinor">椭圆短半轴长度(米)</param>
					/// <param name="majorAzimuth">长半轴的大地方位角(度,正北方向为0,顺时针为正)</param>
					/// <returns></returns>
					_extfree CLineString* createFromEllipse(ev_real64 centerLon, ev_real64 centerLat,
						ev_real64 semiMajor, ev_real64 semiMinor, ev_real64 majorAzimuth);
					/// <summary>
					/// 由点创建球面折线（暂未实现）
					/// </summary>
					/// <param name="points">点串</param>
					/// <param name="nCount">点数</param>
					/// <returns></returns>
					_extfree CLineString* createFromPoints(const CCoordinate* points, ev_uint32 nCount);
				protected:
					CSphereGeometryFactory();
ev_private:
					CSphereGeometryFactory(EarthView::World::Core::CNameValuePairList* pList);
				private:
					ev_real64 m_dfSemiMajor;
					ev_real64 m_dfInvFlattening;
				};
			}
		}
	}
}

#endif