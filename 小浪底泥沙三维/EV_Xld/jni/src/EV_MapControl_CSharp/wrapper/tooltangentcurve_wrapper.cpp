/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/tooltangentcurve.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CToolTangentCurveProxy : public EarthView::World::Spatial2D::Controls::CToolTangentCurve
				{
				private:
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_activate_void_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_activate_void_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_deactivate_void_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_deactivate_void_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCursor_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCursor_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_getType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCategory_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCategory_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolTip_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolTip_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_getIcon_IBitmap_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getIcon_IBitmap_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_onClicked_void_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onClicked_void_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_getChecked_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getChecked_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial2D_Controls_CToolTangentCurve_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_update_ev_bool_CEvent_Callback;
				public:
					CToolTangentCurveProxy(EarthView::World::Core::CNameValuePairList *pList) : CToolTangentCurve(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_activate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_update_ev_bool_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CToolTangentCurveProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_activate_void(EarthView_World_Spatial2D_Controls_CToolTangentCurve_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_deactivate_void(EarthView_World_Spatial2D_Controls_CToolTangentCurve_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCursor_ev_int32(EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolTangentCurve_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool(EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolBarType_ev_uint32(EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getType_ev_uint32(EarthView_World_Spatial2D_Controls_CToolTangentCurve_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getName_EVString(EarthView_World_Spatial2D_Controls_CToolTangentCurve_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCategory_EVString(EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolTip_EVString(EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getIcon_IBitmap(EarthView_World_Spatial2D_Controls_CToolTangentCurve_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_isCheckable_ev_bool(EarthView_World_Spatial2D_Controls_CToolTangentCurve_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onClicked_void(EarthView_World_Spatial2D_Controls_CToolTangentCurve_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getChecked_ev_bool(EarthView_World_Spatial2D_Controls_CToolTangentCurve_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_setChecked_void_ev_bool(EarthView_World_Spatial2D_Controls_CToolTangentCurve_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getEnabled_ev_bool(EarthView_World_Spatial2D_Controls_CToolTangentCurve_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_setEnabled_void_ev_bool(EarthView_World_Spatial2D_Controls_CToolTangentCurve_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_create_void_ISpatialControl(EarthView_World_Spatial2D_Controls_CToolTangentCurve_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_update_ev_bool_CEvent(EarthView_World_Spatial2D_Controls_CToolTangentCurve_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CToolTangentCurve::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CToolTangentCurve::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CToolTangentCurve::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CToolTangentCurve::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CToolTangentCurve::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CToolTangentCurve::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CToolTangentCurve::isCheckable();
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_activate_void_Callback();
						}
						else
							return this->CToolTangentCurve::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_deactivate_void_Callback();
						}
						else
							return this->CToolTangentCurve::deactivate();
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CToolTangentCurve::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CToolTangentCurve::onContextMenu(x, y);
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CToolTangentCurve::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CToolTangentCurve::onMouseMove(button, shift, x, y);
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CToolTangentCurve::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CToolTangentCurve::onDoubleClick();
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CToolTangentCurve::update(e);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CToolTangentCurve::create(ref_ctrl);
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CToolTangentCurve::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CToolTangentCurve::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CToolTangentCurve::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CToolTangentCurve::setEnabled(enabled);
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onClicked_void_Callback();
						}
						else
							return this->CToolTangentCurve::onClicked();
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CToolTangentCurve::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CToolTangentCurve::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CToolTangentCurve::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CToolTangentCurve::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CToolTangentCurve::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CToolTangentCurve::onTouchMove(touchEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CToolTangentCurveProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolBarType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					if (dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::getToolBarType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::getToolBarType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					if (dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_getType_ev_uint32_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					if (dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_getName_EVString_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					if (dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCategory_EVString_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					if (dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolTip_EVString_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					if (dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_getIcon_IBitmap_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					if (dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_isCheckable_ev_bool_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_activate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					if (dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::activate();
					else
						ptrNativeObject->activate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_activate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_activate_void_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_activate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::activate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					if (dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_deactivate_void_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCursor_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					if (dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::getCursor();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getCursor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCursor_ev_int32_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_getCursor_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::getCursor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onContextMenu_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					if (dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::onContextMenu(x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onContextMenu(x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onContextMenu_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::onContextMenu(x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					if (dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::onMouseDown(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::onMouseDown(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					if (dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::onMouseMove(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::onMouseMove(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					if (dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					if (dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::onDoubleClick();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::onDoubleClick();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					if (dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_update_ev_bool_CEvent_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolTangentCurve_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CToolTangentCurve* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolTangentCurve::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_onClicked_void_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_getChecked_ev_bool_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_setChecked_void_ev_bool_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_getEnabled_ev_bool_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolTangentCurve_create_void_ISpatialControl_Callback* pCallback )
				{
					CToolTangentCurveProxy* ptr = dynamic_cast<CToolTangentCurveProxy*>((EarthView::World::Spatial2D::Controls::CToolTangentCurve*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolTangentCurve_create_void_ISpatialControl(pCallback);
					}
				}
			}
		}
	}
}
