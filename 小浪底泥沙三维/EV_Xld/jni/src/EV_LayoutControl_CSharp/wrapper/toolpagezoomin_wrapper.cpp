/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "layoutcontrol/toolpagezoomin.h"
namespace EarthView
{
	namespace World
	{
		namespace Layout
		{
			namespace Controls
			{
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CToolPageZoomInProxy : public EarthView::World::Layout::Controls::CToolPageZoomIn
				{
				private:
					EarthView_World_Layout_Controls_CToolPageZoomIn_activate_void_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_activate_void_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_deactivate_void_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_deactivate_void_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_getCursor_ev_int32_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_getCursor_ev_int32_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_getToolBarType_ev_uint32_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_getToolBarType_ev_uint32_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_getType_ev_uint32_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_getType_ev_uint32_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_getName_EVString_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_getName_EVString_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_getCategory_EVString_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_getCategory_EVString_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_getToolTip_EVString_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_getToolTip_EVString_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_getIcon_IBitmap_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_getIcon_IBitmap_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_isCheckable_ev_bool_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_isCheckable_ev_bool_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_onClicked_void_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_onClicked_void_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_getChecked_ev_bool_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_getChecked_ev_bool_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_setChecked_void_ev_bool_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_setChecked_void_ev_bool_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_getEnabled_ev_bool_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_getEnabled_ev_bool_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_setEnabled_void_ev_bool_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_setEnabled_void_ev_bool_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_create_void_ISpatialControl_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_create_void_ISpatialControl_Callback;
					EarthView_World_Layout_Controls_CToolPageZoomIn_update_ev_bool_CEvent_Callback* m_EarthView_World_Layout_Controls_CToolPageZoomIn_update_ev_bool_CEvent_Callback;
				public:
					CToolPageZoomInProxy(EarthView::World::Core::CNameValuePairList *pList) : CToolPageZoomIn(pList)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_activate_void_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_deactivate_void_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getName_EVString_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onClicked_void_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_update_ev_bool_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CToolPageZoomInProxy)
				public:
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_activate_void(EarthView_World_Layout_Controls_CToolPageZoomIn_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_deactivate_void(EarthView_World_Layout_Controls_CToolPageZoomIn_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getCursor_ev_int32(EarthView_World_Layout_Controls_CToolPageZoomIn_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Layout_Controls_CToolPageZoomIn_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool(EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchDown_ev_bool_MotionEvent(EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchUp_ev_bool_MotionEvent(EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchMove_ev_bool_MotionEvent(EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getToolBarType_ev_uint32(EarthView_World_Layout_Controls_CToolPageZoomIn_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getType_ev_uint32(EarthView_World_Layout_Controls_CToolPageZoomIn_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getName_EVString(EarthView_World_Layout_Controls_CToolPageZoomIn_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getCategory_EVString(EarthView_World_Layout_Controls_CToolPageZoomIn_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getToolTip_EVString(EarthView_World_Layout_Controls_CToolPageZoomIn_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getIcon_IBitmap(EarthView_World_Layout_Controls_CToolPageZoomIn_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_isCheckable_ev_bool(EarthView_World_Layout_Controls_CToolPageZoomIn_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onClicked_void(EarthView_World_Layout_Controls_CToolPageZoomIn_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getChecked_ev_bool(EarthView_World_Layout_Controls_CToolPageZoomIn_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_setChecked_void_ev_bool(EarthView_World_Layout_Controls_CToolPageZoomIn_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getEnabled_ev_bool(EarthView_World_Layout_Controls_CToolPageZoomIn_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_setEnabled_void_ev_bool(EarthView_World_Layout_Controls_CToolPageZoomIn_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_create_void_ISpatialControl(EarthView_World_Layout_Controls_CToolPageZoomIn_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_update_ev_bool_CEvent(EarthView_World_Layout_Controls_CToolPageZoomIn_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CToolPageZoomIn_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::isCheckable();
					}
					virtual void activate()
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CToolPageZoomIn_activate_void_Callback();
						}
						else
							return this->CToolPageZoomIn::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CToolPageZoomIn_deactivate_void_Callback();
						}
						else
							return this->CToolPageZoomIn::deactivate();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CToolPageZoomIn_onClicked_void_Callback();
						}
						else
							return this->CToolPageZoomIn::onClicked();
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::onContextMenu(x, y);
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::onMouseMove(button, shift, x, y);
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::update(e);
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CToolPageZoomIn_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CToolPageZoomIn::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CToolPageZoomIn_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CToolPageZoomIn::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CToolPageZoomIn_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CToolPageZoomIn::create(ref_ctrl);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::onDoubleClick();
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CToolPageZoomIn::onTouchMove(touchEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CToolPageZoomInProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getToolBarType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					if (dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::getToolBarType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::getToolBarType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					if (dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_getType_ev_uint32_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					if (dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getName_EVString( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_getName_EVString_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					if (dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getCategory_EVString( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_getCategory_EVString_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					if (dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_getToolTip_EVString_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					if (dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_getIcon_IBitmap_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					if (dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_isCheckable_ev_bool_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_activate_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					if (dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::activate();
					else
						ptrNativeObject->activate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_activate_void( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_activate_void_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_activate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::activate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					if (dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_deactivate_void( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_deactivate_void_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::deactivate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onClicked_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					if (dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::onClicked();
					else
						ptrNativeObject->onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onClicked_void( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_onClicked_void_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onClicked_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getCursor_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					if (dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::getCursor();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getCursor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_getCursor_ev_int32_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_getCursor_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::getCursor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onContextMenu_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					if (dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::onContextMenu(x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onContextMenu(x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onContextMenu_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::onContextMenu(x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					if (dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::onMouseDown(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::onMouseDown(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					if (dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::onMouseMove(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::onMouseMove(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					if (dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					if (dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_update_ev_bool_CEvent_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CToolPageZoomIn_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Layout::Controls::CToolPageZoomIn* ptrNativeObject = (EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CToolPageZoomIn::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_getChecked_ev_bool_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_setChecked_void_ev_bool_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_getEnabled_ev_bool_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Layout_Controls_CToolPageZoomIn_create_void_ISpatialControl_Callback* pCallback )
				{
					CToolPageZoomInProxy* ptr = dynamic_cast<CToolPageZoomInProxy*>((EarthView::World::Layout::Controls::CToolPageZoomIn*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CToolPageZoomIn_create_void_ISpatialControl(pCallback);
					}
				}
			}
		}
	}
}
