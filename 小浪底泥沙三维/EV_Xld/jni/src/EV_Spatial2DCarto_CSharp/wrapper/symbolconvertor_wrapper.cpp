/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/symbolconvertor.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CLineSymbol*  _stdcall EarthView_World_Spatial_Carto_CSymbolConvertor_resetLineSymbolWidth_CLineSymbol_CLineSymbol_ev_real64(void *pObjectXXXX, _in EarthView::World::Spatial::Display::CLineSymbol* pLineSymbol, _in ev_real64 dPageScale )
				{
					EarthView::World::Spatial::Carto::CSymbolConvertor* ptrNativeObject = (EarthView::World::Spatial::Carto::CSymbolConvertor*) pObjectXXXX;
					EarthView::World::Spatial::Display::CLineSymbol* objXXXX = ptrNativeObject->resetLineSymbolWidth(pLineSymbol, dPageScale);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CTextSymbol*  _stdcall EarthView_World_Spatial_Carto_CSymbolConvertor_resetTextSymbolSize_CTextSymbol_CTextSymbol_ev_real64(void *pObjectXXXX, _in EarthView::World::Spatial::Display::CTextSymbol* pTextSymbol, _in ev_real64 dPageScale )
				{
					EarthView::World::Spatial::Carto::CSymbolConvertor* ptrNativeObject = (EarthView::World::Spatial::Carto::CSymbolConvertor*) pObjectXXXX;
					EarthView::World::Spatial::Display::CTextSymbol* objXXXX = ptrNativeObject->resetTextSymbolSize(pTextSymbol, dPageScale);
					return objXXXX;
				}
			}
		}
	}
}
