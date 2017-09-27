/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/iatmosphere.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Spatial3D
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback)(_inout void* element);
				typedef void  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement_Callback)(_inout void* element);
				typedef char*  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in int irs, _in EarthView::World::Graphic::CViewport* v);
				typedef void  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in int irs, _in EarthView::World::Graphic::CViewport* v);
				typedef void  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback)(_in ev_uint64  numberOfShadowTextures);
				typedef void  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback)(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* camera, _in ev_uint64  iteration);
				typedef void  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback)(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CFrustum* frustum);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback)(_inout void* lightList);
				typedef void  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* source);
				class IAtmosphereProxy : public EarthView::World::Spatial::Spatial3D::IAtmosphere
				{
				private:
					EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString_Callback;
					EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString_Callback;
					EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement_Callback;
					EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString_Callback;
					EarthView_World_Spatial_Spatial3D_IAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback;
					EarthView_World_Spatial_Spatial3D_IAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback;
					EarthView_World_Spatial_Spatial3D_IAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback;
					EarthView_World_Spatial_Spatial3D_IAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback;
					EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback;
					EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback;
					EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback;
					EarthView_World_Spatial_Spatial3D_IAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback;
					EarthView_World_Spatial_Spatial3D_IAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback;
				public:
					IAtmosphereProxy(EarthView::World::Core::CNameValuePairList *pList) : IAtmosphere(pList)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback = NULL;
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback = NULL;
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = NULL;
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = NULL;
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback = NULL;
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback = NULL;
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback = NULL;
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback = NULL;
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString(EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString(EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement(EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement(EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString(EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera(EarthView_World_Spatial_Spatial3D_IAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera(EarthView_World_Spatial_Spatial3D_IAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(EarthView_World_Spatial_Spatial3D_IAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(EarthView_World_Spatial_Spatial3D_IAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTexturesUpdated_void_ev_size_t(EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList(EarthView_World_Spatial_Spatial3D_IAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_sceneManagerDestroyed_void_CSceneManager(EarthView_World_Spatial_Spatial3D_IAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IAtmosphere::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->IAtmosphere::setName(name);
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->IAtmosphere::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->IAtmosphere::toXmlElement(element);
					}
					virtual void fromXML(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement_Callback(&element);
						}
						else
							return this->IAtmosphere::fromXML(element);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->IAtmosphere::toXML();
					}
					virtual void preUpdateSceneGraph(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera)
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Spatial3D_IAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback(source, camera);
						}
						else
							return this->IAtmosphere::preUpdateSceneGraph(source, camera);
					}
					virtual void postUpdateSceneGraph(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera)
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Spatial3D_IAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback(source, camera);
						}
						else
							return this->IAtmosphere::postUpdateSceneGraph(source, camera);
					}
					virtual void preFindVisibleObjects(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, _in EarthView::World::Graphic::CViewport* v)
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Spatial3D_IAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback(source, (int)irs, v);
						}
						else
							return this->IAtmosphere::preFindVisibleObjects(source, irs, v);
					}
					virtual void postFindVisibleObjects(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, _in EarthView::World::Graphic::CViewport* v)
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Spatial3D_IAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback(source, (int)irs, v);
						}
						else
							return this->IAtmosphere::postFindVisibleObjects(source, irs, v);
					}
					virtual void shadowTexturesUpdated(_in ev_size_t numberOfShadowTextures)
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback(numberOfShadowTextures);
						}
						else
							return this->IAtmosphere::shadowTexturesUpdated(numberOfShadowTextures);
					}
					virtual void shadowTextureCasterPreViewProj(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* camera, _in ev_size_t iteration)
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback(light, camera, iteration);
						}
						else
							return this->IAtmosphere::shadowTextureCasterPreViewProj(light, camera, iteration);
					}
					virtual void shadowTextureReceiverPreViewProj(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CFrustum* frustum)
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback(light, frustum);
						}
						else
							return this->IAtmosphere::shadowTextureReceiverPreViewProj(light, frustum);
					}
					virtual ev_bool sortLightsAffectingFrustum(_inout EarthView::World::Graphic::LightList& lightList)
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Spatial3D_IAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback(&lightList);
							return returnValue;
						}
						else
							return this->IAtmosphere::sortLightsAffectingFrustum(lightList);
					}
					virtual void sceneManagerDestroyed(_in EarthView::World::Graphic::CSceneManager* source)
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Spatial3D_IAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback(source);
						}
						else
							return this->IAtmosphere::sceneManagerDestroyed(source);
					}
				};
				REGISTER_FACTORY_CLASS(IAtmosphereProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Spatial3D::IAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX;
					if (dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphere::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString_Callback* pCallback )
				{
					IAtmosphereProxy* ptr = dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Spatial3D::IAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphere::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Spatial3D::IAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX;
					if (dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphere::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString_Callback* pCallback )
				{
					IAtmosphereProxy* ptr = dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Spatial3D::IAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphere::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Spatial3D::IAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX;
					if (dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphere::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					IAtmosphereProxy* ptr = dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Spatial3D::IAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphere::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Spatial3D::IAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX;
					if (dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphere::toXmlElement(*(EarthView::World::Core::CXmlElement*)element);
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement(*(EarthView::World::Core::CXmlElement*)element);
						EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback* pCallback )
				{
					IAtmosphereProxy* ptr = dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_toXmlElement_CXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Spatial3D::IAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphere::toXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Spatial3D::IAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX;
					if (dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphere::fromXML(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXML(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement_Callback* pCallback )
				{
					IAtmosphereProxy* ptr = dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_fromXML_void_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Spatial3D::IAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphere::fromXML(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Spatial3D::IAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX;
					if (dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphere::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString_Callback* pCallback )
				{
					IAtmosphereProxy* ptr = dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphere_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Spatial3D::IAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphere::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback )
				{
					IAtmosphereProxy* ptr = dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback )
				{
					IAtmosphereProxy* ptr = dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback )
				{
					IAtmosphereProxy* ptr = dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback )
				{
					IAtmosphereProxy* ptr = dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTexturesUpdated_void_ev_size_t( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback* pCallback )
				{
					IAtmosphereProxy* ptr = dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTexturesUpdated_void_ev_size_t(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback* pCallback )
				{
					IAtmosphereProxy* ptr = dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback* pCallback )
				{
					IAtmosphereProxy* ptr = dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback* pCallback )
				{
					IAtmosphereProxy* ptr = dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_sceneManagerDestroyed_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback* pCallback )
				{
					IAtmosphereProxy* ptr = dynamic_cast<IAtmosphereProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphere_sceneManagerDestroyed_void_CSceneManager(pCallback);
					}
				}
				typedef EarthView::World::Spatial::Spatial3D::IAtmosphere*  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pScene);
				typedef EarthView::World::Spatial::Spatial3D::IAtmosphere*  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback)(_in char*& strXml, _in EarthView::World::Graphic::CSceneManager* pScene);
				typedef EarthView::World::Spatial::Spatial3D::IAtmosphere*  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback)(_inout void* element, _in EarthView::World::Graphic::CSceneManager* pScene);
				typedef void  ( _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback)(_in EarthView::World::Spatial::Spatial3D::IAtmosphere* environment);
				class IAtmosphereFactoryProxy : public EarthView::World::Spatial::Spatial3D::IAtmosphereFactory
				{
				private:
					EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback;
					EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback;
					EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback;
					EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback* m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback;
				public:
					IAtmosphereFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : IAtmosphereFactory(pList)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager(EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager(EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager(EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere(EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(_in EarthView::World::Graphic::CSceneManager* pScene)
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Spatial3D::IAtmosphere* returnValue = m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback(pScene);
							return returnValue;
						}
						else
							return this->IAtmosphereFactory::createInstance(pScene);
					}
					virtual EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(_in const EVString& strXml, _in EarthView::World::Graphic::CSceneManager* pScene)
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							char* strXml_Char = strXml.makeBuffer();
							EarthView::World::Spatial::Spatial3D::IAtmosphere* returnValue = m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback(strXml_Char, pScene);
							return returnValue;
						}
						else
							return this->IAtmosphereFactory::createInstance(strXml, pScene);
					}
					virtual EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(_inout EarthView::World::Core::CXmlElement& element, _in EarthView::World::Graphic::CSceneManager* pScene)
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Spatial3D::IAtmosphere* returnValue = m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback(&element, pScene);
							return returnValue;
						}
						else
							return this->IAtmosphereFactory::createInstance(element, pScene);
					}
					virtual void destroyInstance(_in EarthView::World::Spatial::Spatial3D::IAtmosphere* environment)
					{
						if(m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback(environment);
						}
						else
							return this->IAtmosphereFactory::destroyInstance(environment);
					}
				};
				REGISTER_FACTORY_CLASS(IAtmosphereFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Spatial3D::IAtmosphere*  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pScene )
				{
					EarthView::World::Spatial::Spatial3D::IAtmosphereFactory* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjectXXXX;
					if (dynamic_cast<IAtmosphereFactoryProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphereFactory::createInstance(pScene);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->createInstance(pScene);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback* pCallback )
				{
					IAtmosphereFactoryProxy* ptr = dynamic_cast<IAtmosphereFactoryProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Spatial3D::IAtmosphere*  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pScene )
				{
					EarthView::World::Spatial::Spatial3D::IAtmosphereFactory* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjectXXXX;
					EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphereFactory::createInstance(pScene);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Spatial3D::IAtmosphere*  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager(void *pObjectXXXX, _in const char* strXml, _in EarthView::World::Graphic::CSceneManager* pScene )
				{
					EarthView::World::Core::ev_string strXml1 = strXml;
					EarthView::World::Spatial::Spatial3D::IAtmosphereFactory* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjectXXXX;
					if (dynamic_cast<IAtmosphereFactoryProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphereFactory::createInstance(strXml1, pScene);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->createInstance(strXml1, pScene);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback* pCallback )
				{
					IAtmosphereFactoryProxy* ptr = dynamic_cast<IAtmosphereFactoryProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Spatial3D::IAtmosphere*  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_NoVirtual(void *pObjectXXXX, _in const char* strXml, _in EarthView::World::Graphic::CSceneManager* pScene )
				{
					EarthView::World::Core::ev_string strXml1 = strXml;
					EarthView::World::Spatial::Spatial3D::IAtmosphereFactory* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjectXXXX;
					EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphereFactory::createInstance(strXml1, pScene);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Spatial3D::IAtmosphere*  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager(void *pObjectXXXX, _inout void* element, _in EarthView::World::Graphic::CSceneManager* pScene )
				{
					EarthView::World::Spatial::Spatial3D::IAtmosphereFactory* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjectXXXX;
					if (dynamic_cast<IAtmosphereFactoryProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphereFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element, pScene);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element, pScene);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback* pCallback )
				{
					IAtmosphereFactoryProxy* ptr = dynamic_cast<IAtmosphereFactoryProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Spatial3D::IAtmosphere*  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_NoVirtual(void *pObjectXXXX, _inout void* element, _in EarthView::World::Graphic::CSceneManager* pScene )
				{
					EarthView::World::Spatial::Spatial3D::IAtmosphereFactory* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjectXXXX;
					EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphereFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element, pScene);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere(void *pObjectXXXX, _in EarthView::World::Spatial::Spatial3D::IAtmosphere* environment )
				{
					EarthView::World::Spatial::Spatial3D::IAtmosphereFactory* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjectXXXX;
					if (dynamic_cast<IAtmosphereFactoryProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphereFactory::destroyInstance(environment);
					else
						ptrNativeObject->destroyInstance(environment);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere( void *pObjectXXXX, EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback* pCallback )
				{
					IAtmosphereFactoryProxy* ptr = dynamic_cast<IAtmosphereFactoryProxy*>((EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Spatial3D_IAtmosphereFactory_destroyInstance_void_IAtmosphere_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Spatial3D::IAtmosphere* environment )
				{
					EarthView::World::Spatial::Spatial3D::IAtmosphereFactory* ptrNativeObject = (EarthView::World::Spatial::Spatial3D::IAtmosphereFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Spatial3D::IAtmosphereFactory::destroyInstance(environment);
				}
			}
		}
	}
}
