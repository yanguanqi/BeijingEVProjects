/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/geodetictheme.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Utility
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CGeodeticTheme_gaussSeriesForward_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 lon1, _in ev_real64 lat1, _in ev_real64 pazi1, _in ev_real64 s12, _inout ev_real64& lon2, _inout ev_real64& lat2, _inout ev_real64& pazi2 )
				{
					EarthView::World::Spatial::Utility::CGeodeticTheme* ptrNativeObject = (EarthView::World::Spatial::Utility::CGeodeticTheme*) pObjectXXXX;
					ptrNativeObject->gaussSeriesForward(lon1, lat1, pazi1, s12, lon2, lat2, pazi2);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CGeodeticTheme_gaussSeriesBackward_void_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 lon1, _in ev_real64 lat1, _in ev_real64 lon2, _in ev_real64 lat2, _inout ev_real64& pazi1, _inout ev_real64& pazi2, _inout ev_real64& s12 )
				{
					EarthView::World::Spatial::Utility::CGeodeticTheme* ptrNativeObject = (EarthView::World::Spatial::Utility::CGeodeticTheme*) pObjectXXXX;
					ptrNativeObject->gaussSeriesBackward(lon1, lat1, lon2, lat2, pazi1, pazi2, s12);
				}
			}
		}
	}
}
