/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/pixelpoint.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CPixelPoint_getX_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CPixelPoint* ptrNativeObject = (EarthView::World::Spatial::CPixelPoint*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CPixelPoint_getY_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CPixelPoint* ptrNativeObject = (EarthView::World::Spatial::CPixelPoint*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getY();
				return objXXXX;
			}
		}
	}
}
