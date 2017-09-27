/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/polylineedittool.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace KmlManager
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CPolylineEditToolProxy : public EarthView::World::Spatial3D::KmlManager::CPolylineEditTool
				{
				private:
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_activate_void_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_activate_void_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_deactivate_void_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_deactivate_void_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCursor_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCursor_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getType_ev_uint32_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getType_ev_uint32_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getName_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getName_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCategory_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCategory_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolTip_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolTip_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getIcon_IBitmap_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getIcon_IBitmap_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onClicked_void_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onClicked_void_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getChecked_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getChecked_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_update_ev_bool_CEvent_Callback;
				public:
					CPolylineEditToolProxy(EarthView::World::Core::CNameValuePairList *pList) : CPolylineEditTool(pList)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_activate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_update_ev_bool_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_activate_void(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_deactivate_void(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCursor_ev_int32(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolBarType_ev_uint32(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getType_ev_uint32(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getName_EVString(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCategory_EVString(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolTip_EVString(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getIcon_IBitmap(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_isCheckable_ev_bool(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onClicked_void(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getChecked_ev_bool(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setChecked_void_ev_bool(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getEnabled_ev_bool(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setEnabled_void_ev_bool(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_create_void_ISpatialControl(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_update_ev_bool_CEvent(EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CPolylineEditTool::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CPolylineEditTool::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CPolylineEditTool::onMouseMove(button, shift, x, y);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPolylineEditTool::onDoubleClick();
					}
					virtual ev_bool onDoubleClick(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CPolylineEditTool::onDoubleClick(button, shift, x, y);
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CPolylineEditTool::getType();
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_deactivate_void_Callback();
						}
						else
							return this->CPolylineEditTool::deactivate();
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CPolylineEditTool::getToolBarType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CPolylineEditTool::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CPolylineEditTool::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CPolylineEditTool::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CPolylineEditTool::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPolylineEditTool::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onClicked_void_Callback();
						}
						else
							return this->CPolylineEditTool::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPolylineEditTool::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CPolylineEditTool::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CPolylineEditTool::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CPolylineEditTool::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CPolylineEditTool::create(ref_ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CPolylineEditTool::update(e);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_activate_void_Callback();
						}
						else
							return this->CPolylineEditTool::activate();
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CPolylineEditTool::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CPolylineEditTool::onContextMenu(x, y);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CPolylineEditTool::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CPolylineEditTool::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CPolylineEditTool::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CPolylineEditTool::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CPolylineEditTool::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CPolylineEditTool::onTouchMove(touchEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CPolylineEditToolProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					if (dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CPolylineEditTool::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CPolylineEditTool::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					if (dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CPolylineEditTool::onMouseDown(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CPolylineEditTool::onMouseDown(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					if (dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CPolylineEditTool::onMouseMove(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CPolylineEditTool::onMouseMove(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					if (dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CPolylineEditTool::onDoubleClick();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CPolylineEditTool::onDoubleClick();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					if (dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CPolylineEditTool::onDoubleClick(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CPolylineEditTool::onDoubleClick(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					if (dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CPolylineEditTool::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getType_ev_uint32_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CPolylineEditTool::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					if (dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CPolylineEditTool::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_deactivate_void_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CPolylineEditTool::deactivate();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CGeoObjectExtension*  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getGeoObject_CGeoObjectExtension(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* objXXXX = ptrNativeObject->getGeoObject();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getGeoObjectParent_CKmlDocument(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->getGeoObjectParent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCamera*  _stdcall Get_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_mCamera( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->mCamera;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_mCamera( void *pObjectXXXX, EarthView::World::Graphic::CCamera*  value )
				{
					((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*)pObjectXXXX)->mCamera = value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_mFilePath( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mFilePath;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_mFilePath( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*)pObjectXXXX)->mFilePath = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_mIsNeedRefresh( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsNeedRefresh;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_mIsNeedRefresh( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*)pObjectXXXX)->mIsNeedRefresh = value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_updateGeoPolygonAlt_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					ptrNativeObject->updateGeoPolygonAlt();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_updateVertexBuffer_void_ev_bool(void *pObjectXXXX, _in ev_bool isRefreshLine )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					ptrNativeObject->updateVertexBuffer(isRefreshLine);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_registerObserver_void_IKmlObserver(void *pObjectXXXX, _in EarthView::World::Spatial3D::KmlManager::IKmlObserver* ref_observer )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					ptrNativeObject->registerObserver(ref_observer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_unRegisterObserver_void_IKmlObserver(void *pObjectXXXX, _in EarthView::World::Spatial3D::KmlManager::IKmlObserver* observer )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					ptrNativeObject->unRegisterObserver(observer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setSpatialRefernce_void_CSpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Utility::CSpatialReference* ref_sr )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					ptrNativeObject->setSpatialRefernce(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setGeoObjectExtensionAttribute_void_CGeoObjectExtensionAttribute(void *pObjectXXXX, _in void* att )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					ptrNativeObject->setGeoObjectExtensionAttribute(*(EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute*)att);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_renderEditFrame_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					ptrNativeObject->renderEditFrame();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CPolylineEditTool__notify_void_ev_bool(void *pObjectXXXX, _in ev_bool isRefershView )
				{
					EarthView::World::Spatial3D::KmlManager::CPolylineEditTool* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX;
					ptrNativeObject->_notify(isRefershView);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_activate_void( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_activate_void_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCursor_ev_int32_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getName_EVString_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCategory_EVString_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolTip_EVString_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getIcon_IBitmap_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_isCheckable_ev_bool_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onClicked_void_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getChecked_ev_bool_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setChecked_void_ev_bool_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getEnabled_ev_bool_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_create_void_ISpatialControl_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_update_ev_bool_CEvent_Callback* pCallback )
				{
					CPolylineEditToolProxy* ptr = dynamic_cast<CPolylineEditToolProxy*>((EarthView::World::Spatial3D::KmlManager::CPolylineEditTool*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CPolylineEditTool_update_ev_bool_CEvent(pCallback);
					}
				}
			}
		}
	}
}
