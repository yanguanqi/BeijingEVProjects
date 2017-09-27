/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysis/analysis3dslope.h"
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_reset_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_initialize_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_renderAnalysis3D_void_Callback)();
				typedef EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMath3D_CMath3DBaseObject_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef const int  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMousePickState_MousePickState_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setMousePickState_void_MousePickState_Callback)(_in int state);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIsAnalysisInServer_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setIsAnalysisInServer_void_ev_bool_Callback)(_in ev_bool bInServer);
				typedef EarthView::World::Spatial3D::Analysis::CAltitudeListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAltitude3DListener_CAltitudeListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAltitude3DListener_void_CAltitudeListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAltitudeListener* ref_listener);
				typedef const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAnalysis3DListener_CAnalysis3DListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAnalysis3DListener_void_CAnalysis3DListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ref_listener);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CAnalysis3DSlopeProxy : public EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope
				{
				private:
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_reset_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_reset_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_initialize_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_initialize_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_renderAnalysis3D_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_renderAnalysis3D_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMath3D_CMath3DBaseObject_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMath3D_CMath3DBaseObject_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMousePickState_MousePickState_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMousePickState_MousePickState_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setMousePickState_void_MousePickState_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setMousePickState_void_MousePickState_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIsAnalysisInServer_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIsAnalysisInServer_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setIsAnalysisInServer_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setIsAnalysisInServer_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAltitude3DListener_CAltitudeListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAltitude3DListener_CAltitudeListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAltitude3DListener_void_CAltitudeListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAltitude3DListener_void_CAltitudeListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAnalysis3DListener_CAnalysis3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAnalysis3DListener_CAnalysis3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAnalysis3DListener_void_CAnalysis3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAnalysis3DListener_void_CAnalysis3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_activate_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_activate_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_deactivate_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_deactivate_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCursor_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCursor_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getType_ev_uint32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getType_ev_uint32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getName_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getName_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCategory_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCategory_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolTip_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolTip_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIcon_IBitmap_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIcon_IBitmap_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onClicked_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onClicked_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getChecked_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getChecked_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_update_ev_bool_CEvent_Callback;
				public:
					CAnalysis3DSlopeProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnalysis3DSlope(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_reset_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_initialize_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_renderAnalysis3D_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMath3D_CMath3DBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMousePickState_MousePickState_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setMousePickState_void_MousePickState_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIsAnalysisInServer_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setIsAnalysisInServer_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAltitude3DListener_CAltitudeListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAltitude3DListener_void_CAltitudeListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAnalysis3DListener_CAnalysis3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAnalysis3DListener_void_CAnalysis3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_activate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_update_ev_bool_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_reset_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_reset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_reset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_initialize_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_initialize_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_initialize_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_renderAnalysis3D_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_renderAnalysis3D_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_renderAnalysis3D_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMath3D_CMath3DBaseObject(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMath3D_CMath3DBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMath3D_CMath3DBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setVisible_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMousePickState_MousePickState(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMousePickState_MousePickState_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMousePickState_MousePickState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setMousePickState_void_MousePickState(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setMousePickState_void_MousePickState_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setMousePickState_void_MousePickState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIsAnalysisInServer_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIsAnalysisInServer_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIsAnalysisInServer_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setIsAnalysisInServer_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setIsAnalysisInServer_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setIsAnalysisInServer_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAltitude3DListener_CAltitudeListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAltitude3DListener_CAltitudeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAltitude3DListener_CAltitudeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAltitude3DListener_void_CAltitudeListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAltitude3DListener_void_CAltitudeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAltitude3DListener_void_CAltitudeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAnalysis3DListener_CAnalysis3DListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAnalysis3DListener_CAnalysis3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAnalysis3DListener_CAnalysis3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAnalysis3DListener_void_CAnalysis3DListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAnalysis3DListener_void_CAnalysis3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAnalysis3DListener_void_CAnalysis3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_activate_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_deactivate_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCursor_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolBarType_ev_uint32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getType_ev_uint32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getName_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCategory_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolTip_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIcon_IBitmap(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_isCheckable_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onClicked_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getChecked_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setChecked_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getEnabled_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setEnabled_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_create_void_ISpatialControl(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_update_ev_bool_CEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_deactivate_void_Callback();
						}
						else
							return this->CAnalysis3DSlope::deactivate();
					}
					virtual void reset()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_reset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_reset_void_Callback();
						}
						else
							return this->CAnalysis3DSlope::reset();
					}
					virtual void initialize()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_initialize_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_initialize_void_Callback();
						}
						else
							return this->CAnalysis3DSlope::initialize();
					}
					virtual void renderAnalysis3D()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_renderAnalysis3D_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_renderAnalysis3D_void_Callback();
						}
						else
							return this->CAnalysis3DSlope::renderAnalysis3D();
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::onMouseMove(button, shift, x, y);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::onDoubleClick();
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::onMouseDown(button, shift, x, y);
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::getType();
					}
					virtual EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* getMath3D() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMath3D_CMath3DBaseObject_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMath3D_CMath3DBaseObject_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::getMath3D();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CAnalysis3DSlope::setVisible(visible);
					}
					virtual const EarthView::World::Spatial3D::Analysis::MousePickState getMousePickState() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMousePickState_MousePickState_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::MousePickState returnValue = (EarthView::World::Spatial3D::Analysis::MousePickState)m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMousePickState_MousePickState_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::getMousePickState();
					}
					virtual void setMousePickState(_in EarthView::World::Spatial3D::Analysis::MousePickState state)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setMousePickState_void_MousePickState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setMousePickState_void_MousePickState_Callback((int)state);
						}
						else
							return this->CAnalysis3DSlope::setMousePickState(state);
					}
					virtual ev_bool getIsAnalysisInServer()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIsAnalysisInServer_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIsAnalysisInServer_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::getIsAnalysisInServer();
					}
					virtual void setIsAnalysisInServer(_in ev_bool bInServer)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setIsAnalysisInServer_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setIsAnalysisInServer_void_ev_bool_Callback(bInServer);
						}
						else
							return this->CAnalysis3DSlope::setIsAnalysisInServer(bInServer);
					}
					virtual EarthView::World::Spatial3D::Analysis::CAltitudeListener* getAltitude3DListener()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAltitude3DListener_CAltitudeListener_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Analysis::CAltitudeListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAltitude3DListener_CAltitudeListener_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::getAltitude3DListener();
					}
					virtual void setAltitude3DListener(_in EarthView::World::Spatial3D::Analysis::CAltitudeListener* ref_listener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAltitude3DListener_void_CAltitudeListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAltitude3DListener_void_CAltitudeListener_Callback(ref_listener);
						}
						else
							return this->CAnalysis3DSlope::setAltitude3DListener(ref_listener);
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* getAnalysis3DListener() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAnalysis3DListener_CAnalysis3DListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAnalysis3DListener_CAnalysis3DListener_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::getAnalysis3DListener();
					}
					virtual void setAnalysis3DListener(_in EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ref_listener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAnalysis3DListener_void_CAnalysis3DListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAnalysis3DListener_void_CAnalysis3DListener_Callback(ref_listener);
						}
						else
							return this->CAnalysis3DSlope::setAnalysis3DListener(ref_listener);
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::getToolBarType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onClicked_void_Callback();
						}
						else
							return this->CAnalysis3DSlope::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CAnalysis3DSlope::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CAnalysis3DSlope::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CAnalysis3DSlope::create(ref_ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::update(e);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_activate_void_Callback();
						}
						else
							return this->CAnalysis3DSlope::activate();
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::onContextMenu(x, y);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CAnalysis3DSlope::onTouchMove(touchEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CAnalysis3DSlopeProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_deactivate_void_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::deactivate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_reset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::reset();
					else
						ptrNativeObject->reset();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_reset_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_reset_void_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_reset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_reset_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::reset();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_initialize_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::initialize();
					else
						ptrNativeObject->initialize();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_initialize_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_initialize_void_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_initialize_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_initialize_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::initialize();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_renderAnalysis3D_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::renderAnalysis3D();
					else
						ptrNativeObject->renderAnalysis3D();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_renderAnalysis3D_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_renderAnalysis3D_void_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_renderAnalysis3D_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_renderAnalysis3D_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::renderAnalysis3D();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIsOver_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getIsOver();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getSelectedGeoPts_VertexList(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					EarthView::World::Spatial::Math::VertexList objXXXX = ptrNativeObject->getSelectedGeoPts();
					EarthView::World::Spatial::Math::VertexList *pXXXX = new EarthView::World::Spatial::Math::VertexList(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setSelectedGeoPts_void_VertexList(void *pObjectXXXX, _inout void* points )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					ptrNativeObject->setSelectedGeoPts(*(EarthView::World::Spatial::Math::VertexList*)points);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getDivisions_RealVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					EarthView::World::Core::RealVector objXXXX = ptrNativeObject->getDivisions();
					EarthView::World::Core::RealVector *pXXXX = new EarthView::World::Core::RealVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setDivisions_void_RealVector(void *pObjectXXXX, _in void* divisions )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					ptrNativeObject->setDivisions(*(EarthView::World::Core::RealVector*)divisions);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getSlopeColor_CColourValue_ev_uint32(void *pObjectXXXX, _in ev_uint32 grade )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getSlopeColor(grade);
					EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setSlopeColor_void_ev_uint32_CColourValue(void *pObjectXXXX, _in ev_uint32 grade, _in void* color )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					ptrNativeObject->setSlopeColor(grade, *(EarthView::World::Graphic::CColourValue*)color);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_isSlopeLayerShow_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSlopeLayerShow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_showSlopeLayer_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					ptrNativeObject->showSlopeLayer(value);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_isAspectLayerShow_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isAspectLayerShow();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_showAspectLayer_void_ev_bool(void *pObjectXXXX, _in ev_bool value )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					ptrNativeObject->showAspectLayer(value);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getSlopeDistributing_RealVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					EarthView::World::Core::RealVector& objXXXX = ptrNativeObject->getSlopeDistributing();
					EarthView::World::Core::RealVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getSlopeValues_RealVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					EarthView::World::Core::RealVector& objXXXX = ptrNativeObject->getSlopeValues();
					EarthView::World::Core::RealVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAspectValues_RealVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					EarthView::World::Core::RealVector& objXXXX = ptrNativeObject->getAspectValues();
					EarthView::World::Core::RealVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getSlopePositionList_VertexList(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					EarthView::World::Spatial::Math::VertexList& objXXXX = ptrNativeObject->getSlopePositionList();
					EarthView::World::Spatial::Math::VertexList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::onMouseMove(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::onMouseMove(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::onDoubleClick();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope::onDoubleClick();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMath3D_CMath3DBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMath3D_CMath3DBaseObject_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMath3D_CMath3DBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setVisible_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMousePickState_MousePickState( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMousePickState_MousePickState_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getMousePickState_MousePickState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setMousePickState_void_MousePickState( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setMousePickState_void_MousePickState_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setMousePickState_void_MousePickState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIsAnalysisInServer_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIsAnalysisInServer_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIsAnalysisInServer_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setIsAnalysisInServer_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setIsAnalysisInServer_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setIsAnalysisInServer_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAltitude3DListener_CAltitudeListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAltitude3DListener_CAltitudeListener_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAltitude3DListener_CAltitudeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAltitude3DListener_void_CAltitudeListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAltitude3DListener_void_CAltitudeListener_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAltitude3DListener_void_CAltitudeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAnalysis3DListener_CAnalysis3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAnalysis3DListener_CAnalysis3DListener_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getAnalysis3DListener_CAnalysis3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAnalysis3DListener_void_CAnalysis3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAnalysis3DListener_void_CAnalysis3DListener_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setAnalysis3DListener_void_CAnalysis3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_activate_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_activate_void_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCursor_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getType_ev_uint32_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getName_EVString_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCategory_EVString_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolTip_EVString_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIcon_IBitmap_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_isCheckable_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onClicked_void_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getChecked_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setChecked_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getEnabled_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_create_void_ISpatialControl_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_update_ev_bool_CEvent_Callback* pCallback )
				{
					CAnalysis3DSlopeProxy* ptr = dynamic_cast<CAnalysis3DSlopeProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSlope*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSlope_update_ev_bool_CEvent(pCallback);
					}
				}
			}
		}
	}
}
