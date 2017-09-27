/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/rectselecttool.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial
		{
			namespace Utility
			{
			}
			namespace GeoDataset
			{
			}
		}
		namespace Spatial3D
		{
			namespace Atlas
			{
			}
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
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CRectSelectToolProxy : public EarthView::World::Spatial3D::SystemUI::CRectSelectTool
				{
				private:
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_activate_void_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_activate_void_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_deactivate_void_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_deactivate_void_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCursor_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCursor_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getType_ev_uint32_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getType_ev_uint32_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getName_EVString_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getName_EVString_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCategory_EVString_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCategory_EVString_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolTip_EVString_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolTip_EVString_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getIcon_IBitmap_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getIcon_IBitmap_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onClicked_void_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onClicked_void_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getChecked_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getChecked_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial3D_SystemUI_CRectSelectTool_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_update_ev_bool_CEvent_Callback;
				public:
					CRectSelectToolProxy(EarthView::World::Core::CNameValuePairList *pList) : CRectSelectTool(pList)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_activate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_update_ev_bool_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_activate_void(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_deactivate_void(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCursor_ev_int32(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolBarType_ev_uint32(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getType_ev_uint32(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getName_EVString(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCategory_EVString(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolTip_EVString(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getIcon_IBitmap(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_isCheckable_ev_bool(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onClicked_void(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getChecked_ev_bool(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setChecked_void_ev_bool(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getEnabled_ev_bool(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setEnabled_void_ev_bool(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_create_void_ISpatialControl(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_update_ev_bool_CEvent(EarthView_World_Spatial3D_SystemUI_CRectSelectTool_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onClicked_void_Callback();
						}
						else
							return this->CRectSelectTool::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRectSelectTool::getChecked();
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRectSelectTool::getEnabled();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CRectSelectTool::getType();
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CRectSelectTool::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CRectSelectTool::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CRectSelectTool::onMouseMove(button, shift, x, y);
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CRectSelectTool::getToolBarType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRectSelectTool::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRectSelectTool::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRectSelectTool::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CRectSelectTool::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRectSelectTool::isCheckable();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CRectSelectTool::setChecked(checked);
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CRectSelectTool::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CRectSelectTool::create(ref_ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CRectSelectTool::update(e);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_activate_void_Callback();
						}
						else
							return this->CRectSelectTool::activate();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_deactivate_void_Callback();
						}
						else
							return this->CRectSelectTool::deactivate();
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRectSelectTool::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CRectSelectTool::onContextMenu(x, y);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRectSelectTool::onDoubleClick();
					}
					virtual ev_bool onDoubleClick(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CRectSelectTool::onDoubleClick(button, shift, x, y);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CRectSelectTool::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CRectSelectTool::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CRectSelectTool::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CRectSelectTool::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CRectSelectTool::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CRectSelectTool::onTouchMove(touchEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CRectSelectToolProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onClicked_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CRectSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX;
					if (dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CRectSelectTool::onClicked();
					else
						ptrNativeObject->onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onClicked_void_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onClicked_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CRectSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CRectSelectTool::onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getChecked_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CRectSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX;
					if (dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CRectSelectTool::getChecked();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getChecked();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getChecked_ev_bool_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CRectSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CRectSelectTool::getChecked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CRectSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX;
					if (dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CRectSelectTool::getEnabled();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getEnabled();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getEnabled_ev_bool_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CRectSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CRectSelectTool::getEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_resetResults_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::SystemUI::CRectSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX;
					ptrNativeObject->resetResults();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CRectSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX;
					if (dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CRectSelectTool::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getType_ev_uint32_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CRectSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CRectSelectTool::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CRectSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX;
					if (dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CRectSelectTool::onMouseDown(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CRectSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CRectSelectTool::onMouseDown(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CRectSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX;
					if (dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CRectSelectTool::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CRectSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CRectSelectTool::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CRectSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX;
					if (dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CRectSelectTool::onMouseMove(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::SystemUI::CRectSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::SystemUI::CRectSelectTool::onMouseMove(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getLineColor_CColourValue(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::SystemUI::CRectSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX;
					const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getLineColor();
					const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setLineColor_void_CColourValue(void *pObjectXXXX, _in const void* color )
				{
					EarthView::World::Spatial3D::SystemUI::CRectSelectTool* ptrNativeObject = (EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX;
					ptrNativeObject->setLineColor(*(EarthView::World::Graphic::CColourValue*)color);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_activate_void( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_activate_void_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_deactivate_void_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCursor_ev_int32_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getName_EVString_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCategory_EVString_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolTip_EVString_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getIcon_IBitmap_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_isCheckable_ev_bool_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setChecked_void_ev_bool_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_create_void_ISpatialControl_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_SystemUI_CRectSelectTool_update_ev_bool_CEvent_Callback* pCallback )
				{
					CRectSelectToolProxy* ptr = dynamic_cast<CRectSelectToolProxy*>((EarthView::World::Spatial3D::SystemUI::CRectSelectTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_SystemUI_CRectSelectTool_update_ev_bool_CEvent(pCallback);
					}
				}
			}
		}
	}
}
