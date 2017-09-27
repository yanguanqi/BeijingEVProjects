/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/atmosphere.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_Effect3D_CWeatherControlPoint_mTime( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CWeatherControlPoint* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWeatherControlPoint*) pObjectXXXX;
					EarthView::World::Core::CCoreTime &objXXXX = ptrNativeObject->mTime;
					EarthView::World::Core::CCoreTime *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Effect3D_CWeatherControlPoint_mTime( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial::Effect3D::CWeatherControlPoint*)pObjectXXXX)->mTime = *(EarthView::World::Core::CCoreTime*)value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_Effect3D_CWeatherControlPoint_mWeatherType( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CWeatherControlPoint* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWeatherControlPoint*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::EVWeatherType objXXXX = ptrNativeObject->mWeatherType;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Effect3D_CWeatherControlPoint_mWeatherType( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::Effect3D::CWeatherControlPoint*)pObjectXXXX)->mWeatherType = (EarthView::World::Spatial::Effect3D::EVWeatherType)value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Effect3D_CWeatherTransformation_addControlPoint_ev_int32_CWeatherControlPoint(void *pObjectXXXX, _in const void* controlpoint )
				{
					EarthView::World::Spatial::Effect3D::CWeatherTransformation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->addControlPoint(*(EarthView::World::Spatial::Effect3D::CWeatherControlPoint*)controlpoint);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CWeatherTransformation_getControlPoint_ev_bool_ev_uint32_CWeatherControlPoint(void *pObjectXXXX, _in ev_uint32 index, _out void* controlpoint )
				{
					EarthView::World::Spatial::Effect3D::CWeatherTransformation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getControlPoint(index, *(EarthView::World::Spatial::Effect3D::CWeatherControlPoint*)controlpoint);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CWeatherTransformation_removeControlPoint_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Effect3D::CWeatherTransformation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeControlPoint(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Effect3D_CWeatherTransformation_getControlPointCount_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CWeatherTransformation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getControlPointCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CWeatherTransformation_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CWeatherTransformation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CWeatherTransformation_transformWeather_ev_bool_CRegionAtmosphere_CCoreTime_Real(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CRegionAtmosphere* atmosphere, _in const void* time, _in Real alt )
				{
					EarthView::World::Spatial::Effect3D::CWeatherTransformation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->transformWeather(atmosphere, *(EarthView::World::Core::CCoreTime*)time, alt);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CWeatherTransformation_setDefaultWeather_void_EVWeatherType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Effect3D::CWeatherTransformation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjectXXXX;
					ptrNativeObject->setDefaultWeather((EarthView::World::Spatial::Effect3D::EVWeatherType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CWeatherTransformation_setStartEndTransitionTime_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 seconds )
				{
					EarthView::World::Spatial::Effect3D::CWeatherTransformation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjectXXXX;
					ptrNativeObject->setStartEndTransitionTime(seconds);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CWeatherTransformation_setNeedRestoreToDefault_void_ev_bool(void *pObjectXXXX, _in ev_bool restore )
				{
					EarthView::World::Spatial::Effect3D::CWeatherTransformation* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CWeatherTransformation*) pObjectXXXX;
					ptrNativeObject->setNeedRestoreToDefault(restore);
				}
				typedef EarthView::World::Core::CStringInterface*  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getStringInterfacePtr_CStringInterface_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType_Callback)(_in int type);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_create_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* ref_viewport);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real_Callback)(_in Real thickness);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudHeight_void_Real_Callback)(_in Real height);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback)(_in void* lon, _in void* lat, _in ev_real64 alt, _in void* cameraLookDir, _in void* cameraPos, _in ev_real32 timeSinceLastFrame, _in EarthView::World::Graphic::CViewport* viewPort, _in ev_bool mainCamera);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback)(_in EarthView::World::Spatial::Effect3D::CCloudLayer* layer);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback)(_in EarthView::World::Spatial::Effect3D::CCloudLayer* layer);
				typedef void*  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setName_void_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback)(_inout void* element);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement_Callback)(_inout void* element);
				typedef char*  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in int irs, _in EarthView::World::Graphic::CViewport* v);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback)(_in EarthView::World::Graphic::CSceneManager* source, _in int irs, _in EarthView::World::Graphic::CViewport* v);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback)(_in ev_uint64  numberOfShadowTextures);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback)(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* camera, _in ev_uint64  iteration);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback)(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CFrustum* frustum);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback)(_inout void* lightList);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* source);
				class CGlobeAtmosphereProxy : public EarthView::World::Spatial::Effect3D::CGlobeAtmosphere
				{
				private:
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getStringInterfacePtr_CStringInterface_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getStringInterfacePtr_CStringInterface_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_create_void_CViewport_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_create_void_CViewport_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudHeight_void_Real_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudHeight_void_Real_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getName_EVString_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getName_EVString_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setName_void_EVString_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setName_void_EVString_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback;
					EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback* m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback;
				public:
					CGlobeAtmosphereProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeAtmosphere(pList)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getStringInterfacePtr_CStringInterface_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_create_void_CViewport_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudHeight_void_Real_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getStringInterfacePtr_CStringInterface(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getStringInterfacePtr_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getStringInterfacePtr_CStringInterface_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_create_void_CViewport(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_create_void_CViewport_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_create_void_CViewport_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudHeight_void_Real(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudHeight_void_Real_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudHeight_void_Real_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_calcAmbientLightMultiplier_CColourValue(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getName_EVString(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setName_void_EVString(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXmlElement_CXmlElement_CXmlElement(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTexturesUpdated_void_ev_size_t(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sceneManagerDestroyed_void_CSceneManager(EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback = pCallback;
					}
					virtual void postUpdateSceneGraph(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback(source, camera);
						}
						else
							return this->CGlobeAtmosphere::postUpdateSceneGraph(source, camera);
					}
					virtual void setAerosphereThickness(_in Real thickness)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real_Callback(thickness);
						}
						else
							return this->CGlobeAtmosphere::setAerosphereThickness(thickness);
					}
					virtual void fromXML(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement_Callback(&element);
						}
						else
							return this->CGlobeAtmosphere::fromXML(element);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGlobeAtmosphere::toXML();
					}
					virtual void destroy()
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void_Callback();
						}
						else
							return this->CGlobeAtmosphere::destroy();
					}
					virtual void setWeather(_in EarthView::World::Spatial::Effect3D::EVWeatherType type)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType_Callback((int)type);
						}
						else
							return this->CGlobeAtmosphere::setWeather(type);
					}
					virtual void update(_in EarthView::World::Spatial::Math::CDegree lon, _in EarthView::World::Spatial::Math::CDegree lat, _in ev_real64 alt, _in EarthView::World::Spatial::Math::CVector3 cameraLookDir, _in EarthView::World::Spatial::Math::CVector3 cameraPos, _in ev_real32 timeSinceLastFrame, _in EarthView::World::Graphic::CViewport* viewPort, _in ev_bool mainCamera)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback(&lon, &lat, alt, &cameraLookDir, &cameraPos, timeSinceLastFrame, viewPort, mainCamera);
						}
						else
							return this->CGlobeAtmosphere::update(lon, lat, alt, cameraLookDir, cameraPos, timeSinceLastFrame, viewPort, mainCamera);
					}
					virtual void onChildAtmosphereCloudLayerAdded(_in EarthView::World::Spatial::Effect3D::CCloudLayer* layer)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback(layer);
						}
						else
							return this->CGlobeAtmosphere::onChildAtmosphereCloudLayerAdded(layer);
					}
					virtual void onChildAtmosphereCloudLayerRemoved(_in EarthView::World::Spatial::Effect3D::CCloudLayer* layer)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback(layer);
						}
						else
							return this->CGlobeAtmosphere::onChildAtmosphereCloudLayerRemoved(layer);
					}
					virtual EarthView::World::Core::CStringInterface* getStringInterfacePtr()
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getStringInterfacePtr_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CStringInterface* returnValue = m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getStringInterfacePtr_CStringInterface_Callback();
							return returnValue;
						}
						else
							return this->CGlobeAtmosphere::getStringInterfacePtr();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->CGlobeAtmosphere::setName(name);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGlobeAtmosphere::getName();
					}
					virtual void create(_in EarthView::World::Graphic::CViewport* ref_viewport)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_create_void_CViewport_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_create_void_CViewport_Callback(ref_viewport);
						}
						else
							return this->CGlobeAtmosphere::create(ref_viewport);
					}
					virtual void setRealCloudHeight(_in Real height)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudHeight_void_Real_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudHeight_void_Real_Callback(height);
						}
						else
							return this->CGlobeAtmosphere::setRealCloudHeight(height);
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CGlobeAtmosphere::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->CGlobeAtmosphere::toXmlElement(element);
					}
					virtual EarthView::World::Graphic::CColourValue calcAmbientLightMultiplier()
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CColourValue returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback();
							return returnValue;
						}
						else
							return this->CGlobeAtmosphere::calcAmbientLightMultiplier();
					}
					virtual void preUpdateSceneGraph(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback(source, camera);
						}
						else
							return this->CGlobeAtmosphere::preUpdateSceneGraph(source, camera);
					}
					virtual void preFindVisibleObjects(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, _in EarthView::World::Graphic::CViewport* v)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback(source, (int)irs, v);
						}
						else
							return this->CGlobeAtmosphere::preFindVisibleObjects(source, irs, v);
					}
					virtual void postFindVisibleObjects(_in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CSceneManager::IlluminationRenderStage irs, _in EarthView::World::Graphic::CViewport* v)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback(source, (int)irs, v);
						}
						else
							return this->CGlobeAtmosphere::postFindVisibleObjects(source, irs, v);
					}
					virtual void shadowTexturesUpdated(_in ev_size_t numberOfShadowTextures)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback(numberOfShadowTextures);
						}
						else
							return this->CGlobeAtmosphere::shadowTexturesUpdated(numberOfShadowTextures);
					}
					virtual void shadowTextureCasterPreViewProj(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* camera, _in ev_size_t iteration)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback(light, camera, iteration);
						}
						else
							return this->CGlobeAtmosphere::shadowTextureCasterPreViewProj(light, camera, iteration);
					}
					virtual void shadowTextureReceiverPreViewProj(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CFrustum* frustum)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback(light, frustum);
						}
						else
							return this->CGlobeAtmosphere::shadowTextureReceiverPreViewProj(light, frustum);
					}
					virtual ev_bool sortLightsAffectingFrustum(_inout EarthView::World::Graphic::LightList& lightList)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback(&lightList);
							return returnValue;
						}
						else
							return this->CGlobeAtmosphere::sortLightsAffectingFrustum(lightList);
					}
					virtual void sceneManagerDestroyed(_in EarthView::World::Graphic::CSceneManager* source)
					{
						if(m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback(source);
						}
						else
							return this->CGlobeAtmosphere::sceneManagerDestroyed(source);
					}
				};
				REGISTER_FACTORY_CLASS(CGlobeAtmosphereProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setOriginLonLat_void_CDegree_CDegree(void *pObjectXXXX, _in const void* lon, _in const void* lat )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->setOriginLonLat(*(EarthView::World::Spatial::Math::CDegree*)lon, *(EarthView::World::Spatial::Math::CDegree*)lat);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_frameStarted_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->frameStarted(evt);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::postUpdateSceneGraph(source, camera);
					else
						ptrNativeObject->postUpdateSceneGraph(source, camera);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postUpdateSceneGraph_void_CSceneManager_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* source, _in EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::postUpdateSceneGraph(source, camera);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CRegionAtmosphere*  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_createRegionAtmosphere_CRegionAtmosphere_CEnvelope_EVWeatherType(void *pObjectXXXX, _in void* envelope, _in int type )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* objXXXX = ptrNativeObject->createRegionAtmosphere(*(EarthView::World::Spatial::Geometry::CEnvelope*)envelope, (EarthView::World::Spatial::Effect3D::EVWeatherType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroyRegionAtmosphere_void_CRegionAtmosphere(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CRegionAtmosphere* regionatmosphere )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->destroyRegionAtmosphere(regionatmosphere);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getRegionAtmospheresCount_ev_size_t(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->getRegionAtmospheresCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CRegionAtmosphere*  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getRegionAtmosphere_CRegionAtmosphere_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CRegionAtmosphere* objXXXX = ptrNativeObject->getRegionAtmosphere(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real(void *pObjectXXXX, _in Real thickness )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::setAerosphereThickness(thickness);
					else
						ptrNativeObject->setAerosphereThickness(thickness);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setAerosphereThickness_void_Real_NoVirtual(void *pObjectXXXX, _in Real thickness )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::setAerosphereThickness(thickness);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::fromXML(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXML(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXML_void_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::fromXML(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudMap_void_CImage(void *pObjectXXXX, _in const void* img )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->setRealCloudMap(*(EarthView::World::Graphic::CImage*)img);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudMapAlpha_void_ev_real32(void *pObjectXXXX, _in ev_real32 alpha )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->setRealCloudMapAlpha(alpha);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRegionCloudMapAlpha_void_EVString_ev_real32(void *pObjectXXXX, _in const char* name, _in ev_real32 alpha )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->setRegionCloudMapAlpha(name1, alpha);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_addRegionCloudMap_void_EVString_CImage_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in const char* name, _in const void* img, _in ev_real64 north, _in ev_real64 west, _in ev_real64 south, _in ev_real64 east )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->addRegionCloudMap(name1, *(EarthView::World::Graphic::CImage*)img, north, west, south, east);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_addRegionCloudMap_void_EVString_CImage_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in const char* name, _in const void* img, _in ev_real64 north, _in ev_real64 west, _in ev_real64 south, _in ev_real64 east, _in ev_real64 height )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->addRegionCloudMap(name1, *(EarthView::World::Graphic::CImage*)img, north, west, south, east, height);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_removeRegionCloudMap_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->removeRegionCloudMap(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRegionCloudMapVisible_void_EVString_bool(void *pObjectXXXX, _in const char* name, _in bool visible )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->setRegionCloudMapVisible(name1, visible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getRegionCloudMapVisible_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getRegionCloudMapVisible(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_enableGetCloudColorFromImage_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->enableGetCloudColorFromImage(enable);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWindSpeedForRealCloudMap_void_CVector2(void *pObjectXXXX, _in const void* speed )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->setWindSpeedForRealCloudMap(*(EarthView::World::Spatial::Math::CVector2*)speed);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRegionCloudRotationInfomation_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in const char* name, _in ev_real64 centerLat, _in ev_real64 centerLon, _in ev_real64 rotationAngleVelocity, _in ev_real64 rotationRegionRadius )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->setRegionCloudRotationInfomation(name1, centerLat, centerLon, rotationAngleVelocity, rotationRegionRadius);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_enableRotateRegionCloud_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->enableRotateRegionCloud(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_disableRotateRegionCloud_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->disableRotateRegionCloud(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::destroy();
					else
						ptrNativeObject->destroy();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_destroy_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::destroy();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Effect3D::CWeatherTransformation*  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getWeatherTransformer_CWeatherTransformation(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					EarthView::World::Spatial::Effect3D::CWeatherTransformation* objXXXX = ptrNativeObject->getWeatherTransformer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_startWeatherTransform_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->startWeatherTransform();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_stopWeatherTransform_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->stopWeatherTransform();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::setWeather((EarthView::World::Spatial::Effect3D::EVWeatherType)type);
					else
						ptrNativeObject->setWeather((EarthView::World::Spatial::Effect3D::EVWeatherType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeather_void_EVWeatherType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::setWeather((EarthView::World::Spatial::Effect3D::EVWeatherType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setWeatherTransitionTime_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 seconds )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->setWeatherTransitionTime(seconds);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool(void *pObjectXXXX, _in void* lon, _in void* lat, _in ev_real64 alt, _in void* cameraLookDir, _in void* cameraPos, _in ev_real32 timeSinceLastFrame, _in EarthView::World::Graphic::CViewport* viewPort, _in ev_bool mainCamera )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::update(*(EarthView::World::Spatial::Math::CDegree*)lon, *(EarthView::World::Spatial::Math::CDegree*)lat, alt, *(EarthView::World::Spatial::Math::CVector3*)cameraLookDir, *(EarthView::World::Spatial::Math::CVector3*)cameraPos, timeSinceLastFrame, viewPort, mainCamera);
					else
						ptrNativeObject->update(*(EarthView::World::Spatial::Math::CDegree*)lon, *(EarthView::World::Spatial::Math::CDegree*)lat, alt, *(EarthView::World::Spatial::Math::CVector3*)cameraLookDir, *(EarthView::World::Spatial::Math::CVector3*)cameraPos, timeSinceLastFrame, viewPort, mainCamera);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_update_void_CDegree_CDegree_ev_real64_CVector3_CVector3_ev_real32_CViewport_ev_bool_NoVirtual(void *pObjectXXXX, _in void* lon, _in void* lat, _in ev_real64 alt, _in void* cameraLookDir, _in void* cameraPos, _in ev_real32 timeSinceLastFrame, _in EarthView::World::Graphic::CViewport* viewPort, _in ev_bool mainCamera )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::update(*(EarthView::World::Spatial::Math::CDegree*)lon, *(EarthView::World::Spatial::Math::CDegree*)lat, alt, *(EarthView::World::Spatial::Math::CVector3*)cameraLookDir, *(EarthView::World::Spatial::Math::CVector3*)cameraPos, timeSinceLastFrame, viewPort, mainCamera);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CCloudLayer* layer )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::onChildAtmosphereCloudLayerAdded(layer);
					else
						ptrNativeObject->onChildAtmosphereCloudLayerAdded(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerAdded_void_CCloudLayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CCloudLayer* layer )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::onChildAtmosphereCloudLayerAdded(layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CCloudLayer* layer )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					if (dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::onChildAtmosphereCloudLayerRemoved(layer);
					else
						ptrNativeObject->onChildAtmosphereCloudLayerRemoved(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_onChildAtmosphereCloudLayerRemoved_void_CCloudLayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Effect3D::CCloudLayer* layer )
				{
					EarthView::World::Spatial::Effect3D::CGlobeAtmosphere* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CGlobeAtmosphere::onChildAtmosphereCloudLayerRemoved(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getStringInterfacePtr_CStringInterface( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getStringInterfacePtr_CStringInterface_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getStringInterfacePtr_CStringInterface(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_create_void_CViewport( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_create_void_CViewport_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_create_void_CViewport(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudHeight_void_Real( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudHeight_void_Real_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setRealCloudHeight_void_Real(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_calcAmbientLightMultiplier_CColourValue( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_calcAmbientLightMultiplier_CColourValue_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_calcAmbientLightMultiplier_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getName_EVString_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setName_void_EVString_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXmlElement_CXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXmlElement_CXmlElement_CXmlElement_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_toXmlElement_CXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preUpdateSceneGraph_void_CSceneManager_CCamera(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_preFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_postFindVisibleObjects_void_CSceneManager_IlluminationRenderStage_CViewport(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTexturesUpdated_void_ev_size_t( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTexturesUpdated_void_ev_size_t_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTexturesUpdated_void_ev_size_t(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureCasterPreViewProj_void_CLight_CCamera_ev_size_t(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_shadowTextureReceiverPreViewProj_void_CLight_CFrustum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sortLightsAffectingFrustum_ev_bool_LightList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sceneManagerDestroyed_void_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sceneManagerDestroyed_void_CSceneManager_Callback* pCallback )
				{
					CGlobeAtmosphereProxy* ptr = dynamic_cast<CGlobeAtmosphereProxy*>((EarthView::World::Spatial::Effect3D::CGlobeAtmosphere*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CGlobeAtmosphere_sceneManagerDestroyed_void_CSceneManager(pCallback);
					}
				}
				typedef EarthView::World::Spatial::Spatial3D::IAtmosphere*  ( _stdcall EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* pScene);
				typedef EarthView::World::Spatial::Spatial3D::IAtmosphere*  ( _stdcall EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback)(_in char*& strXml, _in EarthView::World::Graphic::CSceneManager* pScene);
				typedef EarthView::World::Spatial::Spatial3D::IAtmosphere*  ( _stdcall EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback)(_inout void* element, _in EarthView::World::Graphic::CSceneManager* pScene);
				typedef void  ( _stdcall EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback)(_in EarthView::World::Spatial::Spatial3D::IAtmosphere* environment);
				class CAtmosphereFactoryProxy : public EarthView::World::Spatial::Effect3D::CAtmosphereFactory
				{
				private:
					EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback* m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback;
					EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback* m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback;
					EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback* m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback;
					EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback* m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback;
				public:
					CAtmosphereFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CAtmosphereFactory(pList)
					{
						m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager(EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager(EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager(EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere(EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(_in EarthView::World::Graphic::CSceneManager* pScene)
					{
						if(m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Spatial3D::IAtmosphere* returnValue = m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback(pScene);
							return returnValue;
						}
						else
							return this->CAtmosphereFactory::createInstance(pScene);
					}
					virtual EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(_in const EVString& strXml, _in EarthView::World::Graphic::CSceneManager* pScene)
					{
						if(m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							char* strXml_Char = strXml.makeBuffer();
							EarthView::World::Spatial::Spatial3D::IAtmosphere* returnValue = m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback(strXml_Char, pScene);
							return returnValue;
						}
						else
							return this->CAtmosphereFactory::createInstance(strXml, pScene);
					}
					virtual EarthView::World::Spatial::Spatial3D::IAtmosphere* createInstance(_inout EarthView::World::Core::CXmlElement& element, _in EarthView::World::Graphic::CSceneManager* pScene)
					{
						if(m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Spatial3D::IAtmosphere* returnValue = m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback(&element, pScene);
							return returnValue;
						}
						else
							return this->CAtmosphereFactory::createInstance(element, pScene);
					}
					virtual void destroyInstance(_in EarthView::World::Spatial::Spatial3D::IAtmosphere* environment)
					{
						if(m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback(environment);
						}
						else
							return this->CAtmosphereFactory::destroyInstance(environment);
					}
				};
				REGISTER_FACTORY_CLASS(CAtmosphereFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Spatial3D::IAtmosphere*  _stdcall EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pScene )
				{
					EarthView::World::Spatial::Effect3D::CAtmosphereFactory* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjectXXXX;
					if (dynamic_cast<CAtmosphereFactoryProxy*>((EarthView::World::Spatial::Effect3D::CAtmosphereFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->EarthView::World::Spatial::Effect3D::CAtmosphereFactory::createInstance(pScene);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->createInstance(pScene);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_Callback* pCallback )
				{
					CAtmosphereFactoryProxy* ptr = dynamic_cast<CAtmosphereFactoryProxy*>((EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Spatial3D::IAtmosphere*  _stdcall EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pScene )
				{
					EarthView::World::Spatial::Effect3D::CAtmosphereFactory* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjectXXXX;
					EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->EarthView::World::Spatial::Effect3D::CAtmosphereFactory::createInstance(pScene);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Spatial3D::IAtmosphere*  _stdcall EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager(void *pObjectXXXX, _in const char* strXml, _in EarthView::World::Graphic::CSceneManager* pScene )
				{
					EarthView::World::Core::ev_string strXml1 = strXml;
					EarthView::World::Spatial::Effect3D::CAtmosphereFactory* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjectXXXX;
					if (dynamic_cast<CAtmosphereFactoryProxy*>((EarthView::World::Spatial::Effect3D::CAtmosphereFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->EarthView::World::Spatial::Effect3D::CAtmosphereFactory::createInstance(strXml1, pScene);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->createInstance(strXml1, pScene);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_Callback* pCallback )
				{
					CAtmosphereFactoryProxy* ptr = dynamic_cast<CAtmosphereFactoryProxy*>((EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Spatial3D::IAtmosphere*  _stdcall EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_EVString_CSceneManager_NoVirtual(void *pObjectXXXX, _in const char* strXml, _in EarthView::World::Graphic::CSceneManager* pScene )
				{
					EarthView::World::Core::ev_string strXml1 = strXml;
					EarthView::World::Spatial::Effect3D::CAtmosphereFactory* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjectXXXX;
					EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->EarthView::World::Spatial::Effect3D::CAtmosphereFactory::createInstance(strXml1, pScene);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Spatial3D::IAtmosphere*  _stdcall EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager(void *pObjectXXXX, _inout void* element, _in EarthView::World::Graphic::CSceneManager* pScene )
				{
					EarthView::World::Spatial::Effect3D::CAtmosphereFactory* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjectXXXX;
					if (dynamic_cast<CAtmosphereFactoryProxy*>((EarthView::World::Spatial::Effect3D::CAtmosphereFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->EarthView::World::Spatial::Effect3D::CAtmosphereFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element, pScene);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element, pScene);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_Callback* pCallback )
				{
					CAtmosphereFactoryProxy* ptr = dynamic_cast<CAtmosphereFactoryProxy*>((EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Spatial3D::IAtmosphere*  _stdcall EarthView_World_Spatial_Effect3D_CAtmosphereFactory_createInstance_IAtmosphere_CXmlElement_CSceneManager_NoVirtual(void *pObjectXXXX, _inout void* element, _in EarthView::World::Graphic::CSceneManager* pScene )
				{
					EarthView::World::Spatial::Effect3D::CAtmosphereFactory* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjectXXXX;
					EarthView::World::Spatial::Spatial3D::IAtmosphere* objXXXX = ptrNativeObject->EarthView::World::Spatial::Effect3D::CAtmosphereFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element, pScene);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere(void *pObjectXXXX, _in EarthView::World::Spatial::Spatial3D::IAtmosphere* environment )
				{
					EarthView::World::Spatial::Effect3D::CAtmosphereFactory* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjectXXXX;
					if (dynamic_cast<CAtmosphereFactoryProxy*>((EarthView::World::Spatial::Effect3D::CAtmosphereFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Effect3D::CAtmosphereFactory::destroyInstance(environment);
					else
						ptrNativeObject->destroyInstance(environment);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere( void *pObjectXXXX, EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere_Callback* pCallback )
				{
					CAtmosphereFactoryProxy* ptr = dynamic_cast<CAtmosphereFactoryProxy*>((EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Effect3D_CAtmosphereFactory_destroyInstance_void_IAtmosphere_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Spatial3D::IAtmosphere* environment )
				{
					EarthView::World::Spatial::Effect3D::CAtmosphereFactory* ptrNativeObject = (EarthView::World::Spatial::Effect3D::CAtmosphereFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Effect3D::CAtmosphereFactory::destroyInstance(environment);
				}
			}
		}
	}
}
