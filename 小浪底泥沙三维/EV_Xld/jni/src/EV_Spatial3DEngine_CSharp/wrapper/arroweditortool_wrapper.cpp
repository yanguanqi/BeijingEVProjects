/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/arroweditortool.h"
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
		}
		namespace Spatial
		{
			namespace Math
			{
			}
			namespace Utility
			{
			}
			namespace Display
			{
			}
			namespace Kml
			{
			}
		}
		namespace Graphic
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
		}
		namespace Spatial3D
		{
			namespace KmlManager
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CArrowEditorToolProxy : public EarthView::World::Spatial3D::KmlManager::CArrowEditorTool
				{
				private:
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_activate_void_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_activate_void_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_deactivate_void_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_deactivate_void_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCursor_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCursor_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getType_ev_uint32_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getType_ev_uint32_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getName_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getName_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCategory_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCategory_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolTip_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolTip_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getIcon_IBitmap_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getIcon_IBitmap_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onClicked_void_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onClicked_void_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getChecked_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getChecked_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_update_ev_bool_CEvent_Callback;
				public:
					CArrowEditorToolProxy(EarthView::World::Core::CNameValuePairList *pList) : CArrowEditorTool(pList)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_activate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_update_ev_bool_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_activate_void(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_deactivate_void(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCursor_ev_int32(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolBarType_ev_uint32(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getType_ev_uint32(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getName_EVString(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCategory_EVString(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolTip_EVString(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getIcon_IBitmap(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_isCheckable_ev_bool(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onClicked_void(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getChecked_ev_bool(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setChecked_void_ev_bool(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getEnabled_ev_bool(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setEnabled_void_ev_bool(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_create_void_ISpatialControl(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_update_ev_bool_CEvent(EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CArrowEditorTool::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CArrowEditorTool::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CArrowEditorTool::onMouseMove(button, shift, x, y);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CArrowEditorTool::onDoubleClick();
					}
					virtual ev_bool onDoubleClick(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CArrowEditorTool::onDoubleClick(button, shift, x, y);
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CArrowEditorTool::getType();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_deactivate_void_Callback();
						}
						else
							return this->CArrowEditorTool::deactivate();
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CArrowEditorTool::getToolBarType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CArrowEditorTool::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CArrowEditorTool::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CArrowEditorTool::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CArrowEditorTool::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CArrowEditorTool::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onClicked_void_Callback();
						}
						else
							return this->CArrowEditorTool::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CArrowEditorTool::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CArrowEditorTool::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CArrowEditorTool::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CArrowEditorTool::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CArrowEditorTool::create(ref_ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CArrowEditorTool::update(e);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_activate_void_Callback();
						}
						else
							return this->CArrowEditorTool::activate();
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CArrowEditorTool::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CArrowEditorTool::onContextMenu(x, y);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CArrowEditorTool::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CArrowEditorTool::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CArrowEditorTool::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CArrowEditorTool::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CArrowEditorTool::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CArrowEditorTool::onTouchMove(touchEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CArrowEditorToolProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					if (dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CArrowEditorTool::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CArrowEditorTool::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					if (dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CArrowEditorTool::onMouseDown(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CArrowEditorTool::onMouseDown(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					if (dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CArrowEditorTool::onMouseMove(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CArrowEditorTool::onMouseMove(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					if (dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CArrowEditorTool::onDoubleClick();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CArrowEditorTool::onDoubleClick();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					if (dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CArrowEditorTool::onDoubleClick(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CArrowEditorTool::onDoubleClick(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					if (dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CArrowEditorTool::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getType_ev_uint32_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CArrowEditorTool::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					if (dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CArrowEditorTool::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_deactivate_void_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CArrowEditorTool::deactivate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setEditorArrowObj_void_CKmlArrowObjectEx(void *pObjectXXXX, _in EarthView::World::Geometry3D::CKmlArrowObjectEx* pKmlArrowObj )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					ptrNativeObject->setEditorArrowObj(pKmlArrowObj);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CGeoObjectExtension*  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getGeoObject_CGeoObjectExtension(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* objXXXX = ptrNativeObject->getGeoObject();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getGeoObjectParent_CKmlDocument(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->getGeoObjectParent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_registerObserver_void_IKmlObserver(void *pObjectXXXX, _in EarthView::World::Spatial3D::KmlManager::IKmlObserver* ref_observer )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					ptrNativeObject->registerObserver(ref_observer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_unRegisterObserver_void_IKmlObserver(void *pObjectXXXX, _in EarthView::World::Spatial3D::KmlManager::IKmlObserver* observer )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					ptrNativeObject->unRegisterObserver(observer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setKmlArrowState_void_KmlArrowState(void *pObjectXXXX, _in int ArrowState )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					ptrNativeObject->setKmlArrowState((EarthView::World::Spatial3D::KmlManager::KmlArrowState)ArrowState);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getKmlArrowState_KmlArrowState(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					EarthView::World::Spatial3D::KmlManager::KmlArrowState objXXXX = ptrNativeObject->getKmlArrowState();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_updateVertexBuffer_void_ev_bool(void *pObjectXXXX, _in ev_bool isRefreshLine )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					ptrNativeObject->updateVertexBuffer(isRefreshLine);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_updateGeoExProperty_void_EVString_CVariant(void *pObjectXXXX, _in char* key, _inout void* val )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					ptrNativeObject->updateGeoExProperty(key1, *(EarthView::World::Core::CVariant*)val);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setEditorPointAndIndex_void_ev_int32_CVector3(void *pObjectXXXX, _in ev_int32 index, _in void* point )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					ptrNativeObject->setEditorPointAndIndex(index, *(EarthView::World::Spatial::Math::CVector3*)point);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getEditorPointIndex_ev_int32_CVector3(void *pObjectXXXX, _inout void* point )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getEditorPointIndex(*(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_reLoad_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->reLoad();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_updataEditKeyPoints_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CArrowEditorTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX;
					ptrNativeObject->updataEditKeyPoints();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_activate_void( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_activate_void_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCursor_ev_int32_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getName_EVString_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCategory_EVString_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolTip_EVString_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getIcon_IBitmap_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_isCheckable_ev_bool_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onClicked_void_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getChecked_ev_bool_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setChecked_void_ev_bool_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getEnabled_ev_bool_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_create_void_ISpatialControl_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_update_ev_bool_CEvent_Callback* pCallback )
				{
					CArrowEditorToolProxy* ptr = dynamic_cast<CArrowEditorToolProxy*>((EarthView::World::Spatial3D::KmlManager::CArrowEditorTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CArrowEditorTool_update_ev_bool_CEvent(pCallback);
					}
				}
			}
		}
	}
}
