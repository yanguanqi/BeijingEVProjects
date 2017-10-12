/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3danalysis/analysis3dskyline.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial3D_Analysis_CDepthMap_getDepthAt_ev_real32_int_int(void *pObjectXXXX, _in int x, _in int y )
				{
					EarthView::World::Spatial3D::Analysis::CDepthMap* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CDepthMap*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getDepthAt(x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CDepthMap_getViewProjMatrix_CMatrix4(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CDepthMap* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CDepthMap*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->getViewProjMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Analysis_CDepthMap_getWidth_int(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CDepthMap* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CDepthMap*) pObjectXXXX;
					int objXXXX = ptrNativeObject->getWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Analysis_CDepthMap_getHeight_int(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CDepthMap* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CDepthMap*) pObjectXXXX;
					int objXXXX = ptrNativeObject->getHeight();
					return objXXXX;
				}
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CDepthAccessor_preRenderTargetUpdate_void_RenderTargetEvent_Callback)(_in const void* evt);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CDepthAccessor_postRenderTargetUpdate_void_RenderTargetEvent_Callback)(_in const void* evt);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CDepthAccessor_preViewportUpdate_void_RenderTargetViewportEvent_Callback)(_in const void* evt);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CDepthAccessor_postViewportUpdate_void_RenderTargetViewportEvent_Callback)(_in const void* evt);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportAdded_void_RenderTargetViewportEvent_Callback)(_in const void* evt);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportRemoved_void_RenderTargetViewportEvent_Callback)(_in const void* evt);
				class CDepthAccessorProxy : public EarthView::World::Spatial3D::Analysis::CDepthAccessor
				{
				private:
					EarthView_World_Spatial3D_Analysis_CDepthAccessor_preRenderTargetUpdate_void_RenderTargetEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_preRenderTargetUpdate_void_RenderTargetEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CDepthAccessor_postRenderTargetUpdate_void_RenderTargetEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_postRenderTargetUpdate_void_RenderTargetEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CDepthAccessor_preViewportUpdate_void_RenderTargetViewportEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_preViewportUpdate_void_RenderTargetViewportEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CDepthAccessor_postViewportUpdate_void_RenderTargetViewportEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_postViewportUpdate_void_RenderTargetViewportEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportAdded_void_RenderTargetViewportEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportAdded_void_RenderTargetViewportEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportRemoved_void_RenderTargetViewportEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportRemoved_void_RenderTargetViewportEvent_Callback;
				public:
					CDepthAccessorProxy(EarthView::World::Core::CNameValuePairList *pList) : CDepthAccessor(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_preRenderTargetUpdate_void_RenderTargetEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_postRenderTargetUpdate_void_RenderTargetEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_preViewportUpdate_void_RenderTargetViewportEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_postViewportUpdate_void_RenderTargetViewportEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportAdded_void_RenderTargetViewportEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportRemoved_void_RenderTargetViewportEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_preRenderTargetUpdate_void_RenderTargetEvent(EarthView_World_Spatial3D_Analysis_CDepthAccessor_preRenderTargetUpdate_void_RenderTargetEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_preRenderTargetUpdate_void_RenderTargetEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_postRenderTargetUpdate_void_RenderTargetEvent(EarthView_World_Spatial3D_Analysis_CDepthAccessor_postRenderTargetUpdate_void_RenderTargetEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_postRenderTargetUpdate_void_RenderTargetEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_preViewportUpdate_void_RenderTargetViewportEvent(EarthView_World_Spatial3D_Analysis_CDepthAccessor_preViewportUpdate_void_RenderTargetViewportEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_preViewportUpdate_void_RenderTargetViewportEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_postViewportUpdate_void_RenderTargetViewportEvent(EarthView_World_Spatial3D_Analysis_CDepthAccessor_postViewportUpdate_void_RenderTargetViewportEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_postViewportUpdate_void_RenderTargetViewportEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportAdded_void_RenderTargetViewportEvent(EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportAdded_void_RenderTargetViewportEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportAdded_void_RenderTargetViewportEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportRemoved_void_RenderTargetViewportEvent(EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportRemoved_void_RenderTargetViewportEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportRemoved_void_RenderTargetViewportEvent_Callback = pCallback;
					}
					virtual void preRenderTargetUpdate(_in const EarthView::World::Graphic::RenderTargetEvent& evt)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_preRenderTargetUpdate_void_RenderTargetEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_preRenderTargetUpdate_void_RenderTargetEvent_Callback(&evt);
						}
						else
							return this->CDepthAccessor::preRenderTargetUpdate(evt);
					}
					virtual void postRenderTargetUpdate(_in const EarthView::World::Graphic::RenderTargetEvent& evt)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_postRenderTargetUpdate_void_RenderTargetEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_postRenderTargetUpdate_void_RenderTargetEvent_Callback(&evt);
						}
						else
							return this->CDepthAccessor::postRenderTargetUpdate(evt);
					}
					virtual void preViewportUpdate(_in const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_preViewportUpdate_void_RenderTargetViewportEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_preViewportUpdate_void_RenderTargetViewportEvent_Callback(&evt);
						}
						else
							return this->CDepthAccessor::preViewportUpdate(evt);
					}
					virtual void postViewportUpdate(_in const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_postViewportUpdate_void_RenderTargetViewportEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_postViewportUpdate_void_RenderTargetViewportEvent_Callback(&evt);
						}
						else
							return this->CDepthAccessor::postViewportUpdate(evt);
					}
					virtual void viewportAdded(_in const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportAdded_void_RenderTargetViewportEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportAdded_void_RenderTargetViewportEvent_Callback(&evt);
						}
						else
							return this->CDepthAccessor::viewportAdded(evt);
					}
					virtual void viewportRemoved(_in const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportRemoved_void_RenderTargetViewportEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportRemoved_void_RenderTargetViewportEvent_Callback(&evt);
						}
						else
							return this->CDepthAccessor::viewportRemoved(evt);
					}
				};
				REGISTER_FACTORY_CLASS(CDepthAccessorProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Analysis::CDepthMap*  _stdcall EarthView_World_Spatial3D_Analysis_CDepthAccessor_getDepthMap_CDepthMap_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Analysis::CDepthAccessor* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CDepthAccessor*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::CDepthMap* objXXXX = ptrNativeObject->getDepthMap(camera);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Analysis::CDepthMap*  _stdcall EarthView_World_Spatial3D_Analysis_CDepthAccessor_getDepthMap_CDepthMap(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CDepthAccessor* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CDepthAccessor*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::CDepthMap* objXXXX = ptrNativeObject->getDepthMap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CDepthAccessor_calculateWorldPos_CVector3_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 screenX, _in ev_real64 screenY )
				{
					EarthView::World::Spatial3D::Analysis::CDepthAccessor* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CDepthAccessor*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->calculateWorldPos(screenX, screenY);
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_preRenderTargetUpdate_void_RenderTargetEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CDepthAccessor_preRenderTargetUpdate_void_RenderTargetEvent_Callback* pCallback )
				{
					CDepthAccessorProxy* ptr = dynamic_cast<CDepthAccessorProxy*>((EarthView::World::Spatial3D::Analysis::CDepthAccessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_preRenderTargetUpdate_void_RenderTargetEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_postRenderTargetUpdate_void_RenderTargetEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CDepthAccessor_postRenderTargetUpdate_void_RenderTargetEvent_Callback* pCallback )
				{
					CDepthAccessorProxy* ptr = dynamic_cast<CDepthAccessorProxy*>((EarthView::World::Spatial3D::Analysis::CDepthAccessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_postRenderTargetUpdate_void_RenderTargetEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_preViewportUpdate_void_RenderTargetViewportEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CDepthAccessor_preViewportUpdate_void_RenderTargetViewportEvent_Callback* pCallback )
				{
					CDepthAccessorProxy* ptr = dynamic_cast<CDepthAccessorProxy*>((EarthView::World::Spatial3D::Analysis::CDepthAccessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_preViewportUpdate_void_RenderTargetViewportEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_postViewportUpdate_void_RenderTargetViewportEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CDepthAccessor_postViewportUpdate_void_RenderTargetViewportEvent_Callback* pCallback )
				{
					CDepthAccessorProxy* ptr = dynamic_cast<CDepthAccessorProxy*>((EarthView::World::Spatial3D::Analysis::CDepthAccessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_postViewportUpdate_void_RenderTargetViewportEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportAdded_void_RenderTargetViewportEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportAdded_void_RenderTargetViewportEvent_Callback* pCallback )
				{
					CDepthAccessorProxy* ptr = dynamic_cast<CDepthAccessorProxy*>((EarthView::World::Spatial3D::Analysis::CDepthAccessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportAdded_void_RenderTargetViewportEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportRemoved_void_RenderTargetViewportEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportRemoved_void_RenderTargetViewportEvent_Callback* pCallback )
				{
					CDepthAccessorProxy* ptr = dynamic_cast<CDepthAccessorProxy*>((EarthView::World::Spatial3D::Analysis::CDepthAccessor*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CDepthAccessor_viewportRemoved_void_RenderTargetViewportEvent(pCallback);
					}
				}
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_impl_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_impl_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_renderAnalysis3D_void_Callback)();
				typedef EarthView::World::Spatial3D::Analysis::CMath3DBaseObject*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMath3D_CMath3DBaseObject_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef const int  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMousePickState_MousePickState_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setMousePickState_void_MousePickState_Callback)(_in int state);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIsAnalysisInServer_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setIsAnalysisInServer_void_ev_bool_Callback)(_in ev_bool bInServer);
				typedef EarthView::World::Spatial3D::Analysis::CAltitudeListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAltitude3DListener_CAltitudeListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAltitude3DListener_void_CAltitudeListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAltitudeListener* ref_listener);
				typedef const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAnalysis3DListener_CAnalysis3DListener_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAnalysis3DListener_void_CAnalysis3DListener_Callback)(_in EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ref_listener);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_activate_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_deactivate_void_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCursor_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CAnalysis3DSkyLineProxy : public EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine
				{
				private:
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_impl_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_impl_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_impl_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_impl_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_renderAnalysis3D_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_renderAnalysis3D_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMath3D_CMath3DBaseObject_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMath3D_CMath3DBaseObject_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMousePickState_MousePickState_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMousePickState_MousePickState_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setMousePickState_void_MousePickState_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setMousePickState_void_MousePickState_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIsAnalysisInServer_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIsAnalysisInServer_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setIsAnalysisInServer_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setIsAnalysisInServer_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAltitude3DListener_CAltitudeListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAltitude3DListener_CAltitudeListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAltitude3DListener_void_CAltitudeListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAltitude3DListener_void_CAltitudeListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAnalysis3DListener_CAnalysis3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAnalysis3DListener_CAnalysis3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAnalysis3DListener_void_CAnalysis3DListener_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAnalysis3DListener_void_CAnalysis3DListener_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_activate_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_activate_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_deactivate_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_deactivate_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCursor_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCursor_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchDown_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchDown_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchUp_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchUp_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchMove_ev_bool_MotionEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchMove_ev_bool_MotionEvent_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getType_ev_uint32_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getType_ev_uint32_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getName_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getName_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCategory_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCategory_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolTip_EVString_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolTip_EVString_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIcon_IBitmap_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIcon_IBitmap_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onClicked_void_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onClicked_void_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getChecked_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getChecked_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_update_ev_bool_CEvent_Callback;
				public:
					CAnalysis3DSkyLineProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnalysis3DSkyLine(pList)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_impl_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_impl_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_renderAnalysis3D_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMath3D_CMath3DBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMousePickState_MousePickState_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setMousePickState_void_MousePickState_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIsAnalysisInServer_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setIsAnalysisInServer_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAltitude3DListener_CAltitudeListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAltitude3DListener_void_CAltitudeListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAnalysis3DListener_CAnalysis3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAnalysis3DListener_void_CAnalysis3DListener_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_activate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_deactivate_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCursor_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_update_ev_bool_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_impl_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_impl_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_impl_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_impl_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_impl_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_impl_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_renderAnalysis3D_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_renderAnalysis3D_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_renderAnalysis3D_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMath3D_CMath3DBaseObject(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMath3D_CMath3DBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMath3D_CMath3DBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setVisible_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMousePickState_MousePickState(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMousePickState_MousePickState_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMousePickState_MousePickState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setMousePickState_void_MousePickState(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setMousePickState_void_MousePickState_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setMousePickState_void_MousePickState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIsAnalysisInServer_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIsAnalysisInServer_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIsAnalysisInServer_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setIsAnalysisInServer_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setIsAnalysisInServer_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setIsAnalysisInServer_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAltitude3DListener_CAltitudeListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAltitude3DListener_CAltitudeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAltitude3DListener_CAltitudeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAltitude3DListener_void_CAltitudeListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAltitude3DListener_void_CAltitudeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAltitude3DListener_void_CAltitudeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAnalysis3DListener_CAnalysis3DListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAnalysis3DListener_CAnalysis3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAnalysis3DListener_CAnalysis3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAnalysis3DListener_void_CAnalysis3DListener(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAnalysis3DListener_void_CAnalysis3DListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAnalysis3DListener_void_CAnalysis3DListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_activate_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_activate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_activate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_deactivate_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_deactivate_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_deactivate_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCursor_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCursor_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCursor_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onContextMenu_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyDown_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyUp_ev_bool_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchDown_ev_bool_MotionEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchUp_ev_bool_MotionEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchMove_ev_bool_MotionEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolBarType_ev_uint32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getType_ev_uint32(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getName_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCategory_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolTip_EVString(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIcon_IBitmap(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_isCheckable_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onClicked_void(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getChecked_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setChecked_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getEnabled_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setEnabled_void_ev_bool(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_create_void_ISpatialControl(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_update_ev_bool_CEvent(EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual void deactivate()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_deactivate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_deactivate_void_Callback();
						}
						else
							return this->CAnalysis3DSkyLine::deactivate();
					}
					virtual void reset_impl()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_impl_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_impl_void_Callback();
						}
						else
							return this->CAnalysis3DSkyLine::reset_impl();
					}
					virtual void initialize_impl()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_impl_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_impl_void_Callback();
						}
						else
							return this->CAnalysis3DSkyLine::initialize_impl();
					}
					virtual void renderAnalysis3D()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_renderAnalysis3D_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_renderAnalysis3D_void_Callback();
						}
						else
							return this->CAnalysis3DSkyLine::renderAnalysis3D();
					}
					virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::onMouseUp(button, shift, x, y);
					}
					virtual ev_bool onDoubleClick()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::onDoubleClick();
					}
					virtual void reset()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_void_Callback();
						}
						else
							return this->CAnalysis3DSkyLine::reset();
					}
					virtual void initialize()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_void_Callback();
						}
						else
							return this->CAnalysis3DSkyLine::initialize();
					}
					virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::onMouseDown(button, shift, x, y);
					}
					virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::onMouseMove(button, shift, x, y);
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::getType();
					}
					virtual EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* getMath3D() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMath3D_CMath3DBaseObject_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMath3D_CMath3DBaseObject_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::getMath3D();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->CAnalysis3DSkyLine::setVisible(visible);
					}
					virtual const EarthView::World::Spatial3D::Analysis::MousePickState getMousePickState() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMousePickState_MousePickState_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::MousePickState returnValue = (EarthView::World::Spatial3D::Analysis::MousePickState)m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMousePickState_MousePickState_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::getMousePickState();
					}
					virtual void setMousePickState(_in EarthView::World::Spatial3D::Analysis::MousePickState state)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setMousePickState_void_MousePickState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setMousePickState_void_MousePickState_Callback((int)state);
						}
						else
							return this->CAnalysis3DSkyLine::setMousePickState(state);
					}
					virtual ev_bool getIsAnalysisInServer()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIsAnalysisInServer_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIsAnalysisInServer_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::getIsAnalysisInServer();
					}
					virtual void setIsAnalysisInServer(_in ev_bool bInServer)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setIsAnalysisInServer_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setIsAnalysisInServer_void_ev_bool_Callback(bInServer);
						}
						else
							return this->CAnalysis3DSkyLine::setIsAnalysisInServer(bInServer);
					}
					virtual EarthView::World::Spatial3D::Analysis::CAltitudeListener* getAltitude3DListener()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAltitude3DListener_CAltitudeListener_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Analysis::CAltitudeListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAltitude3DListener_CAltitudeListener_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::getAltitude3DListener();
					}
					virtual void setAltitude3DListener(_in EarthView::World::Spatial3D::Analysis::CAltitudeListener* ref_listener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAltitude3DListener_void_CAltitudeListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAltitude3DListener_void_CAltitudeListener_Callback(ref_listener);
						}
						else
							return this->CAnalysis3DSkyLine::setAltitude3DListener(ref_listener);
					}
					virtual const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* getAnalysis3DListener() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAnalysis3DListener_CAnalysis3DListener_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAnalysis3DListener_CAnalysis3DListener_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::getAnalysis3DListener();
					}
					virtual void setAnalysis3DListener(_in EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ref_listener)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAnalysis3DListener_void_CAnalysis3DListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAnalysis3DListener_void_CAnalysis3DListener_Callback(ref_listener);
						}
						else
							return this->CAnalysis3DSkyLine::setAnalysis3DListener(ref_listener);
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::getToolBarType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onClicked_void_Callback();
						}
						else
							return this->CAnalysis3DSkyLine::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CAnalysis3DSkyLine::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CAnalysis3DSkyLine::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CAnalysis3DSkyLine::create(ref_ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::update(e);
					}
					virtual void activate()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_activate_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_activate_void_Callback();
						}
						else
							return this->CAnalysis3DSkyLine::activate();
					}
					virtual ev_int32 getCursor()
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCursor_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::getCursor();
					}
					virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::onContextMenu(x, y);
					}
					virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::onKeyDown(keyCode, shift);
					}
					virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::onKeyUp(keyCode, shift);
					}
					virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::onMouseWheel(delta, x, y, flag);
					}
					virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::onTouchDown(touchEvent);
					}
					virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::onTouchUp(touchEvent);
					}
					virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if(m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
							return returnValue;
						}
						else
							return this->CAnalysis3DSkyLine::onTouchMove(touchEvent);
					}
				};
				REGISTER_FACTORY_CLASS(CAnalysis3DSkyLineProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_deactivate_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine::deactivate();
					else
						ptrNativeObject->deactivate();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_deactivate_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_deactivate_void_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_deactivate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_deactivate_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine::deactivate();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_impl_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine::reset_impl();
					else
						ptrNativeObject->reset_impl();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_impl_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_impl_void_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_impl_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_impl_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine::reset_impl();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_impl_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine::initialize_impl();
					else
						ptrNativeObject->initialize_impl();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_impl_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_impl_void_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_impl_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_impl_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine::initialize_impl();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_renderAnalysis3D_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine::renderAnalysis3D();
					else
						ptrNativeObject->renderAnalysis3D();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_renderAnalysis3D_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_renderAnalysis3D_void_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_renderAnalysis3D_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_renderAnalysis3D_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine::renderAnalysis3D();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine::onMouseUp(button, shift, x, y);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine::onMouseUp(button, shift, x, y);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					if (dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine::onDoubleClick();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onDoubleClick();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine::onDoubleClick();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getViewPoint_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getViewPoint();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getViewPointHei_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getViewPointHei();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCameraRotation_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getCameraRotation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCameraPitch_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getCameraPitch();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCameraType_Analysis3dCameraType(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::Analysis3dCameraType objXXXX = ptrNativeObject->getCameraType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getLineQuality_Analysis3DLineQuality(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					EarthView::World::Spatial3D::Analysis::Analysis3DLineQuality objXXXX = ptrNativeObject->getLineQuality();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getLineColor_CColourValue(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getLineColor();
					EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setViewPoint_void_CVector3(void *pObjectXXXX, _inout void* point )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					ptrNativeObject->setViewPoint(*(EarthView::World::Spatial::Math::CVector3*)point);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setViewPointHei_void_ev_real64(void *pObjectXXXX, _in ev_real64 height )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					ptrNativeObject->setViewPointHei(height);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setCameraRotation_void_ev_real64(void *pObjectXXXX, _in ev_real64 cameraRotation )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					ptrNativeObject->setCameraRotation(cameraRotation);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setCameraPitch_void_ev_real64(void *pObjectXXXX, _in ev_real64 cameraPitch )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					ptrNativeObject->setCameraPitch(cameraPitch);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setLineQuality_void_Analysis3DLineQuality(void *pObjectXXXX, _in int lienQuality )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					ptrNativeObject->setLineQuality((EarthView::World::Spatial3D::Analysis::Analysis3DLineQuality)lienQuality);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setCameraType_void_Analysis3dCameraType(void *pObjectXXXX, _in int camType )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					ptrNativeObject->setCameraType((EarthView::World::Spatial3D::Analysis::Analysis3dCameraType)camType);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setLineColor_void_CColourValue(void *pObjectXXXX, _in void* lineColor )
				{
					EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine* ptrNativeObject = (EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX;
					ptrNativeObject->setLineColor(*(EarthView::World::Graphic::CColourValue*)lineColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_void_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_reset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_void_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_initialize_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMath3D_CMath3DBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMath3D_CMath3DBaseObject_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMath3D_CMath3DBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setVisible_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMousePickState_MousePickState( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMousePickState_MousePickState_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getMousePickState_MousePickState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setMousePickState_void_MousePickState( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setMousePickState_void_MousePickState_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setMousePickState_void_MousePickState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIsAnalysisInServer_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIsAnalysisInServer_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIsAnalysisInServer_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setIsAnalysisInServer_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setIsAnalysisInServer_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setIsAnalysisInServer_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAltitude3DListener_CAltitudeListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAltitude3DListener_CAltitudeListener_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAltitude3DListener_CAltitudeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAltitude3DListener_void_CAltitudeListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAltitude3DListener_void_CAltitudeListener_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAltitude3DListener_void_CAltitudeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAnalysis3DListener_CAnalysis3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAnalysis3DListener_CAnalysis3DListener_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getAnalysis3DListener_CAnalysis3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAnalysis3DListener_void_CAnalysis3DListener( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAnalysis3DListener_void_CAnalysis3DListener_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setAnalysis3DListener_void_CAnalysis3DListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_activate_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_activate_void_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_activate_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCursor_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCursor_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCursor_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchDown_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchUp_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onTouchMove_ev_bool_MotionEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getType_ev_uint32_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getName_EVString_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCategory_EVString_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolTip_EVString_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIcon_IBitmap_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_isCheckable_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onClicked_void_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getChecked_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setChecked_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getEnabled_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_create_void_ISpatialControl_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_update_ev_bool_CEvent_Callback* pCallback )
				{
					CAnalysis3DSkyLineProxy* ptr = dynamic_cast<CAnalysis3DSkyLineProxy*>((EarthView::World::Spatial3D::Analysis::CAnalysis3DSkyLine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Analysis_CAnalysis3DSkyLine_update_ev_bool_CEvent(pCallback);
					}
				}
			}
		}
	}
}
