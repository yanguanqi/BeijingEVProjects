/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/cameranodetrackscenemanagerlistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in int irs, _in EarthView::World::Graphic::CViewport* v);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in int irs, _in EarthView::World::Graphic::CViewport* v);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback)(_in ev_uint64  numberOfShadowTextures);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback)(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* camera, _in ev_uint64  iteration);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback)(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CFrustum* frustum);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback)(_inout void* lightList);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* source);
				class CCameraNodeTrackSceneManagerListenerProxy : public EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener
				{
				private:
					EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback* m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback;
					EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback* m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback;
					EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback;
					EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback;
					EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback* m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback;
					EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback* m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback;
					EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback* m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback;
					EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback* m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback;
					EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback* m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback;
				public:
					CCameraNodeTrackSceneManagerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CCameraNodeTrackSceneManagerListener(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera(EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera(EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTexturesUpdated_void_ev_size_t(EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList(EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sceneManagerDestroyed_void_CSceneManager(EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback = pCallback;
					}
					virtual void preUpdateSceneGraph(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback(source, camera);
						}
						else
							return this->CCameraNodeTrackSceneManagerListener::preUpdateSceneGraph(source, camera);
					}
					virtual void postUpdateSceneGraph(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback(source, camera);
						}
						else
							return this->CCameraNodeTrackSceneManagerListener::postUpdateSceneGraph(source, camera);
					}
					virtual void preFindVisibleObjects(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, _in EarthView::World::Graphic::CViewport* v)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback(source, (int)irs, v);
						}
						else
							return this->CCameraNodeTrackSceneManagerListener::preFindVisibleObjects(source, irs, v);
					}
					virtual void postFindVisibleObjects(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, _in EarthView::World::Graphic::CViewport* v)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback(source, (int)irs, v);
						}
						else
							return this->CCameraNodeTrackSceneManagerListener::postFindVisibleObjects(source, irs, v);
					}
					virtual void shadowTexturesUpdated(_in ev_size_t numberOfShadowTextures)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback(numberOfShadowTextures);
						}
						else
							return this->CCameraNodeTrackSceneManagerListener::shadowTexturesUpdated(numberOfShadowTextures);
					}
					virtual void shadowTextureCasterPreViewProj(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* camera, _in ev_size_t iteration)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback(light, camera, iteration);
						}
						else
							return this->CCameraNodeTrackSceneManagerListener::shadowTextureCasterPreViewProj(light, camera, iteration);
					}
					virtual void shadowTextureReceiverPreViewProj(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CFrustum* frustum)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback(light, frustum);
						}
						else
							return this->CCameraNodeTrackSceneManagerListener::shadowTextureReceiverPreViewProj(light, frustum);
					}
					virtual ev_bool sortLightsAffectingFrustum(_inout EarthView::World::Graphic::LightList& lightList)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback(&lightList);
							return returnValue;
						}
						else
							return this->CCameraNodeTrackSceneManagerListener::sortLightsAffectingFrustum(lightList);
					}
					virtual void sceneManagerDestroyed(_in EarthView::World::Graphic::CSceneManager* source)
					{
						if(m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback(source);
						}
						else
							return this->CCameraNodeTrackSceneManagerListener::sceneManagerDestroyed(source);
					}
				};
				REGISTER_FACTORY_CLASS(CCameraNodeTrackSceneManagerListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener*) pObjectXXXX;
					if (dynamic_cast<CCameraNodeTrackSceneManagerListenerProxy*>((EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener::preUpdateSceneGraph(source, camera);
					else
						ptrNativeObject->preUpdateSceneGraph(source, camera);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback )
				{
					CCameraNodeTrackSceneManagerListenerProxy* ptr = dynamic_cast<CCameraNodeTrackSceneManagerListenerProxy*>((EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preUpdateSceneGraph_void_CSceneManager_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener::preUpdateSceneGraph(source, camera);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_setCamera_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener*) pObjectXXXX;
					ptrNativeObject->setCamera(camera);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback )
				{
					CCameraNodeTrackSceneManagerListenerProxy* ptr = dynamic_cast<CCameraNodeTrackSceneManagerListenerProxy*>((EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postUpdateSceneGraph_void_CSceneManager_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback )
				{
					CCameraNodeTrackSceneManagerListenerProxy* ptr = dynamic_cast<CCameraNodeTrackSceneManagerListenerProxy*>((EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback )
				{
					CCameraNodeTrackSceneManagerListenerProxy* ptr = dynamic_cast<CCameraNodeTrackSceneManagerListenerProxy*>((EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTexturesUpdated_void_ev_size_t( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTexturesUpdated_void_ev_size_t_Callback* pCallback )
				{
					CCameraNodeTrackSceneManagerListenerProxy* ptr = dynamic_cast<CCameraNodeTrackSceneManagerListenerProxy*>((EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTexturesUpdated_void_ev_size_t(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback* pCallback )
				{
					CCameraNodeTrackSceneManagerListenerProxy* ptr = dynamic_cast<CCameraNodeTrackSceneManagerListenerProxy*>((EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback* pCallback )
				{
					CCameraNodeTrackSceneManagerListenerProxy* ptr = dynamic_cast<CCameraNodeTrackSceneManagerListenerProxy*>((EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList_Callback* pCallback )
				{
					CCameraNodeTrackSceneManagerListenerProxy* ptr = dynamic_cast<CCameraNodeTrackSceneManagerListenerProxy*>((EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sortLightsAffectingFrustum_ev_bool_LightList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sceneManagerDestroyed_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sceneManagerDestroyed_void_CSceneManager_Callback* pCallback )
				{
					CCameraNodeTrackSceneManagerListenerProxy* ptr = dynamic_cast<CCameraNodeTrackSceneManagerListenerProxy*>((EarthView::World::Spatial3D::Controls::CCameraNodeTrackSceneManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CCameraNodeTrackSceneManagerListener_sceneManagerDestroyed_void_CSceneManager(pCallback);
					}
				}
			}
		}
	}
}
