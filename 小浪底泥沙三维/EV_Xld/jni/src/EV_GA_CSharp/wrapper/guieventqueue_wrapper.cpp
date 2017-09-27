/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/guieventqueue.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_setEvents_void_CEvents(void *pObjectXXXX, _in void* events )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->setEvents(*(EarthView::World::Spatial3D::Controls::CEvents*)events);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_appendEvents_void_CEvents(void *pObjectXXXX, _in void* events )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->appendEvents(*(EarthView::World::Spatial3D::Controls::CEvents*)events);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_addEvent_void_CGUIEventPtr(void *pObjectXXXX, _in const void* guiEvent )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->addEvent(*(EarthView::World::Spatial::SystemUI::CGUIEventPtr*)guiEvent);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_takeEvent_ev_bool_CEvents(void *pObjectXXXX, _in void* events )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->takeEvent(*(EarthView::World::Spatial3D::Controls::CEvents*)events);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_windowResize_void_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_int32 width, _in ev_int32 height, _in ev_real64 time )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->windowResize(x, y, width, height, time);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_mouseWheel_void_ev_real32_ev_real64(void *pObjectXXXX, _in ev_real32 delta, _in ev_real64 time )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->mouseWheel(delta, time);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_mouseMove_void_ev_int32_ev_int32_ev_real64(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_real64 time )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->mouseMove(x, y, time);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32_ev_real64(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_uint32 button, _in ev_real64 time )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->mouseButtonPress(x, y, button, time);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32_ev_real64(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_uint32 button, _in ev_real64 time )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->mouseDoubleButtonPress(x, y, button, time);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32_ev_real64(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_uint32 button, _in ev_real64 time )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->mouseButtonRelease(x, y, button, time);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_keyPress_void_ev_int32_ev_int32_ev_real64(void *pObjectXXXX, _in ev_int32 key, _in ev_int32 virtualKey, _in ev_real64 time )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->keyPress(key, virtualKey, time);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_keyRelease_void_ev_int32_ev_int32_ev_real64(void *pObjectXXXX, _in ev_int32 key, _in ev_int32 virtualKey, _in ev_real64 time )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->keyRelease(key, virtualKey, time);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_touchBegan_void_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_real64(void *pObjectXXXX, _in ev_uint32 id, _in int phase, _in ev_real32 x, _in ev_real32 y, _in ev_real64 time )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->touchBegan(id, (EarthView::World::Spatial::SystemUI::GUITouchPhase)phase, x, y, time);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_touchMove_void_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_real64(void *pObjectXXXX, _in ev_uint32 id, _in int phase, _in ev_real32 x, _in ev_real32 y, _in ev_real64 time )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->touchMove(id, (EarthView::World::Spatial::SystemUI::GUITouchPhase)phase, x, y, time);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_touchEnded_void_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_uint32_ev_real64(void *pObjectXXXX, _in ev_uint32 id, _in int phase, _in ev_real32 x, _in ev_real32 y, _in ev_uint32 tap_count, _in ev_real64 time )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->touchEnded(id, (EarthView::World::Spatial::SystemUI::GUITouchPhase)phase, x, y, tap_count, time);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_closeWindow_void_ev_real64(void *pObjectXXXX, _in ev_real64 time )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->closeWindow(time);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_quitApplication_void_ev_real64(void *pObjectXXXX, _in ev_real64 time )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->quitApplication(time);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_windowResize_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_int32 width, _in ev_int32 height )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->windowResize(x, y, width, height);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_mouseWheel_void_ev_real32(void *pObjectXXXX, _in ev_real32 delta )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->mouseWheel(delta);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_mouseMove_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->mouseMove(x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_mouseButtonPress_void_ev_int32_ev_int32_ev_uint32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_uint32 button )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->mouseButtonPress(x, y, button);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_mouseDoubleButtonPress_void_ev_int32_ev_int32_ev_uint32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_uint32 button )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->mouseDoubleButtonPress(x, y, button);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_mouseButtonRelease_void_ev_int32_ev_int32_ev_uint32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_uint32 button )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->mouseButtonRelease(x, y, button);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_keyPress_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 key, _in ev_int32 virtualKey )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->keyPress(key, virtualKey);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_keyRelease_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 key, _in ev_int32 virtualKey )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->keyRelease(key, virtualKey);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_touchBegan_void_ev_uint32_GUITouchPhase_ev_real32_ev_real32(void *pObjectXXXX, _in ev_uint32 id, _in int phase, _in ev_real32 x, _in ev_real32 y )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->touchBegan(id, (EarthView::World::Spatial::SystemUI::GUITouchPhase)phase, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_touchMove_void_ev_uint32_GUITouchPhase_ev_real32_ev_real32(void *pObjectXXXX, _in ev_uint32 id, _in int phase, _in ev_real32 x, _in ev_real32 y )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->touchMove(id, (EarthView::World::Spatial::SystemUI::GUITouchPhase)phase, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_touchEnded_void_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_uint32(void *pObjectXXXX, _in ev_uint32 id, _in int phase, _in ev_real32 x, _in ev_real32 y, _in ev_uint32 tap_count )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->touchEnded(id, (EarthView::World::Spatial::SystemUI::GUITouchPhase)phase, x, y, tap_count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_closeWindow_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->closeWindow();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_quitApplication_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->quitApplication();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::CGUIEvent*  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_createEvent_CGUIEvent(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent* objXXXX = ptrNativeObject->createEvent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_frame_void_ev_real64(void *pObjectXXXX, _in ev_real64 time )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->frame(time);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_resetAccumlateEvent_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					ptrNativeObject->resetAccumlateEvent();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::CGUIEvent*  _stdcall EarthView_World_Spatial3D_Controls_CGUIEventQueue_getAccumlateEvent_CGUIEvent(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent* objXXXX = ptrNativeObject->getAccumlateEvent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_Controls_CGUIEventQueue_mevents( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CEvents &objXXXX = ptrNativeObject->mevents;
					EarthView::World::Spatial3D::Controls::CEvents *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGUIEventQueue_mevents( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::Controls::CGUIEventQueue*)pObjectXXXX)->mevents = *(EarthView::World::Spatial3D::Controls::CEvents*)value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::CGUIEvent*  _stdcall Get_EarthView_World_Spatial3D_Controls_CGUIEventQueue_maccumlateEventState( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent* objXXXX = ptrNativeObject->maccumlateEventState;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGUIEventQueue_maccumlateEventState( void *pObjectXXXX, EarthView::World::Spatial::SystemUI::CGUIEvent*  value )
				{
					((EarthView::World::Spatial3D::Controls::CGUIEventQueue*)pObjectXXXX)->maccumlateEventState = value;
				}
			}
		}
	}
}
