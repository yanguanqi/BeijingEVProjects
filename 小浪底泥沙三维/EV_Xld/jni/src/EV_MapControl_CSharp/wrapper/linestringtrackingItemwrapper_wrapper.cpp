/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/linestringtrackingItemwrapper.h"
extern "C" EV_DLL_EXPORT  void  _stdcall CLinestringTrackingItemWrapper_setLevelScale_void_ev_int32_ev_real64(void *pObjectXXXX, _in ev_int32 level, _in ev_real64 scale )
{
	CLinestringTrackingItemWrapper* ptrNativeObject = (CLinestringTrackingItemWrapper*) pObjectXXXX;
	ptrNativeObject->setLevelScale(level, scale);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CLinestringTrackingItemWrapper_setSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* pSymbol )
{
	CLinestringTrackingItemWrapper* ptrNativeObject = (CLinestringTrackingItemWrapper*) pObjectXXXX;
	ptrNativeObject->setSymbol(pSymbol);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CLinestringTrackingItemWrapper_addPoint_void_CPoint(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CPoint* point )
{
	CLinestringTrackingItemWrapper* ptrNativeObject = (CLinestringTrackingItemWrapper*) pObjectXXXX;
	ptrNativeObject->addPoint(point);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CLinestringTrackingItemWrapper_refresh_void(void *pObjectXXXX )
{
	CLinestringTrackingItemWrapper* ptrNativeObject = (CLinestringTrackingItemWrapper*) pObjectXXXX;
	ptrNativeObject->refresh();
}
