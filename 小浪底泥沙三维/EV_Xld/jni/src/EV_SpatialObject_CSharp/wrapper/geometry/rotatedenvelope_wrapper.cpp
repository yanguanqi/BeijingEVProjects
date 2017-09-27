/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/rotatedenvelope.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Geometry_CRotatedEnvelope_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CRotatedEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CRotatedEnvelope*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CRotatedEnvelope_getRotation_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Geometry::CRotatedEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CRotatedEnvelope*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getRotation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CRotatedEnvelope_setRotation_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::Geometry::CRotatedEnvelope* ptrNativeObject = (EarthView::World::Spatial::Geometry::CRotatedEnvelope*) pObjectXXXX;
					ptrNativeObject->setRotation(value);
				}
			}
		}
	}
}
