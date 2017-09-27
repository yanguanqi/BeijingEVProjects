/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/tool2d.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CTool2D_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CTool2DProxy : public EarthView::World::Spatial2D::Controls::CTool2D
				{
				private:
					EarthView_World_Spatial2D_Controls_CTool2D_activate_void_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_activate_void_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_deactivate_void_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_deactivate_void_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_getCursor_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_getCursor_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_getType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_getType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_getCategory_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_getCategory_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_getToolTip_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_getToolTip_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_getIcon_IBitmap_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_getIcon_IBitmap_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_onClicked_void_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_onClicked_void_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_getChecked_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_getChecked_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial2D_Controls_CTool2D_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial2D_Controls_CTool2D_update_ev_bool_CEvent_Callback;
				public:
					CTool2DProxy(EarthView::World::Core::CNameValuePairList *pList) : CTool2D(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_activate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CTool2D_update_ev_bool_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_activate_void(EarthView_World_Spatial2D_Controls_CTool2D_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_deactivate_void(EarthView_World_Spatial2D_Controls_CTool2D_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getCursor_ev_int32(EarthView_World_Spatial2D_Controls_CTool2D_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CTool2D_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool(EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CTool2D_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CTool2D_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CTool2D_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CTool2D_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CTool2D_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CTool2D_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CTool2D_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CTool2D_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CTool2D_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getToolBarType_ev_uint32(EarthView_World_Spatial2D_Controls_CTool2D_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getType_ev_uint32(EarthView_World_Spatial2D_Controls_CTool2D_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getName_EVString(EarthView_World_Spatial2D_Controls_CTool2D_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getCategory_EVString(EarthView_World_Spatial2D_Controls_CTool2D_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getToolTip_EVString(EarthView_World_Spatial2D_Controls_CTool2D_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getIcon_IBitmap(EarthView_World_Spatial2D_Controls_CTool2D_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_isCheckable_ev_bool(EarthView_World_Spatial2D_Controls_CTool2D_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onClicked_void(EarthView_World_Spatial2D_Controls_CTool2D_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getChecked_ev_bool(EarthView_World_Spatial2D_Controls_CTool2D_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_setChecked_void_ev_bool(EarthView_World_Spatial2D_Controls_CTool2D_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getEnabled_ev_bool(EarthView_World_Spatial2D_Controls_CTool2D_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_setEnabled_void_ev_bool(EarthView_World_Spatial2D_Controls_CTool2D_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_create_void_ISpatialControl(EarthView_World_Spatial2D_Controls_CTool2D_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_update_ev_bool_CEvent(EarthView_World_Spatial2D_Controls_CTool2D_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CTool2D_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CTool2D::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CTool2D::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CTool2D::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CTool2D::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CTool2D::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CTool2D::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTool2D::isCheckable();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTool2D::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CTool2D_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CTool2D::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTool2D::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CTool2D_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CTool2D::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CTool2D_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CTool2D::create(ref_ctrl);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CTool2D_activate_void_Callback();
						}
						else
							return this->CTool2D::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CTool2D_deactivate_void_Callback();
						}
						else
							return this->CTool2D::deactivate();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CTool2D_onClicked_void_Callback();
						}
						else
							return this->CTool2D::onClicked();
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CTool2D::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CTool2D::onMouseMove(button, shift, x, y);
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CTool2D::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CTool2D::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CTool2D::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CTool2D::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CTool2D::onDoubleClick();
					}
					virtual ev_bool onDoubleClick(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CTool2D::onDoubleClick(button, shift, x, y);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CTool2D::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CTool2D::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CTool2D::onTouchMove(touchEvent);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CTool2D::update(e);
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CTool2D::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CTool2D_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CTool2D_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CTool2D::onContextMenu(x, y);
					}
				};
				REGISTER_FACTORY_CLASS(CTool2DProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getToolBarType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::getToolBarType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::getToolBarType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_getType_ev_uint32_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_getName_EVString_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_getCategory_EVString_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_getToolTip_EVString_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_getIcon_IBitmap_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_isCheckable_ev_bool_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getChecked_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::getChecked();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getChecked();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_getChecked_ev_bool_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::getChecked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::setChecked(checked);
					else
						ptrNativeObject->setChecked(checked);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_setChecked_void_ev_bool_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::setChecked(checked);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::getEnabled();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getEnabled();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_getEnabled_ev_bool_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::getEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::setEnabled(enabled);
					else
						ptrNativeObject->setEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::setEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_create_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::create(ref_ctrl);
					else
						ptrNativeObject->create(ref_ctrl);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_create_void_ISpatialControl_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_create_void_ISpatialControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::create(ref_ctrl);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_loadContextMenu_void(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ptrNativeObject->loadContextMenu();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_activate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::activate();
					else
						ptrNativeObject->activate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_activate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_activate_void_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_activate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::activate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_deactivate_void_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::deactivate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onClicked_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onClicked();
					else
						ptrNativeObject->onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_onClicked_void_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onClicked_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onMouseDown(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onMouseDown(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onMouseMove(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onMouseMove(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onMouseWheel(delta, x, y, flag);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseWheel(delta, x, y, flag);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onMouseWheel(delta, x, y, flag);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onKeyDown_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onKeyDown(keyCode, shift);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onKeyDown(keyCode, shift);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onKeyDown_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onKeyDown(keyCode, shift);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onKeyUp_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onKeyUp(keyCode, shift);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onKeyUp(keyCode, shift);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onKeyUp_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onKeyUp(keyCode, shift);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onDoubleClick();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onDoubleClick();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onDoubleClick(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onDoubleClick(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onTouchDown_ev_bool_MotionEvent(void *pObjectXXXX, _in const void* touchEvent )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onTouchDown(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onTouchDown(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onTouchDown_ev_bool_MotionEvent_NoVirtual(void *pObjectXXXX, _in const void* touchEvent )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onTouchDown(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onTouchUp_ev_bool_MotionEvent(void *pObjectXXXX, _in const void* touchEvent )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onTouchUp(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onTouchUp(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onTouchUp_ev_bool_MotionEvent_NoVirtual(void *pObjectXXXX, _in const void* touchEvent )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onTouchUp(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onTouchMove_ev_bool_MotionEvent(void *pObjectXXXX, _in const void* touchEvent )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onTouchMove(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onTouchMove(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_onTouchMove_ev_bool_MotionEvent_NoVirtual(void *pObjectXXXX, _in const void* touchEvent )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::onTouchMove(*(EarthView::World::Spatial::SystemUI::MotionEvent*)touchEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					if (dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_update_ev_bool_CEvent_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CTool2D_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CTool2D::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial2D_Controls_CTool2D_m_bChecked( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->m_bChecked;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CTool2D_m_bChecked( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial2D::Controls::CTool2D*)pObjectXXXX)->m_bChecked = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial2D_Controls_CTool2D_m_bEnabled( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->m_bEnabled;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CTool2D_m_bEnabled( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial2D::Controls::CTool2D*)pObjectXXXX)->m_bEnabled = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CMapControl*  _stdcall Get_EarthView_World_Spatial2D_Controls_CTool2D_mpMapControl( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CMapControl* objXXXX = ptrNativeObject->mpMapControl;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CTool2D_mpMapControl( void *pObjectXXXX, EarthView::World::Spatial2D::Controls::CMapControl*  value )
				{
					((EarthView::World::Spatial2D::Controls::CTool2D*)pObjectXXXX)->mpMapControl = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISpatialDisplay*  _stdcall Get_EarthView_World_Spatial2D_Controls_CTool2D_m_pDisplay( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISpatialDisplay* objXXXX = ptrNativeObject->m_pDisplay;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CTool2D_m_pDisplay( void *pObjectXXXX, EarthView::World::Spatial::Display::ISpatialDisplay*  value )
				{
					((EarthView::World::Spatial2D::Controls::CTool2D*)pObjectXXXX)->m_pDisplay = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISpatialTransformer*  _stdcall Get_EarthView_World_Spatial2D_Controls_CTool2D_m_pTransformer( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISpatialTransformer* objXXXX = ptrNativeObject->m_pTransformer;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CTool2D_m_pTransformer( void *pObjectXXXX, EarthView::World::Spatial::Display::ISpatialTransformer*  value )
				{
					((EarthView::World::Spatial2D::Controls::CTool2D*)pObjectXXXX)->m_pTransformer = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall Get_EarthView_World_Spatial2D_Controls_CTool2D_m_pIcon( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->m_pIcon;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CTool2D_m_pIcon( void *pObjectXXXX, EarthView::World::Display::IBitmap*  value )
				{
					((EarthView::World::Spatial2D::Controls::CTool2D*)pObjectXXXX)->m_pIcon = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial2D_Controls_CTool2D_m_nStartY( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->m_nStartY;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CTool2D_m_nStartY( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial2D::Controls::CTool2D*)pObjectXXXX)->m_nStartY = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial2D_Controls_CTool2D_m_nStartX( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CTool2D* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->m_nStartX;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CTool2D_m_nStartX( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial2D::Controls::CTool2D*)pObjectXXXX)->m_nStartX = value;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_getCursor_ev_int32_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CTool2D_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CTool2D_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CTool2DProxy* ptr = dynamic_cast<CTool2DProxy*>((EarthView::World::Spatial2D::Controls::CTool2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CTool2D_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
			}
		}
	}
}
