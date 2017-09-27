/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/regionatmosphere.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial
		{
			namespace Effect3D
			{
				typedef EarthView::World::Core::CStringInterface*  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getStringInterfacePtr_CStringInterface_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setWeather_void_EVWeatherType_Callback)(_in int type);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_create_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* ref_viewport);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroy_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setAerosphereThickness_void_Real_Callback)(_in Real thickness);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRealCloudHeight_void_Real_Callback)(_in Real height);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback)(_in void* lon, _in void* lat, _in ev_real64 alt, _in void* cameraLookDir, _in void* cameraPos, _in ev_real32 timeSinceLastFrame, _in EarthView::World::Graphic::CViewport* viewPort, _in ev_bool mainCamera);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback)(_in EarthView::World::Spatial::Effect3D::CCloudLayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback)(_in EarthView::World::Spatial::Effect3D::CCloudLayer* layer);
				typedef void*  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setName_void_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback)(_inout void* element);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXML_void_CXmlElement_Callback)(_inout void* element);
				typedef char*  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in int irs, _in EarthView::World::Graphic::CViewport* v);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in int irs, _in EarthView::World::Graphic::CViewport* v);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback)(_in ev_uint64  numberOfShadowTextures);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback)(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* camera, _in ev_uint64  iteration);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback)(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CFrustum* frustum);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback)(_inout void* lightList);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* source);
				class CRegionAtmosphereProxy : public EarthView::World::Spatial::Effect3D::CRegionAtmosphere
				{
				private:
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getStringInterfacePtr_CStringInterface_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getStringInterfacePtr_CStringInterface_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setWeather_void_EVWeatherType_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setWeather_void_EVWeatherType_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_create_void_CViewport_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_create_void_CViewport_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroy_void_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroy_void_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setAerosphereThickness_void_Real_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setAerosphereThickness_void_Real_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRealCloudHeight_void_Real_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRealCloudHeight_void_Real_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getName_EVString_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getName_EVString_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setName_void_EVString_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setName_void_EVString_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXML_void_CXmlElement_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXML_void_CXmlElement_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXML_EVString_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXML_EVString_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback;
					EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback* m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback;
				public:
					CRegionAtmosphereProxy(EarthView::World::Core::CNameValuePairList *pList) : CRegionAtmosphere(pList)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getStringInterfacePtr_CStringInterface_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setWeather_void_EVWeatherType_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_create_void_CViewport_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroy_void_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setAerosphereThickness_void_Real_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRealCloudHeight_void_Real_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXML_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getStringInterfacePtr_CStringInterface(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getStringInterfacePtr_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getStringInterfacePtr_CStringInterface_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setWeather_void_EVWeatherType(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setWeather_void_EVWeatherType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setWeather_void_EVWeatherType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_create_void_CViewport(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_create_void_CViewport_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_create_void_CViewport_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroy_void(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroy_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroy_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setAerosphereThickness_void_Real(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setAerosphereThickness_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setAerosphereThickness_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRealCloudHeight_void_Real(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRealCloudHeight_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRealCloudHeight_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_calcAmbientLightMultiplier_CColourValue(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getName_EVString(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setName_void_EVString(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXmlElement_CXmlElement_CXmlElement(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXML_void_CXmlElement(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXML_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXML_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXML_EVString(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTexturesUpdated_void_ev_size_t(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sceneManagerDestroyed_void_CSceneManager(EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback = pCallback;
					}
					virtual EarthView::World::Core::CStringInterface* getStringInterfacePtr()
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getStringInterfacePtr_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CStringInterface* returnValue = m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getStringInterfacePtr_CStringInterface_Callback();
							return returnValue;
						}
						else
							return this->CRegionAtmosphere::getStringInterfacePtr();
					}
					virtual void setWeather(_in EarthView::World::Spatial::Effect3D::EVWeatherType type)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setWeather_void_EVWeatherType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setWeather_void_EVWeatherType_Callback((int)type);
						}
						else
							return this->CRegionAtmosphere::setWeather(type);
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CRegionAtmosphere::setName(name);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRegionAtmosphere::getName();
					}
					virtual void create(_in EarthView::World::Graphic::CViewport* ref_viewport)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_create_void_CViewport_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_create_void_CViewport_Callback(ref_viewport);
						}
						else
							return this->CRegionAtmosphere::create(ref_viewport);
					}
					virtual void destroy()
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroy_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroy_void_Callback();
						}
						else
							return this->CRegionAtmosphere::destroy();
					}
					virtual void setAerosphereThickness(_in Real thickness)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setAerosphereThickness_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setAerosphereThickness_void_Real_Callback(thickness);
						}
						else
							return this->CRegionAtmosphere::setAerosphereThickness(thickness);
					}
					virtual void setRealCloudHeight(_in Real height)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRealCloudHeight_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRealCloudHeight_void_Real_Callback(height);
						}
						else
							return this->CRegionAtmosphere::setRealCloudHeight(height);
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CRegionAtmosphere::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->CRegionAtmosphere::toXmlElement(element);
					}
					virtual void postUpdateSceneGraph(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback(source, camera);
						}
						else
							return this->CRegionAtmosphere::postUpdateSceneGraph(source, camera);
					}
					virtual void update(_in EarthView::World::Spatial::Math::CDegree lon, _in EarthView::World::Spatial::Math::CDegree lat, _in ev_real64 alt, _in EarthView::World::Spatial::Math::CVector3 cameraLookDir, _in EarthView::World::Spatial::Math::CVector3 cameraPos, _in ev_real32 timeSinceLastFrame, _in EarthView::World::Graphic::CViewport* viewPort, _in ev_bool mainCamera)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback(&lon, &lat, alt, &cameraLookDir, &cameraPos, timeSinceLastFrame, viewPort, mainCamera);
						}
						else
							return this->CRegionAtmosphere::update(lon, lat, alt, cameraLookDir, cameraPos, timeSinceLastFrame, viewPort, mainCamera);
					}
					virtual void onChildAtmosphereCloudLayerAdded(_in EarthView::World::Spatial::Effect3D::CCloudLayer* layer)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback(layer);
						}
						else
							return this->CRegionAtmosphere::onChildAtmosphereCloudLayerAdded(layer);
					}
					virtual void onChildAtmosphereCloudLayerRemoved(_in EarthView::World::Spatial::Effect3D::CCloudLayer* layer)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback(layer);
						}
						else
							return this->CRegionAtmosphere::onChildAtmosphereCloudLayerRemoved(layer);
					}
					virtual EarthView::World::Graphic::CColourValue calcAmbientLightMultiplier()
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CColourValue returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback();
							return returnValue;
						}
						else
							return this->CRegionAtmosphere::calcAmbientLightMultiplier();
					}
					virtual void fromXML(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXML_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXML_void_CXmlElement_Callback(&element);
						}
						else
							return this->CRegionAtmosphere::fromXML(element);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRegionAtmosphere::toXML();
					}
					virtual void preUpdateSceneGraph(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback(source, camera);
						}
						else
							return this->CRegionAtmosphere::preUpdateSceneGraph(source, camera);
					}
					virtual void preFindVisibleObjects(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, _in EarthView::World::Graphic::CViewport* v)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback(source, (int)irs, v);
						}
						else
							return this->CRegionAtmosphere::preFindVisibleObjects(source, irs, v);
					}
					virtual void postFindVisibleObjects(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, _in EarthView::World::Graphic::CViewport* v)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback(source, (int)irs, v);
						}
						else
							return this->CRegionAtmosphere::postFindVisibleObjects(source, irs, v);
					}
					virtual void shadowTexturesUpdated(_in ev_size_t numberOfShadowTextures)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback(numberOfShadowTextures);
						}
						else
							return this->CRegionAtmosphere::shadowTexturesUpdated(numberOfShadowTextures);
					}
					virtual void shadowTextureCasterPreViewProj(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* camera, _in ev_size_t iteration)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback(light, camera, iteration);
						}
						else
							return this->CRegionAtmosphere::shadowTextureCasterPreViewProj(light, camera, iteration);
					}
					virtual void shadowTextureReceiverPreViewProj(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CFrustum* frustum)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback(light, frustum);
						}
						else
							return this->CRegionAtmosphere::shadowTextureReceiverPreViewProj(light, frustum);
					}
					virtual ev_bool sortLightsAffectingFrustum(_inout EarthView::World::Graphic::LightList& lightList)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback(&lightList);
							return returnValue;
						}
						else
							return this->CRegionAtmosphere::sortLightsAffectingFrustum(lightList);
					}
					virtual void sceneManagerDestroyed(_in EarthView::World::Graphic::CSceneManager* source)
					{
						if(m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback(source);
						}
						else
							return this->CRegionAtmosphere::sceneManagerDestroyed(source);
					}
				};
				REGISTER_FACTORY_CLASS(CRegionAtmosphereProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::CStringInterface*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getStringInterfacePtr_CStringInterface(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CStringInterface* objXXXX = ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::getStringInterfacePtr();
						return objXXXX;
					}
					else
					{
						EarthView::World::Core::CStringInterface* objXXXX = ptrNativeObject->getStringInterfacePtr();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getStringInterfacePtr_CStringInterface( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getStringInterfacePtr_CStringInterface_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getStringInterfacePtr_CStringInterface(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::CStringInterface*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getStringInterfacePtr_CStringInterface_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Core::CStringInterface* objXXXX = ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::getStringInterfacePtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getSceneManager_CSceneManager(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->getSceneManager();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_frameStarted_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->frameStarted(evt);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setEnvelope_void_CEnvelope(void *pObjectXXXX, _inout void* envelope )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setEnvelope(*(EarthView::World::Spatial::Geometry::CEnvelope*)envelope);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getEnvelope_CEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CEnvelope objXXXX = ptrNativeObject->getEnvelope();
					EarthView::World::Spatial::Geometry::CEnvelope *pXXXX = new EarthView::World::Spatial::Geometry::CEnvelope(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setWeather_void_EVWeatherType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::setWeather((EarthView::World::Spatial::Effect3D::EVWeatherType)type);
					else
						ptrNativeObject->setWeather((EarthView::World::Spatial::Effect3D::EVWeatherType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setWeather_void_EVWeatherType( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setWeather_void_EVWeatherType_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setWeather_void_EVWeatherType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setWeather_void_EVWeatherType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::setWeather((EarthView::World::Spatial::Effect3D::EVWeatherType)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getWeather_EVWeatherType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::EVWeatherType objXXXX = ptrNativeObject->getWeather();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setMinimumAmbientLight_void_CColourValue(void *pObjectXXXX, _in const void* colour )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setMinimumAmbientLight(*(EarthView::World::Graphic::CColourValue*)colour);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getMinimumAmbientLight_CColourValue(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getMinimumAmbientLight();
					const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setManageAmbientLight_void_ev_bool(void *pObjectXXXX, _in ev_bool manage )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setManageAmbientLight(manage);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getManageAmbientLight_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getManageAmbientLight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setAmbientMultiplier_void_CColourValue(void *pObjectXXXX, _in const void* colour )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setAmbientMultiplier(*(EarthView::World::Graphic::CColourValue*)colour);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getAmbientMultiplier_CColourValue(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getAmbientMultiplier();
					const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CCloudLayer*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_createCloudLayer_CCloudLayer_EVCloudType_CHeightRange(void *pObjectXXXX, _in int type, _in const void* height )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CCloudLayer* objXXXX = ptrNativeObject->createCloudLayer((EarthView::World::Spatial::Effect3D::EVCloudType)type, *(EarthView::World::Spatial::Effect3D::CHeightRange*)height);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroyCloudLayer_void_CCloudLayer(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CCloudLayer* cloudlayer )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->destroyCloudLayer(cloudlayer);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CWind*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_createWind_CWind(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CWind* objXXXX = ptrNativeObject->createWind();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroyWind_void_CWind(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CWind* wind )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->destroyWind(wind);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CLightningManager*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_createLightningManager_CLightningManager_CHeightRange(void *pObjectXXXX, _in const void* range )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CLightningManager* objXXXX = ptrNativeObject->createLightningManager(*(EarthView::World::Spatial::Effect3D::CHeightRange*)range);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroyLightningManager_void_CLightningManager(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CLightningManager* lightning )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->destroyLightningManager(lightning);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getCloudLayersCount_ev_size_t(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->getCloudLayersCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CCloudLayer*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getCloudLayer_CCloudLayer_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CCloudLayer* objXXXX = ptrNativeObject->getCloudLayer(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setGroundFog_void_CGroundFog(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CGroundFog* ref_fog )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setGroundFog(ref_fog);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CGroundFog*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getGroundFog_CGroundFog(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CGroundFog* objXXXX = ptrNativeObject->getGroundFog();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getWindsCount_ev_size_t(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->getWindsCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CWind*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getWind_CWind_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CWind* objXXXX = ptrNativeObject->getWind(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getLightningManagersCount_ev_size_t(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->getLightningManagersCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CLightningManager*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getLightningManager_CLightningManager_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CLightningManager* objXXXX = ptrNativeObject->getLightningManager(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setSun_void_CSun(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CSun* ref_sun )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setSun(ref_sun);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CSun*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getSun_CSun(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CSun* objXXXX = ptrNativeObject->getSun();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setMoon_void_CMoon(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CMoon* ref_moon )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setMoon(ref_moon);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CMoon*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getMoon_CMoon(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CMoon* objXXXX = ptrNativeObject->getMoon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setStars_void_CStars(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CStars* stars )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setStars(stars);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CStars*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getStars_CStars(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CStars* objXXXX = ptrNativeObject->getStars();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setPrecipitation_void_CPrecipitation(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CPrecipitation* ref_precipitation )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setPrecipitation(ref_precipitation);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CPrecipitation*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getPrecipitation_CPrecipitation(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CPrecipitation* objXXXX = ptrNativeObject->getPrecipitation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shutdown_void( )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere::shutdown();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRainSnowSystem_void_CRainSnowSystem(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CRainSnowSystem* ref_rainSnowSystem )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setRainSnowSystem(ref_rainSnowSystem);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CRainSnowSystem*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getRainSnowSystem_CRainSnowSystem(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CRainSnowSystem* objXXXX = ptrNativeObject->getRainSnowSystem();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_removeRainSnowSystem_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->removeRainSnowSystem();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setName_void_EVString_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getName_EVString_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setObserverParam_void_CDegree_CDegree_ev_real64_CVector3(void *pObjectXXXX, _in void* lon, _in void* lat, _in ev_real64 alt, _in void* cameraLookDir )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setObserverParam(*(EarthView::World::Spatial::Math::CDegree*)lon, *(EarthView::World::Spatial::Math::CDegree*)lat, alt, *(EarthView::World::Spatial::Math::CVector3*)cameraLookDir);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setDateTime_void_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_real64_ev_int8(void *pObjectXXXX, _in ev_int32 year, _in ev_int32 month, _in ev_int32 day, _in ev_int32 hour, _in ev_int32 minute, _in ev_real64 second, _in ev_int8 time_zone )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setDateTime(year, month, day, hour, minute, second, time_zone);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setUseSystemTime_void_ev_bool(void *pObjectXXXX, _in ev_bool system_time )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setUseSystemTime(system_time);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getUseSystemTime_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getUseSystemTime();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getDateTime_CCoreTime(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Core::CCoreTime objXXXX = ptrNativeObject->getDateTime();
					EarthView::World::Core::CCoreTime *pXXXX = new EarthView::World::Core::CCoreTime(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int8  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getTimeZone_ev_int8(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_int8 objXXXX = ptrNativeObject->getTimeZone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setTimeScale_void_Real(void *pObjectXXXX, _in const Real scale )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setTimeScale(scale);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getTimeScale_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getTimeScale();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_create_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* ref_viewport )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::create(ref_viewport);
					else
						ptrNativeObject->create(ref_viewport);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_create_void_CViewport( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_create_void_CViewport_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_create_void_CViewport(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_create_void_CViewport_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* ref_viewport )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::create(ref_viewport);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroy_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::destroy();
					else
						ptrNativeObject->destroy();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroy_void( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroy_void_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroy_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_destroy_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::destroy();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_pause_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->pause();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_resume_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->resume();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setAerosphereThickness_void_Real(void *pObjectXXXX, _in Real thickness )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::setAerosphereThickness(thickness);
					else
						ptrNativeObject->setAerosphereThickness(thickness);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setAerosphereThickness_void_Real( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setAerosphereThickness_void_Real_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setAerosphereThickness_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setAerosphereThickness_void_Real_NoVirtual(void *pObjectXXXX, _in Real thickness )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::setAerosphereThickness(thickness);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getAerosphereThickness_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getAerosphereThickness();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRealCloudHeight_void_Real(void *pObjectXXXX, _in Real height )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::setRealCloudHeight(height);
					else
						ptrNativeObject->setRealCloudHeight(height);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRealCloudHeight_void_Real( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRealCloudHeight_void_Real_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRealCloudHeight_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRealCloudHeight_void_Real_NoVirtual(void *pObjectXXXX, _in Real height )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::setRealCloudHeight(height);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getRealCloudHeight_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getRealCloudHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_EVWeatherTypeToString_EVString_EVWeatherType(void *pObjectXXXX, _in int type )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EVWeatherTypeToString((EarthView::World::Spatial::Effect3D::EVWeatherType)type);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_EVWeatherTypeToStringCHS_EVString_EVWeatherType(void *pObjectXXXX, _in int type )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EVWeatherTypeToStringCHS((EarthView::World::Spatial::Effect3D::EVWeatherType)type);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toEVWeatherType_EVWeatherType_EVString(void *pObjectXXXX, _in const char* type )
				{
					EarthView::World::Core::ev_string type1 = type;
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::EVWeatherType objXXXX = ptrNativeObject->toEVWeatherType(type1);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toEVWeatherTypeCHS_EVWeatherType_EVString(void *pObjectXXXX, _in const char* type )
				{
					EarthView::World::Core::ev_string type1 = type;
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::EVWeatherType objXXXX = ptrNativeObject->toEVWeatherTypeCHS(type1);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableSkyDome_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableSkyDome(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isSkyDomeEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSkyDomeEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableSkyDomeRefractable_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableSkyDomeRefractable(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isSkyDomeRefractable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSkyDomeRefractable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableSkyDomeReflectable_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableSkyDomeReflectable(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isSkyDomeReflectable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSkyDomeReflectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRealCloudVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setRealCloudVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isRealCloudVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isRealCloudVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableRealCloud_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableRealCloud(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isRealCloudEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isRealCloudEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableRealCloudFlow_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableRealCloudFlow(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isRealCloudFlowEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isRealCloudFlowEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableFlatCloud_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableFlatCloud(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isFlatCloudEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isFlatCloudEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableVolumeCloud_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableVolumeCloud(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isVolumeCloudEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isVolumeCloudEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableSun_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableSun(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isSunEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSunEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableSunLight_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableSunLight(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isSunLightEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSunLightEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableMoon_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableMoon(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isMoonEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isMoonEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableMoonLight_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableMoonLight(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isMoonLightEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isMoonLightEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableStars_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableStars(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isStarsEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isStarsEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableLightning_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableLightning(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isLightningEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isLightningEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enablePrecipitation_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enablePrecipitation(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isPrecipitationEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isPrecipitationEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableSunReflectable_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableSunReflectable(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isSunReflectable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSunReflectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableSunRefractable_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableSunRefractable(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isSunRefractable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isSunRefractable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableMoonReflectable_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableMoonReflectable(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isMoonReflectable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isMoonReflectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableMoonRefractable_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableMoonRefractable(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isMoonRefractable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isMoonRefractable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableLightningReflectable_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableLightningReflectable(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isLightningReflectable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isLightningReflectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableLightningRefractable_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableLightningRefractable(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isLightningRefractable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isLightningRefractable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableCloudReflectable_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableCloudReflectable(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isCloudReflectable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isCloudReflectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableCloudRefractable_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableCloudRefractable(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isCloudRefractable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isCloudRefractable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableStarsReflectable_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableStarsReflectable(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isStarsReflectable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isStarsReflectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_enableStarsRefractable_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->enableStarsRefractable(enable);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isStarsRefractable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isStarsRefractable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXmlElement_CXmlElement_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::toXmlElement(*(EarthView::World::Core::CXmlElement*)element);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXmlElement_CXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXmlElement_CXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXmlElement_CXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::toXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_clear_void_ev_bool(void *pObjectXXXX, _in ev_bool completely )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->clear(completely);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setDefaultWindSpeed_void_Real(void *pObjectXXXX, _in Real speed )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setDefaultWindSpeed(speed);
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getDefaultWindSpeed_Real(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getDefaultWindSpeed();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getSunPosition_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getSunPosition();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getMoonPosition_CVector3(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getMoonPosition();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setRadius_void_int(void *pObjectXXXX, _in int radius )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setRadius(radius);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getRadius_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getRadius();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_isCloudLayerExist_ev_bool_CCloudLayer(void *pObjectXXXX, _in const EarthView::World::Spatial::Effect3D::CCloudLayer* layer )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isCloudLayerExist(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_clearLightning_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->clearLightning();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_updateToRender_void_CBaseObject(void *pObjectXXXX, _in EarthView::World::Core::CBaseObject* ref_obj )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->updateToRender(ref_obj);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setFogParameters_void_FogMode_Real(void *pObjectXXXX, _in int fogmode, _in Real density )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setFogParameters((EarthView::World::Graphic::FogMode)fogmode, density);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getFogMode_FogMode(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Graphic::FogMode objXXXX = ptrNativeObject->getFogMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getFogDensity_Real(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					Real objXXXX = ptrNativeObject->getFogDensity();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setStarsBrightness_void_ev_real32(void *pObjectXXXX, _in ev_real32 brightness )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setStarsBrightness(brightness);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getStarsBrightness_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getStarsBrightness();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setAerosphereTransRate_void_ev_real32(void *pObjectXXXX, _in ev_real32 rate )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setAerosphereTransRate(rate);
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getAerophereTransRate_ev_real32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->getAerophereTransRate();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_setIsUseCameraLightMode_void_ev_bool(void *pObjectXXXX, _in ev_bool isUse )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->setIsUseCameraLightMode(isUse);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getIsUseCameraLightMode_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getIsUseCameraLightMode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::postUpdateSceneGraph(source, camera);
					else
						ptrNativeObject->postUpdateSceneGraph(source, camera);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::postUpdateSceneGraph(source, camera);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool(void *pObjectXXXX, _in void* lon, _in void* lat, _in ev_real64 alt, _in void* cameraLookDir, _in void* cameraPos, _in ev_real32 timeSinceLastFrame, _in EarthView::World::Graphic::CViewport* viewPort, _in ev_bool mainCamera )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::update(*(EarthView::World::Spatial::Math::CDegree*)lon, *(EarthView::World::Spatial::Math::CDegree*)lat, alt, *(EarthView::World::Spatial::Math::CVector3*)cameraLookDir, *(EarthView::World::Spatial::Math::CVector3*)cameraPos, timeSinceLastFrame, viewPort, mainCamera);
					else
						ptrNativeObject->update(*(EarthView::World::Spatial::Math::CDegree*)lon, *(EarthView::World::Spatial::Math::CDegree*)lat, alt, *(EarthView::World::Spatial::Math::CVector3*)cameraLookDir, *(EarthView::World::Spatial::Math::CVector3*)cameraPos, timeSinceLastFrame, viewPort, mainCamera);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_NoVirtual(void *pObjectXXXX, _in void* lon, _in void* lat, _in ev_real64 alt, _in void* cameraLookDir, _in void* cameraPos, _in ev_real32 timeSinceLastFrame, _in EarthView::World::Graphic::CViewport* viewPort, _in ev_bool mainCamera )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::update(*(EarthView::World::Spatial::Math::CDegree*)lon, *(EarthView::World::Spatial::Math::CDegree*)lat, alt, *(EarthView::World::Spatial::Math::CVector3*)cameraLookDir, *(EarthView::World::Spatial::Math::CVector3*)cameraPos, timeSinceLastFrame, viewPort, mainCamera);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CCloudLayer* layer )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::onChildAtmosphereCloudLayerAdded(layer);
					else
						ptrNativeObject->onChildAtmosphereCloudLayerAdded(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CCloudLayer* layer )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::onChildAtmosphereCloudLayerAdded(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CCloudLayer* layer )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::onChildAtmosphereCloudLayerRemoved(layer);
					else
						ptrNativeObject->onChildAtmosphereCloudLayerRemoved(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CCloudLayer* layer )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::onChildAtmosphereCloudLayerRemoved(layer);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_calcAmbientLightMultiplier_CColourValue(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::calcAmbientLightMultiplier();
						EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->calcAmbientLightMultiplier();
						EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_calcAmbientLightMultiplier_CColourValue( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_calcAmbientLightMultiplier_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_calcAmbientLightMultiplier_CColourValue_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->EarthView::World::Spatial::Effect3D::CRegionAtmosphere::calcAmbientLightMultiplier();
					EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CRealCloudLayer*  _stdcall EarthView_World_Spatial_Effect3D_CRegionAtmosphere_getRealCloudLayer_CRealCloudLayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CRealCloudLayer* objXXXX = ptrNativeObject->getRealCloudLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXML_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXML_void_CXmlElement_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_fromXML_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXML_EVString_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTexturesUpdated_void_ev_size_t( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTexturesUpdated_void_ev_size_t(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sceneManagerDestroyed_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback* pCallback )
				{
					CRegionAtmosphereProxy* ptr = dynamic_cast<CRegionAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CRegionAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CRegionAtmosphere_sceneManagerDestroyed_void_CSceneManager(pCallback);
					}
				}
			}
		}
	}
}
