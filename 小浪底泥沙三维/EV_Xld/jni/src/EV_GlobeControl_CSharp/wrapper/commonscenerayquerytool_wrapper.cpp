/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/commonscenerayquerytool.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace SystemUI
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CCommonSceneRayQueryToolProxy : public EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool
				{
				private:
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_activate_void_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_activate_void_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_deactivate_void_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_deactivate_void_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCursor_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCursor_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getType_ev_uint32_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getType_ev_uint32_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getName_EVString_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getName_EVString_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCategory_EVString_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCategory_EVString_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolTip_EVString_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolTip_EVString_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getIcon_IBitmap_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getIcon_IBitmap_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onClicked_void_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onClicked_void_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getChecked_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getChecked_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_update_ev_bool_CEvent_Callback;
				public:
					CCommonSceneRayQueryToolProxy(EarthView::World::Core::CNameValuePairList *pList) : CCommonSceneRayQueryTool(pList)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_activate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_update_ev_bool_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_activate_void(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_deactivate_void(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCursor_ev_int32(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolBarType_ev_uint32(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getType_ev_uint32(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getName_EVString(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCategory_EVString(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolTip_EVString(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getIcon_IBitmap(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_isCheckable_ev_bool(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onClicked_void(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getChecked_ev_bool(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setChecked_void_ev_bool(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getEnabled_ev_bool(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setEnabled_void_ev_bool(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_create_void_ISpatialControl(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_update_ev_bool_CEvent(EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onClicked_void_Callback();
						}
						else
							return this->CCommonSceneRayQueryTool::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::getChecked();
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::getEnabled();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::getType();
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onDoubleClick(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::onDoubleClick(button, shift, x, y);
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::onMouseMove(button, shift, x, y);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::onKeyDown(keyCode, shift);
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::getToolBarType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::isCheckable();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CCommonSceneRayQueryTool::setChecked(checked);
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CCommonSceneRayQueryTool::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CCommonSceneRayQueryTool::create(ref_ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::update(e);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_activate_void_Callback();
						}
						else
							return this->CCommonSceneRayQueryTool::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_deactivate_void_Callback();
						}
						else
							return this->CCommonSceneRayQueryTool::deactivate();
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::onContextMenu(x, y);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CCommonSceneRayQueryTool::onTouchMove(touchEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CCommonSceneRayQueryToolProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onClicked_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					if (dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::onClicked();
					else
						ptrNativeObject->onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onClicked_void_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onClicked_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getChecked_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					if (dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::getChecked();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getChecked();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getChecked_ev_bool_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::getChecked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					if (dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::getEnabled();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getEnabled();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getEnabled_ev_bool_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::getEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setSortByDistance_void_ev_bool(void *pObjectXXXX, _in ev_bool sort )
				{
					EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					ptrNativeObject->setSortByDistance(sort);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setSortByDistance_void_ev_bool_ev_uint16(void *pObjectXXXX, _in ev_bool sort, _in ev_uint16 maxresults )
				{
					EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					ptrNativeObject->setSortByDistance(sort, maxresults);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getSortByDistance_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getSortByDistance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getMaxResults_ev_uint16(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->getMaxResults();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_init_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					ptrNativeObject->init();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_resetResults_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					ptrNativeObject->resetResults();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					if (dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getType_ev_uint32_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					if (dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::onMouseDown(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::onMouseDown(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					if (dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::onDoubleClick(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::onDoubleClick(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					if (dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					if (dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::onMouseMove(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::onMouseMove(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyDown_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					if (dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::onKeyDown(keyCode, shift);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onKeyDown(keyCode, shift);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyDown_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool::onKeyDown(keyCode, shift);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_activate_void( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_activate_void_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_deactivate_void_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCursor_ev_int32_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getName_EVString_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCategory_EVString_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolTip_EVString_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getIcon_IBitmap_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_isCheckable_ev_bool_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setChecked_void_ev_bool_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_create_void_ISpatialControl_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_update_ev_bool_CEvent_Callback* pCallback )
				{
					CCommonSceneRayQueryToolProxy* ptr = dynamic_cast<CCommonSceneRayQueryToolProxy*>((EarthView::World::Spatial3D::SystemUI::CCommonSceneRayQueryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CCommonSceneRayQueryTool_update_ev_bool_CEvent(pCallback);
					}
				}
			}
		}
	}
}
