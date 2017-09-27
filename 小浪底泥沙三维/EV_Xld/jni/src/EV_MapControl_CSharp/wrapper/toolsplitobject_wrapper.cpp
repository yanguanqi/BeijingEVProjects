/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/toolsplitobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CToolSplitObjectProxy : public EarthView::World::Spatial2D::Controls::CToolSplitObject
				{
				private:
					EarthView_World_Spatial2D_Controls_CToolSplitObject_activate_void_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_activate_void_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_deactivate_void_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_deactivate_void_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_getCursor_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getCursor_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_getType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_getCategory_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getCategory_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolTip_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolTip_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_getIcon_IBitmap_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getIcon_IBitmap_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_onClicked_void_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onClicked_void_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_getChecked_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getChecked_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial2D_Controls_CToolSplitObject_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial2D_Controls_CToolSplitObject_update_ev_bool_CEvent_Callback;
				public:
					CToolSplitObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CToolSplitObject(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_activate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_update_ev_bool_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CToolSplitObjectProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_activate_void(EarthView_World_Spatial2D_Controls_CToolSplitObject_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_deactivate_void(EarthView_World_Spatial2D_Controls_CToolSplitObject_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getCursor_ev_int32(EarthView_World_Spatial2D_Controls_CToolSplitObject_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolSplitObject_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool(EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolBarType_ev_uint32(EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getType_ev_uint32(EarthView_World_Spatial2D_Controls_CToolSplitObject_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getName_EVString(EarthView_World_Spatial2D_Controls_CToolSplitObject_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getCategory_EVString(EarthView_World_Spatial2D_Controls_CToolSplitObject_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolTip_EVString(EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getIcon_IBitmap(EarthView_World_Spatial2D_Controls_CToolSplitObject_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_isCheckable_ev_bool(EarthView_World_Spatial2D_Controls_CToolSplitObject_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onClicked_void(EarthView_World_Spatial2D_Controls_CToolSplitObject_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getChecked_ev_bool(EarthView_World_Spatial2D_Controls_CToolSplitObject_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_setChecked_void_ev_bool(EarthView_World_Spatial2D_Controls_CToolSplitObject_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getEnabled_ev_bool(EarthView_World_Spatial2D_Controls_CToolSplitObject_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_setEnabled_void_ev_bool(EarthView_World_Spatial2D_Controls_CToolSplitObject_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_create_void_ISpatialControl(EarthView_World_Spatial2D_Controls_CToolSplitObject_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_update_ev_bool_CEvent(EarthView_World_Spatial2D_Controls_CToolSplitObject_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CToolSplitObject_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CToolSplitObject::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CToolSplitObject::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CToolSplitObject::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CToolSplitObject::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CToolSplitObject::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CToolSplitObject::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CToolSplitObject::isCheckable();
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolSplitObject_activate_void_Callback();
						}
						else
							return this->CToolSplitObject::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolSplitObject_deactivate_void_Callback();
						}
						else
							return this->CToolSplitObject::deactivate();
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CToolSplitObject::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CToolSplitObject::onContextMenu(x, y);
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CToolSplitObject::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CToolSplitObject::onMouseMove(button, shift, x, y);
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CToolSplitObject::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CToolSplitObject::onDoubleClick();
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CToolSplitObject::update(e);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolSplitObject_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CToolSplitObject::create(ref_ctrl);
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CToolSplitObject::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolSplitObject_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CToolSplitObject::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CToolSplitObject::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolSplitObject_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CToolSplitObject::setEnabled(enabled);
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onClicked_void_Callback();
						}
						else
							return this->CToolSplitObject::onClicked();
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CToolSplitObject::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CToolSplitObject::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CToolSplitObject::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CToolSplitObject::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CToolSplitObject::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CToolSplitObject::onTouchMove(touchEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CToolSplitObjectProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolBarType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					if (dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::getToolBarType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::getToolBarType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					if (dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_getType_ev_uint32_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					if (dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_getName_EVString_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					if (dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_getCategory_EVString_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					if (dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolTip_EVString_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					if (dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_getIcon_IBitmap_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					if (dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_isCheckable_ev_bool_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_activate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					if (dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::activate();
					else
						ptrNativeObject->activate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_activate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_activate_void_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_activate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::activate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					if (dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_deactivate_void_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getCursor_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					if (dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::getCursor();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getCursor();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_getCursor_ev_int32_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_getCursor_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::getCursor();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onContextMenu_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					if (dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::onContextMenu(x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onContextMenu(x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onContextMenu_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::onContextMenu(x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					if (dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::onMouseDown(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::onMouseDown(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					if (dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::onMouseMove(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::onMouseMove(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					if (dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					if (dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::onDoubleClick();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::onDoubleClick();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					if (dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_update_ev_bool_CEvent_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CToolSplitObject_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CToolSplitObject* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CToolSplitObject::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_onClicked_void_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_getChecked_ev_bool_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_setChecked_void_ev_bool_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_getEnabled_ev_bool_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CToolSplitObject_create_void_ISpatialControl_Callback* pCallback )
				{
					CToolSplitObjectProxy* ptr = dynamic_cast<CToolSplitObjectProxy*>((EarthView::World::Spatial2D::Controls::CToolSplitObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CToolSplitObject_create_void_ISpatialControl(pCallback);
					}
				}
			}
		}
	}
}
