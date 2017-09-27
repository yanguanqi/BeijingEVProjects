/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/tilealtitudetool.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
			}
			namespace SystemUI
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateStart_void_CTileAltitudeTool_Callback)(_in EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* tool);
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateEnd_void_CTileAltitudeTool_Callback)(_in EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* tool);
				class CTileAltitudeListenerProxy : public EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener
				{
				private:
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateStart_void_CTileAltitudeTool_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateStart_void_CTileAltitudeTool_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateEnd_void_CTileAltitudeTool_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateEnd_void_CTileAltitudeTool_Callback;
				public:
					CTileAltitudeListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CTileAltitudeListener(pList)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateStart_void_CTileAltitudeTool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateEnd_void_CTileAltitudeTool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateStart_void_CTileAltitudeTool(EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateStart_void_CTileAltitudeTool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateStart_void_CTileAltitudeTool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateEnd_void_CTileAltitudeTool(EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateEnd_void_CTileAltitudeTool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateEnd_void_CTileAltitudeTool_Callback = pCallback;
					}
					virtual void onOperateStart(_in EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* tool)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateStart_void_CTileAltitudeTool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateStart_void_CTileAltitudeTool_Callback(tool);
						}
						else
							return this->CTileAltitudeListener::onOperateStart(tool);
					}
					virtual void onOperateEnd(_in EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* tool)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateEnd_void_CTileAltitudeTool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateEnd_void_CTileAltitudeTool_Callback(tool);
						}
						else
							return this->CTileAltitudeListener::onOperateEnd(tool);
					}
				};
				REGISTER_FACTORY_CLASS(CTileAltitudeListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateStart_void_CTileAltitudeTool(void *pObjectXXXX, _in EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* tool )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener*) pObjectXXXX;
					if (dynamic_cast<CTileAltitudeListenerProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener::onOperateStart(tool);
					else
						ptrNativeObject->onOperateStart(tool);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateStart_void_CTileAltitudeTool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateStart_void_CTileAltitudeTool_Callback* pCallback )
				{
					CTileAltitudeListenerProxy* ptr = dynamic_cast<CTileAltitudeListenerProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateStart_void_CTileAltitudeTool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateStart_void_CTileAltitudeTool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* tool )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener::onOperateStart(tool);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateEnd_void_CTileAltitudeTool(void *pObjectXXXX, _in EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* tool )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener*) pObjectXXXX;
					if (dynamic_cast<CTileAltitudeListenerProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener::onOperateEnd(tool);
					else
						ptrNativeObject->onOperateEnd(tool);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateEnd_void_CTileAltitudeTool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateEnd_void_CTileAltitudeTool_Callback* pCallback )
				{
					CTileAltitudeListenerProxy* ptr = dynamic_cast<CTileAltitudeListenerProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateEnd_void_CTileAltitudeTool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeListener_onOperateEnd_void_CTileAltitudeTool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* tool )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener::onOperateEnd(tool);
				}
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_run_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_reset_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CTileAltitudeToolProxy : public EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool
				{
				private:
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_run_void_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_run_void_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_reset_void_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_reset_void_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_activate_void_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_activate_void_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_deactivate_void_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_deactivate_void_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCursor_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCursor_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getType_ev_uint32_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getType_ev_uint32_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getName_EVString_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getName_EVString_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCategory_EVString_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCategory_EVString_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolTip_EVString_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolTip_EVString_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getIcon_IBitmap_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getIcon_IBitmap_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onClicked_void_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onClicked_void_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getChecked_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getChecked_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_update_ev_bool_CEvent_Callback;
				public:
					CTileAltitudeToolProxy(EarthView::World::Core::CNameValuePairList *pList) : CTileAltitudeTool(pList)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_run_void_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_reset_void_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_activate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_update_ev_bool_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_run_void(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_run_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_run_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_reset_void(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_reset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_reset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_activate_void(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_deactivate_void(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCursor_ev_int32(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolBarType_ev_uint32(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getType_ev_uint32(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getName_EVString(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCategory_EVString(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolTip_EVString(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getIcon_IBitmap(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_isCheckable_ev_bool(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onClicked_void(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getChecked_ev_bool(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setChecked_void_ev_bool(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getEnabled_ev_bool(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setEnabled_void_ev_bool(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_create_void_ISpatialControl(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_update_ev_bool_CEvent(EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::getType();
					}
					virtual ev_bool onDoubleClick(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::onDoubleClick(button, shift, x, y);
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::onMouseMove(button, shift, x, y);
					}
					virtual void run()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_run_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_run_void_Callback();
						}
						else
							return this->CTileAltitudeTool::run();
					}
					virtual void reset()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_reset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_reset_void_Callback();
						}
						else
							return this->CTileAltitudeTool::reset();
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::getToolBarType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onClicked_void_Callback();
						}
						else
							return this->CTileAltitudeTool::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CTileAltitudeTool::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CTileAltitudeTool::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CTileAltitudeTool::create(ref_ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::update(e);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_activate_void_Callback();
						}
						else
							return this->CTileAltitudeTool::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_deactivate_void_Callback();
						}
						else
							return this->CTileAltitudeTool::deactivate();
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::onContextMenu(x, y);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CTileAltitudeTool::onTouchMove(touchEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CTileAltitudeToolProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					if (dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getType_ev_uint32_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					if (dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool::onDoubleClick(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool::onDoubleClick(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					if (dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool::onMouseDown(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool::onMouseDown(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					if (dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					if (dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool::onMouseMove(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool::onMouseMove(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_run_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					if (dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool::run();
					else
						ptrNativeObject->run();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_run_void( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_run_void_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_run_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_run_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool::run();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					if (dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool::reset();
					else
						ptrNativeObject->reset();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_reset_void( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_reset_void_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_reset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_reset_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool::reset();
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::CPolygon*  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getPoylgon_CPolygon(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::CPolygon* objXXXX = ptrNativeObject->getPoylgon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setTerrainRangeMode_void_TerrainRangeMode(void *pObjectXXXX, _in int m )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					ptrNativeObject->setTerrainRangeMode((EarthView::World::Spatial3D::TerrainRangeMode)m);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener*  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getTileAltitudeListener_CTileAltitudeListener(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					const EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener* objXXXX = ptrNativeObject->getTileAltitudeListener();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setTileAltitudeListener_void_CTileAltitudeListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::SystemUI::CTileAltitudeListener* ref_listener )
				{
					EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX;
					ptrNativeObject->setTileAltitudeListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_activate_void( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_activate_void_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_deactivate_void_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCursor_ev_int32_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getName_EVString_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCategory_EVString_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolTip_EVString_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getIcon_IBitmap_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_isCheckable_ev_bool_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onClicked_void_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getChecked_ev_bool_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setChecked_void_ev_bool_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getEnabled_ev_bool_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_create_void_ISpatialControl_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_update_ev_bool_CEvent_Callback* pCallback )
				{
					CTileAltitudeToolProxy* ptr = dynamic_cast<CTileAltitudeToolProxy*>((EarthView::World::Spatial3D::SystemUI::CTileAltitudeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CTileAltitudeTool_update_ev_bool_CEvent(pCallback);
					}
				}
			}
		}
	}
}
