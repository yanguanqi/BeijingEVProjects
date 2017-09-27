/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/labeldrawalgorithm.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CLabelDrawAlgorithm_draw_void_IPaintDevice_ISymbol_CGeoElement_EarthView_World_Core_ev_string(void *pObjectXXXX, _in const EarthView::World::Display::IPaintDevice* device, _in const EarthView::World::Spatial::Display::ISymbol* symbol, _in const EarthView::World::Spatial::CGeoElement* geoElement, _in const char* value )
			{
				EarthView::World::Core::ev_string value1 = value;
				const EarthView::World::Spatial::CLabelDrawAlgorithm* ptrNativeObject = (EarthView::World::Spatial::CLabelDrawAlgorithm*) pObjectXXXX;
				ptrNativeObject->draw(device, symbol, geoElement, value1);
			}
		}
	}
}
