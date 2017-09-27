/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/guievent.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial_SystemUI_CTouchPoint_mid( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CTouchPoint* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchPoint*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->mid;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CTouchPoint_mid( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial::SystemUI::CTouchPoint*)pObjectXXXX)->mid = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_SystemUI_CTouchPoint_mphase( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CTouchPoint* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchPoint*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::GUITouchPhase objXXXX = ptrNativeObject->mphase;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CTouchPoint_mphase( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::SystemUI::CTouchPoint*)pObjectXXXX)->mphase = (EarthView::World::Spatial::SystemUI::GUITouchPhase)value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial_SystemUI_CTouchPoint_x( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CTouchPoint* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchPoint*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->x;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CTouchPoint_x( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial::SystemUI::CTouchPoint*)pObjectXXXX)->x = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial_SystemUI_CTouchPoint_y( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CTouchPoint* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchPoint*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->y;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CTouchPoint_y( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial::SystemUI::CTouchPoint*)pObjectXXXX)->y = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial_SystemUI_CTouchPoint_mtapCount( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CTouchPoint* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchPoint*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->mtapCount;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CTouchPoint_mtapCount( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial::SystemUI::CTouchPoint*)pObjectXXXX)->mtapCount = value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CTouchSet_OperatorAssign_void_CTouchSet(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial::SystemUI::CTouchSet& objXXXX = *((EarthView::World::Spatial::SystemUI::CTouchSet*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::SystemUI::CTouchSet*)rhs;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CTouchSet_push_back_void_CTouchPoint(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial::SystemUI::CTouchSet* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial::SystemUI::CTouchPoint*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CTouchSet_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CTouchSet* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_SystemUI_CTouchSet_front_CTouchPoint(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CTouchSet* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CTouchPoint& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial::SystemUI::CTouchPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_SystemUI_CTouchSet_back_CTouchPoint(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CTouchSet* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CTouchPoint& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial::SystemUI::CTouchPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CTouchSet_insert_void_ev_uint32_CTouchPoint(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial::SystemUI::CTouchSet* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial::SystemUI::CTouchPoint*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CTouchSet_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial::SystemUI::CTouchSet* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CTouchSet_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CTouchSet* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_SystemUI_CTouchSet_OperatorIndex_CTouchPoint_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::SystemUI::CTouchSet& objYYYY = *(EarthView::World::Spatial::SystemUI::CTouchSet*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CTouchPoint& objXXXX = objYYYY[n];
					EarthView::World::Spatial::SystemUI::CTouchPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_SystemUI_CTouchSet_at_CTouchPoint_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial::SystemUI::CTouchSet* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CTouchPoint& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial::SystemUI::CTouchPoint *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_SystemUI_CTouchSet_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CTouchSet* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CTouchSet_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial::SystemUI::CTouchSet* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CTouchSet_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial::SystemUI::CTouchSet* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CTouchSet_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CTouchSet* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CTouchData_addTouchPoint_void_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_uint32(void *pObjectXXXX, _in ev_uint32 id, _in int phase, _in ev_real32 x, _in ev_real32 y, _in ev_uint32 tap_count )
				{
					EarthView::World::Spatial::SystemUI::CTouchData* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchData*) pObjectXXXX;
					ptrNativeObject->addTouchPoint(id, (EarthView::World::Spatial::SystemUI::GUITouchPhase)phase, x, y, tap_count);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_SystemUI_CTouchData_mtouchSet( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CTouchData* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CTouchData*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CTouchSet &objXXXX = ptrNativeObject->mtouchSet;
					EarthView::World::Spatial::SystemUI::CTouchSet *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CTouchData_mtouchSet( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial::SystemUI::CTouchData*)pObjectXXXX)->mtouchSet = *(EarthView::World::Spatial::SystemUI::CTouchSet*)value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::CGUIEvent*  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_getAccumulatedEventState_CGUIEvent( )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* objXXXX = EarthView::World::Spatial::SystemUI::CGUIEvent::getAccumulatedEventState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_setHandled_void_ev_bool(void *pObjectXXXX, _in ev_bool handled )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ptrNativeObject->setHandled(handled);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_getHandled_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getHandled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_setEventType_void_GUIEventType(void *pObjectXXXX, _in int eventType )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ptrNativeObject->setEventType((EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType)eventType);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_getEventType_GUIEventType(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType objXXXX = ptrNativeObject->getEventType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_setTime_void_ev_real64(void *pObjectXXXX, _in ev_real64 time )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ptrNativeObject->setTime(time);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_getTime_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getTime();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_setWindowRectangle_void_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y, _in ev_int32 width, _in ev_int32 height )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ptrNativeObject->setWindowRectangle(x, y, width, height);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_getWindowX_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getWindowX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_getWindowY_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getWindowY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_getWindowWidth_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getWindowWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_getWindowHeight_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getWindowHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_setKey_void_GUIKeySymbol(void *pObjectXXXX, _in int key )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ptrNativeObject->setKey((EarthView::World::Spatial::SystemUI::CGUIEvent::GUIKeySymbol)key);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_getKey_GUIKeySymbol(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIKeySymbol objXXXX = ptrNativeObject->getKey();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_setVirtualKey_void_GUIKeySymbol(void *pObjectXXXX, _in int key )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ptrNativeObject->setVirtualKey((EarthView::World::Spatial::SystemUI::CGUIEvent::GUIKeySymbol)key);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_getVirtualKey_GUIKeySymbol(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIKeySymbol objXXXX = ptrNativeObject->getVirtualKey();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_setButton_void_GUIMouseButtonMask(void *pObjectXXXX, _in int button )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ptrNativeObject->setButton((EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask)button);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_getButton_GUIMouseButtonMask(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask objXXXX = ptrNativeObject->getButton();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_setX_void_ev_int32(void *pObjectXXXX, _in ev_int32 x )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ptrNativeObject->setX(x);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_getX_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_setY_void_ev_int32(void *pObjectXXXX, _in ev_int32 y )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ptrNativeObject->setY(y);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_getY_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_setButtonMask_void_ev_int32(void *pObjectXXXX, _in ev_int32 mask )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ptrNativeObject->setButtonMask(mask);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_getButtonMask_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getButtonMask();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_setModKeyMask_void_ev_int32(void *pObjectXXXX, _in ev_int32 mask )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ptrNativeObject->setModKeyMask(mask);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_getModKeyMask_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getModKeyMask();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_setMouseWheelDelta_void_ev_real32(void *pObjectXXXX, _in ev_real32 delta )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ptrNativeObject->setMouseWheelDelta(delta);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_getMouseWheelDelta_ev_real32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getMouseWheelDelta();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_addTouchPoint_void_ev_uint32_GUITouchPhase_ev_real32_ev_real32(void *pObjectXXXX, _in ev_uint32 id, _in int phase, _in ev_real32 x, _in ev_real32 y )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ptrNativeObject->addTouchPoint(id, (EarthView::World::Spatial::SystemUI::GUITouchPhase)phase, x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_addTouchPoint_void_ev_uint32_GUITouchPhase_ev_real32_ev_real32_ev_uint32(void *pObjectXXXX, _in ev_uint32 id, _in int phase, _in ev_real32 x, _in ev_real32 y, _in ev_uint32 tapCount )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ptrNativeObject->addTouchPoint(id, (EarthView::World::Spatial::SystemUI::GUITouchPhase)phase, x, y, tapCount);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_getTouchData_CTouchData(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CTouchData objXXXX = ptrNativeObject->getTouchData();
					EarthView::World::Spatial::SystemUI::CTouchData *pXXXX = new EarthView::World::Spatial::SystemUI::CTouchData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_CGUIEvent_isMultiTouchEvent_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isMultiTouchEvent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial_SystemUI_CGUIEvent_mhandled( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mhandled;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CGUIEvent_mhandled( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjectXXXX)->mhandled = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_SystemUI_CGUIEvent_meventType( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType objXXXX = ptrNativeObject->meventType;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CGUIEvent_meventType( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjectXXXX)->meventType = (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType)value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_SystemUI_CGUIEvent_mtime( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mtime;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CGUIEvent_mtime( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjectXXXX)->mtime = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_SystemUI_CGUIEvent_mkey( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIKeySymbol objXXXX = ptrNativeObject->mkey;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CGUIEvent_mkey( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjectXXXX)->mkey = (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIKeySymbol)value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_SystemUI_CGUIEvent_mvirtualKey( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIKeySymbol objXXXX = ptrNativeObject->mvirtualKey;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CGUIEvent_mvirtualKey( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjectXXXX)->mvirtualKey = (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIKeySymbol)value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_SystemUI_CGUIEvent_mbutton( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask objXXXX = ptrNativeObject->mbutton;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CGUIEvent_mbutton( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjectXXXX)->mbutton = (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask)value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_SystemUI_CGUIEvent_mbuttonMask( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mbuttonMask;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CGUIEvent_mbuttonMask( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjectXXXX)->mbuttonMask = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_SystemUI_CGUIEvent_mmodKeyMask( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mmodKeyMask;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CGUIEvent_mmodKeyMask( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjectXXXX)->mmodKeyMask = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_SystemUI_CGUIEvent_mx( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mx;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CGUIEvent_mx( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjectXXXX)->mx = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_SystemUI_CGUIEvent_my( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->my;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CGUIEvent_my( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjectXXXX)->my = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_SystemUI_CGUIEvent_mwindowX( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mwindowX;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CGUIEvent_mwindowX( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjectXXXX)->mwindowX = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_SystemUI_CGUIEvent_mwindowY( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mwindowY;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CGUIEvent_mwindowY( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjectXXXX)->mwindowY = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_SystemUI_CGUIEvent_mwindowWidth( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mwindowWidth;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CGUIEvent_mwindowWidth( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjectXXXX)->mwindowWidth = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_SystemUI_CGUIEvent_mwindowHeight( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mwindowHeight;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CGUIEvent_mwindowHeight( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjectXXXX)->mwindowHeight = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial_SystemUI_CGUIEvent_mmouseWheelDelta( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mmouseWheelDelta;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CGUIEvent_mmouseWheelDelta( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjectXXXX)->mmouseWheelDelta = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_SystemUI_CGUIEvent_mtouchData( void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CTouchData &objXXXX = ptrNativeObject->mtouchData;
					EarthView::World::Spatial::SystemUI::CTouchData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_SystemUI_CGUIEvent_mtouchData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjectXXXX)->mtouchData = *(EarthView::World::Spatial::SystemUI::CTouchData*)value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::CGUIEvent*  _stdcall EarthView_World_Spatial_SystemUI_CGUIEventPtr_get_CGUIEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CGUIEventPtr* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CGUIEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_SystemUI_CGUIEventPtr_OperatorAssign_CGUIEventPtr_CGUIEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial::SystemUI::CGUIEventPtr& objXXXX = *((EarthView::World::Spatial::SystemUI::CGUIEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial::SystemUI::CGUIEventPtr*)r;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_SystemUI_CGUIEventPtr_OperatorAssign_CGUIEventPtr_CGUIEvent(void *pObjXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* ref_rep )
				{
					EarthView::World::Spatial::SystemUI::CGUIEventPtr& objXXXX = *((EarthView::World::Spatial::SystemUI::CGUIEventPtr*) pObjXXXX);
					objXXXX = ref_rep;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
		}
	}
}
