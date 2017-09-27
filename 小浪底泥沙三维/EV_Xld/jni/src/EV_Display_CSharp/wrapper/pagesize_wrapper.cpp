/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/pagesize.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CPageSize_isEmpty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPageSize* ptrNativeObject = (EarthView::World::Display::CPageSize*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isEmpty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CPageSize_isValid_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPageSize* ptrNativeObject = (EarthView::World::Display::CPageSize*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isValid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Display_CPageSize_width_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPageSize* ptrNativeObject = (EarthView::World::Display::CPageSize*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->width();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Display_CPageSize_height_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPageSize* ptrNativeObject = (EarthView::World::Display::CPageSize*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->height();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPageSize_setWidth_void_ev_real64(void *pObjectXXXX, _in ev_real64 w )
			{
				EarthView::World::Display::CPageSize* ptrNativeObject = (EarthView::World::Display::CPageSize*) pObjectXXXX;
				ptrNativeObject->setWidth(w);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPageSize_setHeight_void_ev_real64(void *pObjectXXXX, _in ev_real64 h )
			{
				EarthView::World::Display::CPageSize* ptrNativeObject = (EarthView::World::Display::CPageSize*) pObjectXXXX;
				ptrNativeObject->setHeight(h);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPageSize_scale_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 w, _in ev_real64 h )
			{
				EarthView::World::Display::CPageSize* ptrNativeObject = (EarthView::World::Display::CPageSize*) pObjectXXXX;
				ptrNativeObject->scale(w, h);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPageSize_expandedTo_CPageSize_CPageSize(void *pObjectXXXX, _in const void* other )
			{
				const EarthView::World::Display::CPageSize* ptrNativeObject = (EarthView::World::Display::CPageSize*) pObjectXXXX;
				EarthView::World::Display::CPageSize objXXXX = ptrNativeObject->expandedTo(*(EarthView::World::Display::CPageSize*)other);
				EarthView::World::Display::CPageSize *pXXXX = new EarthView::World::Display::CPageSize(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPageSize_boundedTo_CPageSize_CPageSize(void *pObjectXXXX, _in const void* other )
			{
				const EarthView::World::Display::CPageSize* ptrNativeObject = (EarthView::World::Display::CPageSize*) pObjectXXXX;
				EarthView::World::Display::CPageSize objXXXX = ptrNativeObject->boundedTo(*(EarthView::World::Display::CPageSize*)other);
				EarthView::World::Display::CPageSize *pXXXX = new EarthView::World::Display::CPageSize(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
		}
	}
}
