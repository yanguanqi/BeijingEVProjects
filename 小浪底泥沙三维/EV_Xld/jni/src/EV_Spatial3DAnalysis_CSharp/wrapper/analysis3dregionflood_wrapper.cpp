/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysis/analysis3dregionflood.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_reset_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_initialize_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_renderAnalysis3D_void_Callback)();
				typedef EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMath3D_CMath3DBaseObject_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef const int  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMousePickState_MousePickState_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setMousePickState_void_MousePickState_Callback)(_in int state);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIsAnalysisInServer_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setIsAnalysisInServer_void_ev_bool_Callback)(_in ev_bool bInServer);
				typedef EarthView::World::Spatial3D::Analysis::CAltitudeListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAltitude3DListener_CAltitudeListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAltitude3DListener_void_CAltitudeListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAltitudeListener* ref_listener);
				typedef const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAnalysis3DListener_CAnalysis3DListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAnalysis3DListener_void_CAnalysis3DListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ref_listener);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CAnalysis3DRegionFloodProxy : public EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood
				{
				private:
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_reset_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_reset_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_initialize_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_initialize_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_renderAnalysis3D_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_renderAnalysis3D_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMath3D_CMath3DBaseObject_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMath3D_CMath3DBaseObject_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMousePickState_MousePickState_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMousePickState_MousePickState_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setMousePickState_void_MousePickState_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setMousePickState_void_MousePickState_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIsAnalysisInServer_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIsAnalysisInServer_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setIsAnalysisInServer_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setIsAnalysisInServer_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAltitude3DListener_CAltitudeListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAltitude3DListener_CAltitudeListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAltitude3DListener_void_CAltitudeListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAltitude3DListener_void_CAltitudeListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAnalysis3DListener_CAnalysis3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAnalysis3DListener_CAnalysis3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAnalysis3DListener_void_CAnalysis3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAnalysis3DListener_void_CAnalysis3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_activate_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_activate_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_deactivate_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_deactivate_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCursor_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCursor_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getType_ev_uint32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getType_ev_uint32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getName_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getName_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCategory_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCategory_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolTip_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolTip_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIcon_IBitmap_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIcon_IBitmap_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onClicked_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onClicked_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getChecked_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getChecked_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_update_ev_bool_CEvent_Callback;
				public:
					CAnalysis3DRegionFloodProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnalysis3DRegionFlood(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_reset_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_initialize_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_renderAnalysis3D_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMath3D_CMath3DBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMousePickState_MousePickState_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setMousePickState_void_MousePickState_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIsAnalysisInServer_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setIsAnalysisInServer_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAltitude3DListener_CAltitudeListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAltitude3DListener_void_CAltitudeListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAnalysis3DListener_CAnalysis3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAnalysis3DListener_void_CAnalysis3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_activate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_update_ev_bool_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_reset_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_reset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_reset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_initialize_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_initialize_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_initialize_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_renderAnalysis3D_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_renderAnalysis3D_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_renderAnalysis3D_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMath3D_CMath3DBaseObject(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMath3D_CMath3DBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMath3D_CMath3DBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setVisible_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMousePickState_MousePickState(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMousePickState_MousePickState_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMousePickState_MousePickState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setMousePickState_void_MousePickState(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setMousePickState_void_MousePickState_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setMousePickState_void_MousePickState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIsAnalysisInServer_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIsAnalysisInServer_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIsAnalysisInServer_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setIsAnalysisInServer_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setIsAnalysisInServer_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setIsAnalysisInServer_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAltitude3DListener_CAltitudeListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAltitude3DListener_CAltitudeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAltitude3DListener_CAltitudeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAltitude3DListener_void_CAltitudeListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAltitude3DListener_void_CAltitudeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAltitude3DListener_void_CAltitudeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAnalysis3DListener_CAnalysis3DListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAnalysis3DListener_CAnalysis3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAnalysis3DListener_CAnalysis3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAnalysis3DListener_void_CAnalysis3DListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAnalysis3DListener_void_CAnalysis3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAnalysis3DListener_void_CAnalysis3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_activate_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_deactivate_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCursor_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolBarType_ev_uint32(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getType_ev_uint32(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getName_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCategory_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolTip_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIcon_IBitmap(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_isCheckable_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onClicked_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getChecked_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setChecked_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getEnabled_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setEnabled_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_create_void_ISpatialControl(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_update_ev_bool_CEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_deactivate_void_Callback();
						}
						else
							return this->CAnalysis3DRegionFlood::deactivate();
					}
					virtual void reset()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_reset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_reset_void_Callback();
						}
						else
							return this->CAnalysis3DRegionFlood::reset();
					}
					virtual void initialize()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_initialize_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_initialize_void_Callback();
						}
						else
							return this->CAnalysis3DRegionFlood::initialize();
					}
					virtual void renderAnalysis3D()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_renderAnalysis3D_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_renderAnalysis3D_void_Callback();
						}
						else
							return this->CAnalysis3DRegionFlood::renderAnalysis3D();
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::onDoubleClick();
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::onMouseMove(button, shift, x, y);
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::getType();
					}
					virtual EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* getMath3D() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMath3D_CMath3DBaseObject_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMath3D_CMath3DBaseObject_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::getMath3D();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CAnalysis3DRegionFlood::setVisible(visible);
					}
					virtual const EarthView::World::Spatial3D::Analysis::MousePickState getMousePickState() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMousePickState_MousePickState_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::MousePickState returnValue = (EarthView::World::Spatial3D::Analysis::MousePickState)m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMousePickState_MousePickState_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::getMousePickState();
					}
					virtual void setMousePickState(_in EarthView::World::Spatial3D::Analysis::MousePickState state)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setMousePickState_void_MousePickState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setMousePickState_void_MousePickState_Callback((int)state);
						}
						else
							return this->CAnalysis3DRegionFlood::setMousePickState(state);
					}
					virtual ev_bool getIsAnalysisInServer()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIsAnalysisInServer_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIsAnalysisInServer_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::getIsAnalysisInServer();
					}
					virtual void setIsAnalysisInServer(_in ev_bool bInServer)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setIsAnalysisInServer_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setIsAnalysisInServer_void_ev_bool_Callback(bInServer);
						}
						else
							return this->CAnalysis3DRegionFlood::setIsAnalysisInServer(bInServer);
					}
					virtual EarthView::World::Spatial3D::Analysis::CAltitudeListener* getAltitude3DListener()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAltitude3DListener_CAltitudeListener_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Analysis::CAltitudeListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAltitude3DListener_CAltitudeListener_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::getAltitude3DListener();
					}
					virtual void setAltitude3DListener(_in EarthView::World::Spatial3D::Analysis::CAltitudeListener* ref_listener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAltitude3DListener_void_CAltitudeListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAltitude3DListener_void_CAltitudeListener_Callback(ref_listener);
						}
						else
							return this->CAnalysis3DRegionFlood::setAltitude3DListener(ref_listener);
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* getAnalysis3DListener() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAnalysis3DListener_CAnalysis3DListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAnalysis3DListener_CAnalysis3DListener_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::getAnalysis3DListener();
					}
					virtual void setAnalysis3DListener(_in EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ref_listener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAnalysis3DListener_void_CAnalysis3DListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAnalysis3DListener_void_CAnalysis3DListener_Callback(ref_listener);
						}
						else
							return this->CAnalysis3DRegionFlood::setAnalysis3DListener(ref_listener);
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::getToolBarType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onClicked_void_Callback();
						}
						else
							return this->CAnalysis3DRegionFlood::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CAnalysis3DRegionFlood::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CAnalysis3DRegionFlood::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CAnalysis3DRegionFlood::create(ref_ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::update(e);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_activate_void_Callback();
						}
						else
							return this->CAnalysis3DRegionFlood::activate();
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::onContextMenu(x, y);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CAnalysis3DRegionFlood::onTouchMove(touchEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CAnalysis3DRegionFloodProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_deactivate_void_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood::deactivate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood::reset();
					else
						ptrNativeObject->reset();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_reset_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_reset_void_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_reset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_reset_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood::reset();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_initialize_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood::initialize();
					else
						ptrNativeObject->initialize();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_initialize_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_initialize_void_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_initialize_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_initialize_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood::initialize();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_renderAnalysis3D_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood::renderAnalysis3D();
					else
						ptrNativeObject->renderAnalysis3D();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_renderAnalysis3D_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_renderAnalysis3D_void_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_renderAnalysis3D_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_renderAnalysis3D_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood::renderAnalysis3D();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIsOver_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getIsOver();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCenterPos_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					const EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getCenterPos();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setCenterPos_void_CVector3(void *pObjectXXXX, _in const void* value )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->setCenterPos(*(EarthView::World::Spatial::Math::CVector3*)value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getSearchRadius_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getSearchRadius();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setSearchRadius_void_ev_real64(void *pObjectXXXX, _in const ev_real64 value )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->setSearchRadius(value);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getFloodAltitude_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getFloodAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setFloodAltitude_void_ev_real64(void *pObjectXXXX, _in const ev_real64 value )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->setFloodAltitude(value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getDefaultFloodAltitude_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getDefaultFloodAltitude();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setDefaultFloodAltitude_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->setDefaultFloodAltitude(value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getLineVisible_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getLineVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setLineVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->setLineVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getFRenderBlockSet_CFRenderBlockSet(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet& objXXXX = ptrNativeObject->getFRenderBlockSet();
					EarthView::World::Spatial3D::Analysis::CFRenderBlockSet *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setFRenderBlockSet_void_CFRenderBlockSet(void *pObjectXXXX, _inout void* renderBlockList )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->setFRenderBlockSet(*(EarthView::World::Spatial3D::Analysis::CFRenderBlockSet*)renderBlockList);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CFresnelSurface3DSymbol*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getWaterSurfaceSymbol_CFresnelSurface3DSymbol(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol* objXXXX = ptrNativeObject->getWaterSurfaceSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setWaterSurfaceSymbol_void_CFresnelSurface3DSymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::CFresnelSurface3DSymbol* pWaterSurfaceSymbol )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ptrNativeObject->setWaterSurfaceSymbol(pWaterSurfaceSymbol);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getFloodEntityNode_CSceneNode(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->getFloodEntityNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getFloodSurfaceArea_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getFloodSurfaceArea();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getFloodGroundArea_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getFloodGroundArea();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getFloodVolume_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getFloodVolume();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood::onDoubleClick();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood::onDoubleClick();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMath3D_CMath3DBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMath3D_CMath3DBaseObject_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMath3D_CMath3DBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setVisible_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMousePickState_MousePickState( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMousePickState_MousePickState_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getMousePickState_MousePickState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setMousePickState_void_MousePickState( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setMousePickState_void_MousePickState_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setMousePickState_void_MousePickState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIsAnalysisInServer_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIsAnalysisInServer_ev_bool_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIsAnalysisInServer_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setIsAnalysisInServer_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setIsAnalysisInServer_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setIsAnalysisInServer_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAltitude3DListener_CAltitudeListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAltitude3DListener_CAltitudeListener_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAltitude3DListener_CAltitudeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAltitude3DListener_void_CAltitudeListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAltitude3DListener_void_CAltitudeListener_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAltitude3DListener_void_CAltitudeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAnalysis3DListener_CAnalysis3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAnalysis3DListener_CAnalysis3DListener_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getAnalysis3DListener_CAnalysis3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAnalysis3DListener_void_CAnalysis3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAnalysis3DListener_void_CAnalysis3DListener_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setAnalysis3DListener_void_CAnalysis3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_activate_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_activate_void_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCursor_ev_int32_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getType_ev_uint32_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getName_EVString_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCategory_EVString_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolTip_EVString_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIcon_IBitmap_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_isCheckable_ev_bool_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onClicked_void_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getChecked_ev_bool_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setChecked_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getEnabled_ev_bool_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_create_void_ISpatialControl_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_update_ev_bool_CEvent_Callback* pCallback )
				{
					CAnalysis3DRegionFloodProxy* ptr = dynamic_cast<CAnalysis3DRegionFloodProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DRegionFlood*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DRegionFlood_update_ev_bool_CEvent(pCallback);
					}
				}
			}
		}
	}
}
