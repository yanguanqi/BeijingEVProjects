/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/regionlodedittool.h"
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
		}
		namespace Spatial
		{
			namespace Geometry
			{
			}
			namespace Display
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
			namespace KmlManager
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CRegionLodEditToolProxy : public EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool
				{
				private:
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_activate_void_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_activate_void_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_deactivate_void_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_deactivate_void_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCursor_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCursor_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getType_ev_uint32_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getType_ev_uint32_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getName_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getName_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCategory_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCategory_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolTip_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolTip_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getIcon_IBitmap_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getIcon_IBitmap_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onClicked_void_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onClicked_void_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getChecked_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getChecked_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_update_ev_bool_CEvent_Callback;
				public:
					CRegionLodEditToolProxy(EarthView::World::Core::CNameValuePairList *pList) : CRegionLodEditTool(pList)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_activate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_update_ev_bool_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_activate_void(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_deactivate_void(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCursor_ev_int32(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolBarType_ev_uint32(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getType_ev_uint32(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getName_EVString(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCategory_EVString(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolTip_EVString(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getIcon_IBitmap(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_isCheckable_ev_bool(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onClicked_void(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getChecked_ev_bool(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setChecked_void_ev_bool(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getEnabled_ev_bool(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setEnabled_void_ev_bool(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_create_void_ISpatialControl(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_update_ev_bool_CEvent(EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::onMouseMove(button, shift, x, y);
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::getType();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_deactivate_void_Callback();
						}
						else
							return this->CRegionLodEditTool::deactivate();
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::getToolBarType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onClicked_void_Callback();
						}
						else
							return this->CRegionLodEditTool::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CRegionLodEditTool::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CRegionLodEditTool::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CRegionLodEditTool::create(ref_ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::update(e);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_activate_void_Callback();
						}
						else
							return this->CRegionLodEditTool::activate();
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::onContextMenu(x, y);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::onDoubleClick();
					}
					virtual ev_bool onDoubleClick(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::onDoubleClick(button, shift, x, y);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CRegionLodEditTool::onTouchMove(touchEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CRegionLodEditToolProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					if (dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					if (dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool::onMouseDown(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool::onMouseDown(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					if (dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool::onMouseMove(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool::onMouseMove(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					if (dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getType_ev_uint32_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					if (dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_deactivate_void_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool::deactivate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_updateOutFrameLatLonAlt_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					ptrNativeObject->updateOutFrameLatLonAlt();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_updateOutFrameLatLon_void_ev_bool(void *pObjectXXXX, _in ev_bool isRefersh )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					ptrNativeObject->updateOutFrameLatLon(isRefersh);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_registerObserver_void_IKmlObserver(void *pObjectXXXX, _in EarthView::World::Spatial3D::KmlManager::IKmlObserver* ref_observer )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					ptrNativeObject->registerObserver(ref_observer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_unRegisterObserver_void_IKmlObserver(void *pObjectXXXX, _in EarthView::World::Spatial3D::KmlManager::IKmlObserver* observer )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					ptrNativeObject->unRegisterObserver(observer);
				}
				extern "C" EV_DLL_EXPORT  double  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getNorth_double(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					double objXXXX = ptrNativeObject->getNorth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setNorth_void_double(void *pObjectXXXX, _in double north )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					ptrNativeObject->setNorth(north);
				}
				extern "C" EV_DLL_EXPORT  double  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getSouth_double(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					double objXXXX = ptrNativeObject->getSouth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setSouth_void_double(void *pObjectXXXX, _in double south )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					ptrNativeObject->setSouth(south);
				}
				extern "C" EV_DLL_EXPORT  double  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getEast_double(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					double objXXXX = ptrNativeObject->getEast();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setEast_void_double(void *pObjectXXXX, _in double east )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					ptrNativeObject->setEast(east);
				}
				extern "C" EV_DLL_EXPORT  double  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getWest_double(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					double objXXXX = ptrNativeObject->getWest();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setWest_void_double(void *pObjectXXXX, _in double west )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					ptrNativeObject->setWest(west);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getGeoObjectExtensionAttribute_CGeoObjectExtensionAttribute(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* objXXXX = ptrNativeObject->getGeoObjectExtensionAttribute();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setGeoObjectExtensionAttribute_void_CGeoObjectExtensionAttribute(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute* att )
				{
					EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX;
					ptrNativeObject->setGeoObjectExtensionAttribute(att);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_activate_void( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_activate_void_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCursor_ev_int32_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getName_EVString_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCategory_EVString_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolTip_EVString_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getIcon_IBitmap_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_isCheckable_ev_bool_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onClicked_void_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getChecked_ev_bool_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setChecked_void_ev_bool_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getEnabled_ev_bool_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_create_void_ISpatialControl_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_update_ev_bool_CEvent_Callback* pCallback )
				{
					CRegionLodEditToolProxy* ptr = dynamic_cast<CRegionLodEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CRegionLodEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CRegionLodEditTool_update_ev_bool_CEvent(pCallback);
					}
				}
			}
		}
	}
}
