/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdisplay/spatialrect.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial_Display_CSpatialRect_isNull_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->isNull();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial_Display_CSpatialRect_isEmpty_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->isEmpty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial_Display_CSpatialRect_isValid_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialRect_normalized_CSpatialRect(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->normalized();
					EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialRect_left_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->left();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialRect_top_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->top();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialRect_right_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->right();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialRect_bottom_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->bottom();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialRect_x_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->x();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialRect_y_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->y();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_setLeft_void_ev_real64(void *pObjectXXXX, _in ev_real64 pos )
				{
					EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->setLeft(pos);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_setTop_void_ev_real64(void *pObjectXXXX, _in ev_real64 pos )
				{
					EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->setTop(pos);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_setRight_void_ev_real64(void *pObjectXXXX, _in ev_real64 pos )
				{
					EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->setRight(pos);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_setBottom_void_ev_real64(void *pObjectXXXX, _in ev_real64 pos )
				{
					EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->setBottom(pos);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_setX_void_ev_real64(void *pObjectXXXX, _in ev_real64 pos )
				{
					EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->setX(pos);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_setY_void_ev_real64(void *pObjectXXXX, _in ev_real64 pos )
				{
					EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->setY(pos);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_moveLeft_void_ev_real64(void *pObjectXXXX, _in ev_real64 pos )
				{
					EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->moveLeft(pos);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_moveTop_void_ev_real64(void *pObjectXXXX, _in ev_real64 pos )
				{
					EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->moveTop(pos);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_moveRight_void_ev_real64(void *pObjectXXXX, _in ev_real64 pos )
				{
					EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->moveRight(pos);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_moveBottom_void_ev_real64(void *pObjectXXXX, _in ev_real64 pos )
				{
					EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->moveBottom(pos);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_translate_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 dx, _in ev_real64 dy )
				{
					EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->translate(dx, dy);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialRect_translated_CSpatialRect_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 dx, _in ev_real64 dy )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->translated(dx, dy);
					EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_moveTo_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 t )
				{
					EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->moveTo(x, t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_setRect_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h )
				{
					EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->setRect(x, y, w, h);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_getRect_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64* x, _in ev_real64* y, _in ev_real64* w, _in ev_real64* h )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->getRect(x, y, w, h);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_setCoords_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x1, _in ev_real64 y1, _in ev_real64 x2, _in ev_real64 y2 )
				{
					EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->setCoords(x1, y1, x2, y2);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_getCoords_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64* x1, _in ev_real64* y1, _in ev_real64* x2, _in ev_real64* y2 )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->getCoords(x1, y1, x2, y2);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_adjust_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x1, _in ev_real64 y1, _in ev_real64 x2, _in ev_real64 y2 )
				{
					EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->adjust(x1, y1, x2, y2);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialRect_adjusted_CSpatialRect_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x1, _in ev_real64 y1, _in ev_real64 x2, _in ev_real64 y2 )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->adjusted(x1, y1, x2, y2);
					EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialRect_width_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->width();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Display_CSpatialRect_height_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->height();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_setWidth_void_ev_real64(void *pObjectXXXX, _in ev_real64 w )
				{
					EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->setWidth(w);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialRect_setHeight_void_ev_real64(void *pObjectXXXX, _in ev_real64 h )
				{
					EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					ptrNativeObject->setHeight(h);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial_Display_CSpatialRect_contains_bool_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->contains(x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial_Display_CSpatialRect_contains_bool_CSpatialRect(void *pObjectXXXX, _in const void* r )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->contains(*(EarthView::World::Spatial::Display::CSpatialRect*)r);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialRect_unite_CSpatialRect_CSpatialRect(void *pObjectXXXX, _in const void* r )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->unite(*(EarthView::World::Spatial::Display::CSpatialRect*)r);
					EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialRect_united_CSpatialRect_CSpatialRect(void *pObjectXXXX, _in const void* other )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->united(*(EarthView::World::Spatial::Display::CSpatialRect*)other);
					EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialRect_intersect_CSpatialRect_CSpatialRect(void *pObjectXXXX, _in const void* r )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->intersect(*(EarthView::World::Spatial::Display::CSpatialRect*)r);
					EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CSpatialRect_intersected_CSpatialRect_CSpatialRect(void *pObjectXXXX, _in const void* other )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					EarthView::World::Spatial::Display::CSpatialRect objXXXX = ptrNativeObject->intersected(*(EarthView::World::Spatial::Display::CSpatialRect*)other);
					EarthView::World::Spatial::Display::CSpatialRect *pXXXX = new EarthView::World::Spatial::Display::CSpatialRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial_Display_CSpatialRect_intersects_bool_CSpatialRect(void *pObjectXXXX, _in const void* r )
				{
					const EarthView::World::Spatial::Display::CSpatialRect* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialRect*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->intersects(*(EarthView::World::Spatial::Display::CSpatialRect*)r);
					return objXXXX;
				}
			}
		}
	}
}
