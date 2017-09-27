/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/edittool.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditTool_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CEditToolProxy : public EarthView::World::Spatial2D::Controls::CEditTool
				{
				private:
					EarthView_World_Spatial2D_Controls_CEditTool_activate_void_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_activate_void_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_deactivate_void_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_deactivate_void_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_getCursor_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_getCursor_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_getType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_getType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_getCategory_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_getCategory_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_getToolTip_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_getToolTip_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_getIcon_IBitmap_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_getIcon_IBitmap_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_onClicked_void_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_onClicked_void_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_getChecked_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_getChecked_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial2D_Controls_CEditTool_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial2D_Controls_CEditTool_update_ev_bool_CEvent_Callback;
				public:
					CEditToolProxy(EarthView::World::Core::CNameValuePairList *pList) : CEditTool(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_activate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditTool_update_ev_bool_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_activate_void(EarthView_World_Spatial2D_Controls_CEditTool_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_deactivate_void(EarthView_World_Spatial2D_Controls_CEditTool_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getCursor_ev_int32(EarthView_World_Spatial2D_Controls_CEditTool_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool(EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CEditTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CEditTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CEditTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getToolBarType_ev_uint32(EarthView_World_Spatial2D_Controls_CEditTool_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getType_ev_uint32(EarthView_World_Spatial2D_Controls_CEditTool_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getName_EVString(EarthView_World_Spatial2D_Controls_CEditTool_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getCategory_EVString(EarthView_World_Spatial2D_Controls_CEditTool_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getToolTip_EVString(EarthView_World_Spatial2D_Controls_CEditTool_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getIcon_IBitmap(EarthView_World_Spatial2D_Controls_CEditTool_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_isCheckable_ev_bool(EarthView_World_Spatial2D_Controls_CEditTool_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onClicked_void(EarthView_World_Spatial2D_Controls_CEditTool_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getChecked_ev_bool(EarthView_World_Spatial2D_Controls_CEditTool_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_setChecked_void_ev_bool(EarthView_World_Spatial2D_Controls_CEditTool_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getEnabled_ev_bool(EarthView_World_Spatial2D_Controls_CEditTool_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_setEnabled_void_ev_bool(EarthView_World_Spatial2D_Controls_CEditTool_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_create_void_ISpatialControl(EarthView_World_Spatial2D_Controls_CEditTool_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_update_ev_bool_CEvent(EarthView_World_Spatial2D_Controls_CEditTool_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditTool_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditTool_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CEditTool::create(ref_ctrl);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditTool_activate_void_Callback();
						}
						else
							return this->CEditTool::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditTool_deactivate_void_Callback();
						}
						else
							return this->CEditTool::deactivate();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CEditTool::onContextMenu(x, y);
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CEditTool::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CEditTool::onMouseMove(button, shift, x, y);
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CEditTool::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CEditTool::update(e);
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEditTool::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEditTool::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEditTool::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEditTool::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEditTool::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CEditTool::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditTool::isCheckable();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditTool::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditTool_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CEditTool::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditTool::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditTool_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CEditTool::setEnabled(enabled);
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditTool_onClicked_void_Callback();
						}
						else
							return this->CEditTool::onClicked();
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CEditTool::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CEditTool::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CEditTool::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditTool::onDoubleClick();
					}
					virtual ev_bool onDoubleClick(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CEditTool::onDoubleClick(button, shift, x, y);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CEditTool::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CEditTool::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CEditTool::onTouchMove(touchEvent);
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditTool_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CEditTool_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CEditTool::getCursor();
					}
				};
				REGISTER_FACTORY_CLASS(CEditToolProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_create_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					if (dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTool::create(ref_ctrl);
					else
						ptrNativeObject->create(ref_ctrl);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_create_void_ISpatialControl_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_create_void_ISpatialControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTool::create(ref_ctrl);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_activate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					if (dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTool::activate();
					else
						ptrNativeObject->activate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_activate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_activate_void_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_activate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTool::activate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					if (dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTool::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_deactivate_void_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTool::deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onContextMenu_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					if (dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTool::onContextMenu(x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onContextMenu(x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTool::onContextMenu(x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					if (dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTool::onMouseDown(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTool::onMouseDown(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					if (dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTool::onMouseMove(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTool::onMouseMove(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					if (dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTool::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTool::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					if (dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTool::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_update_ev_bool_CEvent_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditTool::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_clearTrace_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					ptrNativeObject->clearTrace();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_setColor_void_IColor(void *pObjectXXXX, _in EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					ptrNativeObject->setColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial2D_Controls_CEditTool_getColor_IColor(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CEditTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->getColor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_getCursor_ev_int32_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_getType_ev_uint32_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_getName_EVString_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_getCategory_EVString_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_getToolTip_EVString_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_getIcon_IBitmap_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_isCheckable_ev_bool_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_onClicked_void_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_getChecked_ev_bool_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_setChecked_void_ev_bool_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_getEnabled_ev_bool_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditTool_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditTool_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CEditToolProxy* ptr = dynamic_cast<CEditToolProxy*>((EarthView::World::Spatial2D::Controls::CEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditTool_setEnabled_void_ev_bool(pCallback);
					}
				}
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CNewGeometryToolProxy : public EarthView::World::Spatial2D::Controls::CNewGeometryTool
				{
				private:
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_activate_void_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_activate_void_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_deactivate_void_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_deactivate_void_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCursor_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCursor_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_getType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCategory_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCategory_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolTip_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolTip_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_getIcon_IBitmap_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getIcon_IBitmap_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_onClicked_void_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onClicked_void_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_getChecked_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getChecked_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial2D_Controls_CNewGeometryTool_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_update_ev_bool_CEvent_Callback;
				public:
					CNewGeometryToolProxy(EarthView::World::Core::CNameValuePairList *pList) : CNewGeometryTool(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_activate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_update_ev_bool_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_activate_void(EarthView_World_Spatial2D_Controls_CNewGeometryTool_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_deactivate_void(EarthView_World_Spatial2D_Controls_CNewGeometryTool_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCursor_ev_int32(EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewGeometryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool(EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolBarType_ev_uint32(EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getType_ev_uint32(EarthView_World_Spatial2D_Controls_CNewGeometryTool_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getName_EVString(EarthView_World_Spatial2D_Controls_CNewGeometryTool_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCategory_EVString(EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolTip_EVString(EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getIcon_IBitmap(EarthView_World_Spatial2D_Controls_CNewGeometryTool_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_isCheckable_ev_bool(EarthView_World_Spatial2D_Controls_CNewGeometryTool_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onClicked_void(EarthView_World_Spatial2D_Controls_CNewGeometryTool_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getChecked_ev_bool(EarthView_World_Spatial2D_Controls_CNewGeometryTool_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_setChecked_void_ev_bool(EarthView_World_Spatial2D_Controls_CNewGeometryTool_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getEnabled_ev_bool(EarthView_World_Spatial2D_Controls_CNewGeometryTool_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_setEnabled_void_ev_bool(EarthView_World_Spatial2D_Controls_CNewGeometryTool_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_create_void_ISpatialControl(EarthView_World_Spatial2D_Controls_CNewGeometryTool_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_update_ev_bool_CEvent(EarthView_World_Spatial2D_Controls_CNewGeometryTool_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CNewGeometryTool::getToolBarType();
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CNewGeometryTool::update(e);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNewGeometryTool::onDoubleClick();
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CNewGeometryTool::create(ref_ctrl);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_activate_void_Callback();
						}
						else
							return this->CNewGeometryTool::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_deactivate_void_Callback();
						}
						else
							return this->CNewGeometryTool::deactivate();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CNewGeometryTool::onContextMenu(x, y);
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CNewGeometryTool::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CNewGeometryTool::onMouseMove(button, shift, x, y);
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CNewGeometryTool::onMouseUp(button, shift, x, y);
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CNewGeometryTool::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNewGeometryTool::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNewGeometryTool::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNewGeometryTool::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CNewGeometryTool::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNewGeometryTool::isCheckable();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNewGeometryTool::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CNewGeometryTool::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNewGeometryTool::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CNewGeometryTool::setEnabled(enabled);
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onClicked_void_Callback();
						}
						else
							return this->CNewGeometryTool::onClicked();
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CNewGeometryTool::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CNewGeometryTool::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CNewGeometryTool::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CNewGeometryTool::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CNewGeometryTool::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CNewGeometryTool::onTouchMove(touchEvent);
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CNewGeometryTool::getCursor();
					}
				};
				REGISTER_FACTORY_CLASS(CNewGeometryToolProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolBarType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CNewGeometryTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX;
					if (dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CNewGeometryTool::getToolBarType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CNewGeometryTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CNewGeometryTool::getToolBarType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CNewGeometryTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX;
					if (dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CNewGeometryTool::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_update_ev_bool_CEvent_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CNewGeometryTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CNewGeometryTool::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CNewGeometryTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX;
					if (dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CNewGeometryTool::onDoubleClick();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CNewGeometryTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CNewGeometryTool::onDoubleClick();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_activate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_activate_void_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_deactivate_void_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCursor_ev_int32_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_getType_ev_uint32_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_getName_EVString_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCategory_EVString_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolTip_EVString_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_getIcon_IBitmap_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_isCheckable_ev_bool_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_onClicked_void_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_getChecked_ev_bool_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_setChecked_void_ev_bool_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_getEnabled_ev_bool_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewGeometryTool_create_void_ISpatialControl_Callback* pCallback )
				{
					CNewGeometryToolProxy* ptr = dynamic_cast<CNewGeometryToolProxy*>((EarthView::World::Spatial2D::Controls::CNewGeometryTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewGeometryTool_create_void_ISpatialControl(pCallback);
					}
				}
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CNewNonPointTypeToolProxy : public EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool
				{
				private:
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_activate_void_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_activate_void_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_deactivate_void_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_deactivate_void_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCursor_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCursor_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCategory_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCategory_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolTip_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolTip_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getIcon_IBitmap_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getIcon_IBitmap_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onClicked_void_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onClicked_void_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getChecked_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getChecked_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_update_ev_bool_CEvent_Callback;
				public:
					CNewNonPointTypeToolProxy(EarthView::World::Core::CNameValuePairList *pList) : CNewNonPointTypeTool(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_activate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_update_ev_bool_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CNewNonPointTypeToolProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_activate_void(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_deactivate_void(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCursor_ev_int32(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolBarType_ev_uint32(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getType_ev_uint32(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getName_EVString(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCategory_EVString(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolTip_EVString(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getIcon_IBitmap(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_isCheckable_ev_bool(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onClicked_void(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getChecked_ev_bool(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setChecked_void_ev_bool(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getEnabled_ev_bool(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setEnabled_void_ev_bool(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_create_void_ISpatialControl(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_update_ev_bool_CEvent(EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::update(e);
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::getToolBarType();
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::onDoubleClick();
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CNewNonPointTypeTool::create(ref_ctrl);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_activate_void_Callback();
						}
						else
							return this->CNewNonPointTypeTool::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_deactivate_void_Callback();
						}
						else
							return this->CNewNonPointTypeTool::deactivate();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::onContextMenu(x, y);
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::onMouseMove(button, shift, x, y);
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::onMouseUp(button, shift, x, y);
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::isCheckable();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CNewNonPointTypeTool::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CNewNonPointTypeTool::setEnabled(enabled);
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onClicked_void_Callback();
						}
						else
							return this->CNewNonPointTypeTool::onClicked();
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::onTouchMove(touchEvent);
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CNewNonPointTypeTool::getCursor();
					}
				};
				REGISTER_FACTORY_CLASS(CNewNonPointTypeToolProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX;
					if (dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_update_ev_bool_CEvent_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_activate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_activate_void_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_deactivate_void_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCursor_ev_int32_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getType_ev_uint32_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getName_EVString_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCategory_EVString_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolTip_EVString_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getIcon_IBitmap_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_isCheckable_ev_bool_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onClicked_void_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getChecked_ev_bool_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setChecked_void_ev_bool_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getEnabled_ev_bool_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_create_void_ISpatialControl_Callback* pCallback )
				{
					CNewNonPointTypeToolProxy* ptr = dynamic_cast<CNewNonPointTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewNonPointTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewNonPointTypeTool_create_void_ISpatialControl(pCallback);
					}
				}
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CNewCurveTypeToolProxy : public EarthView::World::Spatial2D::Controls::CNewCurveTypeTool
				{
				private:
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_activate_void_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_activate_void_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_deactivate_void_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_deactivate_void_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCursor_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCursor_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCategory_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCategory_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolTip_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolTip_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getIcon_IBitmap_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getIcon_IBitmap_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onClicked_void_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onClicked_void_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getChecked_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getChecked_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_update_ev_bool_CEvent_Callback;
				public:
					CNewCurveTypeToolProxy(EarthView::World::Core::CNameValuePairList *pList) : CNewCurveTypeTool(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_activate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_update_ev_bool_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CNewCurveTypeToolProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_activate_void(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_deactivate_void(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCursor_ev_int32(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolBarType_ev_uint32(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getType_ev_uint32(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getName_EVString(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCategory_EVString(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolTip_EVString(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getIcon_IBitmap(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_isCheckable_ev_bool(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onClicked_void(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getChecked_ev_bool(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setChecked_void_ev_bool(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getEnabled_ev_bool(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setEnabled_void_ev_bool(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_create_void_ISpatialControl(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_update_ev_bool_CEvent(EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::update(e);
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::getToolBarType();
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::onDoubleClick();
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CNewCurveTypeTool::create(ref_ctrl);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_activate_void_Callback();
						}
						else
							return this->CNewCurveTypeTool::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_deactivate_void_Callback();
						}
						else
							return this->CNewCurveTypeTool::deactivate();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::onContextMenu(x, y);
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::onMouseMove(button, shift, x, y);
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::onMouseUp(button, shift, x, y);
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::isCheckable();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CNewCurveTypeTool::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CNewCurveTypeTool::setEnabled(enabled);
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onClicked_void_Callback();
						}
						else
							return this->CNewCurveTypeTool::onClicked();
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::onTouchMove(touchEvent);
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CNewCurveTypeTool::getCursor();
					}
				};
				REGISTER_FACTORY_CLASS(CNewCurveTypeToolProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CNewCurveTypeTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX;
					if (dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CNewCurveTypeTool::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_update_ev_bool_CEvent_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CNewCurveTypeTool* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CNewCurveTypeTool::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_activate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_activate_void_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_deactivate_void_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCursor_ev_int32_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getType_ev_uint32_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getName_EVString_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCategory_EVString_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolTip_EVString_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getIcon_IBitmap_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_isCheckable_ev_bool_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onClicked_void_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getChecked_ev_bool_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setChecked_void_ev_bool_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getEnabled_ev_bool_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_create_void_ISpatialControl_Callback* pCallback )
				{
					CNewCurveTypeToolProxy* ptr = dynamic_cast<CNewCurveTypeToolProxy*>((EarthView::World::Spatial2D::Controls::CNewCurveTypeTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CNewCurveTypeTool_create_void_ISpatialControl(pCallback);
					}
				}
			}
		}
	}
}
