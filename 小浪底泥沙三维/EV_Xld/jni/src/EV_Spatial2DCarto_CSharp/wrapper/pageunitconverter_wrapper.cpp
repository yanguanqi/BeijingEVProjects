/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/pageunitconverter.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_CPageUnitConverter_othersUnitToPixel_ev_real64_EVPageUnits_ev_real64(void *pObjectXXXX, _in int pageUnits, _in ev_real64 dValue )
				{
					EarthView::World::Spatial::Carto::CPageUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageUnitConverter*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->othersUnitToPixel((EarthView::World::Spatial::Carto::EVPageUnits)pageUnits, dValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Carto_CPageUnitConverter_pixelToOthersUnit_ev_real64_EVPageUnits_ev_real64(void *pObjectXXXX, _in int pageUnits, _in ev_real64 dValue )
				{
					EarthView::World::Spatial::Carto::CPageUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageUnitConverter*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->pixelToOthersUnit((EarthView::World::Spatial::Carto::EVPageUnits)pageUnits, dValue);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Carto_CPageUnitConverter_getPageUnitString_EVString_EVPageUnits(void *pObjectXXXX, _in int lengthUnit )
				{
					EarthView::World::Spatial::Carto::CPageUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageUnitConverter*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getPageUnitString((EarthView::World::Spatial::Carto::EVPageUnits)lengthUnit);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Carto_CPageUnitConverter_getPageUnitType_EVPageUnits_EVString(void *pObjectXXXX, _in char* strUnit )
				{
					EarthView::World::Core::ev_string strUnit1 = strUnit;
					EarthView::World::Spatial::Carto::CPageUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Carto::CPageUnitConverter*) pObjectXXXX;
					EarthView::World::Spatial::Carto::EVPageUnits objXXXX = ptrNativeObject->getPageUnitType(strUnit1);
					return (int)objXXXX;
				}
			}
		}
	}
}
