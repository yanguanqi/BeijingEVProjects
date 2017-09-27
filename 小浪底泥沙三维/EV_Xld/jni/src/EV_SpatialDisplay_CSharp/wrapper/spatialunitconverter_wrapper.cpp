/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdisplay/spatialunitconverter.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialUnitConverter_otherLengthUnitTokm_ev_real64_ev_real64_EVMapUnits(void *pObjectXXXX, _in ev_real64 defaultUnitValue, _in int mapUnit )
				{
					EarthView::World::Spatial::Display::CSpatialUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->otherLengthUnitTokm(defaultUnitValue, (EarthView::World::Spatial::Atlas::EVMapUnits)mapUnit);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialUnitConverter_kmToOtherLengthUnit_ev_real64_ev_real64_LengthUnitType(void *pObjectXXXX, _in ev_real64 kiloValuve, _in int uintType )
				{
					EarthView::World::Spatial::Display::CSpatialUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->kmToOtherLengthUnit(kiloValuve, (EarthView::World::Spatial::Display::LengthUnitType)uintType);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialUnitConverter_otherAreaUnitTokm2_ev_real64_ev_real64_EVMapUnits(void *pObjectXXXX, _in ev_real64 defaultUnitValue, _in int mapUnit )
				{
					EarthView::World::Spatial::Display::CSpatialUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->otherAreaUnitTokm2(defaultUnitValue, (EarthView::World::Spatial::Atlas::EVMapUnits)mapUnit);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialUnitConverter_km2ToOtherAreaUnit_ev_real64_ev_real64_AreaUnitType(void *pObjectXXXX, _in ev_real64 squareKiloValuve, _in int unitType )
				{
					EarthView::World::Spatial::Display::CSpatialUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->km2ToOtherAreaUnit(squareKiloValuve, (EarthView::World::Spatial::Display::AreaUnitType)unitType);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CSpatialUnitConverter_getMapUnitString_EVString_EVMapUnits(void *pObjectXXXX, _in int mapUnit )
				{
					EarthView::World::Spatial::Display::CSpatialUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getMapUnitString((EarthView::World::Spatial::Atlas::EVMapUnits)mapUnit);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CSpatialUnitConverter_getMapUnitType_EVMapUnits_EVString(void *pObjectXXXX, _in const char* strUnit )
				{
					EarthView::World::Core::ev_string strUnit1 = strUnit;
					EarthView::World::Spatial::Display::CSpatialUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVMapUnits objXXXX = ptrNativeObject->getMapUnitType(strUnit1);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CSpatialUnitConverter_getLengthUnitString_EVString_LengthUnitType(void *pObjectXXXX, _in int lengthUnit )
				{
					EarthView::World::Spatial::Display::CSpatialUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getLengthUnitString((EarthView::World::Spatial::Display::LengthUnitType)lengthUnit);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CSpatialUnitConverter_getLengthUnitType_LengthUnitType_EVString(void *pObjectXXXX, _in const char* strUnit )
				{
					EarthView::World::Core::ev_string strUnit1 = strUnit;
					EarthView::World::Spatial::Display::CSpatialUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjectXXXX;
					EarthView::World::Spatial::Display::LengthUnitType objXXXX = ptrNativeObject->getLengthUnitType(strUnit1);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CSpatialUnitConverter_getAreaUnitString_EVString_AreaUnitType(void *pObjectXXXX, _in int areaUnit )
				{
					EarthView::World::Spatial::Display::CSpatialUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getAreaUnitString((EarthView::World::Spatial::Display::AreaUnitType)areaUnit);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Display_CSpatialUnitConverter_getAreaUnitType_AreaUnitType_EVString(void *pObjectXXXX, _in const char* strUnit )
				{
					EarthView::World::Core::ev_string strUnit1 = strUnit;
					EarthView::World::Spatial::Display::CSpatialUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjectXXXX;
					EarthView::World::Spatial::Display::AreaUnitType objXXXX = ptrNativeObject->getAreaUnitType(strUnit1);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialUnitConverter_toDMS_void_ev_real64_int_int_ev_real64(void *pObjectXXXX, _in ev_real64 dDecimal, _out int& nDeg, _out int& nMin, _out ev_real64& dSec )
				{
					EarthView::World::Spatial::Display::CSpatialUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjectXXXX;
					ptrNativeObject->toDMS(dDecimal, nDeg, nMin, dSec);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialUnitConverter_toDecimal_void_int_int_ev_real64_ev_real64(void *pObjectXXXX, _in int nDgr, _in int nMin, _in ev_real64 dSec, _out ev_real64& dDecimal )
				{
					EarthView::World::Spatial::Display::CSpatialUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjectXXXX;
					ptrNativeObject->toDecimal(nDgr, nMin, dSec, dDecimal);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_CSpatialUnitConverter_getOrientationString_EVString_ev_bool_ev_real64(void *pObjectXXXX, _in ev_bool bXCoord, _in ev_real64 dCoordinate )
				{
					EarthView::World::Spatial::Display::CSpatialUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getOrientationString(bXCoord, dCoordinate);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialUnitConverter_toWGS84Point_void_ISpatialReference_ev_real64_ev_real64_ev_int32(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* pPointRef, _out ev_real64* dPX, _out ev_real64* dPY, _in ev_int32 nCount )
				{
					EarthView::World::Spatial::Display::CSpatialUnitConverter* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialUnitConverter*) pObjectXXXX;
					ptrNativeObject->toWGS84Point(pPointRef, dPX, dPY, nCount);
				}
			}
		}
	}
}
