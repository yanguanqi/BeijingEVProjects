/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/itool.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_SystemUI_MotionEventPoint_getX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::MotionEventPoint* ptrNativeObject = (EarthView::World::Spatial::SystemUI::MotionEventPoint*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_SystemUI_MotionEventPoint_getY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::MotionEventPoint* ptrNativeObject = (EarthView::World::Spatial::SystemUI::MotionEventPoint*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_MotionEventPoint_setX_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::SystemUI::MotionEventPoint* ptrNativeObject = (EarthView::World::Spatial::SystemUI::MotionEventPoint*) pObjectXXXX;
					ptrNativeObject->setX(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_MotionEventPoint_setY_void_ev_real64(void *pObjectXXXX, _in ev_real64 value )
				{
					EarthView::World::Spatial::SystemUI::MotionEventPoint* ptrNativeObject = (EarthView::World::Spatial::SystemUI::MotionEventPoint*) pObjectXXXX;
					ptrNativeObject->setY(value);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_MotionEventPoint_setPoint_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
				{
					EarthView::World::Spatial::SystemUI::MotionEventPoint* ptrNativeObject = (EarthView::World::Spatial::SystemUI::MotionEventPoint*) pObjectXXXX;
					ptrNativeObject->setPoint(x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_MotionEvent_setEventTime_void_CCoreTime(void *pObjectXXXX, _inout void* time )
				{
					EarthView::World::Spatial::SystemUI::MotionEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjectXXXX;
					ptrNativeObject->setEventTime(*(EarthView::World::Core::CCoreTime*)time);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_SystemUI_MotionEvent_getEventTime_CCoreTime(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::MotionEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjectXXXX;
					EarthView::World::Core::CCoreTime objXXXX = ptrNativeObject->getEventTime();
					EarthView::World::Core::CCoreTime *pXXXX = new EarthView::World::Core::CCoreTime(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_MotionEvent_setEventType_void_MotionEventType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::SystemUI::MotionEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjectXXXX;
					ptrNativeObject->setEventType((EarthView::World::Spatial::SystemUI::MotionEvent::MotionEventType)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_SystemUI_MotionEvent_getEventType_MotionEventType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::MotionEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::MotionEvent::MotionEventType objXXXX = ptrNativeObject->getEventType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_MotionEvent_addTouchPoint_ev_bool_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
				{
					EarthView::World::Spatial::SystemUI::MotionEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addTouchPoint(x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_MotionEvent_clearTouchPoint_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::MotionEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjectXXXX;
					ptrNativeObject->clearTouchPoint();
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_SystemUI_MotionEvent_pointerCount_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::MotionEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->pointerCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_SystemUI_MotionEvent_getX_ev_real64_ev_int16(void *pObjectXXXX, _in ev_int16 index )
				{
					const EarthView::World::Spatial::SystemUI::MotionEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getX(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_SystemUI_MotionEvent_getY_ev_real64_ev_int16(void *pObjectXXXX, _in ev_int16 index )
				{
					const EarthView::World::Spatial::SystemUI::MotionEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getY(index);
					return objXXXX;
				}
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_ITool_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class IToolProxy : public EarthView::World::Spatial::SystemUI::ITool
				{
				private:
					EarthView_World_Spatial_SystemUI_ITool_activate_void_Callback* m_EarthView_World_Spatial_SystemUI_ITool_activate_void_Callback;
					EarthView_World_Spatial_SystemUI_ITool_deactivate_void_Callback* m_EarthView_World_Spatial_SystemUI_ITool_deactivate_void_Callback;
					EarthView_World_Spatial_SystemUI_ITool_getCursor_ev_int32_Callback* m_EarthView_World_Spatial_SystemUI_ITool_getCursor_ev_int32_Callback;
					EarthView_World_Spatial_SystemUI_ITool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial_SystemUI_ITool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial_SystemUI_ITool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial_SystemUI_ITool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial_SystemUI_ITool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial_SystemUI_ITool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial_SystemUI_ITool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial_SystemUI_ITool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial_SystemUI_ITool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial_SystemUI_ITool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial_SystemUI_ITool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial_SystemUI_ITool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial_SystemUI_ITool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial_SystemUI_ITool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial_SystemUI_ITool_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial_SystemUI_ITool_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial_SystemUI_ITool_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial_SystemUI_ITool_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial_SystemUI_ITool_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial_SystemUI_ITool_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial_SystemUI_ITool_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_ITool_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_ITool_getType_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_ITool_getType_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_ITool_getName_EVString_Callback* m_EarthView_World_Spatial_SystemUI_ITool_getName_EVString_Callback;
					EarthView_World_Spatial_SystemUI_ITool_getCategory_EVString_Callback* m_EarthView_World_Spatial_SystemUI_ITool_getCategory_EVString_Callback;
					EarthView_World_Spatial_SystemUI_ITool_getToolTip_EVString_Callback* m_EarthView_World_Spatial_SystemUI_ITool_getToolTip_EVString_Callback;
					EarthView_World_Spatial_SystemUI_ITool_getIcon_IBitmap_Callback* m_EarthView_World_Spatial_SystemUI_ITool_getIcon_IBitmap_Callback;
					EarthView_World_Spatial_SystemUI_ITool_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_ITool_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_ITool_onClicked_void_Callback* m_EarthView_World_Spatial_SystemUI_ITool_onClicked_void_Callback;
					EarthView_World_Spatial_SystemUI_ITool_getChecked_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_ITool_getChecked_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_ITool_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_ITool_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_ITool_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_ITool_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_ITool_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_ITool_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_ITool_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial_SystemUI_ITool_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial_SystemUI_ITool_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial_SystemUI_ITool_update_ev_bool_CEvent_Callback;
				public:
					IToolProxy(EarthView::World::Core::CNameValuePairList *pList) : ITool(pList)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_activate_void_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_ITool_update_ev_bool_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(IToolProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_activate_void(EarthView_World_Spatial_SystemUI_ITool_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_deactivate_void(EarthView_World_Spatial_SystemUI_ITool_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_getCursor_ev_int32(EarthView_World_Spatial_SystemUI_ITool_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial_SystemUI_ITool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool(EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial_SystemUI_ITool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial_SystemUI_ITool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial_SystemUI_ITool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial_SystemUI_ITool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial_SystemUI_ITool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial_SystemUI_ITool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial_SystemUI_ITool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial_SystemUI_ITool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial_SystemUI_ITool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_getToolBarType_ev_uint32(EarthView_World_Spatial_SystemUI_ITool_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_getType_ev_uint32(EarthView_World_Spatial_SystemUI_ITool_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_getName_EVString(EarthView_World_Spatial_SystemUI_ITool_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_getCategory_EVString(EarthView_World_Spatial_SystemUI_ITool_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_getToolTip_EVString(EarthView_World_Spatial_SystemUI_ITool_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_getIcon_IBitmap(EarthView_World_Spatial_SystemUI_ITool_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_isCheckable_ev_bool(EarthView_World_Spatial_SystemUI_ITool_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_onClicked_void(EarthView_World_Spatial_SystemUI_ITool_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_getChecked_ev_bool(EarthView_World_Spatial_SystemUI_ITool_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_setChecked_void_ev_bool(EarthView_World_Spatial_SystemUI_ITool_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_getEnabled_ev_bool(EarthView_World_Spatial_SystemUI_ITool_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_setEnabled_void_ev_bool(EarthView_World_Spatial_SystemUI_ITool_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_create_void_ISpatialControl(EarthView_World_Spatial_SystemUI_ITool_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_ITool_update_ev_bool_CEvent(EarthView_World_Spatial_SystemUI_ITool_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_ITool_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_ITool_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->ITool::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_ITool_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->ITool::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_ITool_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->ITool::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_ITool_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->ITool::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_ITool_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->ITool::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial_SystemUI_ITool_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->ITool::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_ITool_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ITool::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_ITool_onClicked_void_Callback();
						}
						else
							return this->ITool::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_ITool_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ITool::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_ITool_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->ITool::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_ITool_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ITool::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_ITool_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->ITool::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_ITool_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->ITool::create(ref_ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_ITool_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->ITool::update(e);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_ITool_activate_void_Callback();
						}
						else
							return this->ITool::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_ITool_deactivate_void_Callback();
						}
						else
							return this->ITool::deactivate();
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_SystemUI_ITool_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->ITool::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_ITool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->ITool::onContextMenu(x, y);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ITool::onDoubleClick();
					}
					virtual ev_bool onDoubleClick(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->ITool::onDoubleClick(button, shift, x, y);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_ITool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->ITool::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_ITool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->ITool::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_ITool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->ITool::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_ITool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->ITool::onMouseMove(button, shift, x, y);
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_ITool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->ITool::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_ITool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->ITool::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_ITool_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->ITool::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_ITool_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->ITool::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial_SystemUI_ITool_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_ITool_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->ITool::onTouchMove(touchEvent);
					}
				};
				REGISTER_FACTORY_CLASS(IToolProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_ITool_getToolBarType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getToolBarType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_getToolBarType_ev_uint32_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_ITool_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getToolBarType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_ITool_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_getType_ev_uint32_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_ITool_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_ITool_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_getName_EVString_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_ITool_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_ITool_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_getCategory_EVString_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_ITool_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_ITool_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_getToolTip_EVString_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_ITool_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_SystemUI_ITool_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_getIcon_IBitmap_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_SystemUI_ITool_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_isCheckable_ev_bool_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_ITool_onClicked_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onClicked();
					else
						ptrNativeObject->onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_onClicked_void_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_ITool_onClicked_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_getChecked_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getChecked();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getChecked();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_getChecked_ev_bool_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getChecked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_ITool_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::setChecked(checked);
					else
						ptrNativeObject->setChecked(checked);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_setChecked_void_ev_bool_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_ITool_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::setChecked(checked);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_getEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getEnabled();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getEnabled();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_getEnabled_ev_bool_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_ITool_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::setEnabled(enabled);
					else
						ptrNativeObject->setEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_setEnabled_void_ev_bool_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_ITool_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::setEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_ITool_create_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::create(ref_ctrl);
					else
						ptrNativeObject->create(ref_ctrl);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_create_void_ISpatialControl_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_ITool_create_void_ISpatialControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::create(ref_ctrl);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_update_ev_bool_CEvent_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_ITool_activate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::activate();
					else
						ptrNativeObject->activate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_activate_void( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_activate_void_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_ITool_activate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::activate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_ITool_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_deactivate_void_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_ITool_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_ITool_getCursor_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getCursor();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getCursor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_getCursor_ev_int32_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_SystemUI_ITool_getCursor_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::getCursor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onContextMenu_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onContextMenu(x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onContextMenu(x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onContextMenu_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onContextMenu(x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onDoubleClick();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onDoubleClick();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onDoubleClick(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onDoubleClick(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onKeyDown_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onKeyDown(keyCode, shift);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onKeyDown(keyCode, shift);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onKeyDown_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onKeyDown(keyCode, shift);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onKeyUp_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onKeyUp(keyCode, shift);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onKeyUp(keyCode, shift);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onKeyUp_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onKeyUp(keyCode, shift);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onMouseDown(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onMouseDown(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onMouseMove(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onMouseMove(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onMouseWheel(delta, x, y, flag);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseWheel(delta, x, y, flag);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onMouseWheel(delta, x, y, flag);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onTouchDown_ev_bool_MotionEvent(void *pObjectXXXX, _in const void* touchEvent )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onTouchDown(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onTouchDown(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onTouchDown_ev_bool_MotionEvent_NoVirtual(void *pObjectXXXX, _in const void* touchEvent )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onTouchDown(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onTouchUp_ev_bool_MotionEvent(void *pObjectXXXX, _in const void* touchEvent )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onTouchUp(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onTouchUp(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onTouchUp_ev_bool_MotionEvent_NoVirtual(void *pObjectXXXX, _in const void* touchEvent )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onTouchUp(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onTouchMove_ev_bool_MotionEvent(void *pObjectXXXX, _in const void* touchEvent )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					if (dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onTouchMove(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onTouchMove(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_ITool_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_ITool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					IToolProxy* ptr = dynamic_cast<IToolProxy*>((EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_ITool_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_ITool_onTouchMove_ev_bool_MotionEvent_NoVirtual(void *pObjectXXXX, _in const void* touchEvent )
				{
					EarthView::World::Spatial::SystemUI::ITool* ptrNativeObject = (EarthView::World::Spatial::SystemUI::ITool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::ITool::onTouchMove(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
					return objXXXX;
				}
			}
		}
	}
}
