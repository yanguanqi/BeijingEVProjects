/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/pagerect.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Display_CPageRect_isValid_bool(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->isValid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Display_CPageRect_left_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->left();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Display_CPageRect_top_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->top();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Display_CPageRect_right_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->right();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Display_CPageRect_bottom_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->bottom();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPageRect_setLeft_void_ev_real64(void *pObjectXXXX, _in ev_real64 pos )
			{
				EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				ptrNativeObject->setLeft(pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPageRect_setTop_void_ev_real64(void *pObjectXXXX, _in ev_real64 pos )
			{
				EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				ptrNativeObject->setTop(pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPageRect_setRight_void_ev_real64(void *pObjectXXXX, _in ev_real64 pos )
			{
				EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				ptrNativeObject->setRight(pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPageRect_setBottom_void_ev_real64(void *pObjectXXXX, _in ev_real64 pos )
			{
				EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				ptrNativeObject->setBottom(pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPageRect_moveCenter_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
			{
				EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				ptrNativeObject->moveCenter(x, y);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPageRect_translate_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 dx, _in ev_real64 dy )
			{
				EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				ptrNativeObject->translate(dx, dy);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPageRect_setRect_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h )
			{
				EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				ptrNativeObject->setRect(x, y, w, h);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPageRect_getRect_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64* x, _in ev_real64* y, _in ev_real64* w, _in ev_real64* h )
			{
				const EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				ptrNativeObject->getRect(x, y, w, h);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPageRect_getCoords_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64* x1, _in ev_real64* y1, _in ev_real64* x2, _in ev_real64* y2 )
			{
				const EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				ptrNativeObject->getCoords(x1, y1, x2, y2);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Display_CPageRect_width_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->width();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Display_CPageRect_height_ev_real64(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->height();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Display_CPageRect_contains_bool_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
			{
				const EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->contains(x, y);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Display_CPageRect_contains_bool_ev_real64_ev_real64_bool(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in bool proper )
			{
				const EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->contains(x, y, proper);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPageRect_unite_CPageRect_CPageRect(void *pObjectXXXX, _in const void* r )
			{
				const EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				EarthView::World::Display::CPageRect objXXXX = ptrNativeObject->unite(*(EarthView::World::Display::CPageRect*)r);
				EarthView::World::Display::CPageRect *pXXXX = new EarthView::World::Display::CPageRect(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPageRect_united_CPageRect_CPageRect(void *pObjectXXXX, _in const void* other )
			{
				const EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				EarthView::World::Display::CPageRect objXXXX = ptrNativeObject->united(*(EarthView::World::Display::CPageRect*)other);
				EarthView::World::Display::CPageRect *pXXXX = new EarthView::World::Display::CPageRect(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPageRect_intersect_CPageRect_CPageRect(void *pObjectXXXX, _in const void* r )
			{
				const EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				EarthView::World::Display::CPageRect objXXXX = ptrNativeObject->intersect(*(EarthView::World::Display::CPageRect*)r);
				EarthView::World::Display::CPageRect *pXXXX = new EarthView::World::Display::CPageRect(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPageRect_intersected_CPageRect_CPageRect(void *pObjectXXXX, _in const void* other )
			{
				const EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				EarthView::World::Display::CPageRect objXXXX = ptrNativeObject->intersected(*(EarthView::World::Display::CPageRect*)other);
				EarthView::World::Display::CPageRect *pXXXX = new EarthView::World::Display::CPageRect(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Display_CPageRect_intersects_bool_CPageRect(void *pObjectXXXX, _in const void* r )
			{
				const EarthView::World::Display::CPageRect* ptrNativeObject = (EarthView::World::Display::CPageRect*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->intersects(*(EarthView::World::Display::CPageRect*)r);
				return objXXXX;
			}
		}
	}
}
