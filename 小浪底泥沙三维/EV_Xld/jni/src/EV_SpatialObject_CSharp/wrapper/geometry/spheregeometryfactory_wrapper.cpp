/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/spheregeometryfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CLineString*  _stdcall EarthView_World_Spatial_Geometry_CSphereGeometryFactory_createFromCircle_CLineString_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 centerLon, _in ev_real64 centerLat, _in ev_real64 radius )
				{
					EarthView::World::Spatial::Geometry::CSphereGeometryFactory* ptrNativeObject = (EarthView::World::Spatial::Geometry::CSphereGeometryFactory*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CLineString* objXXXX = ptrNativeObject->createFromCircle(centerLon, centerLat, radius);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CLineString*  _stdcall EarthView_World_Spatial_Geometry_CSphereGeometryFactory_createFromEllipse_CLineString_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 centerLon, _in ev_real64 centerLat, _in ev_real64 semiMajor, _in ev_real64 semiMinor, _in ev_real64 majorAzimuth )
				{
					EarthView::World::Spatial::Geometry::CSphereGeometryFactory* ptrNativeObject = (EarthView::World::Spatial::Geometry::CSphereGeometryFactory*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CLineString* objXXXX = ptrNativeObject->createFromEllipse(centerLon, centerLat, semiMajor, semiMinor, majorAzimuth);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CLineString*  _stdcall EarthView_World_Spatial_Geometry_CSphereGeometryFactory_createFromPoints_CLineString_CCoordinate_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::CCoordinate* points, _in ev_uint32 nCount )
				{
					EarthView::World::Spatial::Geometry::CSphereGeometryFactory* ptrNativeObject = (EarthView::World::Spatial::Geometry::CSphereGeometryFactory*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CLineString* objXXXX = ptrNativeObject->createFromPoints(points, nCount);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
		}
	}
}
