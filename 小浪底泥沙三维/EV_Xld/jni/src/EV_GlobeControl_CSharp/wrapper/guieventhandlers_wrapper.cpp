/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/guieventhandlers.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_GUIEventHandlers_push_back_void_CGUIEventHandler(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGUIEventHandler*& t )
				{
					EarthView::World::Spatial3D::Controls::GUIEventHandlers* ptrNativeObject = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_GUIEventHandlers_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::GUIEventHandlers* ptrNativeObject = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGUIEventHandler*  _stdcall EarthView_World_Spatial3D_Controls_GUIEventHandlers_front_CGUIEventHandler(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::GUIEventHandlers* ptrNativeObject = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGUIEventHandler* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGUIEventHandler*  _stdcall EarthView_World_Spatial3D_Controls_GUIEventHandlers_back_CGUIEventHandler(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::GUIEventHandlers* ptrNativeObject = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGUIEventHandler* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_GUIEventHandlers_insert_void_ev_uint32_CGUIEventHandler(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial3D::Controls::CGUIEventHandler*& t )
				{
					EarthView::World::Spatial3D::Controls::GUIEventHandlers* ptrNativeObject = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_GUIEventHandlers_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Controls::GUIEventHandlers* ptrNativeObject = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_GUIEventHandlers_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::GUIEventHandlers* ptrNativeObject = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGUIEventHandler*  _stdcall EarthView_World_Spatial3D_Controls_GUIEventHandlers_OperatorIndex_CGUIEventHandler_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Controls::GUIEventHandlers& objYYYY = *(EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGUIEventHandler* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGUIEventHandler*  _stdcall EarthView_World_Spatial3D_Controls_GUIEventHandlers_at_CGUIEventHandler_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Controls::GUIEventHandlers* ptrNativeObject = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGUIEventHandler* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Controls_GUIEventHandlers_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::GUIEventHandlers* ptrNativeObject = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_GUIEventHandlers_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Controls::GUIEventHandlers* ptrNativeObject = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_GUIEventHandlers_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Controls::GUIEventHandlers* ptrNativeObject = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_GUIEventHandlers_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::GUIEventHandlers* ptrNativeObject = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjectXXXX;
					ptrNativeObject->clear();
				}
			}
		}
	}
}
