/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysis/analysis3dsection.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_reset_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_initialize_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_renderAnalysis3D_void_Callback)();
				typedef EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMath3D_CMath3DBaseObject_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef const int  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMousePickState_MousePickState_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setMousePickState_void_MousePickState_Callback)(_in int state);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIsAnalysisInServer_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setIsAnalysisInServer_void_ev_bool_Callback)(_in ev_bool bInServer);
				typedef EarthView::World::Spatial3D::Analysis::CAltitudeListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAltitude3DListener_CAltitudeListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAltitude3DListener_void_CAltitudeListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAltitudeListener* ref_listener);
				typedef const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAnalysis3DListener_CAnalysis3DListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAnalysis3DListener_void_CAnalysis3DListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ref_listener);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CAnalysis3DSectionProxy : public EarthView::World::Spatial3D::Analysis::CAnalysis3DSection
				{
				private:
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_reset_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_reset_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_initialize_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_initialize_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_renderAnalysis3D_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_renderAnalysis3D_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMath3D_CMath3DBaseObject_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMath3D_CMath3DBaseObject_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMousePickState_MousePickState_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMousePickState_MousePickState_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setMousePickState_void_MousePickState_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setMousePickState_void_MousePickState_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIsAnalysisInServer_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIsAnalysisInServer_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setIsAnalysisInServer_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setIsAnalysisInServer_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAltitude3DListener_CAltitudeListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAltitude3DListener_CAltitudeListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAltitude3DListener_void_CAltitudeListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAltitude3DListener_void_CAltitudeListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAnalysis3DListener_CAnalysis3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAnalysis3DListener_CAnalysis3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAnalysis3DListener_void_CAnalysis3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAnalysis3DListener_void_CAnalysis3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_activate_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_activate_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_deactivate_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_deactivate_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCursor_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCursor_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getType_ev_uint32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getType_ev_uint32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getName_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getName_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCategory_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCategory_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolTip_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolTip_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIcon_IBitmap_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIcon_IBitmap_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onClicked_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onClicked_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getChecked_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getChecked_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_update_ev_bool_CEvent_Callback;
				public:
					CAnalysis3DSectionProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnalysis3DSection(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_reset_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_initialize_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_renderAnalysis3D_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMath3D_CMath3DBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMousePickState_MousePickState_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setMousePickState_void_MousePickState_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIsAnalysisInServer_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setIsAnalysisInServer_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAltitude3DListener_CAltitudeListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAltitude3DListener_void_CAltitudeListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAnalysis3DListener_CAnalysis3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAnalysis3DListener_void_CAnalysis3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_activate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_update_ev_bool_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_reset_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_reset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_reset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_initialize_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_initialize_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_initialize_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_renderAnalysis3D_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_renderAnalysis3D_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_renderAnalysis3D_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMath3D_CMath3DBaseObject(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMath3D_CMath3DBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMath3D_CMath3DBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setVisible_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMousePickState_MousePickState(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMousePickState_MousePickState_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMousePickState_MousePickState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setMousePickState_void_MousePickState(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setMousePickState_void_MousePickState_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setMousePickState_void_MousePickState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIsAnalysisInServer_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIsAnalysisInServer_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIsAnalysisInServer_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setIsAnalysisInServer_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setIsAnalysisInServer_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setIsAnalysisInServer_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAltitude3DListener_CAltitudeListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAltitude3DListener_CAltitudeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAltitude3DListener_CAltitudeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAltitude3DListener_void_CAltitudeListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAltitude3DListener_void_CAltitudeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAltitude3DListener_void_CAltitudeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAnalysis3DListener_CAnalysis3DListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAnalysis3DListener_CAnalysis3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAnalysis3DListener_CAnalysis3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAnalysis3DListener_void_CAnalysis3DListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAnalysis3DListener_void_CAnalysis3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAnalysis3DListener_void_CAnalysis3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_activate_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_deactivate_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCursor_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolBarType_ev_uint32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getType_ev_uint32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getName_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCategory_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolTip_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIcon_IBitmap(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_isCheckable_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onClicked_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getChecked_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setChecked_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getEnabled_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setEnabled_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_create_void_ISpatialControl(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_update_ev_bool_CEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_deactivate_void_Callback();
						}
						else
							return this->CAnalysis3DSection::deactivate();
					}
					virtual void reset()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_reset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_reset_void_Callback();
						}
						else
							return this->CAnalysis3DSection::reset();
					}
					virtual void initialize()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_initialize_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_initialize_void_Callback();
						}
						else
							return this->CAnalysis3DSection::initialize();
					}
					virtual void renderAnalysis3D()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_renderAnalysis3D_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_renderAnalysis3D_void_Callback();
						}
						else
							return this->CAnalysis3DSection::renderAnalysis3D();
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::onMouseMove(button, shift, x, y);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::onDoubleClick();
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::onMouseDown(button, shift, x, y);
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::getType();
					}
					virtual EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* getMath3D() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMath3D_CMath3DBaseObject_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMath3D_CMath3DBaseObject_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::getMath3D();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CAnalysis3DSection::setVisible(visible);
					}
					virtual const EarthView::World::Spatial3D::Analysis::MousePickState getMousePickState() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMousePickState_MousePickState_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::MousePickState returnValue = (EarthView::World::Spatial3D::Analysis::MousePickState)m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMousePickState_MousePickState_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::getMousePickState();
					}
					virtual void setMousePickState(_in EarthView::World::Spatial3D::Analysis::MousePickState state)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setMousePickState_void_MousePickState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setMousePickState_void_MousePickState_Callback((int)state);
						}
						else
							return this->CAnalysis3DSection::setMousePickState(state);
					}
					virtual ev_bool getIsAnalysisInServer()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIsAnalysisInServer_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIsAnalysisInServer_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::getIsAnalysisInServer();
					}
					virtual void setIsAnalysisInServer(_in ev_bool bInServer)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setIsAnalysisInServer_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setIsAnalysisInServer_void_ev_bool_Callback(bInServer);
						}
						else
							return this->CAnalysis3DSection::setIsAnalysisInServer(bInServer);
					}
					virtual EarthView::World::Spatial3D::Analysis::CAltitudeListener* getAltitude3DListener()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAltitude3DListener_CAltitudeListener_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Analysis::CAltitudeListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAltitude3DListener_CAltitudeListener_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::getAltitude3DListener();
					}
					virtual void setAltitude3DListener(_in EarthView::World::Spatial3D::Analysis::CAltitudeListener* ref_listener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAltitude3DListener_void_CAltitudeListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAltitude3DListener_void_CAltitudeListener_Callback(ref_listener);
						}
						else
							return this->CAnalysis3DSection::setAltitude3DListener(ref_listener);
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* getAnalysis3DListener() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAnalysis3DListener_CAnalysis3DListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAnalysis3DListener_CAnalysis3DListener_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::getAnalysis3DListener();
					}
					virtual void setAnalysis3DListener(_in EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ref_listener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAnalysis3DListener_void_CAnalysis3DListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAnalysis3DListener_void_CAnalysis3DListener_Callback(ref_listener);
						}
						else
							return this->CAnalysis3DSection::setAnalysis3DListener(ref_listener);
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::getToolBarType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onClicked_void_Callback();
						}
						else
							return this->CAnalysis3DSection::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CAnalysis3DSection::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CAnalysis3DSection::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CAnalysis3DSection::create(ref_ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::update(e);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_activate_void_Callback();
						}
						else
							return this->CAnalysis3DSection::activate();
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::onContextMenu(x, y);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CAnalysis3DSection::onTouchMove(touchEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CAnalysis3DSectionProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSection::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_deactivate_void_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSection::deactivate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSection::reset();
					else
						ptrNativeObject->reset();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_reset_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_reset_void_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_reset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_reset_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSection::reset();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_initialize_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSection::initialize();
					else
						ptrNativeObject->initialize();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_initialize_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_initialize_void_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_initialize_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_initialize_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSection::initialize();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_renderAnalysis3D_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSection::renderAnalysis3D();
					else
						ptrNativeObject->renderAnalysis3D();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_renderAnalysis3D_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_renderAnalysis3D_void_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_renderAnalysis3D_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_renderAnalysis3D_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSection::renderAnalysis3D();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIsOver_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getIsOver();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getSelectedGeoPts_VertexList(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					EarthView::World::Spatial::Math::VertexList objXXXX = ptrNativeObject->getSelectedGeoPts();
					EarthView::World::Spatial::Math::VertexList *pXXXX = new EarthView::World::Spatial::Math::VertexList(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setSelectedGeoPts_void_VertexList(void *pObjectXXXX, _inout void* points )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ptrNativeObject->setSelectedGeoPts(*(EarthView::World::Spatial::Math::VertexList*)points);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAltitudeVisible_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getAltitudeVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAltitudeVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ptrNativeObject->setAltitudeVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getSlopeVisible_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getSlopeVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setSlopeVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ptrNativeObject->setSlopeVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setHighOrLowDetail_void_ev_bool(void *pObjectXXXX, _in ev_bool detail )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ptrNativeObject->setHighOrLowDetail(detail);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setBillboardImage_void_EVString_EVString(void *pObjectXXXX, _in const char* filepath, _in const char* type )
				{
					EarthView::World::Core::ev_string filepath1 = filepath;
					EarthView::World::Core::ev_string type1 = type;
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ptrNativeObject->setBillboardImage(filepath1, type1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setBillboardImageHeightAndWidth_void_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 height, _in ev_real32 width )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ptrNativeObject->setBillboardImageHeightAndWidth(height, width);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setBillboardAltitudeMode_void_EVAltitudeMode(void *pObjectXXXX, _in int amode )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ptrNativeObject->setBillboardAltitudeMode((EarthView::World::Spatial::Utility::EVAltitudeMode)amode);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setBillboardOriginType_void_EVBillboardOriginType(void *pObjectXXXX, _in int otype )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ptrNativeObject->setBillboardOriginType((EarthView::World::Spatial::Display::EVBillboardOriginType)otype);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMaxAltitude_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMaxAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMinAltitude_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMinAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMaxSlope_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMaxSlope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMinSlope_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getMinSlope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Analysis::CSectionLineInfo*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getSectionInfo_CSectionLineInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::CSectionLineInfo* objXXXX = ptrNativeObject->getSectionInfo();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_ToBitmapStreamPtr_MemoryDataStreamPtr_ev_int32_ev_int32_ev_bool(void *pObjectXXXX, _in ev_int32 width, _in ev_int32 height, _in ev_bool onlyCoordinate )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->ToBitmapStreamPtr(width, height, onlyCoordinate);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSection::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSection::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSection::onMouseMove(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSection::onMouseMove(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSection::onDoubleClick();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSection* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSection::onDoubleClick();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMath3D_CMath3DBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMath3D_CMath3DBaseObject_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMath3D_CMath3DBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setVisible_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMousePickState_MousePickState( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMousePickState_MousePickState_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getMousePickState_MousePickState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setMousePickState_void_MousePickState( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setMousePickState_void_MousePickState_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setMousePickState_void_MousePickState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIsAnalysisInServer_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIsAnalysisInServer_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIsAnalysisInServer_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setIsAnalysisInServer_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setIsAnalysisInServer_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setIsAnalysisInServer_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAltitude3DListener_CAltitudeListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAltitude3DListener_CAltitudeListener_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAltitude3DListener_CAltitudeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAltitude3DListener_void_CAltitudeListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAltitude3DListener_void_CAltitudeListener_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAltitude3DListener_void_CAltitudeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAnalysis3DListener_CAnalysis3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAnalysis3DListener_CAnalysis3DListener_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getAnalysis3DListener_CAnalysis3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAnalysis3DListener_void_CAnalysis3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAnalysis3DListener_void_CAnalysis3DListener_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setAnalysis3DListener_void_CAnalysis3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_activate_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_activate_void_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCursor_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getType_ev_uint32_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getName_EVString_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCategory_EVString_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolTip_EVString_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIcon_IBitmap_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_isCheckable_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onClicked_void_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getChecked_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setChecked_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getEnabled_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_create_void_ISpatialControl_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_update_ev_bool_CEvent_Callback* pCallback )
				{
					CAnalysis3DSectionProxy* ptr = dynamic_cast<CAnalysis3DSectionProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSection_update_ev_bool_CEvent(pCallback);
					}
				}
			}
		}
	}
}
