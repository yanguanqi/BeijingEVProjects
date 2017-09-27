/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/scenemanagerenumerator.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef const void*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManagerFactory_getMetaData_SceneManagerMetaData_Callback)();
			typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManagerFactory_createInstance_CSceneManager_EVString_Callback)(_in char*& instanceName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManagerFactory_destroyInstance_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* instance);
			class CDefaultSceneManagerFactoryProxy : public EarthView::World::Graphic::CDefaultSceneManagerFactory
			{
			private:
				EarthView_World_Graphic_CDefaultSceneManagerFactory_getMetaData_SceneManagerMetaData_Callback* m_EarthView_World_Graphic_CDefaultSceneManagerFactory_getMetaData_SceneManagerMetaData_Callback;
				EarthView_World_Graphic_CDefaultSceneManagerFactory_createInstance_CSceneManager_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManagerFactory_createInstance_CSceneManager_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManagerFactory_destroyInstance_void_CSceneManager_Callback* m_EarthView_World_Graphic_CDefaultSceneManagerFactory_destroyInstance_void_CSceneManager_Callback;
			public:
				CDefaultSceneManagerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultSceneManagerFactory(pList)
				{
					m_EarthView_World_Graphic_CDefaultSceneManagerFactory_getMetaData_SceneManagerMetaData_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManagerFactory_createInstance_CSceneManager_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManagerFactory_destroyInstance_void_CSceneManager_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManagerFactory_getMetaData_SceneManagerMetaData(EarthView_World_Graphic_CDefaultSceneManagerFactory_getMetaData_SceneManagerMetaData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManagerFactory_getMetaData_SceneManagerMetaData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManagerFactory_createInstance_CSceneManager_EVString(EarthView_World_Graphic_CDefaultSceneManagerFactory_createInstance_CSceneManager_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManagerFactory_createInstance_CSceneManager_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManagerFactory_destroyInstance_void_CSceneManager(EarthView_World_Graphic_CDefaultSceneManagerFactory_destroyInstance_void_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManagerFactory_destroyInstance_void_CSceneManager_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CSceneManager* createInstance(_in const EVString& instanceName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManagerFactory_createInstance_CSceneManager_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* instanceName_Char = instanceName.makeBuffer();
						EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Graphic_CDefaultSceneManagerFactory_createInstance_CSceneManager_EVString_Callback(instanceName_Char);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultSceneManagerFactory::createInstance(instanceName);
				}
				virtual void destroyInstance(_in EarthView::World::Graphic::CSceneManager* instance)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManagerFactory_destroyInstance_void_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManagerFactory_destroyInstance_void_CSceneManager_Callback(instance);
					}
					else
						return this->CDefaultSceneManagerFactory::destroyInstance(instance);
				}
				virtual const EarthView::World::Graphic::SceneManagerMetaData& getMetaData() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManagerFactory_getMetaData_SceneManagerMetaData_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::SceneManagerMetaData& returnValue = *(EarthView::World::Graphic::SceneManagerMetaData*)m_EarthView_World_Graphic_CDefaultSceneManagerFactory_getMetaData_SceneManagerMetaData_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManagerFactory::getMetaData();
				}
			};
			REGISTER_FACTORY_CLASS(CDefaultSceneManagerFactoryProxy);
			extern "C" EV_DLL_EXPORT  const char*  _stdcall Get_EarthView_World_Graphic_CDefaultSceneManagerFactory_FACTORY_TYPE_NAME()
			{
				const EVString objXXXX = EarthView::World::Graphic::CDefaultSceneManagerFactory::FACTORY_TYPE_NAME;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CDefaultSceneManagerFactory_createInstance_CSceneManager_EVString(void *pObjectXXXX, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::CDefaultSceneManagerFactory* ptrNativeObject = (EarthView::World::Graphic::CDefaultSceneManagerFactory*) pObjectXXXX;
				if (dynamic_cast<CDefaultSceneManagerFactoryProxy*>((EarthView::World::Graphic::CDefaultSceneManagerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultSceneManagerFactory::createInstance(instanceName1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->createInstance(instanceName1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManagerFactory_createInstance_CSceneManager_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManagerFactory_createInstance_CSceneManager_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerFactoryProxy* ptr = dynamic_cast<CDefaultSceneManagerFactoryProxy*>((EarthView::World::Graphic::CDefaultSceneManagerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManagerFactory_createInstance_CSceneManager_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CDefaultSceneManagerFactory_createInstance_CSceneManager_EVString_NoVirtual(void *pObjectXXXX, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::CDefaultSceneManagerFactory* ptrNativeObject = (EarthView::World::Graphic::CDefaultSceneManagerFactory*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultSceneManagerFactory::createInstance(instanceName1);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultSceneManagerFactory_destroyInstance_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* instance )
			{
				EarthView::World::Graphic::CDefaultSceneManagerFactory* ptrNativeObject = (EarthView::World::Graphic::CDefaultSceneManagerFactory*) pObjectXXXX;
				if (dynamic_cast<CDefaultSceneManagerFactoryProxy*>((EarthView::World::Graphic::CDefaultSceneManagerFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDefaultSceneManagerFactory::destroyInstance(instance);
				else
					ptrNativeObject->destroyInstance(instance);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManagerFactory_destroyInstance_void_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManagerFactory_destroyInstance_void_CSceneManager_Callback* pCallback )
			{
				CDefaultSceneManagerFactoryProxy* ptr = dynamic_cast<CDefaultSceneManagerFactoryProxy*>((EarthView::World::Graphic::CDefaultSceneManagerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManagerFactory_destroyInstance_void_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultSceneManagerFactory_destroyInstance_void_CSceneManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* instance )
			{
				EarthView::World::Graphic::CDefaultSceneManagerFactory* ptrNativeObject = (EarthView::World::Graphic::CDefaultSceneManagerFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDefaultSceneManagerFactory::destroyInstance(instance);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManagerFactory_getMetaData_SceneManagerMetaData( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManagerFactory_getMetaData_SceneManagerMetaData_Callback* pCallback )
			{
				CDefaultSceneManagerFactoryProxy* ptr = dynamic_cast<CDefaultSceneManagerFactoryProxy*>((EarthView::World::Graphic::CDefaultSceneManagerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManagerFactory_getMetaData_SceneManagerMetaData(pCallback);
				}
			}
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_initRenderQueue_void_Callback)();
			typedef const EarthView::World::Graphic::CPass*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_deriveShadowCasterPass_CPass_CPass_Callback)(_in const EarthView::World::Graphic::CPass* pass);
			typedef const EarthView::World::Graphic::CPass*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback)(_in const EarthView::World::Graphic::CPass* pass);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_validatePassForRendering_ev_bool_CPass_Callback)(_in const EarthView::World::Graphic::CPass* pass);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback)(_in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CRenderable* rend);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback)(_in int bp, _in Real distance, _in const void* orientation, _in char*& groupName);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback)(_in int bp, _in Real curvature, _in Real tiling, _in Real distance, _in const void* orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ySegmentsToKeep, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback)(_in const EarthView::World::Graphic::CRenderable* pRend, _in ev_bool fixedFunction);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_resetViewProjMode_void_ev_bool_Callback)(_in ev_bool fixedFunction);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_firePreRenderQueues_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_firePostRenderQueues_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback)(_in ev_uint8 id, _in char*& invocation);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback)(_in ev_uint8 id, _in char*& invocation);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback)(_in ev_uint64  numberOfShadowTextures);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback)(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* camera, _in ev_uint64  iteration);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback)(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CFrustum* f);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* camera);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* camera);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_firePreFindVisibleObjects_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* v);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_firePostFindVisibleObjects_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* v);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_fireSceneManagerDestroyed_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setViewport_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* vp);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsDefaultSequence_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback)(_in EarthView::World::Graphic::CRenderQueueInvocationSequence* s);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_prepareRenderQueue_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration);
			typedef EarthView::World::Graphic::CAutoParamDataSource*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_findLightsAffectingFrustum_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* camera);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_initShadowVolumeMaterials_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_ensureShadowTexturesCreated_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyShadowTextures_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback)(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::LightList* lightList);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback)(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CViewport* vp);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback)(_in const void* matPtr);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback)(_in const ev_bool& useDefaultMat);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSunPosition_CVector3_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setAtmosphereVisible_void_ev_bool_Callback)(_in const ev_bool& visible);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_storeAtmosphereVisibleState_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_restoreAtmosphereVisibleState_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSunVisible_void_ev_bool_Callback)(_in ev_bool flag);
			typedef EarthView::World::Graphic::CSceneManager::RenderContext*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__pauseRendering_RenderContext_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__resumeRendering_void_RenderContext_Callback)(_in EarthView::World::Graphic::CSceneManager::RenderContext* context);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback)(_in const EarthView::World::Graphic::CLight* light, _in const EarthView::World::Graphic::CCamera* cam, _in ev_bool calcScissor);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback)(_in ev_bool secondpass, _in ev_bool zfail, _in ev_bool twosided);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback)(_in const EarthView::World::Graphic::CLight* light, _in const EarthView::World::Graphic::CCamera* camera);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* pGroup, _in int om);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in int om);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in int om);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in int om);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in int om);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in int om);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in int om);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback)(_in const void* objs, _in int om, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback)(_in const void* objs, _in int om, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback)(_in const void* objs, _in int om, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback)(_in const void* objs, _in int om, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueSplitOptions_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in ev_bool suppressShadows, _in ev_bool suppressRenderState);
			typedef int  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback)(_in const void* ll, _in const EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback)(_in const EarthView::World::Graphic::CLight* l, _in const EarthView::World::Graphic::CCamera* cam, _inout void* rect);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_resetScissor_void_Callback)();
			typedef int  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback)(_in const void* ll);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_buildLightClip_void_CLight_PlaneList_Callback)(_in const EarthView::World::Graphic::CLight* l, _inout void* planes);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_resetLightClip_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_checkCachedLightClippingInfo_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_useLights_void_LightList_ev_uint16_Callback)(_in const void* lights, _in ev_uint16 limit);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setViewMatrix_void_CMatrix4_Callback)(_in const void* m);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback)(_in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::LightList* lights);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_bindGpuProgram_void_CGpuProgram_Callback)(_in EarthView::World::Graphic::CGpuProgram* prog);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_updateGpuProgramParameters_void_CPass_Callback)(_in const EarthView::World::Graphic::CPass* p);
			typedef char*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getTypeName_EVString_Callback)();
			typedef EarthView::World::Graphic::CCamera*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createCamera_CCamera_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CCamera*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getCamera_CCamera_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_hasCamera_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyAllCameras_void_Callback)();
			typedef EarthView::World::Graphic::CLight*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CLight*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_Callback)();
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getLightCount_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CLight*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_ev_uint16_Callback)(_in ev_uint16 index);
			typedef EarthView::World::Graphic::CLight*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_hasLight_ev_bool_EVString_Callback)(_in char*& name);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback)(_in EarthView::World::Graphic::CLight* l);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback)(_in EarthView::World::Graphic::CLight* l, _in const EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_CLight_Callback)(_in EarthView::World::Graphic::CLight* light);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyAllLights_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowTexName_EVString_Callback)();
			typedef EarthView::World::Graphic::CCamera*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShadowTexCam_CCamera_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback)();
			typedef float  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback)(_in ev_uint8 index);
			typedef float  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback)(_in ev_uint8 index);
			typedef bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback)(_in bool flag);
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getCurrentClipIndex_ev_uint8_Callback)();
			typedef bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowTechnique_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback)(_in bool flag);
			typedef float  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsPercent_float_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsPercent_void_float_Callback)(_in float percent);
			typedef int  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback)(_in ev_uint8 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback)(_in ev_uint8 index, _in ev_uint8 distance);
			typedef int  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* camera);
			typedef bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_hasShadowCasterInFrustum_bool_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowLightBleedPower_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowLightBleedPower_void_Real_Callback)(_in Real power);
			typedef Real  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowDepthOffset_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowDepthOffset_void_Real_Callback)(_in Real offset);
			typedef float  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNormalFactor_float_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowNormalFactor_void_float_Callback)(_in float factor);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__notifyLightsDirty_void_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__getLightsAffectingFrustum_LightList_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback)(_in const void* position, _in Real radius, _inout void* destList, _in ev_uint32 lightMask);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_Callback)(_in const void* position, _in Real radius, _inout void* destList);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_showImage_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getImageVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_showOcean_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getOceanVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback)(_in const EarthView::World::Graphic::CSceneNode* sn, _in Real radius, _inout void* destList, _in ev_uint32 lightMask);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback)(_in const EarthView::World::Graphic::CSceneNode* sn, _in Real radius, _inout void* destList);
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_CSceneNode_Callback)(_in EarthView::World::Graphic::CSceneNode* sn);
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getRootSceneNode_CSceneNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSceneNode_CSceneNode_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_hasSceneNode_ev_bool_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback)(_in char*& entityName, _in char*& meshName, _in const void* subentityIndics, _in char*& groupName);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback)(_in char*& entityName, _in char*& meshName, _in char*& groupName);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback)(_in char*& entityName, _in char*& meshName, _in const void* subentityIndics);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_Callback)(_in char*& entityName, _in char*& meshName);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback)(_in char*& entityName, _in const void* pMesh, _in const void* subentityIndics);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback)(_in char*& entityName, _in const void* pMesh);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback)(_in const void* pMesh, _in const void* subentityIndics);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_Callback)(_in const void* pMesh);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_IntVector_Callback)(_in char*& meshName, _in const void* subentityIndics);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_Callback)(_in char*& meshName);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_PrefabType_Callback)(_in char*& entityName, _in int ptype);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_PrefabType_Callback)(_in int ptype);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getEntity_CEntity_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_hasEntity_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_CEntity_Callback)(_in EarthView::World::Graphic::CEntity* ent);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyAllEntities_void_Callback)();
			typedef EarthView::World::Graphic::CManualObject*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CManualObject*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_Callback)();
			typedef EarthView::World::Graphic::CManualObject*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getManualObject_CManualObject_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_hasManualObject_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_CManualObject_Callback)(_in EarthView::World::Graphic::CManualObject* obj);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyAllManualObjects_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_usingWebMercator_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CBillboardChain*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CBillboardChain*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_Callback)();
			typedef EarthView::World::Graphic::CBillboardChain*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getBillboardChain_CBillboardChain_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_hasBillboardChain_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_CBillboardChain_Callback)(_in EarthView::World::Graphic::CBillboardChain* obj);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardChains_void_Callback)();
			typedef EarthView::World::Graphic::CRibbonTrail*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CRibbonTrail*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_Callback)();
			typedef EarthView::World::Graphic::CRibbonTrail*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_hasRibbonTrail_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback)(_in EarthView::World::Graphic::CRibbonTrail* obj);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyAllRibbonTrails_void_Callback)();
			typedef EarthView::World::Graphic::CParticleSystem*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback)(_in char*& name, _in char*& templateName);
			typedef EarthView::World::Graphic::CParticleSystem*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback)(_in char*& name, _in ev_uint64  quota, _in char*& resourceGroup);
			typedef EarthView::World::Graphic::CParticleSystem*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback)(_in char*& name, _in ev_uint64  quota);
			typedef EarthView::World::Graphic::CParticleSystem*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CParticleSystem*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback)(_in ev_uint64  quota, _in char*& resourceGroup);
			typedef EarthView::World::Graphic::CParticleSystem*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback)(_in ev_uint64  quota);
			typedef EarthView::World::Graphic::CParticleSystem*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_Callback)();
			typedef EarthView::World::Graphic::CParticleSystem*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getParticleSystem_CParticleSystem_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_hasParticleSystem_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_CParticleSystem_Callback)(_in EarthView::World::Graphic::CParticleSystem* obj);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyAllParticleSystems_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_clearScene_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_EVString_Callback)(_in char*& filename);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback)(_inout void* stream, _in char*& typeName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback)(_inout void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_EVString_Callback)(_in char*& filename);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback)(_inout void* stream, _in char*& typeName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_Callback)(_inout void* stream);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback)(_in char*& filename);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback)(_inout void* stream, _in char*& typeName);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback)(_inout void* stream);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback)(_in ev_bool random);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setOption_ev_bool_EVString_void_Callback)(_in char*& strKey, _in const void* pValue);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getOption_ev_bool_EVString_void_Callback)(_in char*& strKey, _in void* pDestValue);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_hasOption_ev_bool_EVString_Callback)(_in char*& strKey);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback)(_in char*& strKey, _inout void* refValueList);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getOptionKeys_ev_bool_StringVector_Callback)(_inout void* refKeys);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__updateSceneGraph_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback)(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool onlyShadowCasters);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__applySceneAnimations_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__renderVisibleObjects_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback)(_in EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Graphic::CViewport* vp, _in ev_bool includeOverlays);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__queueSkiesForRendering_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback)(_in EarthView::World::Graphic::CRenderSystem* ref_sys);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst, _in Real bow, _in ev_int32 xsegments, _in ev_int32 ysegments, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst, _in Real bow, _in ev_int32 xsegments, _in ev_int32 ysegments);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst, _in Real bow, _in ev_int32 xsegments);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst, _in Real bow);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue, _in Real bow, _in ev_int32 xsegments, _in ev_int32 ysegments, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue, _in Real bow, _in ev_int32 xsegments, _in ev_int32 ysegments);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue, _in Real bow, _in ev_int32 xsegments);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue, _in Real bow);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_isSkyPlaneEnabled_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneNode_CSceneNode_Callback)();
			typedef const EarthView::World::Graphic::CSceneManager::SkyPlaneGenParameters&  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback)(_in ev_bool enable, _in char*& materialName, _in Real distance, _in ev_bool drawFirst, _in const void* orientation, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback)(_in ev_bool enable, _in char*& materialName, _in Real distance, _in ev_bool drawFirst, _in const void* orientation);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback)(_in ev_bool enable, _in char*& materialName, _in Real distance, _in ev_bool drawFirst);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback)(_in ev_bool enable, _in char*& materialName, _in Real distance);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Callback)(_in ev_bool enable, _in char*& materialName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback)(_in ev_bool enable, _in char*& materialName, _in Real distance, _in ev_uint8 renderQueue, _in const void* orientation, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback)(_in ev_bool enable, _in char*& materialName, _in Real distance, _in ev_uint8 renderQueue, _in const void* orientation);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback)(_in ev_bool enable, _in char*& materialName, _in Real distance, _in ev_uint8 renderQueue);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback)(_in ev_bool enable, _in char*& materialName, _in Real distance);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Callback)(_in ev_bool enable, _in char*& materialName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyBoxEnabled_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_isSkyBoxEnabled_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxNode_CSceneNode_Callback)();
			typedef const EarthView::World::Graphic::CSceneManager::SkyBoxGenParameters&  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const void* orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ysegments_keep, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const void* orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ysegments_keep);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const void* orientation, _in ev_int32 xsegments, _in ev_int32 ysegments);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const void* orientation, _in ev_int32 xsegments);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const void* orientation);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Callback)(_in ev_bool enable, _in char*& materialName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const void* orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ysegments_keep, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const void* orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ysegments_keep);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const void* orientation, _in ev_int32 xsegments, _in ev_int32 ysegments);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const void* orientation, _in ev_int32 xsegments);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const void* orientation);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Callback)(_in ev_bool enable, _in char*& materialName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSkyDomeEnabled_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_isSkyDomeEnabled_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeNode_CSceneNode_Callback)();
			typedef const EarthView::World::Graphic::CSceneManager::SkyDomeGenParameters&  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback)();
			typedef int  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getFogMode_FogMode_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getFogColour_CColourValue_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getFogStart_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getFogEnd_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getFogDensity_Real_Callback)();
			typedef EarthView::World::Graphic::CBillboardSet*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback)(_in char*& name, _in ev_uint32 poolSize);
			typedef EarthView::World::Graphic::CBillboardSet*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CBillboardSet*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback)(_in ev_uint32 poolSize);
			typedef EarthView::World::Graphic::CBillboardSet*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_Callback)();
			typedef EarthView::World::Graphic::CBillboardSet*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getBillboardSet_CBillboardSet_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_hasBillboardSet_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_CBillboardSet_Callback)(_in EarthView::World::Graphic::CBillboardSet* set);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardSets_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setDisplaySceneNodes_void_ev_bool_Callback)(_in ev_bool display);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getDisplaySceneNodes_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createAnimation_CAnimation_EVString_Real_Callback)(_in char*& name, _in Real length);
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getAnimation_CAnimation_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_hasAnimation_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyAnimation_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimations_void_Callback)();
			typedef EarthView::World::Graphic::CAnimationState*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createAnimationState_CAnimationState_EVString_Callback)(_in char*& animName);
			typedef EarthView::World::Graphic::CAnimationState*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getAnimationState_CAnimationState_EVString_Callback)(_in char*& animName);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_hasAnimationState_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyAnimationState_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimationStates_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderOperation* rend, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const void* worldMatrix, _in const void* viewMatrix, _in const void* projMatrix, _in ev_bool doBeginEndFrame);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback)(_in EarthView::World::Graphic::CRenderOperation* rend, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const void* worldMatrix, _in const void* viewMatrix, _in const void* projMatrix);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const void* viewMatrix, _in const void* projMatrix, _in ev_bool doBeginEndFrame, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const void* viewMatrix, _in const void* projMatrix, _in ev_bool doBeginEndFrame, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const void* viewMatrix, _in const void* projMatrix, _in ev_bool doBeginEndFrame, _in ev_bool lightScissoringClipping);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const void* viewMatrix, _in const void* projMatrix, _in ev_bool doBeginEndFrame);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const void* viewMatrix, _in const void* projMatrix);
			typedef EarthView::World::Graphic::CRenderQueue*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getRenderQueue_CRenderQueue_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback)(_in EarthView::World::Graphic::CRenderQueueListener* ref_newListener);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback)(_in EarthView::World::Graphic::CRenderQueueListener* delListener);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback)(_in EarthView::World::Graphic::CRenderObjectListener* ref_newListener);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback)(_in EarthView::World::Graphic::CRenderObjectListener* delListener);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback)(_in ev_uint8 qid);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback)(_in ev_uint8 qid);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_clearSpecialCaseRenderQueues_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback)(_in int mode);
			typedef int  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback)(_in ev_uint8 qid);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback)(_in ev_uint8 qid);
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_showBoundingBoxes_void_ev_bool_Callback)(_in ev_bool bShow);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShowBoundingBoxes_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback)(_in EarthView::World::Graphic::CSceneNode* node, _in ev_bool autoTrack);
			typedef EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback)(_in const void* box, _in ev_uint32 mask);
			typedef EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_Callback)(_in const void* box);
			typedef EarthView::World::Graphic::CSphereSceneQuery*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback)(_in const void* sphere, _in ev_uint32 mask);
			typedef EarthView::World::Graphic::CSphereSceneQuery*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_Callback)(_in const void* sphere);
			typedef EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback)(_in const void* volumes, _in ev_uint32 mask);
			typedef EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_Callback)(_in const void* volumes);
			typedef EarthView::World::Graphic::CRaySceneQuery*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback)(_in const void* ray, _in ev_uint32 mask);
			typedef EarthView::World::Graphic::CRaySceneQuery*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_Callback)(_in const void* ray);
			typedef EarthView::World::Graphic::CIntersectionSceneQuery*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef EarthView::World::Graphic::CIntersectionSceneQuery*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyQuery_void_CSceneQuery_Callback)(_in EarthView::World::Graphic::CSceneQuery* query);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTechnique_void_ShadowTechnique_Callback)(_in int technique);
			typedef int  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShadowTechnique_ShadowTechnique_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShowDebugShadows_void_ev_bool_Callback)(_in ev_bool debug);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShowDebugShadows_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowColour_void_CColourValue_Callback)(_in const void* colour);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShadowColour_CColourValue_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowColorRRatio_void_Real_Callback)(_in Real rRatio);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowColorGRatio_void_Real_Callback)(_in Real gRatio);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowColorBRatio_void_Real_Callback)(_in Real bRatio);
			typedef Real  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShadowColorRRatio_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShadowColorGRatio_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShadowColorBRatio_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowFarDistance_void_Real_Callback)(_in Real distance);
			typedef Real  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistance_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistanceSquared_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback)(_in ev_uint64  size);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShadowIndexBufferSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSize_void_ev_uint16_Callback)(_in ev_uint16 size);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback)(_in ev_uint64  shadowIndex, _in ev_uint16 width, _in ev_uint16 height, _in int format);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback)(_in ev_uint64  shadowIndex, _in ev_uint16 width, _in ev_uint16 height, _in int format, _in ev_uint16 fsaa);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback)(_in ev_uint64  shadowIndex, _in ev_uint16 width, _in ev_uint16 height, _in int format, _in ev_uint16 fsaa, _in ev_uint16 depthBufferPoolId);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback)(_in ev_uint64  shadowIndex, _in const void* config);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback)(_in int fmt);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback)(_in ev_uint16 fsaa);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCount_void_ev_size_t_Callback)(_in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback)(_in ev_uint16 size, _in ev_uint16 count);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback)(_in ev_uint16 size, _in ev_uint16 count, _in int fmt);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback)(_in ev_uint16 size, _in ev_uint16 count, _in int fmt, _in ev_uint16 fsaa);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback)(_in ev_uint16 size, _in ev_uint16 count, _in int fmt, _in ev_uint16 fsaa, _in ev_uint16 depthBufferPoolId);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback)(_in ev_uint64  shadowIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowDirLightTextureOffset_void_Real_Callback)(_in Real offset);
			typedef Real  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShadowDirLightTextureOffset_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeStart_void_Real_Callback)(_in Real fadeStart);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeEnd_void_Real_Callback)(_in Real fadeEnd);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback)(_in ev_bool selfShadow);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShadowTextureSelfShadow_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback)(_in ev_bool bf);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback)(_in const void* shadowSetup);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueModulative_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueAdditive_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueInUse_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback)(_in EarthView::World::Graphic::CCompositorChain* chain);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setLateMaterialResolving_void_ev_bool_Callback)(_in ev_bool isLate);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_isLateMaterialResolving_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CCompositorChain*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__getActiveCompositorChain_CCompositorChain_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_addListener_void_CSceneManagerListener_Callback)(_in EarthView::World::Graphic::CSceneManager::CSceneManagerListener* ref_s);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_removeListener_void_CSceneManagerListener_Callback)(_in EarthView::World::Graphic::CSceneManager::CSceneManagerListener* s);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_existListener_ev_bool_CSceneManagerListener_Callback)(_in EarthView::World::Graphic::CSceneManager::CSceneManagerListener* s);
			typedef EarthView::World::Graphic::CStaticGeometry*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CStaticGeometry*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_hasStaticGeometry_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback)(_in EarthView::World::Graphic::CStaticGeometry* geom);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyAllStaticGeometry_void_Callback)();
			typedef EarthView::World::Graphic::CInstancedGeometry*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CInstancedGeometry*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback)(_in EarthView::World::Graphic::CInstancedGeometry* geom);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstancedGeometry_void_Callback)();
			typedef EarthView::World::Graphic::CInstanceManager*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback)(_in char*& customName, _in char*& meshName, _in char*& groupName, _in int technique, _in ev_uint64  numInstancesPerBatch, _in ev_uint16 flags, _in ev_uint16 subMeshIdx);
			typedef EarthView::World::Graphic::CInstanceManager*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback)(_in char*& customName, _in char*& meshName, _in char*& groupName, _in int technique, _in ev_uint64  numInstancesPerBatch, _in ev_uint16 flags);
			typedef EarthView::World::Graphic::CInstanceManager*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback)(_in char*& customName, _in char*& meshName, _in char*& groupName, _in int technique, _in ev_uint64  numInstancesPerBatch);
			typedef EarthView::World::Graphic::CInstanceManager*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getInstanceManager_CInstanceManager_EVString_Callback)(_in char*& managerName);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_hasInstanceManager_ev_bool_EVString_Callback)(_in char*& managerName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_CInstanceManager_Callback)(_in EarthView::World::Graphic::CInstanceManager* instanceManager);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback)(_in EarthView::World::Graphic::CInstanceManager* instanceManager);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstanceManagers_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback)(_in char*& meshName, _in char*& groupName, _in char*& materialName, _in int technique, _in ev_uint64  numInstancesPerBatch);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback)(_in char*& meshName, _in char*& groupName, _in char*& materialName, _in int technique, _in ev_uint64  numInstancesPerBatch, _in ev_uint16 flags);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback)(_in char*& meshName, _in char*& groupName, _in char*& materialName, _in int technique, _in ev_uint64  numInstancesPerBatch, _in ev_uint16 flags, _in ev_uint16 subMeshIdx);
			typedef EarthView::World::Graphic::CInstancedEntity*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback)(_in char*& materialName, _in char*& managerName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback)(_in EarthView::World::Graphic::CInstancedEntity* instancedEntity);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback)(_in char*& name, _in char*& typeName, _in const EarthView::World::Core::CommonStringPairList* params);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback)(_in char*& name, _in char*& typeName);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback)(_in char*& typeName, _in const EarthView::World::Core::CommonStringPairList* params);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_Callback)(_in char*& typeName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_EVString_EVString_Callback)(_in char*& name, _in char*& typeName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* m);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback)(_in char*& typeName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjects_void_Callback)();
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback)(_in char*& name, _in char*& typeName);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& typeName);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback)(_in char*& typeName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_injectMovableObject_void_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* m);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_EVString_EVString_Callback)(_in char*& name, _in char*& typeName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* m);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_extractAllMovableObjectsByType_void_EVString_Callback)(_in char*& typeName);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setVisibilityMask_void_ev_uint32_Callback)(_in ev_uint32 vmask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getVisibilityMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setFindVisibleObjects_void_ev_bool_Callback)(_in ev_bool find);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getFindVisibleObjects_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback)(_in ev_bool n);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback)(_in ev_bool n);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback)(_in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CRenderable* rend, _in ev_bool shadowDerivation, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback)(_in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CRenderable* rend, _in ev_bool shadowDerivation, _in ev_bool doLightIteration);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback)(_in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CRenderable* rend, _in ev_bool shadowDerivation);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback)(_in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CRenderable* rend);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__suppressRenderStateChanges_void_ev_bool_Callback)(_in ev_bool suppress);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback)();
			typedef const EarthView::World::Graphic::CPass*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback)(_in const EarthView::World::Graphic::CPass* pass, _in ev_bool evenIfSuppressed, _in ev_bool shadowDerivation);
			typedef const EarthView::World::Graphic::CPass*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_Callback)(_in const EarthView::World::Graphic::CPass* pass, _in ev_bool evenIfSuppressed);
			typedef const EarthView::World::Graphic::CPass*  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_Callback)(_in const EarthView::World::Graphic::CPass* pass);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__markGpuParamsDirty_void_ev_uint16_Callback)(_in ev_uint16 mask);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__suppressShadows_void_ev_bool_Callback)(_in ev_bool suppress);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__areShadowsSuppressed_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in int om);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setCameraRelativeRendering_void_ev_bool_Callback)(_in ev_bool rel);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getCameraRelativeRendering_ev_bool_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback)(_in Real latitude, _in Real lontitude, _in ev_real32 targetSamplesPerDegrees);
			typedef Real  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getBestHeightAt_Real_Real_Real_Callback)(_in Real latitude, _in Real lontitude);
			typedef Real  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getHeightAtTile_Real_Real_Real_Callback)(_in Real latitude, _in Real lontitude);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback)(_in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _inout Real& minX, _inout Real& maxX, _inout Real& minY, _inout Real& maxY);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_addTempLayer_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_removeTempLayer_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Callback)(_in bool updateImageGroup, _in bool updateFeatureGroup, _in bool updateKmlGroup);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback)(_in bool updateImageGroup, _in bool updateFeatureGroup, _in bool updateKmlGroup, _in Real minX, _in Real maxX, _in Real minY, _in Real maxY);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback)(_in ev_bool bUpdateVectorTexture, _in ev_bool bUpdateKmlTexture, _in ev_bool bUpdateTemporaryTexture, _in ev_bool bUpdateTerrain);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback)(_in ev_bool enable);
			class CDefaultSceneManagerProxy : public EarthView::World::Graphic::CDefaultSceneManager
			{
			private:
				EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_initRenderQueue_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_initRenderQueue_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_deriveShadowCasterPass_CPass_CPass_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_deriveShadowCasterPass_CPass_CPass_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_validatePassForRendering_ev_bool_CPass_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_validatePassForRendering_ev_bool_CPass_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_resetViewProjMode_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_resetViewProjMode_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_firePreRenderQueues_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_firePreRenderQueues_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_firePostRenderQueues_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_firePostRenderQueues_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_firePreFindVisibleObjects_void_CViewport_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_firePreFindVisibleObjects_void_CViewport_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_firePostFindVisibleObjects_void_CViewport_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_firePostFindVisibleObjects_void_CViewport_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_fireSceneManagerDestroyed_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_fireSceneManagerDestroyed_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setViewport_void_CViewport_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setViewport_void_CViewport_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsDefaultSequence_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsDefaultSequence_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_prepareRenderQueue_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_prepareRenderQueue_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_findLightsAffectingFrustum_void_CCamera_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_findLightsAffectingFrustum_void_CCamera_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_initShadowVolumeMaterials_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_initShadowVolumeMaterials_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_ensureShadowTexturesCreated_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_ensureShadowTexturesCreated_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyShadowTextures_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyShadowTextures_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSunPosition_CVector3_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSunPosition_CVector3_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setAtmosphereVisible_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setAtmosphereVisible_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_storeAtmosphereVisibleState_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_storeAtmosphereVisibleState_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_restoreAtmosphereVisibleState_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_restoreAtmosphereVisibleState_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSunVisible_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSunVisible_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__pauseRendering_RenderContext_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__pauseRendering_RenderContext_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__resumeRendering_void_RenderContext_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__resumeRendering_void_RenderContext_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueSplitOptions_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueSplitOptions_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_resetScissor_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_resetScissor_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_buildLightClip_void_CLight_PlaneList_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_buildLightClip_void_CLight_PlaneList_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_resetLightClip_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_resetLightClip_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_checkCachedLightClippingInfo_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_checkCachedLightClippingInfo_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_useLights_void_LightList_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_useLights_void_LightList_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setViewMatrix_void_CMatrix4_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setViewMatrix_void_CMatrix4_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_bindGpuProgram_void_CGpuProgram_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_bindGpuProgram_void_CGpuProgram_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_updateGpuProgramParameters_void_CPass_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_updateGpuProgramParameters_void_CPass_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getTypeName_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getTypeName_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createCamera_CCamera_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createCamera_CCamera_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getCamera_CCamera_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getCamera_CCamera_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_hasCamera_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_hasCamera_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_CCamera_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_CCamera_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyAllCameras_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllCameras_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getLightCount_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getLightCount_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_hasLight_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_hasLight_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_CLight_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_CLight_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyAllLights_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllLights_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowTexName_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowTexName_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShadowTexCam_CCamera_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTexCam_CCamera_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getCurrentClipIndex_ev_uint8_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getCurrentClipIndex_ev_uint8_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowTechnique_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowTechnique_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsPercent_float_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsPercent_float_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsPercent_void_float_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsPercent_void_float_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_hasShadowCasterInFrustum_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_hasShadowCasterInFrustum_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowLightBleedPower_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowLightBleedPower_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowLightBleedPower_void_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowLightBleedPower_void_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowDepthOffset_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowDepthOffset_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowDepthOffset_void_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowDepthOffset_void_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNormalFactor_float_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNormalFactor_float_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowNormalFactor_void_float_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowNormalFactor_void_float_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__notifyLightsDirty_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__notifyLightsDirty_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__getLightsAffectingFrustum_LightList_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__getLightsAffectingFrustum_LightList_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_showImage_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_showImage_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getImageVisible_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getImageVisible_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_showOcean_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_showOcean_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getOceanVisible_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getOceanVisible_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_CSceneNode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_CSceneNode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getRootSceneNode_CSceneNode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getRootSceneNode_CSceneNode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSceneNode_CSceneNode_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSceneNode_CSceneNode_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_hasSceneNode_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_hasSceneNode_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_IntVector_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_IntVector_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_PrefabType_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_PrefabType_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_PrefabType_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_PrefabType_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getEntity_CEntity_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getEntity_CEntity_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_hasEntity_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_hasEntity_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_CEntity_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_CEntity_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyAllEntities_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllEntities_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getManualObject_CManualObject_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getManualObject_CManualObject_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_hasManualObject_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_hasManualObject_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_CManualObject_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_CManualObject_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyAllManualObjects_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllManualObjects_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_usingWebMercator_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_usingWebMercator_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getBillboardChain_CBillboardChain_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getBillboardChain_CBillboardChain_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_hasBillboardChain_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_hasBillboardChain_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_CBillboardChain_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_CBillboardChain_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardChains_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardChains_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_hasRibbonTrail_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_hasRibbonTrail_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyAllRibbonTrails_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllRibbonTrails_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getParticleSystem_CParticleSystem_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getParticleSystem_CParticleSystem_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_hasParticleSystem_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_hasParticleSystem_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_CParticleSystem_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_CParticleSystem_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyAllParticleSystems_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllParticleSystems_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_clearScene_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_clearScene_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setOption_ev_bool_EVString_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setOption_ev_bool_EVString_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getOption_ev_bool_EVString_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getOption_ev_bool_EVString_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_hasOption_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_hasOption_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getOptionKeys_ev_bool_StringVector_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getOptionKeys_ev_bool_StringVector_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__updateSceneGraph_void_CCamera_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__updateSceneGraph_void_CCamera_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__applySceneAnimations_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__applySceneAnimations_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__renderVisibleObjects_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__renderVisibleObjects_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__queueSkiesForRendering_void_CCamera_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__queueSkiesForRendering_void_CCamera_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_isSkyPlaneEnabled_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_isSkyPlaneEnabled_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneNode_CSceneNode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneNode_CSceneNode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyBoxEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBoxEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_isSkyBoxEnabled_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_isSkyBoxEnabled_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxNode_CSceneNode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxNode_CSceneNode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSkyDomeEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDomeEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_isSkyDomeEnabled_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_isSkyDomeEnabled_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeNode_CSceneNode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeNode_CSceneNode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getFogMode_FogMode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getFogMode_FogMode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getFogColour_CColourValue_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getFogColour_CColourValue_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getFogStart_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getFogStart_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getFogEnd_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getFogEnd_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getFogDensity_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getFogDensity_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getBillboardSet_CBillboardSet_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getBillboardSet_CBillboardSet_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_hasBillboardSet_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_hasBillboardSet_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_CBillboardSet_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_CBillboardSet_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardSets_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardSets_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setDisplaySceneNodes_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setDisplaySceneNodes_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getDisplaySceneNodes_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getDisplaySceneNodes_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createAnimation_CAnimation_EVString_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createAnimation_CAnimation_EVString_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getAnimation_CAnimation_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getAnimation_CAnimation_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_hasAnimation_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_hasAnimation_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyAnimation_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyAnimation_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimations_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimations_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createAnimationState_CAnimationState_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createAnimationState_CAnimationState_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getAnimationState_CAnimationState_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getAnimationState_CAnimationState_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_hasAnimationState_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_hasAnimationState_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyAnimationState_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyAnimationState_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimationStates_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimationStates_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getRenderQueue_CRenderQueue_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getRenderQueue_CRenderQueue_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_clearSpecialCaseRenderQueues_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_clearSpecialCaseRenderQueues_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_showBoundingBoxes_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_showBoundingBoxes_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShowBoundingBoxes_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShowBoundingBoxes_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyQuery_void_CSceneQuery_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyQuery_void_CSceneQuery_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTechnique_void_ShadowTechnique_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTechnique_void_ShadowTechnique_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShadowTechnique_ShadowTechnique_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTechnique_ShadowTechnique_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShowDebugShadows_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShowDebugShadows_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShowDebugShadows_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShowDebugShadows_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowColour_void_CColourValue_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColour_void_CColourValue_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShadowColour_CColourValue_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColour_CColourValue_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowColorRRatio_void_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorRRatio_void_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowColorGRatio_void_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorGRatio_void_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowColorBRatio_void_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorBRatio_void_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShadowColorRRatio_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorRRatio_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShadowColorGRatio_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorGRatio_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShadowColorBRatio_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorBRatio_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowFarDistance_void_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowFarDistance_void_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistance_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistance_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistanceSquared_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistanceSquared_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShadowIndexBufferSize_ev_size_t_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShadowIndexBufferSize_ev_size_t_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSize_void_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSize_void_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCount_void_ev_size_t_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCount_void_ev_size_t_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowDirLightTextureOffset_void_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowDirLightTextureOffset_void_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShadowDirLightTextureOffset_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShadowDirLightTextureOffset_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeStart_void_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeStart_void_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeEnd_void_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeEnd_void_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShadowTextureSelfShadow_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTextureSelfShadow_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueModulative_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueModulative_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueAdditive_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueAdditive_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueInUse_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueInUse_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setLateMaterialResolving_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setLateMaterialResolving_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_isLateMaterialResolving_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_isLateMaterialResolving_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__getActiveCompositorChain_CCompositorChain_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__getActiveCompositorChain_CCompositorChain_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_addListener_void_CSceneManagerListener_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_addListener_void_CSceneManagerListener_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_removeListener_void_CSceneManagerListener_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_removeListener_void_CSceneManagerListener_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_existListener_ev_bool_CSceneManagerListener_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_existListener_ev_bool_CSceneManagerListener_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_hasStaticGeometry_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_hasStaticGeometry_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyAllStaticGeometry_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllStaticGeometry_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstancedGeometry_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstancedGeometry_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getInstanceManager_CInstanceManager_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getInstanceManager_CInstanceManager_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_hasInstanceManager_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_hasInstanceManager_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_CInstanceManager_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_CInstanceManager_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstanceManagers_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstanceManagers_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_EVString_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_CMovableObject_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_CMovableObject_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjects_void_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjects_void_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_injectMovableObject_void_CMovableObject_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_injectMovableObject_void_CMovableObject_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_EVString_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_CMovableObject_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_CMovableObject_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_extractAllMovableObjectsByType_void_EVString_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_extractAllMovableObjectsByType_void_EVString_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setVisibilityMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setVisibilityMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getVisibilityMask_ev_uint32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getVisibilityMask_ev_uint32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setFindVisibleObjects_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setFindVisibleObjects_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getFindVisibleObjects_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getFindVisibleObjects_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__suppressRenderStateChanges_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__suppressRenderStateChanges_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__markGpuParamsDirty_void_ev_uint16_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__markGpuParamsDirty_void_ev_uint16_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__suppressShadows_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__suppressShadows_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__areShadowsSuppressed_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__areShadowsSuppressed_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* m_EarthView_World_Graphic_CDefaultSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setCameraRelativeRendering_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setCameraRelativeRendering_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getCameraRelativeRendering_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getCameraRelativeRendering_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getBestHeightAt_Real_Real_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getBestHeightAt_Real_Real_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getHeightAtTile_Real_Real_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getHeightAtTile_Real_Real_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_addTempLayer_ev_bool_ILayer_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_addTempLayer_ev_bool_ILayer_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_removeTempLayer_ev_bool_ILayer_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_removeTempLayer_ev_bool_ILayer_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback;
			public:
				CDefaultSceneManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultSceneManager(pList)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_initRenderQueue_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_deriveShadowCasterPass_CPass_CPass_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_validatePassForRendering_ev_bool_CPass_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_resetViewProjMode_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_firePreRenderQueues_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_firePostRenderQueues_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_firePreFindVisibleObjects_void_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_firePostFindVisibleObjects_void_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_fireSceneManagerDestroyed_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setViewport_void_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsDefaultSequence_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_prepareRenderQueue_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_findLightsAffectingFrustum_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_initShadowVolumeMaterials_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_ensureShadowTexturesCreated_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyShadowTextures_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSunPosition_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setAtmosphereVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_storeAtmosphereVisibleState_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_restoreAtmosphereVisibleState_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSunVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__pauseRendering_RenderContext_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__resumeRendering_void_RenderContext_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueSplitOptions_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_resetScissor_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_buildLightClip_void_CLight_PlaneList_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_resetLightClip_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_checkCachedLightClippingInfo_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_useLights_void_LightList_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setViewMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_bindGpuProgram_void_CGpuProgram_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_updateGpuProgramParameters_void_CPass_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getTypeName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createCamera_CCamera_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getCamera_CCamera_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_hasCamera_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllCameras_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getLightCount_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_hasLight_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_CLight_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllLights_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowTexName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTexCam_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getCurrentClipIndex_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowTechnique_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsPercent_float_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsPercent_void_float_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_hasShadowCasterInFrustum_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowLightBleedPower_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowLightBleedPower_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowDepthOffset_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowDepthOffset_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNormalFactor_float_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowNormalFactor_void_float_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__notifyLightsDirty_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__getLightsAffectingFrustum_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_showImage_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getImageVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_showOcean_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getOceanVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getRootSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSceneNode_CSceneNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_hasSceneNode_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_PrefabType_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_PrefabType_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getEntity_CEntity_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_hasEntity_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_CEntity_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllEntities_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getManualObject_CManualObject_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_hasManualObject_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_CManualObject_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllManualObjects_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_usingWebMercator_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getBillboardChain_CBillboardChain_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_hasBillboardChain_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_CBillboardChain_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardChains_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_hasRibbonTrail_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllRibbonTrails_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getParticleSystem_CParticleSystem_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_hasParticleSystem_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_CParticleSystem_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllParticleSystems_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_clearScene_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setOption_ev_bool_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getOption_ev_bool_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_hasOption_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getOptionKeys_ev_bool_StringVector_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__updateSceneGraph_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__applySceneAnimations_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__renderVisibleObjects_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__queueSkiesForRendering_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_isSkyPlaneEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBoxEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_isSkyBoxEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDomeEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_isSkyDomeEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getFogMode_FogMode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getFogColour_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getFogStart_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getFogEnd_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getFogDensity_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getBillboardSet_CBillboardSet_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_hasBillboardSet_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_CBillboardSet_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardSets_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setDisplaySceneNodes_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getDisplaySceneNodes_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createAnimation_CAnimation_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getAnimation_CAnimation_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_hasAnimation_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAnimation_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimations_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createAnimationState_CAnimationState_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getAnimationState_CAnimationState_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_hasAnimationState_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAnimationState_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimationStates_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getRenderQueue_CRenderQueue_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_clearSpecialCaseRenderQueues_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_showBoundingBoxes_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShowBoundingBoxes_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyQuery_void_CSceneQuery_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTechnique_void_ShadowTechnique_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTechnique_ShadowTechnique_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShowDebugShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShowDebugShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColour_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColour_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorRRatio_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorGRatio_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorBRatio_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorRRatio_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorGRatio_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorBRatio_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowFarDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistanceSquared_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowIndexBufferSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSize_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCount_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowDirLightTextureOffset_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowDirLightTextureOffset_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeStart_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeEnd_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTextureSelfShadow_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueModulative_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueAdditive_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueInUse_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setLateMaterialResolving_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_isLateMaterialResolving_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__getActiveCompositorChain_CCompositorChain_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_addListener_void_CSceneManagerListener_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_removeListener_void_CSceneManagerListener_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_existListener_ev_bool_CSceneManagerListener_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_hasStaticGeometry_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllStaticGeometry_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstancedGeometry_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getInstanceManager_CInstanceManager_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_hasInstanceManager_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_CInstanceManager_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstanceManagers_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjects_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_injectMovableObject_void_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_extractAllMovableObjectsByType_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setVisibilityMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getVisibilityMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setFindVisibleObjects_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getFindVisibleObjects_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__suppressRenderStateChanges_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__markGpuParamsDirty_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__suppressShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__areShadowsSuppressed_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setCameraRelativeRendering_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getCameraRelativeRendering_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getBestHeightAt_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getHeightAtTile_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_addTempLayer_ev_bool_ILayer_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_removeTempLayer_ev_bool_ILayer_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode(EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_EVString(EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_initRenderQueue_void(EarthView_World_Graphic_CDefaultSceneManager_initRenderQueue_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_initRenderQueue_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_deriveShadowCasterPass_CPass_CPass(EarthView_World_Graphic_CDefaultSceneManager_deriveShadowCasterPass_CPass_CPass_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_deriveShadowCasterPass_CPass_CPass_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_deriveShadowReceiverPass_CPass_CPass(EarthView_World_Graphic_CDefaultSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_validatePassForRendering_ev_bool_CPass(EarthView_World_Graphic_CDefaultSceneManager_validatePassForRendering_ev_bool_CPass_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_validatePassForRendering_ev_bool_CPass_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable(EarthView_World_Graphic_CDefaultSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString(EarthView_World_Graphic_CDefaultSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(EarthView_World_Graphic_CDefaultSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_resetViewProjMode_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_resetViewProjMode_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_resetViewProjMode_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_firePreRenderQueues_void(EarthView_World_Graphic_CDefaultSceneManager_firePreRenderQueues_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_firePreRenderQueues_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_firePostRenderQueues_void(EarthView_World_Graphic_CDefaultSceneManager_firePostRenderQueues_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_firePostRenderQueues_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString(EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString(EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesUpdated_void_ev_size_t(EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t(EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum(EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_firePreUpdateSceneGraph_void_CCamera(EarthView_World_Graphic_CDefaultSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_firePostUpdateSceneGraph_void_CCamera(EarthView_World_Graphic_CDefaultSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_firePreFindVisibleObjects_void_CViewport(EarthView_World_Graphic_CDefaultSceneManager_firePreFindVisibleObjects_void_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_firePreFindVisibleObjects_void_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_firePostFindVisibleObjects_void_CViewport(EarthView_World_Graphic_CDefaultSceneManager_firePostFindVisibleObjects_void_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_firePostFindVisibleObjects_void_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_fireSceneManagerDestroyed_void(EarthView_World_Graphic_CDefaultSceneManager_fireSceneManagerDestroyed_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_fireSceneManagerDestroyed_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setViewport_void_CViewport(EarthView_World_Graphic_CDefaultSceneManager_setViewport_void_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setViewport_void_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsDefaultSequence_void(EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsDefaultSequence_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsDefaultSequence_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence(EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareRenderQueue_void(EarthView_World_Graphic_CDefaultSceneManager_prepareRenderQueue_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_prepareRenderQueue_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList(EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createAutoParamDataSource_CAutoParamDataSource(EarthView_World_Graphic_CDefaultSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_findLightsAffectingFrustum_void_CCamera(EarthView_World_Graphic_CDefaultSceneManager_findLightsAffectingFrustum_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_findLightsAffectingFrustum_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_initShadowVolumeMaterials_void(EarthView_World_Graphic_CDefaultSceneManager_initShadowVolumeMaterials_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_initShadowVolumeMaterials_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_ensureShadowTexturesCreated_void(EarthView_World_Graphic_CDefaultSceneManager_ensureShadowTexturesCreated_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_ensureShadowTexturesCreated_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyShadowTextures_void(EarthView_World_Graphic_CDefaultSceneManager_destroyShadowTextures_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyShadowTextures_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList(EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport(EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setImageDefaultMaterial_void_CMaterialPtr(EarthView_World_Graphic_CDefaultSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setImageUseDefaultMaterial_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSunPosition_CVector3(EarthView_World_Graphic_CDefaultSceneManager_getSunPosition_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSunPosition_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setAtmosphereVisible_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setAtmosphereVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setAtmosphereVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_storeAtmosphereVisibleState_void(EarthView_World_Graphic_CDefaultSceneManager_storeAtmosphereVisibleState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_storeAtmosphereVisibleState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_restoreAtmosphereVisibleState_void(EarthView_World_Graphic_CDefaultSceneManager_restoreAtmosphereVisibleState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_restoreAtmosphereVisibleState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSunVisible_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setSunVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSunVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__pauseRendering_RenderContext(EarthView_World_Graphic_CDefaultSceneManager__pauseRendering_RenderContext_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__pauseRendering_RenderContext_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__resumeRendering_void_RenderContext(EarthView_World_Graphic_CDefaultSceneManager__resumeRendering_void_RenderContext_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__resumeRendering_void_RenderContext_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera(EarthView_World_Graphic_CDefaultSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(EarthView_World_Graphic_CDefaultSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(EarthView_World_Graphic_CDefaultSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(EarthView_World_Graphic_CDefaultSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList(EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList(EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueSplitOptions_void(EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueSplitOptions_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueSplitOptions_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera(EarthView_World_Graphic_CDefaultSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_buildScissor_void_CLight_CCamera_RealRect(EarthView_World_Graphic_CDefaultSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_resetScissor_void(EarthView_World_Graphic_CDefaultSceneManager_resetScissor_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_resetScissor_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_buildAndSetLightClip_ClipResult_LightList(EarthView_World_Graphic_CDefaultSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_buildLightClip_void_CLight_PlaneList(EarthView_World_Graphic_CDefaultSceneManager_buildLightClip_void_CLight_PlaneList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_buildLightClip_void_CLight_PlaneList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_resetLightClip_void(EarthView_World_Graphic_CDefaultSceneManager_resetLightClip_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_resetLightClip_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_checkCachedLightClippingInfo_void(EarthView_World_Graphic_CDefaultSceneManager_checkCachedLightClippingInfo_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_checkCachedLightClippingInfo_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_useLights_void_LightList_ev_uint16(EarthView_World_Graphic_CDefaultSceneManager_useLights_void_LightList_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_useLights_void_LightList_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setViewMatrix_void_CMatrix4(EarthView_World_Graphic_CDefaultSceneManager_setViewMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setViewMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_useLightsGpuProgram_void_CPass_LightList(EarthView_World_Graphic_CDefaultSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_bindGpuProgram_void_CGpuProgram(EarthView_World_Graphic_CDefaultSceneManager_bindGpuProgram_void_CGpuProgram_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_bindGpuProgram_void_CGpuProgram_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_updateGpuProgramParameters_void_CPass(EarthView_World_Graphic_CDefaultSceneManager_updateGpuProgramParameters_void_CPass_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_updateGpuProgramParameters_void_CPass_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getTypeName_EVString(EarthView_World_Graphic_CDefaultSceneManager_getTypeName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getTypeName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createCamera_CCamera_EVString(EarthView_World_Graphic_CDefaultSceneManager_createCamera_CCamera_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createCamera_CCamera_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getCamera_CCamera_EVString(EarthView_World_Graphic_CDefaultSceneManager_getCamera_CCamera_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getCamera_CCamera_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasCamera_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager_hasCamera_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_hasCamera_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_CCamera(EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllCameras_void(EarthView_World_Graphic_CDefaultSceneManager_destroyAllCameras_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllCameras_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_EVString(EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight(EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getLightCount_ev_uint16(EarthView_World_Graphic_CDefaultSceneManager_getLightCount_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getLightCount_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_ev_uint16(EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_EVString(EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasLight_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager_hasLight_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_hasLight_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getLightClippingPlanes_PlaneList_CLight(EarthView_World_Graphic_CDefaultSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getLightScissorRect_RealRect_CLight_CCamera(EarthView_World_Graphic_CDefaultSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_CLight(EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_CLight_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllLights_void(EarthView_World_Graphic_CDefaultSceneManager_destroyAllLights_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllLights_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowTexName_EVString(EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowTexName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowTexName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowTexCam_CCamera(EarthView_World_Graphic_CDefaultSceneManager_getShadowTexCam_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTexCam_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16(EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getCascadeEyeSpaceDepthArray_CVector4(EarthView_World_Graphic_CDefaultSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNearClip_float_ev_uint8(EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowFarClip_float_ev_uint8(EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowFitToCascadesMode_bool(EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool(EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getCurrentClipIndex_ev_uint8(EarthView_World_Graphic_CDefaultSceneManager_getCurrentClipIndex_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getCurrentClipIndex_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowTechnique_bool(EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowTechnique_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowTechnique_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowTechnique_void_bool(EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsPercent_float(EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsPercent_float_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsPercent_float_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsPercent_void_float(EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsPercent_void_float_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsPercent_void_float_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsDistance_int_ev_uint8(EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8(EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowOffsetFormat_PixelFormat(EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_checkShadowCasterInFrustum_void_CCamera(EarthView_World_Graphic_CDefaultSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasShadowCasterInFrustum_bool(EarthView_World_Graphic_CDefaultSceneManager_hasShadowCasterInFrustum_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_hasShadowCasterInFrustum_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowLightBleedPower_Real(EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowLightBleedPower_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowLightBleedPower_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowLightBleedPower_void_Real(EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowLightBleedPower_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowLightBleedPower_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowDepthOffset_Real(EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowDepthOffset_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowDepthOffset_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowDepthOffset_void_Real(EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowDepthOffset_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowDepthOffset_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNormalFactor_float(EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNormalFactor_float_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNormalFactor_float_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowNormalFactor_void_float(EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowNormalFactor_void_float_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowNormalFactor_void_float_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__notifyLightsDirty_void(EarthView_World_Graphic_CDefaultSceneManager__notifyLightsDirty_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__notifyLightsDirty_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__getLightsAffectingFrustum_LightList(EarthView_World_Graphic_CDefaultSceneManager__getLightsAffectingFrustum_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__getLightsAffectingFrustum_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32(EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList(EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_showImage_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_showImage_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_showImage_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getImageVisible_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_getImageVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getImageVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_showOcean_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_showOcean_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_showOcean_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getOceanVisible_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_getOceanVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getOceanVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32(EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList(EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode(EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_EVString(EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_CSceneNode(EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getRootSceneNode_CSceneNode(EarthView_World_Graphic_CDefaultSceneManager_getRootSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getRootSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSceneNode_CSceneNode_EVString(EarthView_World_Graphic_CDefaultSceneManager_getSceneNode_CSceneNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSceneNode_CSceneNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasSceneNode_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager_hasSceneNode_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_hasSceneNode_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString(EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_EVString(EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector(EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString(EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector(EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr(EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_IntVector(EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr(EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_IntVector(EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString(EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_PrefabType(EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_PrefabType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_PrefabType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_PrefabType(EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_PrefabType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_PrefabType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getEntity_CEntity_EVString(EarthView_World_Graphic_CDefaultSceneManager_getEntity_CEntity_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getEntity_CEntity_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasEntity_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager_hasEntity_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_hasEntity_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_CEntity(EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_CEntity_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_CEntity_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllEntities_void(EarthView_World_Graphic_CDefaultSceneManager_destroyAllEntities_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllEntities_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_EVString(EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject(EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getManualObject_CManualObject_EVString(EarthView_World_Graphic_CDefaultSceneManager_getManualObject_CManualObject_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getManualObject_CManualObject_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasManualObject_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager_hasManualObject_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_hasManualObject_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_CManualObject(EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_CManualObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_CManualObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllManualObjects_void(EarthView_World_Graphic_CDefaultSceneManager_destroyAllManualObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllManualObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_usingWebMercator_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_usingWebMercator_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_usingWebMercator_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_EVString(EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain(EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getBillboardChain_CBillboardChain_EVString(EarthView_World_Graphic_CDefaultSceneManager_getBillboardChain_CBillboardChain_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getBillboardChain_CBillboardChain_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasBillboardChain_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager_hasBillboardChain_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_hasBillboardChain_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_CBillboardChain(EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_CBillboardChain_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_CBillboardChain_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardChains_void(EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardChains_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardChains_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_EVString(EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail(EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getRibbonTrail_CRibbonTrail_EVString(EarthView_World_Graphic_CDefaultSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasRibbonTrail_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager_hasRibbonTrail_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_hasRibbonTrail_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_CRibbonTrail(EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllRibbonTrails_void(EarthView_World_Graphic_CDefaultSceneManager_destroyAllRibbonTrails_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllRibbonTrails_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_EVString(EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString(EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t(EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString(EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString(EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t(EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem(EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getParticleSystem_CParticleSystem_EVString(EarthView_World_Graphic_CDefaultSceneManager_getParticleSystem_CParticleSystem_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getParticleSystem_CParticleSystem_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasParticleSystem_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager_hasParticleSystem_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_hasParticleSystem_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_CParticleSystem(EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_CParticleSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_CParticleSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllParticleSystems_void(EarthView_World_Graphic_CDefaultSceneManager_destroyAllParticleSystems_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllParticleSystems_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_clearScene_void(EarthView_World_Graphic_CDefaultSceneManager_clearScene_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_clearScene_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString(EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr(EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_EVString(EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr(EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_EVString(EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString(EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr(EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint(EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setOption_ev_bool_EVString_void(EarthView_World_Graphic_CDefaultSceneManager_setOption_ev_bool_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setOption_ev_bool_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getOption_ev_bool_EVString_void(EarthView_World_Graphic_CDefaultSceneManager_getOption_ev_bool_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getOption_ev_bool_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasOption_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager_hasOption_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_hasOption_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getOptionValues_ev_bool_EVString_StringVector(EarthView_World_Graphic_CDefaultSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getOptionKeys_ev_bool_StringVector(EarthView_World_Graphic_CDefaultSceneManager_getOptionKeys_ev_bool_StringVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getOptionKeys_ev_bool_StringVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__updateSceneGraph_void_CCamera(EarthView_World_Graphic_CDefaultSceneManager__updateSceneGraph_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__updateSceneGraph_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool(EarthView_World_Graphic_CDefaultSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__applySceneAnimations_void(EarthView_World_Graphic_CDefaultSceneManager__applySceneAnimations_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__applySceneAnimations_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__renderVisibleObjects_void(EarthView_World_Graphic_CDefaultSceneManager__renderVisibleObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__renderVisibleObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__renderScene_void_CCamera_CViewport_ev_bool(EarthView_World_Graphic_CDefaultSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__queueSkiesForRendering_void_CCamera(EarthView_World_Graphic_CDefaultSceneManager__queueSkiesForRendering_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__queueSkiesForRendering_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setDestinationRenderSystem_void_CRenderSystem(EarthView_World_Graphic_CDefaultSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString(EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32(EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32(EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real(EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real(EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real(EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString(EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString(EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32(EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32(EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real(EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8(EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real(EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real(EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString(EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlaneEnabled_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isSkyPlaneEnabled_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_isSkyPlaneEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_isSkyPlaneEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneNode_CSceneNode(EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters(EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString(EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion(EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real(EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString(EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion(EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8(EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real(EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBoxEnabled_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setSkyBoxEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBoxEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isSkyBoxEnabled_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_isSkyBoxEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_isSkyBoxEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxNode_CSceneNode(EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters(EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32(EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32(EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32(EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion(EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real(EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real(EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real(EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32(EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32(EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32(EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion(EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8(EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real(EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real(EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real(EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDomeEnabled_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setSkyDomeEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDomeEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isSkyDomeEnabled_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_isSkyDomeEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_isSkyDomeEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeNode_CSceneNode(EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters(EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getFogMode_FogMode(EarthView_World_Graphic_CDefaultSceneManager_getFogMode_FogMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getFogMode_FogMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getFogColour_CColourValue(EarthView_World_Graphic_CDefaultSceneManager_getFogColour_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getFogColour_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getFogStart_Real(EarthView_World_Graphic_CDefaultSceneManager_getFogStart_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getFogStart_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getFogEnd_Real(EarthView_World_Graphic_CDefaultSceneManager_getFogEnd_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getFogEnd_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getFogDensity_Real(EarthView_World_Graphic_CDefaultSceneManager_getFogDensity_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getFogDensity_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32(EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString(EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_ev_uint32(EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet(EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getBillboardSet_CBillboardSet_EVString(EarthView_World_Graphic_CDefaultSceneManager_getBillboardSet_CBillboardSet_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getBillboardSet_CBillboardSet_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasBillboardSet_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager_hasBillboardSet_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_hasBillboardSet_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_CBillboardSet(EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_CBillboardSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_CBillboardSet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardSets_void(EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardSets_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardSets_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setDisplaySceneNodes_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setDisplaySceneNodes_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setDisplaySceneNodes_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getDisplaySceneNodes_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_getDisplaySceneNodes_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getDisplaySceneNodes_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createAnimation_CAnimation_EVString_Real(EarthView_World_Graphic_CDefaultSceneManager_createAnimation_CAnimation_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createAnimation_CAnimation_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getAnimation_CAnimation_EVString(EarthView_World_Graphic_CDefaultSceneManager_getAnimation_CAnimation_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getAnimation_CAnimation_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasAnimation_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager_hasAnimation_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_hasAnimation_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAnimation_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_destroyAnimation_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAnimation_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimations_void(EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimations_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimations_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createAnimationState_CAnimationState_EVString(EarthView_World_Graphic_CDefaultSceneManager_createAnimationState_CAnimationState_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createAnimationState_CAnimationState_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getAnimationState_CAnimationState_EVString(EarthView_World_Graphic_CDefaultSceneManager_getAnimationState_CAnimationState_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getAnimationState_CAnimationState_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasAnimationState_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager_hasAnimationState_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_hasAnimationState_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAnimationState_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_destroyAnimationState_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAnimationState_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimationStates_void(EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimationStates_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimationStates_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4(EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList(EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4(EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getRenderQueue_CRenderQueue(EarthView_World_Graphic_CDefaultSceneManager_getRenderQueue_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getRenderQueue_CRenderQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_addRenderQueueListener_void_CRenderQueueListener(EarthView_World_Graphic_CDefaultSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_removeRenderQueueListener_void_CRenderQueueListener(EarthView_World_Graphic_CDefaultSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_addRenderObjectListener_void_CRenderObjectListener(EarthView_World_Graphic_CDefaultSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_removeRenderObjectListener_void_CRenderObjectListener(EarthView_World_Graphic_CDefaultSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_addSpecialCaseRenderQueue_void_ev_uint8(EarthView_World_Graphic_CDefaultSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8(EarthView_World_Graphic_CDefaultSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_clearSpecialCaseRenderQueues_void(EarthView_World_Graphic_CDefaultSceneManager_clearSpecialCaseRenderQueues_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_clearSpecialCaseRenderQueues_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode(EarthView_World_Graphic_CDefaultSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode(EarthView_World_Graphic_CDefaultSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8(EarthView_World_Graphic_CDefaultSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometryRenderQueue_void_ev_uint8(EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getWorldGeometryRenderQueue_ev_uint8(EarthView_World_Graphic_CDefaultSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_showBoundingBoxes_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_showBoundingBoxes_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_showBoundingBoxes_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShowBoundingBoxes_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_getShowBoundingBoxes_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShowBoundingBoxes_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool(EarthView_World_Graphic_CDefaultSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32(EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox(EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32(EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere(EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32(EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList(EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32(EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay(EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32(EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery(EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyQuery_void_CSceneQuery(EarthView_World_Graphic_CDefaultSceneManager_destroyQuery_void_CSceneQuery_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyQuery_void_CSceneQuery_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTechnique_void_ShadowTechnique(EarthView_World_Graphic_CDefaultSceneManager_setShadowTechnique_void_ShadowTechnique_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTechnique_void_ShadowTechnique_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowTechnique_ShadowTechnique(EarthView_World_Graphic_CDefaultSceneManager_getShadowTechnique_ShadowTechnique_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTechnique_ShadowTechnique_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShowDebugShadows_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setShowDebugShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShowDebugShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShowDebugShadows_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_getShowDebugShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShowDebugShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowColour_void_CColourValue(EarthView_World_Graphic_CDefaultSceneManager_setShadowColour_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColour_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowColour_CColourValue(EarthView_World_Graphic_CDefaultSceneManager_getShadowColour_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColour_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real(EarthView_World_Graphic_CDefaultSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowDirectionalLightExtrusionDistance_Real(EarthView_World_Graphic_CDefaultSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorRRatio_void_Real(EarthView_World_Graphic_CDefaultSceneManager_setShadowColorRRatio_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorRRatio_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorGRatio_void_Real(EarthView_World_Graphic_CDefaultSceneManager_setShadowColorGRatio_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorGRatio_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorBRatio_void_Real(EarthView_World_Graphic_CDefaultSceneManager_setShadowColorBRatio_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorBRatio_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorRRatio_Real(EarthView_World_Graphic_CDefaultSceneManager_getShadowColorRRatio_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorRRatio_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorGRatio_Real(EarthView_World_Graphic_CDefaultSceneManager_getShadowColorGRatio_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorGRatio_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorBRatio_Real(EarthView_World_Graphic_CDefaultSceneManager_getShadowColorBRatio_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorBRatio_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowFarDistance_void_Real(EarthView_World_Graphic_CDefaultSceneManager_setShadowFarDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowFarDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistance_Real(EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistanceSquared_Real(EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistanceSquared_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistanceSquared_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowIndexBufferSize_void_ev_size_t(EarthView_World_Graphic_CDefaultSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowIndexBufferSize_ev_size_t(EarthView_World_Graphic_CDefaultSceneManager_getShadowIndexBufferSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowIndexBufferSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSize_void_ev_uint16(EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSize_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSize_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat(EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16(EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16(EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig(EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTexturePixelFormat_void_PixelFormat(EarthView_World_Graphic_CDefaultSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFSAA_void_ev_uint16(EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCount_void_ev_size_t(EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCount_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCount_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16(EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat(EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16(EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16(EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowTexture_CTexturePtr_ev_size_t(EarthView_World_Graphic_CDefaultSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowDirLightTextureOffset_void_Real(EarthView_World_Graphic_CDefaultSceneManager_setShadowDirLightTextureOffset_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowDirLightTextureOffset_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowDirLightTextureOffset_Real(EarthView_World_Graphic_CDefaultSceneManager_getShadowDirLightTextureOffset_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowDirLightTextureOffset_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeStart_void_Real(EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeStart_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeStart_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeEnd_void_Real(EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeEnd_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeEnd_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSelfShadow_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowTextureSelfShadow_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_getShadowTextureSelfShadow_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTextureSelfShadow_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCasterMaterial_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureReceiverMaterial_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowCasterRenderBackFaces_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowCasterRenderBackFaces_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr(EarthView_World_Graphic_CDefaultSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr(EarthView_World_Graphic_CDefaultSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueStencilBased_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueTextureBased_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueModulative_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueModulative_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueModulative_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueAdditive_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueAdditive_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueAdditive_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueIntegrated_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueInUse_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueInUse_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueInUse_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowUseLightClipPlanes_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowUseLightClipPlanes_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setActiveCompositorChain_void_CCompositorChain(EarthView_World_Graphic_CDefaultSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setLateMaterialResolving_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setLateMaterialResolving_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setLateMaterialResolving_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isLateMaterialResolving_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_isLateMaterialResolving_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_isLateMaterialResolving_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__getActiveCompositorChain_CCompositorChain(EarthView_World_Graphic_CDefaultSceneManager__getActiveCompositorChain_CCompositorChain_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__getActiveCompositorChain_CCompositorChain_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_addListener_void_CSceneManagerListener(EarthView_World_Graphic_CDefaultSceneManager_addListener_void_CSceneManagerListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_addListener_void_CSceneManagerListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_removeListener_void_CSceneManagerListener(EarthView_World_Graphic_CDefaultSceneManager_removeListener_void_CSceneManagerListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_removeListener_void_CSceneManagerListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_existListener_ev_bool_CSceneManagerListener(EarthView_World_Graphic_CDefaultSceneManager_existListener_ev_bool_CSceneManagerListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_existListener_ev_bool_CSceneManagerListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createStaticGeometry_CStaticGeometry_EVString(EarthView_World_Graphic_CDefaultSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getStaticGeometry_CStaticGeometry_EVString(EarthView_World_Graphic_CDefaultSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasStaticGeometry_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager_hasStaticGeometry_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_hasStaticGeometry_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_CStaticGeometry(EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllStaticGeometry_void(EarthView_World_Graphic_CDefaultSceneManager_destroyAllStaticGeometry_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllStaticGeometry_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createInstancedGeometry_CInstancedGeometry_EVString(EarthView_World_Graphic_CDefaultSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getInstancedGeometry_CInstancedGeometry_EVString(EarthView_World_Graphic_CDefaultSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_CInstancedGeometry(EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstancedGeometry_void(EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstancedGeometry_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstancedGeometry_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16(EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16(EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t(EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getInstanceManager_CInstanceManager_EVString(EarthView_World_Graphic_CDefaultSceneManager_getInstanceManager_CInstanceManager_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getInstanceManager_CInstanceManager_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasInstanceManager_ev_bool_EVString(EarthView_World_Graphic_CDefaultSceneManager_hasInstanceManager_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_hasInstanceManager_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_CInstanceManager(EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_CInstanceManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_CInstanceManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager(EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstanceManagers_void(EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstanceManagers_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstanceManagers_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t(EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16(EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16(EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString(EarthView_World_Graphic_CDefaultSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedEntity_void_CInstancedEntity(EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList(EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString(EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList(EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString(EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_EVString_EVString(EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_CMovableObject(EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjectsByType_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjects_void(EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getMovableObject_CMovableObject_EVString_EVString(EarthView_World_Graphic_CDefaultSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasMovableObject_ev_bool_EVString_EVString(EarthView_World_Graphic_CDefaultSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString(EarthView_World_Graphic_CDefaultSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_injectMovableObject_void_CMovableObject(EarthView_World_Graphic_CDefaultSceneManager_injectMovableObject_void_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_injectMovableObject_void_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_EVString_EVString(EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_CMovableObject(EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_extractAllMovableObjectsByType_void_EVString(EarthView_World_Graphic_CDefaultSceneManager_extractAllMovableObjectsByType_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_extractAllMovableObjectsByType_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setVisibilityMask_void_ev_uint32(EarthView_World_Graphic_CDefaultSceneManager_setVisibilityMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setVisibilityMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getVisibilityMask_ev_uint32(EarthView_World_Graphic_CDefaultSceneManager_getVisibilityMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getVisibilityMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setFindVisibleObjects_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setFindVisibleObjects_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setFindVisibleObjects_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getFindVisibleObjects_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_getFindVisibleObjects_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getFindVisibleObjects_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setNormaliseNormalsOnScale_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getNormaliseNormalsOnScale_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setFlipCullingOnNegativeScale_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getFlipCullingOnNegativeScale_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList(EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool(EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool(EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable(EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__suppressRenderStateChanges_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager__suppressRenderStateChanges_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__suppressRenderStateChanges_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__areRenderStateChangesSuppressed_ev_bool(EarthView_World_Graphic_CDefaultSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_ev_bool(EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool(EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass(EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__markGpuParamsDirty_void_ev_uint16(EarthView_World_Graphic_CDefaultSceneManager__markGpuParamsDirty_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__markGpuParamsDirty_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__suppressShadows_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager__suppressShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__suppressShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__areShadowsSuppressed_ev_bool(EarthView_World_Graphic_CDefaultSceneManager__areShadowsSuppressed_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__areShadowsSuppressed_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(EarthView_World_Graphic_CDefaultSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setCameraRelativeRendering_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setCameraRelativeRendering_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setCameraRelativeRendering_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getCameraRelativeRendering_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_getCameraRelativeRendering_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getCameraRelativeRendering_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getHeightAt_Real_Real_Real_ev_real32(EarthView_World_Graphic_CDefaultSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getBestHeightAt_Real_Real_Real(EarthView_World_Graphic_CDefaultSceneManager_getBestHeightAt_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getBestHeightAt_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getHeightAtTile_Real_Real_Real(EarthView_World_Graphic_CDefaultSceneManager_getHeightAtTile_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getHeightAtTile_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real(EarthView_World_Graphic_CDefaultSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_addTempLayer_ev_bool_ILayer(EarthView_World_Graphic_CDefaultSceneManager_addTempLayer_ev_bool_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_addTempLayer_ev_bool_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_removeTempLayer_ev_bool_ILayer(EarthView_World_Graphic_CDefaultSceneManager_removeTempLayer_ev_bool_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_removeTempLayer_ev_bool_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool(EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real(EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setCollisionDetectionEnable_void_ev_bool(EarthView_World_Graphic_CDefaultSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback = pCallback;
				}
				virtual EVString getTypeName() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getTypeName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getTypeName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getTypeName();
				}
				virtual EarthView::World::Graphic::CSceneNode* createSceneNodeImpl()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createSceneNodeImpl();
				}
				virtual EarthView::World::Graphic::CSceneNode* createSceneNodeImpl(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback(name_Char);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createSceneNodeImpl(name);
				}
				virtual void initRenderQueue()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_initRenderQueue_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_initRenderQueue_void_Callback();
					}
					else
						return this->CDefaultSceneManager::initRenderQueue();
				}
				virtual const EarthView::World::Graphic::CPass* deriveShadowCasterPass(_in const EarthView::World::Graphic::CPass* pass)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_deriveShadowCasterPass_CPass_CPass_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CPass* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_deriveShadowCasterPass_CPass_CPass_Callback(pass);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::deriveShadowCasterPass(pass);
				}
				virtual const EarthView::World::Graphic::CPass* deriveShadowReceiverPass(_in const EarthView::World::Graphic::CPass* pass)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CPass* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback(pass);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::deriveShadowReceiverPass(pass);
				}
				virtual ev_bool validatePassForRendering(_in const EarthView::World::Graphic::CPass* pass)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_validatePassForRendering_ev_bool_CPass_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_validatePassForRendering_ev_bool_CPass_Callback(pass);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::validatePassForRendering(pass);
				}
				virtual ev_bool validateRenderableForRendering(_in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CRenderable* rend)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback(pass, rend);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::validateRenderableForRendering(pass, rend);
				}
				virtual EarthView::World::Graphic::CMeshPtr createSkyboxPlane(_in EarthView::World::Graphic::CSceneManager::BoxPlane bp, _in Real distance, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* groupName_Char = groupName.makeBuffer();
						EarthView::World::Graphic::CMeshPtr returnValue = *(EarthView::World::Graphic::CMeshPtr*)m_EarthView_World_Graphic_CDefaultSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback((int)bp, distance, &orientation, groupName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createSkyboxPlane(bp, distance, orientation, groupName);
				}
				virtual EarthView::World::Graphic::CMeshPtr createSkydomePlane(_in EarthView::World::Graphic::CSceneManager::BoxPlane bp, _in Real curvature, _in Real tiling, _in Real distance, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ySegmentsToKeep, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* groupName_Char = groupName.makeBuffer();
						EarthView::World::Graphic::CMeshPtr returnValue = *(EarthView::World::Graphic::CMeshPtr*)m_EarthView_World_Graphic_CDefaultSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback((int)bp, curvature, tiling, distance, &orientation, xsegments, ysegments, ySegmentsToKeep, groupName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createSkydomePlane(bp, curvature, tiling, distance, orientation, xsegments, ysegments, ySegmentsToKeep, groupName);
				}
				virtual void useRenderableViewProjMode(_in const EarthView::World::Graphic::CRenderable* pRend, _in ev_bool fixedFunction)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback(pRend, fixedFunction);
					}
					else
						return this->CDefaultSceneManager::useRenderableViewProjMode(pRend, fixedFunction);
				}
				virtual void resetViewProjMode(_in ev_bool fixedFunction)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_resetViewProjMode_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_resetViewProjMode_void_ev_bool_Callback(fixedFunction);
					}
					else
						return this->CDefaultSceneManager::resetViewProjMode(fixedFunction);
				}
				virtual void firePreRenderQueues()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_firePreRenderQueues_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_firePreRenderQueues_void_Callback();
					}
					else
						return this->CDefaultSceneManager::firePreRenderQueues();
				}
				virtual void firePostRenderQueues()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_firePostRenderQueues_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_firePostRenderQueues_void_Callback();
					}
					else
						return this->CDefaultSceneManager::firePostRenderQueues();
				}
				virtual ev_bool fireRenderQueueStarted(_in ev_uint8 id, _in const EVString& invocation)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* invocation_Char = invocation.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback(id, invocation_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::fireRenderQueueStarted(id, invocation);
				}
				virtual ev_bool fireRenderQueueEnded(_in ev_uint8 id, _in const EVString& invocation)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* invocation_Char = invocation.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback(id, invocation_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::fireRenderQueueEnded(id, invocation);
				}
				virtual void fireRenderSingleObjectStarted(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback(rend, pass, source, pLightList, suppressRenderStateChanges);
					}
					else
						return this->CDefaultSceneManager::fireRenderSingleObjectStarted(rend, pass, source, pLightList, suppressRenderStateChanges);
				}
				virtual void fireRenderSingleObjectEnd(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback(rend, pass, source, pLightList, suppressRenderStateChanges);
					}
					else
						return this->CDefaultSceneManager::fireRenderSingleObjectEnd(rend, pass, source, pLightList, suppressRenderStateChanges);
				}
				virtual void fireShadowTexturesUpdated(_in ev_size_t numberOfShadowTextures)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback(numberOfShadowTextures);
					}
					else
						return this->CDefaultSceneManager::fireShadowTexturesUpdated(numberOfShadowTextures);
				}
				virtual void fireShadowTexturesPreCaster(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* camera, _in ev_size_t iteration)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback(light, camera, iteration);
					}
					else
						return this->CDefaultSceneManager::fireShadowTexturesPreCaster(light, camera, iteration);
				}
				virtual void fireShadowTexturesPreReceiver(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CFrustum* f)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback(light, f);
					}
					else
						return this->CDefaultSceneManager::fireShadowTexturesPreReceiver(light, f);
				}
				virtual void firePreUpdateSceneGraph(_in EarthView::World::Graphic::CCamera* camera)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback(camera);
					}
					else
						return this->CDefaultSceneManager::firePreUpdateSceneGraph(camera);
				}
				virtual void firePostUpdateSceneGraph(_in EarthView::World::Graphic::CCamera* camera)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback(camera);
					}
					else
						return this->CDefaultSceneManager::firePostUpdateSceneGraph(camera);
				}
				virtual void firePreFindVisibleObjects(_in EarthView::World::Graphic::CViewport* v)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_firePreFindVisibleObjects_void_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_firePreFindVisibleObjects_void_CViewport_Callback(v);
					}
					else
						return this->CDefaultSceneManager::firePreFindVisibleObjects(v);
				}
				virtual void firePostFindVisibleObjects(_in EarthView::World::Graphic::CViewport* v)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_firePostFindVisibleObjects_void_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_firePostFindVisibleObjects_void_CViewport_Callback(v);
					}
					else
						return this->CDefaultSceneManager::firePostFindVisibleObjects(v);
				}
				virtual void fireSceneManagerDestroyed()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_fireSceneManagerDestroyed_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_fireSceneManagerDestroyed_void_Callback();
					}
					else
						return this->CDefaultSceneManager::fireSceneManagerDestroyed();
				}
				virtual void setViewport(_in EarthView::World::Graphic::CViewport* vp)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setViewport_void_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setViewport_void_CViewport_Callback(vp);
					}
					else
						return this->CDefaultSceneManager::setViewport(vp);
				}
				virtual void renderVisibleObjectsDefaultSequence()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsDefaultSequence_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsDefaultSequence_void_Callback();
					}
					else
						return this->CDefaultSceneManager::renderVisibleObjectsDefaultSequence();
				}
				virtual void renderVisibleObjectsCustomSequence(_in EarthView::World::Graphic::CRenderQueueInvocationSequence* s)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback(s);
					}
					else
						return this->CDefaultSceneManager::renderVisibleObjectsCustomSequence(s);
				}
				virtual void prepareRenderQueue()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_prepareRenderQueue_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_prepareRenderQueue_void_Callback();
					}
					else
						return this->CDefaultSceneManager::prepareRenderQueue();
				}
				virtual void renderSingleObject(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback(rend, pass, lightScissoringClipping, doLightIteration, manualLightList);
					}
					else
						return this->CDefaultSceneManager::renderSingleObject(rend, pass, lightScissoringClipping, doLightIteration, manualLightList);
				}
				virtual void renderSingleObject(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback(rend, pass, lightScissoringClipping, doLightIteration);
					}
					else
						return this->CDefaultSceneManager::renderSingleObject(rend, pass, lightScissoringClipping, doLightIteration);
				}
				virtual EarthView::World::Graphic::CAutoParamDataSource* createAutoParamDataSource() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CAutoParamDataSource* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createAutoParamDataSource();
				}
				virtual void findLightsAffectingFrustum(_in const EarthView::World::Graphic::CCamera* camera)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_findLightsAffectingFrustum_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_findLightsAffectingFrustum_void_CCamera_Callback(camera);
					}
					else
						return this->CDefaultSceneManager::findLightsAffectingFrustum(camera);
				}
				virtual void initShadowVolumeMaterials()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_initShadowVolumeMaterials_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_initShadowVolumeMaterials_void_Callback();
					}
					else
						return this->CDefaultSceneManager::initShadowVolumeMaterials();
				}
				virtual void ensureShadowTexturesCreated()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_ensureShadowTexturesCreated_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_ensureShadowTexturesCreated_void_Callback();
					}
					else
						return this->CDefaultSceneManager::ensureShadowTexturesCreated();
				}
				virtual void destroyShadowTextures()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyShadowTextures_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyShadowTextures_void_Callback();
					}
					else
						return this->CDefaultSceneManager::destroyShadowTextures();
				}
				virtual void prepareShadowTextures(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::LightList* lightList)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback(cam, vp, lightList);
					}
					else
						return this->CDefaultSceneManager::prepareShadowTextures(cam, vp, lightList);
				}
				virtual void prepareShadowTextures(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CViewport* vp)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback(cam, vp);
					}
					else
						return this->CDefaultSceneManager::prepareShadowTextures(cam, vp);
				}
				virtual void setImageDefaultMaterial(_in const EarthView::World::Graphic::CMaterialPtr& matPtr)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback(&matPtr);
					}
					else
						return this->CDefaultSceneManager::setImageDefaultMaterial(matPtr);
				}
				virtual void setImageUseDefaultMaterial(_in const ev_bool& useDefaultMat)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback(useDefaultMat);
					}
					else
						return this->CDefaultSceneManager::setImageUseDefaultMaterial(useDefaultMat);
				}
				virtual EarthView::World::Spatial::Math::CVector3 getSunPosition()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSunPosition_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CVector3 returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_CDefaultSceneManager_getSunPosition_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSunPosition();
				}
				virtual void setAtmosphereVisible(_in const ev_bool& visible)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setAtmosphereVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setAtmosphereVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CDefaultSceneManager::setAtmosphereVisible(visible);
				}
				virtual void storeAtmosphereVisibleState()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_storeAtmosphereVisibleState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_storeAtmosphereVisibleState_void_Callback();
					}
					else
						return this->CDefaultSceneManager::storeAtmosphereVisibleState();
				}
				virtual void restoreAtmosphereVisibleState()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_restoreAtmosphereVisibleState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_restoreAtmosphereVisibleState_void_Callback();
					}
					else
						return this->CDefaultSceneManager::restoreAtmosphereVisibleState();
				}
				virtual void setSunVisible(_in ev_bool flag)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSunVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setSunVisible_void_ev_bool_Callback(flag);
					}
					else
						return this->CDefaultSceneManager::setSunVisible(flag);
				}
				virtual EarthView::World::Graphic::CSceneManager::RenderContext* _pauseRendering()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__pauseRendering_RenderContext_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneManager::RenderContext* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager__pauseRendering_RenderContext_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::_pauseRendering();
				}
				virtual void _resumeRendering(_in EarthView::World::Graphic::CSceneManager::RenderContext* context)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__resumeRendering_void_RenderContext_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__resumeRendering_void_RenderContext_Callback(context);
					}
					else
						return this->CDefaultSceneManager::_resumeRendering(context);
				}
				virtual void renderShadowVolumesToStencil(_in const EarthView::World::Graphic::CLight* light, _in const EarthView::World::Graphic::CCamera* cam, _in ev_bool calcScissor)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback(light, cam, calcScissor);
					}
					else
						return this->CDefaultSceneManager::renderShadowVolumesToStencil(light, cam, calcScissor);
				}
				virtual void setShadowVolumeStencilState(_in ev_bool secondpass, _in ev_bool zfail, _in ev_bool twosided)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback(secondpass, zfail, twosided);
					}
					else
						return this->CDefaultSceneManager::setShadowVolumeStencilState(secondpass, zfail, twosided);
				}
				virtual const EarthView::World::Graphic::CSceneManager::ShadowCasterList& findShadowCastersForLight(_in const EarthView::World::Graphic::CLight* light, _in const EarthView::World::Graphic::CCamera* camera)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneManager::ShadowCasterList& returnValue = *(EarthView::World::Graphic::CSceneManager::ShadowCasterList*)m_EarthView_World_Graphic_CDefaultSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback(light, camera);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::findShadowCastersForLight(light, camera);
				}
				virtual void renderBasicQueueGroupObjects(_in EarthView::World::Graphic::CRenderQueueGroup* pGroup, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback(pGroup, (int)om);
					}
					else
						return this->CDefaultSceneManager::renderBasicQueueGroupObjects(pGroup, om);
				}
				virtual void renderAdditiveStencilShadowedQueueGroupObjects(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback(group, (int)om);
					}
					else
						return this->CDefaultSceneManager::renderAdditiveStencilShadowedQueueGroupObjects(group, om);
				}
				virtual void renderModulativeStencilShadowedQueueGroupObjects(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback(group, (int)om);
					}
					else
						return this->CDefaultSceneManager::renderModulativeStencilShadowedQueueGroupObjects(group, om);
				}
				virtual void renderTextureShadowCasterQueueGroupObjects(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback(group, (int)om);
					}
					else
						return this->CDefaultSceneManager::renderTextureShadowCasterQueueGroupObjects(group, om);
				}
				virtual void renderTextureShadowReceiverQueueGroupObjects(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback(group, (int)om);
					}
					else
						return this->CDefaultSceneManager::renderTextureShadowReceiverQueueGroupObjects(group, om);
				}
				virtual void renderModulativeTextureShadowedQueueGroupObjects(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback(group, (int)om);
					}
					else
						return this->CDefaultSceneManager::renderModulativeTextureShadowedQueueGroupObjects(group, om);
				}
				virtual void renderAdditiveTextureShadowedQueueGroupObjects(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback(group, (int)om);
					}
					else
						return this->CDefaultSceneManager::renderAdditiveTextureShadowedQueueGroupObjects(group, om);
				}
				virtual void renderObjects(_in const EarthView::World::Graphic::CQueuedRenderableCollection& objs, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback(&objs, (int)om, lightScissoringClipping, doLightIteration, manualLightList);
					}
					else
						return this->CDefaultSceneManager::renderObjects(objs, om, lightScissoringClipping, doLightIteration, manualLightList);
				}
				virtual void renderObjects(_in const EarthView::World::Graphic::CQueuedRenderableCollection& objs, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback(&objs, (int)om, lightScissoringClipping, doLightIteration);
					}
					else
						return this->CDefaultSceneManager::renderObjects(objs, om, lightScissoringClipping, doLightIteration);
				}
				virtual void renderTransparentShadowCasterObjects(_in const EarthView::World::Graphic::CQueuedRenderableCollection& objs, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback(&objs, (int)om, lightScissoringClipping, doLightIteration, manualLightList);
					}
					else
						return this->CDefaultSceneManager::renderTransparentShadowCasterObjects(objs, om, lightScissoringClipping, doLightIteration, manualLightList);
				}
				virtual void renderTransparentShadowCasterObjects(_in const EarthView::World::Graphic::CQueuedRenderableCollection& objs, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback(&objs, (int)om, lightScissoringClipping, doLightIteration);
					}
					else
						return this->CDefaultSceneManager::renderTransparentShadowCasterObjects(objs, om, lightScissoringClipping, doLightIteration);
				}
				virtual void updateRenderQueueSplitOptions()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueSplitOptions_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueSplitOptions_void_Callback();
					}
					else
						return this->CDefaultSceneManager::updateRenderQueueSplitOptions();
				}
				virtual void updateRenderQueueGroupSplitOptions(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in ev_bool suppressShadows, _in ev_bool suppressRenderState)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback(group, suppressShadows, suppressRenderState);
					}
					else
						return this->CDefaultSceneManager::updateRenderQueueGroupSplitOptions(group, suppressShadows, suppressRenderState);
				}
				virtual EarthView::World::Graphic::ClipResult buildAndSetScissor(_in const EarthView::World::Graphic::LightList& ll, _in const EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ClipResult returnValue = (EarthView::World::Graphic::ClipResult)m_EarthView_World_Graphic_CDefaultSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback(&ll, cam);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::buildAndSetScissor(ll, cam);
				}
				virtual void buildScissor(_in const EarthView::World::Graphic::CLight* l, _in const EarthView::World::Graphic::CCamera* cam, _inout EarthView::World::Graphic::RealRect& rect)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback(l, cam, &rect);
					}
					else
						return this->CDefaultSceneManager::buildScissor(l, cam, rect);
				}
				virtual void resetScissor()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_resetScissor_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_resetScissor_void_Callback();
					}
					else
						return this->CDefaultSceneManager::resetScissor();
				}
				virtual EarthView::World::Graphic::ClipResult buildAndSetLightClip(_in const EarthView::World::Graphic::LightList& ll)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ClipResult returnValue = (EarthView::World::Graphic::ClipResult)m_EarthView_World_Graphic_CDefaultSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback(&ll);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::buildAndSetLightClip(ll);
				}
				virtual void buildLightClip(_in const EarthView::World::Graphic::CLight* l, _inout EarthView::World::Spatial::Math::PlaneList& planes)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_buildLightClip_void_CLight_PlaneList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_buildLightClip_void_CLight_PlaneList_Callback(l, &planes);
					}
					else
						return this->CDefaultSceneManager::buildLightClip(l, planes);
				}
				virtual void resetLightClip()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_resetLightClip_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_resetLightClip_void_Callback();
					}
					else
						return this->CDefaultSceneManager::resetLightClip();
				}
				virtual void checkCachedLightClippingInfo()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_checkCachedLightClippingInfo_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_checkCachedLightClippingInfo_void_Callback();
					}
					else
						return this->CDefaultSceneManager::checkCachedLightClippingInfo();
				}
				virtual void useLights(_in const EarthView::World::Graphic::LightList& lights, _in ev_uint16 limit)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_useLights_void_LightList_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_useLights_void_LightList_ev_uint16_Callback(&lights, limit);
					}
					else
						return this->CDefaultSceneManager::useLights(lights, limit);
				}
				virtual void setViewMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setViewMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setViewMatrix_void_CMatrix4_Callback(&m);
					}
					else
						return this->CDefaultSceneManager::setViewMatrix(m);
				}
				virtual void useLightsGpuProgram(_in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::LightList* lights)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback(pass, lights);
					}
					else
						return this->CDefaultSceneManager::useLightsGpuProgram(pass, lights);
				}
				virtual void bindGpuProgram(_in EarthView::World::Graphic::CGpuProgram* prog)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_bindGpuProgram_void_CGpuProgram_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_bindGpuProgram_void_CGpuProgram_Callback(prog);
					}
					else
						return this->CDefaultSceneManager::bindGpuProgram(prog);
				}
				virtual void updateGpuProgramParameters(_in const EarthView::World::Graphic::CPass* p)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_updateGpuProgramParameters_void_CPass_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_updateGpuProgramParameters_void_CPass_Callback(p);
					}
					else
						return this->CDefaultSceneManager::updateGpuProgramParameters(p);
				}
				virtual EarthView::World::Graphic::CCamera* createCamera(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createCamera_CCamera_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CCamera* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createCamera_CCamera_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createCamera(name);
				}
				virtual EarthView::World::Graphic::CCamera* getCamera(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getCamera_CCamera_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CCamera* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getCamera_CCamera_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getCamera(name);
				}
				virtual ev_bool hasCamera(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_hasCamera_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_hasCamera_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::hasCamera(name);
				}
				virtual void destroyCamera(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_CCamera_Callback(cam);
					}
					else
						return this->CDefaultSceneManager::destroyCamera(cam);
				}
				virtual void destroyCamera(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_EVString_Callback(name_Char);
					}
					else
						return this->CDefaultSceneManager::destroyCamera(name);
				}
				virtual void destroyAllCameras()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllCameras_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllCameras_void_Callback();
					}
					else
						return this->CDefaultSceneManager::destroyAllCameras();
				}
				virtual EarthView::World::Graphic::CLight* createLight(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CLight* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createLight(name);
				}
				virtual EarthView::World::Graphic::CLight* createLight()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CLight* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createLight();
				}
				virtual ev_uint16 getLightCount() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getLightCount_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getLightCount_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getLightCount();
				}
				virtual EarthView::World::Graphic::CLight* getLight(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CLight* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getLight(index);
				}
				virtual EarthView::World::Graphic::CLight* getLight(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CLight* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getLight(name);
				}
				virtual ev_bool hasLight(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_hasLight_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_hasLight_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::hasLight(name);
				}
				virtual const EarthView::World::Spatial::Math::PlaneList& getLightClippingPlanes(_in EarthView::World::Graphic::CLight* l)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::PlaneList& returnValue = *(EarthView::World::Spatial::Math::PlaneList*)m_EarthView_World_Graphic_CDefaultSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback(l);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getLightClippingPlanes(l);
				}
				virtual const EarthView::World::Graphic::RealRect& getLightScissorRect(_in EarthView::World::Graphic::CLight* l, _in const EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::RealRect& returnValue = *(EarthView::World::Graphic::RealRect*)m_EarthView_World_Graphic_CDefaultSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback(l, cam);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getLightScissorRect(l, cam);
				}
				virtual void destroyLight(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_EVString_Callback(name_Char);
					}
					else
						return this->CDefaultSceneManager::destroyLight(name);
				}
				virtual void destroyLight(_in EarthView::World::Graphic::CLight* light)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_CLight_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_CLight_Callback(light);
					}
					else
						return this->CDefaultSceneManager::destroyLight(light);
				}
				virtual void destroyAllLights()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllLights_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllLights_void_Callback();
					}
					else
						return this->CDefaultSceneManager::destroyAllLights();
				}
				virtual EVString getSoftShadowTexName() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowTexName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowTexName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSoftShadowTexName();
				}
				virtual EarthView::World::Graphic::CCamera* getShadowTexCam() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTexCam_CCamera_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CCamera* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTexCam_CCamera_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShadowTexCam();
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getSoftShadowProjMatrix(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSoftShadowProjMatrix(index);
				}
				virtual EarthView::World::Spatial::Math::CVector4 getCascadeEyeSpaceDepthArray() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CVector4 returnValue = *(EarthView::World::Spatial::Math::CVector4*)m_EarthView_World_Graphic_CDefaultSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getCascadeEyeSpaceDepthArray();
				}
				virtual float getSoftShadowNearClip(_in ev_uint8 index) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						float returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback(index);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSoftShadowNearClip(index);
				}
				virtual float getSoftShadowFarClip(_in ev_uint8 index) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						float returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback(index);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSoftShadowFarClip(index);
				}
				virtual bool getIsUseSoftShadowFitToCascadesMode() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getIsUseSoftShadowFitToCascadesMode();
				}
				virtual void setIsUseSoftShadowFitToCascadesMode(_in bool flag)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback(flag);
					}
					else
						return this->CDefaultSceneManager::setIsUseSoftShadowFitToCascadesMode(flag);
				}
				virtual ev_uint8 getCurrentClipIndex() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getCurrentClipIndex_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getCurrentClipIndex_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getCurrentClipIndex();
				}
				virtual bool getIsUseSoftShadowTechnique() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowTechnique_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowTechnique_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getIsUseSoftShadowTechnique();
				}
				virtual void setIsUseSoftShadowTechnique(_in bool flag)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback(flag);
					}
					else
						return this->CDefaultSceneManager::setIsUseSoftShadowTechnique(flag);
				}
				virtual float getCascadePartitionsPercent() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsPercent_float_Callback != NULL && this->isCustomExtend())
					{
						float returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsPercent_float_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getCascadePartitionsPercent();
				}
				virtual void setCascadePartitionsPercent(_in float percent)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsPercent_void_float_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsPercent_void_float_Callback(percent);
					}
					else
						return this->CDefaultSceneManager::setCascadePartitionsPercent(percent);
				}
				virtual int getCascadePartitionsDistance(_in ev_uint8 index) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						int returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback(index);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getCascadePartitionsDistance(index);
				}
				virtual void setCascadePartitionsDistance(_in ev_uint8 index, _in ev_uint8 distance)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback(index, distance);
					}
					else
						return this->CDefaultSceneManager::setCascadePartitionsDistance(index, distance);
				}
				virtual EarthView::World::Graphic::PixelFormat getSoftShadowOffsetFormat() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::PixelFormat returnValue = (EarthView::World::Graphic::PixelFormat)m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSoftShadowOffsetFormat();
				}
				virtual void checkShadowCasterInFrustum(_in EarthView::World::Graphic::CCamera* camera)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback(camera);
					}
					else
						return this->CDefaultSceneManager::checkShadowCasterInFrustum(camera);
				}
				virtual bool hasShadowCasterInFrustum() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_hasShadowCasterInFrustum_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_hasShadowCasterInFrustum_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::hasShadowCasterInFrustum();
				}
				virtual Real getSoftShadowLightBleedPower() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowLightBleedPower_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowLightBleedPower_Real_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSoftShadowLightBleedPower();
				}
				virtual void setSoftShadowLightBleedPower(_in Real power)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowLightBleedPower_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowLightBleedPower_void_Real_Callback(power);
					}
					else
						return this->CDefaultSceneManager::setSoftShadowLightBleedPower(power);
				}
				virtual Real getSoftShadowDepthOffset() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowDepthOffset_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowDepthOffset_Real_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSoftShadowDepthOffset();
				}
				virtual void setSoftShadowDepthOffset(_in Real offset)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowDepthOffset_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowDepthOffset_void_Real_Callback(offset);
					}
					else
						return this->CDefaultSceneManager::setSoftShadowDepthOffset(offset);
				}
				virtual float getSoftShadowNormalFactor() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNormalFactor_float_Callback != NULL && this->isCustomExtend())
					{
						float returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNormalFactor_float_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSoftShadowNormalFactor();
				}
				virtual void setSoftShadowNormalFactor(_in float factor)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowNormalFactor_void_float_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowNormalFactor_void_float_Callback(factor);
					}
					else
						return this->CDefaultSceneManager::setSoftShadowNormalFactor(factor);
				}
				virtual void _notifyLightsDirty()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__notifyLightsDirty_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__notifyLightsDirty_void_Callback();
					}
					else
						return this->CDefaultSceneManager::_notifyLightsDirty();
				}
				virtual const EarthView::World::Graphic::LightList& _getLightsAffectingFrustum() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__getLightsAffectingFrustum_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CDefaultSceneManager__getLightsAffectingFrustum_LightList_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::_getLightsAffectingFrustum();
				}
				virtual void _populateLightList(_in const EarthView::World::Spatial::Math::CVector3& position, _in Real radius, _inout EarthView::World::Graphic::LightList& destList, _in ev_uint32 lightMask)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback(&position, radius, &destList, lightMask);
					}
					else
						return this->CDefaultSceneManager::_populateLightList(position, radius, destList, lightMask);
				}
				virtual void _populateLightList(_in const EarthView::World::Spatial::Math::CVector3& position, _in Real radius, _inout EarthView::World::Graphic::LightList& destList)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_Callback(&position, radius, &destList);
					}
					else
						return this->CDefaultSceneManager::_populateLightList(position, radius, destList);
				}
				virtual void showImage(_in ev_bool visible)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_showImage_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_showImage_void_ev_bool_Callback(visible);
					}
					else
						return this->CDefaultSceneManager::showImage(visible);
				}
				virtual ev_bool getImageVisible() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getImageVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getImageVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getImageVisible();
				}
				virtual void showOcean(_in ev_bool visible)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_showOcean_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_showOcean_void_ev_bool_Callback(visible);
					}
					else
						return this->CDefaultSceneManager::showOcean(visible);
				}
				virtual ev_bool getOceanVisible() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getOceanVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getOceanVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getOceanVisible();
				}
				virtual void _populateLightList(_in const EarthView::World::Graphic::CSceneNode* sn, _in Real radius, _inout EarthView::World::Graphic::LightList& destList, _in ev_uint32 lightMask)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback(sn, radius, &destList, lightMask);
					}
					else
						return this->CDefaultSceneManager::_populateLightList(sn, radius, destList, lightMask);
				}
				virtual void _populateLightList(_in const EarthView::World::Graphic::CSceneNode* sn, _in Real radius, _inout EarthView::World::Graphic::LightList& destList)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback(sn, radius, &destList);
					}
					else
						return this->CDefaultSceneManager::_populateLightList(sn, radius, destList);
				}
				virtual EarthView::World::Graphic::CSceneNode* createSceneNode()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createSceneNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* createSceneNode(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createSceneNode(name);
				}
				virtual void destroySceneNode(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_EVString_Callback(name_Char);
					}
					else
						return this->CDefaultSceneManager::destroySceneNode(name);
				}
				virtual void destroySceneNode(_in EarthView::World::Graphic::CSceneNode* sn)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_CSceneNode_Callback(sn);
					}
					else
						return this->CDefaultSceneManager::destroySceneNode(sn);
				}
				virtual EarthView::World::Graphic::CSceneNode* getRootSceneNode()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getRootSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getRootSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getRootSceneNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* getSceneNode(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSceneNode_CSceneNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getSceneNode_CSceneNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSceneNode(name);
				}
				virtual ev_bool hasSceneNode(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_hasSceneNode_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_hasSceneNode_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::hasSceneNode(name);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& entityName, _in const EVString& meshName, _in const EarthView::World::Core::IntVector& subentityIndics, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* entityName_Char = entityName.makeBuffer();
						char* meshName_Char = meshName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback(entityName_Char, meshName_Char, &subentityIndics, groupName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createEntity(entityName, meshName, subentityIndics, groupName);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& entityName, _in const EVString& meshName, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* entityName_Char = entityName.makeBuffer();
						char* meshName_Char = meshName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback(entityName_Char, meshName_Char, groupName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createEntity(entityName, meshName, groupName);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& entityName, _in const EVString& meshName, _in const EarthView::World::Core::IntVector& subentityIndics)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback != NULL && this->isCustomExtend())
					{
						char* entityName_Char = entityName.makeBuffer();
						char* meshName_Char = meshName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback(entityName_Char, meshName_Char, &subentityIndics);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createEntity(entityName, meshName, subentityIndics);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& entityName, _in const EVString& meshName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* entityName_Char = entityName.makeBuffer();
						char* meshName_Char = meshName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_Callback(entityName_Char, meshName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createEntity(entityName, meshName);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& entityName, _in const EarthView::World::Graphic::CMeshPtr& pMesh, _in const EarthView::World::Core::IntVector& subentityIndics)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback != NULL && this->isCustomExtend())
					{
						char* entityName_Char = entityName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback(entityName_Char, &pMesh, &subentityIndics);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createEntity(entityName, pMesh, subentityIndics);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& entityName, _in const EarthView::World::Graphic::CMeshPtr& pMesh)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback != NULL && this->isCustomExtend())
					{
						char* entityName_Char = entityName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback(entityName_Char, &pMesh);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createEntity(entityName, pMesh);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EarthView::World::Graphic::CMeshPtr& pMesh, _in const EarthView::World::Core::IntVector& subentityIndics)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback(&pMesh, &subentityIndics);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createEntity(pMesh, subentityIndics);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EarthView::World::Graphic::CMeshPtr& pMesh)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_Callback(&pMesh);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createEntity(pMesh);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& meshName, _in const EarthView::World::Core::IntVector& subentityIndics)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_IntVector_Callback != NULL && this->isCustomExtend())
					{
						char* meshName_Char = meshName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_IntVector_Callback(meshName_Char, &subentityIndics);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createEntity(meshName, subentityIndics);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& meshName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* meshName_Char = meshName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_Callback(meshName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createEntity(meshName);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& entityName, _in EarthView::World::Graphic::CSceneManager::PrefabType ptype)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_PrefabType_Callback != NULL && this->isCustomExtend())
					{
						char* entityName_Char = entityName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_PrefabType_Callback(entityName_Char, (int)ptype);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createEntity(entityName, ptype);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in EarthView::World::Graphic::CSceneManager::PrefabType ptype)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_PrefabType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_PrefabType_Callback((int)ptype);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createEntity(ptype);
				}
				virtual EarthView::World::Graphic::CEntity* getEntity(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getEntity_CEntity_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getEntity_CEntity_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getEntity(name);
				}
				virtual ev_bool hasEntity(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_hasEntity_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_hasEntity_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::hasEntity(name);
				}
				virtual void destroyEntity(_in EarthView::World::Graphic::CEntity* ent)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_CEntity_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_CEntity_Callback(ent);
					}
					else
						return this->CDefaultSceneManager::destroyEntity(ent);
				}
				virtual void destroyEntity(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_EVString_Callback(name_Char);
					}
					else
						return this->CDefaultSceneManager::destroyEntity(name);
				}
				virtual void destroyAllEntities()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllEntities_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllEntities_void_Callback();
					}
					else
						return this->CDefaultSceneManager::destroyAllEntities();
				}
				virtual EarthView::World::Graphic::CManualObject* createManualObject(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CManualObject* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createManualObject(name);
				}
				virtual EarthView::World::Graphic::CManualObject* createManualObject()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CManualObject* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createManualObject();
				}
				virtual EarthView::World::Graphic::CManualObject* getManualObject(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getManualObject_CManualObject_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CManualObject* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getManualObject_CManualObject_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getManualObject(name);
				}
				virtual ev_bool hasManualObject(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_hasManualObject_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_hasManualObject_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::hasManualObject(name);
				}
				virtual void destroyManualObject(_in EarthView::World::Graphic::CManualObject* obj)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_CManualObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_CManualObject_Callback(obj);
					}
					else
						return this->CDefaultSceneManager::destroyManualObject(obj);
				}
				virtual void destroyManualObject(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_EVString_Callback(name_Char);
					}
					else
						return this->CDefaultSceneManager::destroyManualObject(name);
				}
				virtual void destroyAllManualObjects()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllManualObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllManualObjects_void_Callback();
					}
					else
						return this->CDefaultSceneManager::destroyAllManualObjects();
				}
				virtual ev_bool usingWebMercator() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_usingWebMercator_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_usingWebMercator_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::usingWebMercator();
				}
				virtual EarthView::World::Graphic::CBillboardChain* createBillboardChain(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CBillboardChain* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createBillboardChain(name);
				}
				virtual EarthView::World::Graphic::CBillboardChain* createBillboardChain()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CBillboardChain* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createBillboardChain();
				}
				virtual EarthView::World::Graphic::CBillboardChain* getBillboardChain(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getBillboardChain_CBillboardChain_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CBillboardChain* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getBillboardChain_CBillboardChain_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getBillboardChain(name);
				}
				virtual ev_bool hasBillboardChain(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_hasBillboardChain_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_hasBillboardChain_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::hasBillboardChain(name);
				}
				virtual void destroyBillboardChain(_in EarthView::World::Graphic::CBillboardChain* obj)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_CBillboardChain_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_CBillboardChain_Callback(obj);
					}
					else
						return this->CDefaultSceneManager::destroyBillboardChain(obj);
				}
				virtual void destroyBillboardChain(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_EVString_Callback(name_Char);
					}
					else
						return this->CDefaultSceneManager::destroyBillboardChain(name);
				}
				virtual void destroyAllBillboardChains()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardChains_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardChains_void_Callback();
					}
					else
						return this->CDefaultSceneManager::destroyAllBillboardChains();
				}
				virtual EarthView::World::Graphic::CRibbonTrail* createRibbonTrail(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CRibbonTrail* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createRibbonTrail(name);
				}
				virtual EarthView::World::Graphic::CRibbonTrail* createRibbonTrail()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRibbonTrail* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createRibbonTrail();
				}
				virtual EarthView::World::Graphic::CRibbonTrail* getRibbonTrail(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CRibbonTrail* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getRibbonTrail(name);
				}
				virtual ev_bool hasRibbonTrail(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_hasRibbonTrail_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_hasRibbonTrail_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::hasRibbonTrail(name);
				}
				virtual void destroyRibbonTrail(_in EarthView::World::Graphic::CRibbonTrail* obj)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback(obj);
					}
					else
						return this->CDefaultSceneManager::destroyRibbonTrail(obj);
				}
				virtual void destroyRibbonTrail(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_EVString_Callback(name_Char);
					}
					else
						return this->CDefaultSceneManager::destroyRibbonTrail(name);
				}
				virtual void destroyAllRibbonTrails()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllRibbonTrails_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllRibbonTrails_void_Callback();
					}
					else
						return this->CDefaultSceneManager::destroyAllRibbonTrails();
				}
				virtual EarthView::World::Graphic::CParticleSystem* createParticleSystem(_in const EVString& name, _in const EVString& templateName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* templateName_Char = templateName.makeBuffer();
						EarthView::World::Graphic::CParticleSystem* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback(name_Char, templateName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createParticleSystem(name, templateName);
				}
				virtual EarthView::World::Graphic::CParticleSystem* createParticleSystem(_in const EVString& name, _in ev_size_t quota, _in const EVString& resourceGroup)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* resourceGroup_Char = resourceGroup.makeBuffer();
						EarthView::World::Graphic::CParticleSystem* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback(name_Char, quota, resourceGroup_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createParticleSystem(name, quota, resourceGroup);
				}
				virtual EarthView::World::Graphic::CParticleSystem* createParticleSystem(_in const EVString& name, _in ev_size_t quota)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CParticleSystem* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback(name_Char, quota);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createParticleSystem(name, quota);
				}
				virtual EarthView::World::Graphic::CParticleSystem* createParticleSystem(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CParticleSystem* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createParticleSystem(name);
				}
				virtual EarthView::World::Graphic::CParticleSystem* createParticleSystem(_in ev_size_t quota, _in const EVString& resourceGroup)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* resourceGroup_Char = resourceGroup.makeBuffer();
						EarthView::World::Graphic::CParticleSystem* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback(quota, resourceGroup_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createParticleSystem(quota, resourceGroup);
				}
				virtual EarthView::World::Graphic::CParticleSystem* createParticleSystem(_in ev_size_t quota)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CParticleSystem* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback(quota);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createParticleSystem(quota);
				}
				virtual EarthView::World::Graphic::CParticleSystem* createParticleSystem()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CParticleSystem* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createParticleSystem();
				}
				virtual EarthView::World::Graphic::CParticleSystem* getParticleSystem(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getParticleSystem_CParticleSystem_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CParticleSystem* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getParticleSystem_CParticleSystem_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getParticleSystem(name);
				}
				virtual ev_bool hasParticleSystem(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_hasParticleSystem_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_hasParticleSystem_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::hasParticleSystem(name);
				}
				virtual void destroyParticleSystem(_in EarthView::World::Graphic::CParticleSystem* obj)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_CParticleSystem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_CParticleSystem_Callback(obj);
					}
					else
						return this->CDefaultSceneManager::destroyParticleSystem(obj);
				}
				virtual void destroyParticleSystem(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_EVString_Callback(name_Char);
					}
					else
						return this->CDefaultSceneManager::destroyParticleSystem(name);
				}
				virtual void destroyAllParticleSystems()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllParticleSystems_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllParticleSystems_void_Callback();
					}
					else
						return this->CDefaultSceneManager::destroyAllParticleSystems();
				}
				virtual void clearScene()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_clearScene_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_clearScene_void_Callback();
					}
					else
						return this->CDefaultSceneManager::clearScene();
				}
				virtual void prepareWorldGeometry(_in const EVString& filename)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_EVString_Callback(filename_Char);
					}
					else
						return this->CDefaultSceneManager::prepareWorldGeometry(filename);
				}
				virtual void prepareWorldGeometry(_inout EarthView::World::Core::DataStreamPtr& stream, _in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* typeName_Char = typeName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback(&stream, typeName_Char);
					}
					else
						return this->CDefaultSceneManager::prepareWorldGeometry(stream, typeName);
				}
				virtual void prepareWorldGeometry(_inout EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CDefaultSceneManager::prepareWorldGeometry(stream);
				}
				virtual void setWorldGeometry(_in const EVString& filename)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_EVString_Callback(filename_Char);
					}
					else
						return this->CDefaultSceneManager::setWorldGeometry(filename);
				}
				virtual void setWorldGeometry(_inout EarthView::World::Core::DataStreamPtr& stream, _in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* typeName_Char = typeName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback(&stream, typeName_Char);
					}
					else
						return this->CDefaultSceneManager::setWorldGeometry(stream, typeName);
				}
				virtual void setWorldGeometry(_inout EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->CDefaultSceneManager::setWorldGeometry(stream);
				}
				virtual ev_size_t estimateWorldGeometry(_in const EVString& filename)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback(filename_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::estimateWorldGeometry(filename);
				}
				virtual ev_size_t estimateWorldGeometry(_inout EarthView::World::Core::DataStreamPtr& stream, _in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* typeName_Char = typeName.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback(&stream, typeName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::estimateWorldGeometry(stream, typeName);
				}
				virtual ev_size_t estimateWorldGeometry(_inout EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback(&stream);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::estimateWorldGeometry(stream);
				}
				virtual EarthView::World::Graphic::ViewPoint getSuggestedViewpoint(_in ev_bool random)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ViewPoint returnValue = *(EarthView::World::Graphic::ViewPoint*)m_EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback(random);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSuggestedViewpoint(random);
				}
				virtual EarthView::World::Graphic::ViewPoint getSuggestedViewpoint()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ViewPoint returnValue = *(EarthView::World::Graphic::ViewPoint*)m_EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSuggestedViewpoint();
				}
				virtual ev_bool setOption(_in const EVString& strKey, _in const void* pValue)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setOption_ev_bool_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						char* strKey_Char = strKey.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_setOption_ev_bool_EVString_void_Callback(strKey_Char, pValue);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::setOption(strKey, pValue);
				}
				virtual ev_bool getOption(_in const EVString& strKey, _in void* pDestValue)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getOption_ev_bool_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						char* strKey_Char = strKey.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getOption_ev_bool_EVString_void_Callback(strKey_Char, pDestValue);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getOption(strKey, pDestValue);
				}
				virtual ev_bool hasOption(_in const EVString& strKey) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_hasOption_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* strKey_Char = strKey.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_hasOption_ev_bool_EVString_Callback(strKey_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::hasOption(strKey);
				}
				virtual ev_bool getOptionValues(_in const EVString& strKey, _inout EarthView::World::Core::StringVector& refValueList)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback != NULL && this->isCustomExtend())
					{
						char* strKey_Char = strKey.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback(strKey_Char, &refValueList);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getOptionValues(strKey, refValueList);
				}
				virtual ev_bool getOptionKeys(_inout EarthView::World::Core::StringVector& refKeys)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getOptionKeys_ev_bool_StringVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getOptionKeys_ev_bool_StringVector_Callback(&refKeys);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getOptionKeys(refKeys);
				}
				virtual void _updateSceneGraph(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__updateSceneGraph_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__updateSceneGraph_void_CCamera_Callback(cam);
					}
					else
						return this->CDefaultSceneManager::_updateSceneGraph(cam);
				}
				virtual void _findVisibleObjects(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool onlyShadowCasters)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback(cam, visibleBounds, onlyShadowCasters);
					}
					else
						return this->CDefaultSceneManager::_findVisibleObjects(cam, visibleBounds, onlyShadowCasters);
				}
				virtual void _applySceneAnimations()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__applySceneAnimations_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__applySceneAnimations_void_Callback();
					}
					else
						return this->CDefaultSceneManager::_applySceneAnimations();
				}
				virtual void _renderVisibleObjects()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__renderVisibleObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__renderVisibleObjects_void_Callback();
					}
					else
						return this->CDefaultSceneManager::_renderVisibleObjects();
				}
				virtual void _renderScene(_in EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Graphic::CViewport* vp, _in ev_bool includeOverlays)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback(camera, vp, includeOverlays);
					}
					else
						return this->CDefaultSceneManager::_renderScene(camera, vp, includeOverlays);
				}
				virtual void _queueSkiesForRendering(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__queueSkiesForRendering_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__queueSkiesForRendering_void_CCamera_Callback(cam);
					}
					else
						return this->CDefaultSceneManager::_queueSkiesForRendering(cam);
				}
				virtual void _setDestinationRenderSystem(_in EarthView::World::Graphic::CRenderSystem* ref_sys)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback(ref_sys);
					}
					else
						return this->CDefaultSceneManager::_setDestinationRenderSystem(ref_sys);
				}
				virtual void setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst, _in Real bow, _in ev_int32 xsegments, _in ev_int32 ysegments, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback(enable, &plane, materialName_Char, scale, tiling, drawFirst, bow, xsegments, ysegments, groupName_Char);
					}
					else
						return this->CDefaultSceneManager::setSkyPlane(enable, plane, materialName, scale, tiling, drawFirst, bow, xsegments, ysegments, groupName);
				}
				virtual void setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst, _in Real bow, _in ev_int32 xsegments, _in ev_int32 ysegments)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback(enable, &plane, materialName_Char, scale, tiling, drawFirst, bow, xsegments, ysegments);
					}
					else
						return this->CDefaultSceneManager::setSkyPlane(enable, plane, materialName, scale, tiling, drawFirst, bow, xsegments, ysegments);
				}
				virtual void setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst, _in Real bow, _in ev_int32 xsegments)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback(enable, &plane, materialName_Char, scale, tiling, drawFirst, bow, xsegments);
					}
					else
						return this->CDefaultSceneManager::setSkyPlane(enable, plane, materialName, scale, tiling, drawFirst, bow, xsegments);
				}
				virtual void setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst, _in Real bow)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback(enable, &plane, materialName_Char, scale, tiling, drawFirst, bow);
					}
					else
						return this->CDefaultSceneManager::setSkyPlane(enable, plane, materialName, scale, tiling, drawFirst, bow);
				}
				virtual void setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback(enable, &plane, materialName_Char, scale, tiling, drawFirst);
					}
					else
						return this->CDefaultSceneManager::setSkyPlane(enable, plane, materialName, scale, tiling, drawFirst);
				}
				virtual void setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback(enable, &plane, materialName_Char, scale, tiling);
					}
					else
						return this->CDefaultSceneManager::setSkyPlane(enable, plane, materialName, scale, tiling);
				}
				virtual void setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback(enable, &plane, materialName_Char, scale);
					}
					else
						return this->CDefaultSceneManager::setSkyPlane(enable, plane, materialName, scale);
				}
				virtual void setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback(enable, &plane, materialName_Char);
					}
					else
						return this->CDefaultSceneManager::setSkyPlane(enable, plane, materialName);
				}
				virtual void _setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue, _in Real bow, _in ev_int32 xsegments, _in ev_int32 ysegments, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback(enable, &plane, materialName_Char, scale, tiling, renderQueue, bow, xsegments, ysegments, groupName_Char);
					}
					else
						return this->CDefaultSceneManager::_setSkyPlane(enable, plane, materialName, scale, tiling, renderQueue, bow, xsegments, ysegments, groupName);
				}
				virtual void _setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue, _in Real bow, _in ev_int32 xsegments, _in ev_int32 ysegments)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback(enable, &plane, materialName_Char, scale, tiling, renderQueue, bow, xsegments, ysegments);
					}
					else
						return this->CDefaultSceneManager::_setSkyPlane(enable, plane, materialName, scale, tiling, renderQueue, bow, xsegments, ysegments);
				}
				virtual void _setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue, _in Real bow, _in ev_int32 xsegments)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback(enable, &plane, materialName_Char, scale, tiling, renderQueue, bow, xsegments);
					}
					else
						return this->CDefaultSceneManager::_setSkyPlane(enable, plane, materialName, scale, tiling, renderQueue, bow, xsegments);
				}
				virtual void _setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue, _in Real bow)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback(enable, &plane, materialName_Char, scale, tiling, renderQueue, bow);
					}
					else
						return this->CDefaultSceneManager::_setSkyPlane(enable, plane, materialName, scale, tiling, renderQueue, bow);
				}
				virtual void _setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback(enable, &plane, materialName_Char, scale, tiling, renderQueue);
					}
					else
						return this->CDefaultSceneManager::_setSkyPlane(enable, plane, materialName, scale, tiling, renderQueue);
				}
				virtual void _setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback(enable, &plane, materialName_Char, scale, tiling);
					}
					else
						return this->CDefaultSceneManager::_setSkyPlane(enable, plane, materialName, scale, tiling);
				}
				virtual void _setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback(enable, &plane, materialName_Char, scale);
					}
					else
						return this->CDefaultSceneManager::_setSkyPlane(enable, plane, materialName, scale);
				}
				virtual void _setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback(enable, &plane, materialName_Char);
					}
					else
						return this->CDefaultSceneManager::_setSkyPlane(enable, plane, materialName);
				}
				virtual void setSkyPlaneEnabled(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback(enable);
					}
					else
						return this->CDefaultSceneManager::setSkyPlaneEnabled(enable);
				}
				virtual ev_bool isSkyPlaneEnabled() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_isSkyPlaneEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_isSkyPlaneEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::isSkyPlaneEnabled();
				}
				virtual EarthView::World::Graphic::CSceneNode* getSkyPlaneNode() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSkyPlaneNode();
				}
				virtual const EarthView::World::Graphic::CSceneManager::SkyPlaneGenParameters& getSkyPlaneGenParameters() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneManager::SkyPlaneGenParameters& returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSkyPlaneGenParameters();
				}
				virtual void setSkyBox(_in ev_bool enable, _in const EVString& materialName, _in Real distance, _in ev_bool drawFirst, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback(enable, materialName_Char, distance, drawFirst, &orientation, groupName_Char);
					}
					else
						return this->CDefaultSceneManager::setSkyBox(enable, materialName, distance, drawFirst, orientation, groupName);
				}
				virtual void setSkyBox(_in ev_bool enable, _in const EVString& materialName, _in Real distance, _in ev_bool drawFirst, _in const EarthView::World::Spatial::Math::CQuaternion& orientation)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback(enable, materialName_Char, distance, drawFirst, &orientation);
					}
					else
						return this->CDefaultSceneManager::setSkyBox(enable, materialName, distance, drawFirst, orientation);
				}
				virtual void setSkyBox(_in ev_bool enable, _in const EVString& materialName, _in Real distance, _in ev_bool drawFirst)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback(enable, materialName_Char, distance, drawFirst);
					}
					else
						return this->CDefaultSceneManager::setSkyBox(enable, materialName, distance, drawFirst);
				}
				virtual void setSkyBox(_in ev_bool enable, _in const EVString& materialName, _in Real distance)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback(enable, materialName_Char, distance);
					}
					else
						return this->CDefaultSceneManager::setSkyBox(enable, materialName, distance);
				}
				virtual void setSkyBox(_in ev_bool enable, _in const EVString& materialName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Callback(enable, materialName_Char);
					}
					else
						return this->CDefaultSceneManager::setSkyBox(enable, materialName);
				}
				virtual void _setSkyBox(_in ev_bool enable, _in const EVString& materialName, _in Real distance, _in ev_uint8 renderQueue, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback(enable, materialName_Char, distance, renderQueue, &orientation, groupName_Char);
					}
					else
						return this->CDefaultSceneManager::_setSkyBox(enable, materialName, distance, renderQueue, orientation, groupName);
				}
				virtual void _setSkyBox(_in ev_bool enable, _in const EVString& materialName, _in Real distance, _in ev_uint8 renderQueue, _in const EarthView::World::Spatial::Math::CQuaternion& orientation)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback(enable, materialName_Char, distance, renderQueue, &orientation);
					}
					else
						return this->CDefaultSceneManager::_setSkyBox(enable, materialName, distance, renderQueue, orientation);
				}
				virtual void _setSkyBox(_in ev_bool enable, _in const EVString& materialName, _in Real distance, _in ev_uint8 renderQueue)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback(enable, materialName_Char, distance, renderQueue);
					}
					else
						return this->CDefaultSceneManager::_setSkyBox(enable, materialName, distance, renderQueue);
				}
				virtual void _setSkyBox(_in ev_bool enable, _in const EVString& materialName, _in Real distance)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback(enable, materialName_Char, distance);
					}
					else
						return this->CDefaultSceneManager::_setSkyBox(enable, materialName, distance);
				}
				virtual void _setSkyBox(_in ev_bool enable, _in const EVString& materialName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Callback(enable, materialName_Char);
					}
					else
						return this->CDefaultSceneManager::_setSkyBox(enable, materialName);
				}
				virtual void setSkyBoxEnabled(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBoxEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyBoxEnabled_void_ev_bool_Callback(enable);
					}
					else
						return this->CDefaultSceneManager::setSkyBoxEnabled(enable);
				}
				virtual ev_bool isSkyBoxEnabled() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_isSkyBoxEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_isSkyBoxEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::isSkyBoxEnabled();
				}
				virtual EarthView::World::Graphic::CSceneNode* getSkyBoxNode() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSkyBoxNode();
				}
				virtual const EarthView::World::Graphic::CSceneManager::SkyBoxGenParameters& getSkyBoxGenParameters() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneManager::SkyBoxGenParameters& returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSkyBoxGenParameters();
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ysegments_keep, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback(enable, materialName_Char, curvature, tiling, distance, drawFirst, &orientation, xsegments, ysegments, ysegments_keep, groupName_Char);
					}
					else
						return this->CDefaultSceneManager::setSkyDome(enable, materialName, curvature, tiling, distance, drawFirst, orientation, xsegments, ysegments, ysegments_keep, groupName);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ysegments_keep)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback(enable, materialName_Char, curvature, tiling, distance, drawFirst, &orientation, xsegments, ysegments, ysegments_keep);
					}
					else
						return this->CDefaultSceneManager::setSkyDome(enable, materialName, curvature, tiling, distance, drawFirst, orientation, xsegments, ysegments, ysegments_keep);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments, _in ev_int32 ysegments)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback(enable, materialName_Char, curvature, tiling, distance, drawFirst, &orientation, xsegments, ysegments);
					}
					else
						return this->CDefaultSceneManager::setSkyDome(enable, materialName, curvature, tiling, distance, drawFirst, orientation, xsegments, ysegments);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback(enable, materialName_Char, curvature, tiling, distance, drawFirst, &orientation, xsegments);
					}
					else
						return this->CDefaultSceneManager::setSkyDome(enable, materialName, curvature, tiling, distance, drawFirst, orientation, xsegments);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const EarthView::World::Spatial::Math::CQuaternion& orientation)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback(enable, materialName_Char, curvature, tiling, distance, drawFirst, &orientation);
					}
					else
						return this->CDefaultSceneManager::setSkyDome(enable, materialName, curvature, tiling, distance, drawFirst, orientation);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback(enable, materialName_Char, curvature, tiling, distance, drawFirst);
					}
					else
						return this->CDefaultSceneManager::setSkyDome(enable, materialName, curvature, tiling, distance, drawFirst);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback(enable, materialName_Char, curvature, tiling, distance);
					}
					else
						return this->CDefaultSceneManager::setSkyDome(enable, materialName, curvature, tiling, distance);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback(enable, materialName_Char, curvature, tiling);
					}
					else
						return this->CDefaultSceneManager::setSkyDome(enable, materialName, curvature, tiling);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback(enable, materialName_Char, curvature);
					}
					else
						return this->CDefaultSceneManager::setSkyDome(enable, materialName, curvature);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Callback(enable, materialName_Char);
					}
					else
						return this->CDefaultSceneManager::setSkyDome(enable, materialName);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ysegments_keep, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback(enable, materialName_Char, curvature, tiling, distance, renderQueue, &orientation, xsegments, ysegments, ysegments_keep, groupName_Char);
					}
					else
						return this->CDefaultSceneManager::_setSkyDome(enable, materialName, curvature, tiling, distance, renderQueue, orientation, xsegments, ysegments, ysegments_keep, groupName);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ysegments_keep)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback(enable, materialName_Char, curvature, tiling, distance, renderQueue, &orientation, xsegments, ysegments, ysegments_keep);
					}
					else
						return this->CDefaultSceneManager::_setSkyDome(enable, materialName, curvature, tiling, distance, renderQueue, orientation, xsegments, ysegments, ysegments_keep);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments, _in ev_int32 ysegments)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback(enable, materialName_Char, curvature, tiling, distance, renderQueue, &orientation, xsegments, ysegments);
					}
					else
						return this->CDefaultSceneManager::_setSkyDome(enable, materialName, curvature, tiling, distance, renderQueue, orientation, xsegments, ysegments);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback(enable, materialName_Char, curvature, tiling, distance, renderQueue, &orientation, xsegments);
					}
					else
						return this->CDefaultSceneManager::_setSkyDome(enable, materialName, curvature, tiling, distance, renderQueue, orientation, xsegments);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const EarthView::World::Spatial::Math::CQuaternion& orientation)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback(enable, materialName_Char, curvature, tiling, distance, renderQueue, &orientation);
					}
					else
						return this->CDefaultSceneManager::_setSkyDome(enable, materialName, curvature, tiling, distance, renderQueue, orientation);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback(enable, materialName_Char, curvature, tiling, distance, renderQueue);
					}
					else
						return this->CDefaultSceneManager::_setSkyDome(enable, materialName, curvature, tiling, distance, renderQueue);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback(enable, materialName_Char, curvature, tiling, distance);
					}
					else
						return this->CDefaultSceneManager::_setSkyDome(enable, materialName, curvature, tiling, distance);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback(enable, materialName_Char, curvature, tiling);
					}
					else
						return this->CDefaultSceneManager::_setSkyDome(enable, materialName, curvature, tiling);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback(enable, materialName_Char, curvature);
					}
					else
						return this->CDefaultSceneManager::_setSkyDome(enable, materialName, curvature);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Callback(enable, materialName_Char);
					}
					else
						return this->CDefaultSceneManager::_setSkyDome(enable, materialName);
				}
				virtual void setSkyDomeEnabled(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDomeEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setSkyDomeEnabled_void_ev_bool_Callback(enable);
					}
					else
						return this->CDefaultSceneManager::setSkyDomeEnabled(enable);
				}
				virtual ev_bool isSkyDomeEnabled() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_isSkyDomeEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_isSkyDomeEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::isSkyDomeEnabled();
				}
				virtual EarthView::World::Graphic::CSceneNode* getSkyDomeNode() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSkyDomeNode();
				}
				virtual const EarthView::World::Graphic::CSceneManager::SkyDomeGenParameters& getSkyDomeGenParameters() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneManager::SkyDomeGenParameters& returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSkyDomeGenParameters();
				}
				virtual EarthView::World::Graphic::FogMode getFogMode() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getFogMode_FogMode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::FogMode returnValue = (EarthView::World::Graphic::FogMode)m_EarthView_World_Graphic_CDefaultSceneManager_getFogMode_FogMode_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getFogMode();
				}
				virtual const EarthView::World::Graphic::CColourValue& getFogColour() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getFogColour_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Graphic_CDefaultSceneManager_getFogColour_CColourValue_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getFogColour();
				}
				virtual Real getFogStart() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getFogStart_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getFogStart_Real_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getFogStart();
				}
				virtual Real getFogEnd() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getFogEnd_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getFogEnd_Real_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getFogEnd();
				}
				virtual Real getFogDensity() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getFogDensity_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getFogDensity_Real_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getFogDensity();
				}
				virtual EarthView::World::Graphic::CBillboardSet* createBillboardSet(_in const EVString& name, _in ev_uint32 poolSize)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CBillboardSet* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback(name_Char, poolSize);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createBillboardSet(name, poolSize);
				}
				virtual EarthView::World::Graphic::CBillboardSet* createBillboardSet(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CBillboardSet* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createBillboardSet(name);
				}
				virtual EarthView::World::Graphic::CBillboardSet* createBillboardSet(_in ev_uint32 poolSize)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CBillboardSet* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback(poolSize);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createBillboardSet(poolSize);
				}
				virtual EarthView::World::Graphic::CBillboardSet* createBillboardSet()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CBillboardSet* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createBillboardSet();
				}
				virtual EarthView::World::Graphic::CBillboardSet* getBillboardSet(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getBillboardSet_CBillboardSet_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CBillboardSet* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getBillboardSet_CBillboardSet_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getBillboardSet(name);
				}
				virtual ev_bool hasBillboardSet(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_hasBillboardSet_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_hasBillboardSet_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::hasBillboardSet(name);
				}
				virtual void destroyBillboardSet(_in EarthView::World::Graphic::CBillboardSet* set)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_CBillboardSet_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_CBillboardSet_Callback(set);
					}
					else
						return this->CDefaultSceneManager::destroyBillboardSet(set);
				}
				virtual void destroyBillboardSet(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_EVString_Callback(name_Char);
					}
					else
						return this->CDefaultSceneManager::destroyBillboardSet(name);
				}
				virtual void destroyAllBillboardSets()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardSets_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardSets_void_Callback();
					}
					else
						return this->CDefaultSceneManager::destroyAllBillboardSets();
				}
				virtual void setDisplaySceneNodes(_in ev_bool display)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setDisplaySceneNodes_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setDisplaySceneNodes_void_ev_bool_Callback(display);
					}
					else
						return this->CDefaultSceneManager::setDisplaySceneNodes(display);
				}
				virtual ev_bool getDisplaySceneNodes() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getDisplaySceneNodes_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getDisplaySceneNodes_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getDisplaySceneNodes();
				}
				virtual EarthView::World::Graphic::CAnimation* createAnimation(_in const EVString& name, _in Real length)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createAnimation_CAnimation_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createAnimation_CAnimation_EVString_Real_Callback(name_Char, length);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createAnimation(name, length);
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getAnimation_CAnimation_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getAnimation_CAnimation_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getAnimation(name);
				}
				virtual ev_bool hasAnimation(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_hasAnimation_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_hasAnimation_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::hasAnimation(name);
				}
				virtual void destroyAnimation(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyAnimation_void_EVString_Callback(name_Char);
					}
					else
						return this->CDefaultSceneManager::destroyAnimation(name);
				}
				virtual void destroyAllAnimations()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimations_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimations_void_Callback();
					}
					else
						return this->CDefaultSceneManager::destroyAllAnimations();
				}
				virtual EarthView::World::Graphic::CAnimationState* createAnimationState(_in const EVString& animName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createAnimationState_CAnimationState_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* animName_Char = animName.makeBuffer();
						EarthView::World::Graphic::CAnimationState* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createAnimationState_CAnimationState_EVString_Callback(animName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createAnimationState(animName);
				}
				virtual EarthView::World::Graphic::CAnimationState* getAnimationState(_in const EVString& animName) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getAnimationState_CAnimationState_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* animName_Char = animName.makeBuffer();
						EarthView::World::Graphic::CAnimationState* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getAnimationState_CAnimationState_EVString_Callback(animName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getAnimationState(animName);
				}
				virtual ev_bool hasAnimationState(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_hasAnimationState_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_hasAnimationState_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::hasAnimationState(name);
				}
				virtual void destroyAnimationState(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyAnimationState_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyAnimationState_void_EVString_Callback(name_Char);
					}
					else
						return this->CDefaultSceneManager::destroyAnimationState(name);
				}
				virtual void destroyAllAnimationStates()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimationStates_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimationStates_void_Callback();
					}
					else
						return this->CDefaultSceneManager::destroyAllAnimationStates();
				}
				virtual void manualRender(_in EarthView::World::Graphic::CRenderOperation* rend, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Spatial::Math::CMatrix4& worldMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& projMatrix, _in ev_bool doBeginEndFrame)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback(rend, pass, vp, &worldMatrix, &viewMatrix, &projMatrix, doBeginEndFrame);
					}
					else
						return this->CDefaultSceneManager::manualRender(rend, pass, vp, worldMatrix, viewMatrix, projMatrix, doBeginEndFrame);
				}
				virtual void manualRender(_in EarthView::World::Graphic::CRenderOperation* rend, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Spatial::Math::CMatrix4& worldMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& projMatrix)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback(rend, pass, vp, &worldMatrix, &viewMatrix, &projMatrix);
					}
					else
						return this->CDefaultSceneManager::manualRender(rend, pass, vp, worldMatrix, viewMatrix, projMatrix);
				}
				virtual void manualRender(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& projMatrix, _in ev_bool doBeginEndFrame, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback(rend, pass, vp, &viewMatrix, &projMatrix, doBeginEndFrame, lightScissoringClipping, doLightIteration, manualLightList);
					}
					else
						return this->CDefaultSceneManager::manualRender(rend, pass, vp, viewMatrix, projMatrix, doBeginEndFrame, lightScissoringClipping, doLightIteration, manualLightList);
				}
				virtual void manualRender(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& projMatrix, _in ev_bool doBeginEndFrame, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback(rend, pass, vp, &viewMatrix, &projMatrix, doBeginEndFrame, lightScissoringClipping, doLightIteration);
					}
					else
						return this->CDefaultSceneManager::manualRender(rend, pass, vp, viewMatrix, projMatrix, doBeginEndFrame, lightScissoringClipping, doLightIteration);
				}
				virtual void manualRender(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& projMatrix, _in ev_bool doBeginEndFrame, _in ev_bool lightScissoringClipping)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback(rend, pass, vp, &viewMatrix, &projMatrix, doBeginEndFrame, lightScissoringClipping);
					}
					else
						return this->CDefaultSceneManager::manualRender(rend, pass, vp, viewMatrix, projMatrix, doBeginEndFrame, lightScissoringClipping);
				}
				virtual void manualRender(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& projMatrix, _in ev_bool doBeginEndFrame)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback(rend, pass, vp, &viewMatrix, &projMatrix, doBeginEndFrame);
					}
					else
						return this->CDefaultSceneManager::manualRender(rend, pass, vp, viewMatrix, projMatrix, doBeginEndFrame);
				}
				virtual void manualRender(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& projMatrix)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback(rend, pass, vp, &viewMatrix, &projMatrix);
					}
					else
						return this->CDefaultSceneManager::manualRender(rend, pass, vp, viewMatrix, projMatrix);
				}
				virtual EarthView::World::Graphic::CRenderQueue* getRenderQueue()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getRenderQueue_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderQueue* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getRenderQueue_CRenderQueue_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getRenderQueue();
				}
				virtual void addRenderQueueListener(_in EarthView::World::Graphic::CRenderQueueListener* ref_newListener)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback(ref_newListener);
					}
					else
						return this->CDefaultSceneManager::addRenderQueueListener(ref_newListener);
				}
				virtual void removeRenderQueueListener(_in EarthView::World::Graphic::CRenderQueueListener* delListener)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback(delListener);
					}
					else
						return this->CDefaultSceneManager::removeRenderQueueListener(delListener);
				}
				virtual void addRenderObjectListener(_in EarthView::World::Graphic::CRenderObjectListener* ref_newListener)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback(ref_newListener);
					}
					else
						return this->CDefaultSceneManager::addRenderObjectListener(ref_newListener);
				}
				virtual void removeRenderObjectListener(_in EarthView::World::Graphic::CRenderObjectListener* delListener)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback(delListener);
					}
					else
						return this->CDefaultSceneManager::removeRenderObjectListener(delListener);
				}
				virtual void addSpecialCaseRenderQueue(_in ev_uint8 qid)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback(qid);
					}
					else
						return this->CDefaultSceneManager::addSpecialCaseRenderQueue(qid);
				}
				virtual void removeSpecialCaseRenderQueue(_in ev_uint8 qid)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback(qid);
					}
					else
						return this->CDefaultSceneManager::removeSpecialCaseRenderQueue(qid);
				}
				virtual void clearSpecialCaseRenderQueues()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_clearSpecialCaseRenderQueues_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_clearSpecialCaseRenderQueues_void_Callback();
					}
					else
						return this->CDefaultSceneManager::clearSpecialCaseRenderQueues();
				}
				virtual void setSpecialCaseRenderQueueMode(_in EarthView::World::Graphic::CSceneManager::SpecialCaseRenderQueueMode mode)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback((int)mode);
					}
					else
						return this->CDefaultSceneManager::setSpecialCaseRenderQueueMode(mode);
				}
				virtual EarthView::World::Graphic::CSceneManager::SpecialCaseRenderQueueMode getSpecialCaseRenderQueueMode()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneManager::SpecialCaseRenderQueueMode returnValue = (EarthView::World::Graphic::CSceneManager::SpecialCaseRenderQueueMode)m_EarthView_World_Graphic_CDefaultSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getSpecialCaseRenderQueueMode();
				}
				virtual ev_bool isRenderQueueToBeProcessed(_in ev_uint8 qid)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback(qid);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::isRenderQueueToBeProcessed(qid);
				}
				virtual void setWorldGeometryRenderQueue(_in ev_uint8 qid)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback(qid);
					}
					else
						return this->CDefaultSceneManager::setWorldGeometryRenderQueue(qid);
				}
				virtual ev_uint8 getWorldGeometryRenderQueue()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getWorldGeometryRenderQueue();
				}
				virtual void showBoundingBoxes(_in ev_bool bShow)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_showBoundingBoxes_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_showBoundingBoxes_void_ev_bool_Callback(bShow);
					}
					else
						return this->CDefaultSceneManager::showBoundingBoxes(bShow);
				}
				virtual ev_bool getShowBoundingBoxes() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShowBoundingBoxes_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getShowBoundingBoxes_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShowBoundingBoxes();
				}
				virtual void _notifyAutotrackingSceneNode(_in EarthView::World::Graphic::CSceneNode* node, _in ev_bool autoTrack)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback(node, autoTrack);
					}
					else
						return this->CDefaultSceneManager::_notifyAutotrackingSceneNode(node, autoTrack);
				}
				virtual EarthView::World::Graphic::CAxisAlignedBoxSceneQuery* createAABBQuery(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CAxisAlignedBoxSceneQuery* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback(&box, mask);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createAABBQuery(box, mask);
				}
				virtual EarthView::World::Graphic::CAxisAlignedBoxSceneQuery* createAABBQuery(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& box)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CAxisAlignedBoxSceneQuery* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_Callback(&box);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createAABBQuery(box);
				}
				virtual EarthView::World::Graphic::CSphereSceneQuery* createSphereQuery(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSphereSceneQuery* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback(&sphere, mask);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createSphereQuery(sphere, mask);
				}
				virtual EarthView::World::Graphic::CSphereSceneQuery* createSphereQuery(_in const EarthView::World::Spatial::Math::CSphere& sphere)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSphereSceneQuery* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_Callback(&sphere);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createSphereQuery(sphere);
				}
				virtual EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery* createPlaneBoundedVolumeQuery(_in const EarthView::World::Spatial::Math::PlaneBoundedVolumeList& volumes, _in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback(&volumes, mask);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createPlaneBoundedVolumeQuery(volumes, mask);
				}
				virtual EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery* createPlaneBoundedVolumeQuery(_in const EarthView::World::Spatial::Math::PlaneBoundedVolumeList& volumes)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_Callback(&volumes);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createPlaneBoundedVolumeQuery(volumes);
				}
				virtual EarthView::World::Graphic::CRaySceneQuery* createRayQuery(_in const EarthView::World::Spatial::Math::CRay& ray, _in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRaySceneQuery* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback(&ray, mask);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createRayQuery(ray, mask);
				}
				virtual EarthView::World::Graphic::CRaySceneQuery* createRayQuery(_in const EarthView::World::Spatial::Math::CRay& ray)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRaySceneQuery* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_Callback(&ray);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createRayQuery(ray);
				}
				virtual EarthView::World::Graphic::CIntersectionSceneQuery* createIntersectionQuery(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CIntersectionSceneQuery* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback(mask);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createIntersectionQuery(mask);
				}
				virtual EarthView::World::Graphic::CIntersectionSceneQuery* createIntersectionQuery()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CIntersectionSceneQuery* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createIntersectionQuery();
				}
				virtual void destroyQuery(_in EarthView::World::Graphic::CSceneQuery* query)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyQuery_void_CSceneQuery_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyQuery_void_CSceneQuery_Callback(query);
					}
					else
						return this->CDefaultSceneManager::destroyQuery(query);
				}
				virtual void setShadowTechnique(_in EarthView::World::Graphic::ShadowTechnique technique)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTechnique_void_ShadowTechnique_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTechnique_void_ShadowTechnique_Callback((int)technique);
					}
					else
						return this->CDefaultSceneManager::setShadowTechnique(technique);
				}
				virtual EarthView::World::Graphic::ShadowTechnique getShadowTechnique() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTechnique_ShadowTechnique_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ShadowTechnique returnValue = (EarthView::World::Graphic::ShadowTechnique)m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTechnique_ShadowTechnique_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShadowTechnique();
				}
				virtual void setShowDebugShadows(_in ev_bool debug)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShowDebugShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShowDebugShadows_void_ev_bool_Callback(debug);
					}
					else
						return this->CDefaultSceneManager::setShowDebugShadows(debug);
				}
				virtual ev_bool getShowDebugShadows() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShowDebugShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getShowDebugShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShowDebugShadows();
				}
				virtual void setShadowColour(_in const EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColour_void_CColourValue_Callback(&colour);
					}
					else
						return this->CDefaultSceneManager::setShadowColour(colour);
				}
				virtual const EarthView::World::Graphic::CColourValue& getShadowColour() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColour_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColour_CColourValue_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShadowColour();
				}
				virtual void setShadowDirectionalLightExtrusionDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback(dist);
					}
					else
						return this->CDefaultSceneManager::setShadowDirectionalLightExtrusionDistance(dist);
				}
				virtual Real getShadowDirectionalLightExtrusionDistance() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShadowDirectionalLightExtrusionDistance();
				}
				virtual void setShadowColorRRatio(_in Real rRatio)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorRRatio_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorRRatio_void_Real_Callback(rRatio);
					}
					else
						return this->CDefaultSceneManager::setShadowColorRRatio(rRatio);
				}
				virtual void setShadowColorGRatio(_in Real gRatio)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorGRatio_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorGRatio_void_Real_Callback(gRatio);
					}
					else
						return this->CDefaultSceneManager::setShadowColorGRatio(gRatio);
				}
				virtual void setShadowColorBRatio(_in Real bRatio)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorBRatio_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorBRatio_void_Real_Callback(bRatio);
					}
					else
						return this->CDefaultSceneManager::setShadowColorBRatio(bRatio);
				}
				virtual Real getShadowColorRRatio() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorRRatio_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorRRatio_Real_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShadowColorRRatio();
				}
				virtual Real getShadowColorGRatio() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorGRatio_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorGRatio_Real_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShadowColorGRatio();
				}
				virtual Real getShadowColorBRatio() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorBRatio_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorBRatio_Real_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShadowColorBRatio();
				}
				virtual void setShadowFarDistance(_in Real distance)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowFarDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowFarDistance_void_Real_Callback(distance);
					}
					else
						return this->CDefaultSceneManager::setShadowFarDistance(distance);
				}
				virtual Real getShadowFarDistance() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShadowFarDistance();
				}
				virtual Real getShadowFarDistanceSquared() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistanceSquared_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistanceSquared_Real_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShadowFarDistanceSquared();
				}
				virtual void setShadowIndexBufferSize(_in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback(size);
					}
					else
						return this->CDefaultSceneManager::setShadowIndexBufferSize(size);
				}
				virtual ev_size_t getShadowIndexBufferSize() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShadowIndexBufferSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getShadowIndexBufferSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShadowIndexBufferSize();
				}
				virtual void setShadowTextureSize(_in ev_uint16 size)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSize_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSize_void_ev_uint16_Callback(size);
					}
					else
						return this->CDefaultSceneManager::setShadowTextureSize(size);
				}
				virtual void setShadowTextureConfig(_in ev_size_t shadowIndex, _in ev_uint16 width, _in ev_uint16 height, _in EarthView::World::Graphic::PixelFormat format)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback(shadowIndex, width, height, (int)format);
					}
					else
						return this->CDefaultSceneManager::setShadowTextureConfig(shadowIndex, width, height, format);
				}
				virtual void setShadowTextureConfig(_in ev_size_t shadowIndex, _in ev_uint16 width, _in ev_uint16 height, _in EarthView::World::Graphic::PixelFormat format, _in ev_uint16 fsaa)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback(shadowIndex, width, height, (int)format, fsaa);
					}
					else
						return this->CDefaultSceneManager::setShadowTextureConfig(shadowIndex, width, height, format, fsaa);
				}
				virtual void setShadowTextureConfig(_in ev_size_t shadowIndex, _in ev_uint16 width, _in ev_uint16 height, _in EarthView::World::Graphic::PixelFormat format, _in ev_uint16 fsaa, _in ev_uint16 depthBufferPoolId)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback(shadowIndex, width, height, (int)format, fsaa, depthBufferPoolId);
					}
					else
						return this->CDefaultSceneManager::setShadowTextureConfig(shadowIndex, width, height, format, fsaa, depthBufferPoolId);
				}
				virtual void setShadowTextureConfig(_in ev_size_t shadowIndex, _in const EarthView::World::Graphic::ShadowTextureConfig& config)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback(shadowIndex, &config);
					}
					else
						return this->CDefaultSceneManager::setShadowTextureConfig(shadowIndex, config);
				}
				virtual void setShadowTexturePixelFormat(_in EarthView::World::Graphic::PixelFormat fmt)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback((int)fmt);
					}
					else
						return this->CDefaultSceneManager::setShadowTexturePixelFormat(fmt);
				}
				virtual void setShadowTextureFSAA(_in ev_uint16 fsaa)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback(fsaa);
					}
					else
						return this->CDefaultSceneManager::setShadowTextureFSAA(fsaa);
				}
				virtual void setShadowTextureCount(_in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCount_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCount_void_ev_size_t_Callback(count);
					}
					else
						return this->CDefaultSceneManager::setShadowTextureCount(count);
				}
				virtual void setShadowTextureSettings(_in ev_uint16 size, _in ev_uint16 count)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback(size, count);
					}
					else
						return this->CDefaultSceneManager::setShadowTextureSettings(size, count);
				}
				virtual void setShadowTextureSettings(_in ev_uint16 size, _in ev_uint16 count, _in EarthView::World::Graphic::PixelFormat fmt)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback(size, count, (int)fmt);
					}
					else
						return this->CDefaultSceneManager::setShadowTextureSettings(size, count, fmt);
				}
				virtual void setShadowTextureSettings(_in ev_uint16 size, _in ev_uint16 count, _in EarthView::World::Graphic::PixelFormat fmt, _in ev_uint16 fsaa)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback(size, count, (int)fmt, fsaa);
					}
					else
						return this->CDefaultSceneManager::setShadowTextureSettings(size, count, fmt, fsaa);
				}
				virtual void setShadowTextureSettings(_in ev_uint16 size, _in ev_uint16 count, _in EarthView::World::Graphic::PixelFormat fmt, _in ev_uint16 fsaa, _in ev_uint16 depthBufferPoolId)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback(size, count, (int)fmt, fsaa, depthBufferPoolId);
					}
					else
						return this->CDefaultSceneManager::setShadowTextureSettings(size, count, fmt, fsaa, depthBufferPoolId);
				}
				virtual const EarthView::World::Graphic::CTexturePtr& getShadowTexture(_in ev_size_t shadowIndex)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CTexturePtr& returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback(shadowIndex);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShadowTexture(shadowIndex);
				}
				virtual void setShadowDirLightTextureOffset(_in Real offset)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowDirLightTextureOffset_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowDirLightTextureOffset_void_Real_Callback(offset);
					}
					else
						return this->CDefaultSceneManager::setShadowDirLightTextureOffset(offset);
				}
				virtual Real getShadowDirLightTextureOffset() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShadowDirLightTextureOffset_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getShadowDirLightTextureOffset_Real_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShadowDirLightTextureOffset();
				}
				virtual void setShadowTextureFadeStart(_in Real fadeStart)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeStart_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeStart_void_Real_Callback(fadeStart);
					}
					else
						return this->CDefaultSceneManager::setShadowTextureFadeStart(fadeStart);
				}
				virtual void setShadowTextureFadeEnd(_in Real fadeEnd)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeEnd_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeEnd_void_Real_Callback(fadeEnd);
					}
					else
						return this->CDefaultSceneManager::setShadowTextureFadeEnd(fadeEnd);
				}
				virtual void setShadowTextureSelfShadow(_in ev_bool selfShadow)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback(selfShadow);
					}
					else
						return this->CDefaultSceneManager::setShadowTextureSelfShadow(selfShadow);
				}
				virtual ev_bool getShadowTextureSelfShadow() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTextureSelfShadow_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getShadowTextureSelfShadow_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShadowTextureSelfShadow();
				}
				virtual void setShadowTextureCasterMaterial(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback(name_Char);
					}
					else
						return this->CDefaultSceneManager::setShadowTextureCasterMaterial(name);
				}
				virtual void setShadowTextureReceiverMaterial(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback(name_Char);
					}
					else
						return this->CDefaultSceneManager::setShadowTextureReceiverMaterial(name);
				}
				virtual void setShadowCasterRenderBackFaces(_in ev_bool bf)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback(bf);
					}
					else
						return this->CDefaultSceneManager::setShadowCasterRenderBackFaces(bf);
				}
				virtual ev_bool getShadowCasterRenderBackFaces() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShadowCasterRenderBackFaces();
				}
				virtual void setShadowCameraSetup(_in const EarthView::World::Graphic::ShadowCameraSetupPtr& shadowSetup)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback(&shadowSetup);
					}
					else
						return this->CDefaultSceneManager::setShadowCameraSetup(shadowSetup);
				}
				virtual const EarthView::World::Graphic::ShadowCameraSetupPtr& getShadowCameraSetup() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::ShadowCameraSetupPtr& returnValue = *(EarthView::World::Graphic::ShadowCameraSetupPtr*)m_EarthView_World_Graphic_CDefaultSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShadowCameraSetup();
				}
				virtual void setShadowUseInfiniteFarPlane(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback(enable);
					}
					else
						return this->CDefaultSceneManager::setShadowUseInfiniteFarPlane(enable);
				}
				virtual ev_bool isShadowTechniqueStencilBased() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::isShadowTechniqueStencilBased();
				}
				virtual ev_bool isShadowTechniqueTextureBased() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::isShadowTechniqueTextureBased();
				}
				virtual ev_bool isShadowTechniqueModulative() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueModulative_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueModulative_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::isShadowTechniqueModulative();
				}
				virtual ev_bool isShadowTechniqueAdditive() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueAdditive_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueAdditive_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::isShadowTechniqueAdditive();
				}
				virtual ev_bool isShadowTechniqueIntegrated() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::isShadowTechniqueIntegrated();
				}
				virtual ev_bool isShadowTechniqueInUse() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueInUse_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueInUse_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::isShadowTechniqueInUse();
				}
				virtual void setShadowUseLightClipPlanes(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback(enabled);
					}
					else
						return this->CDefaultSceneManager::setShadowUseLightClipPlanes(enabled);
				}
				virtual ev_bool getShadowUseLightClipPlanes() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getShadowUseLightClipPlanes();
				}
				virtual void _setActiveCompositorChain(_in EarthView::World::Graphic::CCompositorChain* chain)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback(chain);
					}
					else
						return this->CDefaultSceneManager::_setActiveCompositorChain(chain);
				}
				virtual void setLateMaterialResolving(_in ev_bool isLate)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setLateMaterialResolving_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setLateMaterialResolving_void_ev_bool_Callback(isLate);
					}
					else
						return this->CDefaultSceneManager::setLateMaterialResolving(isLate);
				}
				virtual ev_bool isLateMaterialResolving() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_isLateMaterialResolving_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_isLateMaterialResolving_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::isLateMaterialResolving();
				}
				virtual EarthView::World::Graphic::CCompositorChain* _getActiveCompositorChain() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__getActiveCompositorChain_CCompositorChain_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CCompositorChain* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager__getActiveCompositorChain_CCompositorChain_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::_getActiveCompositorChain();
				}
				virtual void addListener(_in EarthView::World::Graphic::CSceneManager::CSceneManagerListener* ref_s)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_addListener_void_CSceneManagerListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_addListener_void_CSceneManagerListener_Callback(ref_s);
					}
					else
						return this->CDefaultSceneManager::addListener(ref_s);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CSceneManager::CSceneManagerListener* s)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_removeListener_void_CSceneManagerListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_removeListener_void_CSceneManagerListener_Callback(s);
					}
					else
						return this->CDefaultSceneManager::removeListener(s);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CSceneManager::CSceneManagerListener* s)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_existListener_ev_bool_CSceneManagerListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_existListener_ev_bool_CSceneManagerListener_Callback(s);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::existListener(s);
				}
				virtual EarthView::World::Graphic::CStaticGeometry* createStaticGeometry(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CStaticGeometry* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createStaticGeometry(name);
				}
				virtual EarthView::World::Graphic::CStaticGeometry* getStaticGeometry(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CStaticGeometry* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getStaticGeometry(name);
				}
				virtual ev_bool hasStaticGeometry(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_hasStaticGeometry_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_hasStaticGeometry_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::hasStaticGeometry(name);
				}
				virtual void destroyStaticGeometry(_in EarthView::World::Graphic::CStaticGeometry* geom)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback(geom);
					}
					else
						return this->CDefaultSceneManager::destroyStaticGeometry(geom);
				}
				virtual void destroyStaticGeometry(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_EVString_Callback(name_Char);
					}
					else
						return this->CDefaultSceneManager::destroyStaticGeometry(name);
				}
				virtual void destroyAllStaticGeometry()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllStaticGeometry_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllStaticGeometry_void_Callback();
					}
					else
						return this->CDefaultSceneManager::destroyAllStaticGeometry();
				}
				virtual EarthView::World::Graphic::CInstancedGeometry* createInstancedGeometry(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CInstancedGeometry* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createInstancedGeometry(name);
				}
				virtual EarthView::World::Graphic::CInstancedGeometry* getInstancedGeometry(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CInstancedGeometry* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getInstancedGeometry(name);
				}
				virtual void destroyInstancedGeometry(_in EarthView::World::Graphic::CInstancedGeometry* geom)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback(geom);
					}
					else
						return this->CDefaultSceneManager::destroyInstancedGeometry(geom);
				}
				virtual void destroyInstancedGeometry(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_EVString_Callback(name_Char);
					}
					else
						return this->CDefaultSceneManager::destroyInstancedGeometry(name);
				}
				virtual void destroyAllInstancedGeometry()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstancedGeometry_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstancedGeometry_void_Callback();
					}
					else
						return this->CDefaultSceneManager::destroyAllInstancedGeometry();
				}
				virtual EarthView::World::Graphic::CInstanceManager* createInstanceManager(_in const EVString& customName, _in const EVString& meshName, _in const EVString& groupName, _in EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique, _in ev_size_t numInstancesPerBatch, _in ev_uint16 flags, _in ev_uint16 subMeshIdx)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						char* customName_Char = customName.makeBuffer();
						char* meshName_Char = meshName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						EarthView::World::Graphic::CInstanceManager* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback(customName_Char, meshName_Char, groupName_Char, (int)technique, numInstancesPerBatch, flags, subMeshIdx);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createInstanceManager(customName, meshName, groupName, technique, numInstancesPerBatch, flags, subMeshIdx);
				}
				virtual EarthView::World::Graphic::CInstanceManager* createInstanceManager(_in const EVString& customName, _in const EVString& meshName, _in const EVString& groupName, _in EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique, _in ev_size_t numInstancesPerBatch, _in ev_uint16 flags)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						char* customName_Char = customName.makeBuffer();
						char* meshName_Char = meshName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						EarthView::World::Graphic::CInstanceManager* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback(customName_Char, meshName_Char, groupName_Char, (int)technique, numInstancesPerBatch, flags);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createInstanceManager(customName, meshName, groupName, technique, numInstancesPerBatch, flags);
				}
				virtual EarthView::World::Graphic::CInstanceManager* createInstanceManager(_in const EVString& customName, _in const EVString& meshName, _in const EVString& groupName, _in EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique, _in ev_size_t numInstancesPerBatch)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						char* customName_Char = customName.makeBuffer();
						char* meshName_Char = meshName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						EarthView::World::Graphic::CInstanceManager* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback(customName_Char, meshName_Char, groupName_Char, (int)technique, numInstancesPerBatch);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createInstanceManager(customName, meshName, groupName, technique, numInstancesPerBatch);
				}
				virtual EarthView::World::Graphic::CInstanceManager* getInstanceManager(_in const EVString& managerName) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getInstanceManager_CInstanceManager_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* managerName_Char = managerName.makeBuffer();
						EarthView::World::Graphic::CInstanceManager* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getInstanceManager_CInstanceManager_EVString_Callback(managerName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getInstanceManager(managerName);
				}
				virtual ev_bool hasInstanceManager(_in const EVString& managerName) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_hasInstanceManager_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* managerName_Char = managerName.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_hasInstanceManager_ev_bool_EVString_Callback(managerName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::hasInstanceManager(managerName);
				}
				virtual void destroyInstanceManager(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_EVString_Callback(name_Char);
					}
					else
						return this->CDefaultSceneManager::destroyInstanceManager(name);
				}
				virtual void destroyInstanceManager(_in EarthView::World::Graphic::CInstanceManager* instanceManager)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_CInstanceManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_CInstanceManager_Callback(instanceManager);
					}
					else
						return this->CDefaultSceneManager::destroyInstanceManager(instanceManager);
				}
				virtual void destroyInstanceManagerWithThreadSafe(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback(name_Char);
					}
					else
						return this->CDefaultSceneManager::destroyInstanceManagerWithThreadSafe(name);
				}
				virtual void destroyInstanceManagerWithThreadSafe(_in EarthView::World::Graphic::CInstanceManager* instanceManager)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback(instanceManager);
					}
					else
						return this->CDefaultSceneManager::destroyInstanceManagerWithThreadSafe(instanceManager);
				}
				virtual void destroyAllInstanceManagers()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstanceManagers_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstanceManagers_void_Callback();
					}
					else
						return this->CDefaultSceneManager::destroyAllInstanceManagers();
				}
				virtual ev_size_t getNumInstancesPerBatch(_in const EVString& meshName, _in const EVString& groupName, _in const EVString& materialName, _in EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique, _in ev_size_t numInstancesPerBatch)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						char* meshName_Char = meshName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						char* materialName_Char = materialName.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback(meshName_Char, groupName_Char, materialName_Char, (int)technique, numInstancesPerBatch);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getNumInstancesPerBatch(meshName, groupName, materialName, technique, numInstancesPerBatch);
				}
				virtual ev_size_t getNumInstancesPerBatch(_in const EVString& meshName, _in const EVString& groupName, _in const EVString& materialName, _in EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique, _in ev_size_t numInstancesPerBatch, _in ev_uint16 flags)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						char* meshName_Char = meshName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						char* materialName_Char = materialName.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback(meshName_Char, groupName_Char, materialName_Char, (int)technique, numInstancesPerBatch, flags);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getNumInstancesPerBatch(meshName, groupName, materialName, technique, numInstancesPerBatch, flags);
				}
				virtual ev_size_t getNumInstancesPerBatch(_in const EVString& meshName, _in const EVString& groupName, _in const EVString& materialName, _in EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique, _in ev_size_t numInstancesPerBatch, _in ev_uint16 flags, _in ev_uint16 subMeshIdx)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						char* meshName_Char = meshName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						char* materialName_Char = materialName.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback(meshName_Char, groupName_Char, materialName_Char, (int)technique, numInstancesPerBatch, flags, subMeshIdx);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getNumInstancesPerBatch(meshName, groupName, materialName, technique, numInstancesPerBatch, flags, subMeshIdx);
				}
				virtual EarthView::World::Graphic::CInstancedEntity* createInstancedEntity(_in const EVString& materialName, _in const EVString& managerName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						char* managerName_Char = managerName.makeBuffer();
						EarthView::World::Graphic::CInstancedEntity* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback(materialName_Char, managerName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createInstancedEntity(materialName, managerName);
				}
				virtual void destroyInstancedEntity(_in EarthView::World::Graphic::CInstancedEntity* instancedEntity)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback(instancedEntity);
					}
					else
						return this->CDefaultSceneManager::destroyInstancedEntity(instancedEntity);
				}
				virtual EarthView::World::Graphic::CMovableObject* createMovableObject(_in const EVString& name, _in const EVString& typeName, _in const EarthView::World::Core::CommonStringPairList* params)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* typeName_Char = typeName.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback(name_Char, typeName_Char, params);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createMovableObject(name, typeName, params);
				}
				virtual EarthView::World::Graphic::CMovableObject* createMovableObject(_in const EVString& name, _in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* typeName_Char = typeName.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback(name_Char, typeName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createMovableObject(name, typeName);
				}
				virtual EarthView::World::Graphic::CMovableObject* createMovableObject(_in const EVString& typeName, _in const EarthView::World::Core::CommonStringPairList* params)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* typeName_Char = typeName.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback(typeName_Char, params);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createMovableObject(typeName, params);
				}
				virtual EarthView::World::Graphic::CMovableObject* createMovableObject(_in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* typeName_Char = typeName.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_Callback(typeName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::createMovableObject(typeName);
				}
				virtual void destroyMovableObject(_in const EVString& name, _in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* typeName_Char = typeName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_EVString_EVString_Callback(name_Char, typeName_Char);
					}
					else
						return this->CDefaultSceneManager::destroyMovableObject(name, typeName);
				}
				virtual void destroyMovableObject(_in EarthView::World::Graphic::CMovableObject* m)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_CMovableObject_Callback(m);
					}
					else
						return this->CDefaultSceneManager::destroyMovableObject(m);
				}
				virtual void destroyAllMovableObjectsByType(_in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* typeName_Char = typeName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback(typeName_Char);
					}
					else
						return this->CDefaultSceneManager::destroyAllMovableObjectsByType(typeName);
				}
				virtual void destroyAllMovableObjects()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjects_void_Callback();
					}
					else
						return this->CDefaultSceneManager::destroyAllMovableObjects();
				}
				virtual EarthView::World::Graphic::CMovableObject* getMovableObject(_in const EVString& name, _in const EVString& typeName) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* typeName_Char = typeName.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback(name_Char, typeName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getMovableObject(name, typeName);
				}
				virtual ev_bool hasMovableObject(_in const EVString& name, _in const EVString& typeName) const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* typeName_Char = typeName.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback(name_Char, typeName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::hasMovableObject(name, typeName);
				}
				virtual EarthView::World::Graphic::CSceneManager::MovableObjectIterator getMovableObjectIterator(_in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* typeName_Char = typeName.makeBuffer();
						EarthView::World::Graphic::CSceneManager::MovableObjectIterator returnValue = *(EarthView::World::Graphic::CSceneManager::MovableObjectIterator*)m_EarthView_World_Graphic_CDefaultSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback(typeName_Char);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getMovableObjectIterator(typeName);
				}
				virtual void injectMovableObject(_in EarthView::World::Graphic::CMovableObject* m)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_injectMovableObject_void_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_injectMovableObject_void_CMovableObject_Callback(m);
					}
					else
						return this->CDefaultSceneManager::injectMovableObject(m);
				}
				virtual void extractMovableObject(_in const EVString& name, _in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* typeName_Char = typeName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_EVString_EVString_Callback(name_Char, typeName_Char);
					}
					else
						return this->CDefaultSceneManager::extractMovableObject(name, typeName);
				}
				virtual void extractMovableObject(_in EarthView::World::Graphic::CMovableObject* m)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_CMovableObject_Callback(m);
					}
					else
						return this->CDefaultSceneManager::extractMovableObject(m);
				}
				virtual void extractAllMovableObjectsByType(_in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_extractAllMovableObjectsByType_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* typeName_Char = typeName.makeBuffer();
						m_EarthView_World_Graphic_CDefaultSceneManager_extractAllMovableObjectsByType_void_EVString_Callback(typeName_Char);
					}
					else
						return this->CDefaultSceneManager::extractAllMovableObjectsByType(typeName);
				}
				virtual void setVisibilityMask(_in ev_uint32 vmask)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setVisibilityMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setVisibilityMask_void_ev_uint32_Callback(vmask);
					}
					else
						return this->CDefaultSceneManager::setVisibilityMask(vmask);
				}
				virtual ev_uint32 getVisibilityMask()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getVisibilityMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getVisibilityMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getVisibilityMask();
				}
				virtual void setFindVisibleObjects(_in ev_bool find)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setFindVisibleObjects_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setFindVisibleObjects_void_ev_bool_Callback(find);
					}
					else
						return this->CDefaultSceneManager::setFindVisibleObjects(find);
				}
				virtual ev_bool getFindVisibleObjects()
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getFindVisibleObjects_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getFindVisibleObjects_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getFindVisibleObjects();
				}
				virtual void setNormaliseNormalsOnScale(_in ev_bool n)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback(n);
					}
					else
						return this->CDefaultSceneManager::setNormaliseNormalsOnScale(n);
				}
				virtual ev_bool getNormaliseNormalsOnScale() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getNormaliseNormalsOnScale();
				}
				virtual void setFlipCullingOnNegativeScale(_in ev_bool n)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback(n);
					}
					else
						return this->CDefaultSceneManager::setFlipCullingOnNegativeScale(n);
				}
				virtual ev_bool getFlipCullingOnNegativeScale() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getFlipCullingOnNegativeScale();
				}
				virtual void _injectRenderWithPass(_in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CRenderable* rend, _in ev_bool shadowDerivation, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback(pass, rend, shadowDerivation, doLightIteration, manualLightList);
					}
					else
						return this->CDefaultSceneManager::_injectRenderWithPass(pass, rend, shadowDerivation, doLightIteration, manualLightList);
				}
				virtual void _injectRenderWithPass(_in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CRenderable* rend, _in ev_bool shadowDerivation, _in ev_bool doLightIteration)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback(pass, rend, shadowDerivation, doLightIteration);
					}
					else
						return this->CDefaultSceneManager::_injectRenderWithPass(pass, rend, shadowDerivation, doLightIteration);
				}
				virtual void _injectRenderWithPass(_in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CRenderable* rend, _in ev_bool shadowDerivation)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback(pass, rend, shadowDerivation);
					}
					else
						return this->CDefaultSceneManager::_injectRenderWithPass(pass, rend, shadowDerivation);
				}
				virtual void _injectRenderWithPass(_in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CRenderable* rend)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback(pass, rend);
					}
					else
						return this->CDefaultSceneManager::_injectRenderWithPass(pass, rend);
				}
				virtual void _suppressRenderStateChanges(_in ev_bool suppress)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__suppressRenderStateChanges_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__suppressRenderStateChanges_void_ev_bool_Callback(suppress);
					}
					else
						return this->CDefaultSceneManager::_suppressRenderStateChanges(suppress);
				}
				virtual ev_bool _areRenderStateChangesSuppressed() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::_areRenderStateChangesSuppressed();
				}
				virtual const EarthView::World::Graphic::CPass* _setPass(_in const EarthView::World::Graphic::CPass* pass, _in ev_bool evenIfSuppressed, _in ev_bool shadowDerivation)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CPass* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback(pass, evenIfSuppressed, shadowDerivation);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::_setPass(pass, evenIfSuppressed, shadowDerivation);
				}
				virtual const EarthView::World::Graphic::CPass* _setPass(_in const EarthView::World::Graphic::CPass* pass, _in ev_bool evenIfSuppressed)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CPass* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_Callback(pass, evenIfSuppressed);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::_setPass(pass, evenIfSuppressed);
				}
				virtual const EarthView::World::Graphic::CPass* _setPass(_in const EarthView::World::Graphic::CPass* pass)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CPass* returnValue = m_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_Callback(pass);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::_setPass(pass);
				}
				virtual void _markGpuParamsDirty(_in ev_uint16 mask)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__markGpuParamsDirty_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__markGpuParamsDirty_void_ev_uint16_Callback(mask);
					}
					else
						return this->CDefaultSceneManager::_markGpuParamsDirty(mask);
				}
				virtual void _suppressShadows(_in ev_bool suppress)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__suppressShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__suppressShadows_void_ev_bool_Callback(suppress);
					}
					else
						return this->CDefaultSceneManager::_suppressShadows(suppress);
				}
				virtual ev_bool _areShadowsSuppressed() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__areShadowsSuppressed_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager__areShadowsSuppressed_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::_areShadowsSuppressed();
				}
				virtual void _renderQueueGroupObjects(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback(group, (int)om);
					}
					else
						return this->CDefaultSceneManager::_renderQueueGroupObjects(group, om);
				}
				virtual void setCameraRelativeRendering(_in ev_bool rel)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setCameraRelativeRendering_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setCameraRelativeRendering_void_ev_bool_Callback(rel);
					}
					else
						return this->CDefaultSceneManager::setCameraRelativeRendering(rel);
				}
				virtual ev_bool getCameraRelativeRendering() const
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getCameraRelativeRendering_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getCameraRelativeRendering_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getCameraRelativeRendering();
				}
				virtual Real getHeightAt(_in Real latitude, _in Real lontitude, _in ev_real32 targetSamplesPerDegrees)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback(latitude, lontitude, targetSamplesPerDegrees);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getHeightAt(latitude, lontitude, targetSamplesPerDegrees);
				}
				virtual Real getBestHeightAt(_in Real latitude, _in Real lontitude)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getBestHeightAt_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getBestHeightAt_Real_Real_Real_Callback(latitude, lontitude);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getBestHeightAt(latitude, lontitude);
				}
				virtual Real getHeightAtTile(_in Real latitude, _in Real lontitude)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getHeightAtTile_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getHeightAtTile_Real_Real_Real_Callback(latitude, lontitude);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getHeightAtTile(latitude, lontitude);
				}
				virtual ev_bool getTileEnvelope(_in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _inout Real& minX, _inout Real& maxX, _inout Real& minY, _inout Real& maxY)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback(level, row, col, minX, maxX, minY, maxY);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::getTileEnvelope(level, row, col, minX, maxX, minY, maxY);
				}
				virtual ev_bool addTempLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_addTempLayer_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_addTempLayer_ev_bool_ILayer_Callback(layer);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::addTempLayer(layer);
				}
				virtual ev_bool removeTempLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_removeTempLayer_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CDefaultSceneManager_removeTempLayer_ev_bool_ILayer_Callback(layer);
						return returnValue;
					}
					else
						return this->CDefaultSceneManager::removeTempLayer(layer);
				}
				virtual void updateQuadImage(_in bool updateImageGroup, _in bool updateFeatureGroup, _in bool updateKmlGroup)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Callback(updateImageGroup, updateFeatureGroup, updateKmlGroup);
					}
					else
						return this->CDefaultSceneManager::updateQuadImage(updateImageGroup, updateFeatureGroup, updateKmlGroup);
				}
				virtual void updateQuadImage(_in bool updateImageGroup, _in bool updateFeatureGroup, _in bool updateKmlGroup, _in Real minX, _in Real maxX, _in Real minY, _in Real maxY)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback(updateImageGroup, updateFeatureGroup, updateKmlGroup, minX, maxX, minY, maxY);
					}
					else
						return this->CDefaultSceneManager::updateQuadImage(updateImageGroup, updateFeatureGroup, updateKmlGroup, minX, maxX, minY, maxY);
				}
				virtual void updateOBQ(_in ev_bool bUpdateVectorTexture, _in ev_bool bUpdateKmlTexture, _in ev_bool bUpdateTemporaryTexture, _in ev_bool bUpdateTerrain)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback(bUpdateVectorTexture, bUpdateKmlTexture, bUpdateTemporaryTexture, bUpdateTerrain);
					}
					else
						return this->CDefaultSceneManager::updateOBQ(bUpdateVectorTexture, bUpdateKmlTexture, bUpdateTemporaryTexture, bUpdateTerrain);
				}
				virtual void setCollisionDetectionEnable(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CDefaultSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback(enable);
					}
					else
						return this->CDefaultSceneManager::setCollisionDetectionEnable(enable);
				}
			};
			REGISTER_FACTORY_CLASS(CDefaultSceneManagerProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CDefaultSceneManager_getTypeName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDefaultSceneManager* ptrNativeObject = (EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX;
				if (dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultSceneManager::getTypeName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getTypeName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getTypeName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getTypeName_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getTypeName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CDefaultSceneManager_getTypeName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CDefaultSceneManager* ptrNativeObject = (EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultSceneManager::getTypeName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createSceneNodeImpl_CSceneNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_initRenderQueue_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_initRenderQueue_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_initRenderQueue_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_deriveShadowCasterPass_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_deriveShadowCasterPass_CPass_CPass_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_deriveShadowCasterPass_CPass_CPass(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_deriveShadowReceiverPass_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_deriveShadowReceiverPass_CPass_CPass(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_validatePassForRendering_ev_bool_CPass( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_validatePassForRendering_ev_bool_CPass_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_validatePassForRendering_ev_bool_CPass(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_resetViewProjMode_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_resetViewProjMode_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_resetViewProjMode_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_firePreRenderQueues_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_firePreRenderQueues_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_firePreRenderQueues_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_firePostRenderQueues_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_firePostRenderQueues_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_firePostRenderQueues_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesUpdated_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesUpdated_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_firePreUpdateSceneGraph_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_firePreUpdateSceneGraph_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_firePostUpdateSceneGraph_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_firePostUpdateSceneGraph_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_firePreFindVisibleObjects_void_CViewport( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_firePreFindVisibleObjects_void_CViewport_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_firePreFindVisibleObjects_void_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_firePostFindVisibleObjects_void_CViewport( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_firePostFindVisibleObjects_void_CViewport_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_firePostFindVisibleObjects_void_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_fireSceneManagerDestroyed_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_fireSceneManagerDestroyed_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_fireSceneManagerDestroyed_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setViewport_void_CViewport( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setViewport_void_CViewport_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setViewport_void_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsDefaultSequence_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsDefaultSequence_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsDefaultSequence_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareRenderQueue_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_prepareRenderQueue_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareRenderQueue_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createAutoParamDataSource_CAutoParamDataSource( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createAutoParamDataSource_CAutoParamDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_findLightsAffectingFrustum_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_findLightsAffectingFrustum_void_CCamera_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_findLightsAffectingFrustum_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_initShadowVolumeMaterials_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_initShadowVolumeMaterials_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_initShadowVolumeMaterials_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_ensureShadowTexturesCreated_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_ensureShadowTexturesCreated_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_ensureShadowTexturesCreated_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyShadowTextures_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyShadowTextures_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyShadowTextures_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareShadowTextures_void_CCamera_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setImageDefaultMaterial_void_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setImageDefaultMaterial_void_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setImageUseDefaultMaterial_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setImageUseDefaultMaterial_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSunPosition_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSunPosition_CVector3_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSunPosition_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setAtmosphereVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setAtmosphereVisible_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setAtmosphereVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_storeAtmosphereVisibleState_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_storeAtmosphereVisibleState_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_storeAtmosphereVisibleState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_restoreAtmosphereVisibleState_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_restoreAtmosphereVisibleState_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_restoreAtmosphereVisibleState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSunVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSunVisible_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSunVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__pauseRendering_RenderContext( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__pauseRendering_RenderContext_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__pauseRendering_RenderContext(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__resumeRendering_void_RenderContext( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__resumeRendering_void_RenderContext_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__resumeRendering_void_RenderContext(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueSplitOptions_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueSplitOptions_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueSplitOptions_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_buildScissor_void_CLight_CCamera_RealRect( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_buildScissor_void_CLight_CCamera_RealRect(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_resetScissor_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_resetScissor_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_resetScissor_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_buildAndSetLightClip_ClipResult_LightList( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_buildAndSetLightClip_ClipResult_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_buildLightClip_void_CLight_PlaneList( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_buildLightClip_void_CLight_PlaneList_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_buildLightClip_void_CLight_PlaneList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_resetLightClip_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_resetLightClip_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_resetLightClip_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_checkCachedLightClippingInfo_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_checkCachedLightClippingInfo_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_checkCachedLightClippingInfo_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_useLights_void_LightList_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_useLights_void_LightList_ev_uint16_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_useLights_void_LightList_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setViewMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setViewMatrix_void_CMatrix4_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setViewMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_useLightsGpuProgram_void_CPass_LightList( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_useLightsGpuProgram_void_CPass_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_bindGpuProgram_void_CGpuProgram( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_bindGpuProgram_void_CGpuProgram_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_bindGpuProgram_void_CGpuProgram(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_updateGpuProgramParameters_void_CPass( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_updateGpuProgramParameters_void_CPass_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_updateGpuProgramParameters_void_CPass(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createCamera_CCamera_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createCamera_CCamera_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createCamera_CCamera_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getCamera_CCamera_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getCamera_CCamera_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getCamera_CCamera_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_hasCamera_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_hasCamera_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasCamera_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_CCamera_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyCamera_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllCameras_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyAllCameras_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllCameras_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createLight_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getLightCount_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getLightCount_ev_uint16_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getLightCount_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_ev_uint16_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getLight_CLight_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_hasLight_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_hasLight_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasLight_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getLightClippingPlanes_PlaneList_CLight( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getLightClippingPlanes_PlaneList_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getLightScissorRect_RealRect_CLight_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getLightScissorRect_RealRect_CLight_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_CLight( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_CLight_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyLight_void_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllLights_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyAllLights_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllLights_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowTexName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowTexName_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowTexName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowTexCam_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShadowTexCam_CCamera_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowTexCam_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getCascadeEyeSpaceDepthArray_CVector4( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getCascadeEyeSpaceDepthArray_CVector4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNearClip_float_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNearClip_float_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowFarClip_float_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowFarClip_float_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowFitToCascadesMode_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowFitToCascadesMode_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getCurrentClipIndex_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getCurrentClipIndex_ev_uint8_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getCurrentClipIndex_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowTechnique_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowTechnique_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getIsUseSoftShadowTechnique_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowTechnique_void_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setIsUseSoftShadowTechnique_void_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsPercent_float( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsPercent_float_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsPercent_float(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsPercent_void_float( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsPercent_void_float_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsPercent_void_float(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsDistance_int_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getCascadePartitionsDistance_int_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowOffsetFormat_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowOffsetFormat_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_checkShadowCasterInFrustum_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_checkShadowCasterInFrustum_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_hasShadowCasterInFrustum_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_hasShadowCasterInFrustum_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasShadowCasterInFrustum_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowLightBleedPower_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowLightBleedPower_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowLightBleedPower_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowLightBleedPower_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowLightBleedPower_void_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowLightBleedPower_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowDepthOffset_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowDepthOffset_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowDepthOffset_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowDepthOffset_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowDepthOffset_void_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowDepthOffset_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNormalFactor_float( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNormalFactor_float_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSoftShadowNormalFactor_float(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowNormalFactor_void_float( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowNormalFactor_void_float_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSoftShadowNormalFactor_void_float(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__notifyLightsDirty_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__notifyLightsDirty_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__notifyLightsDirty_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__getLightsAffectingFrustum_LightList( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__getLightsAffectingFrustum_LightList_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__getLightsAffectingFrustum_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CVector3_Real_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_showImage_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_showImage_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_showImage_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getImageVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getImageVisible_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getImageVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_showOcean_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_showOcean_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_showOcean_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getOceanVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getOceanVisible_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getOceanVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__populateLightList_void_CSceneNode_Real_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createSceneNode_CSceneNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_CSceneNode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroySceneNode_void_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getRootSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getRootSceneNode_CSceneNode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getRootSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSceneNode_CSceneNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSceneNode_CSceneNode_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSceneNode_CSceneNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_hasSceneNode_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_hasSceneNode_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasSceneNode_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_CMeshPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_CMeshPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_IntVector_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_PrefabType( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_PrefabType_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_EVString_PrefabType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_PrefabType( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_PrefabType_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createEntity_CEntity_PrefabType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getEntity_CEntity_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getEntity_CEntity_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getEntity_CEntity_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_hasEntity_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_hasEntity_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasEntity_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_CEntity( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_CEntity_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_CEntity(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyEntity_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllEntities_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyAllEntities_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllEntities_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createManualObject_CManualObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getManualObject_CManualObject_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getManualObject_CManualObject_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getManualObject_CManualObject_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_hasManualObject_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_hasManualObject_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasManualObject_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_CManualObject( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_CManualObject_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_CManualObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyManualObject_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllManualObjects_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyAllManualObjects_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllManualObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_usingWebMercator_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_usingWebMercator_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_usingWebMercator_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardChain_CBillboardChain(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getBillboardChain_CBillboardChain_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getBillboardChain_CBillboardChain_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getBillboardChain_CBillboardChain_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_hasBillboardChain_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_hasBillboardChain_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasBillboardChain_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_CBillboardChain( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_CBillboardChain_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_CBillboardChain(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardChain_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardChains_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardChains_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardChains_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createRibbonTrail_CRibbonTrail(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getRibbonTrail_CRibbonTrail_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getRibbonTrail_CRibbonTrail_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_hasRibbonTrail_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_hasRibbonTrail_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasRibbonTrail_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_CRibbonTrail( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_CRibbonTrail(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyRibbonTrail_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllRibbonTrails_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyAllRibbonTrails_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllRibbonTrails_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createParticleSystem_CParticleSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getParticleSystem_CParticleSystem_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getParticleSystem_CParticleSystem_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getParticleSystem_CParticleSystem_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_hasParticleSystem_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_hasParticleSystem_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasParticleSystem_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_CParticleSystem( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_CParticleSystem_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_CParticleSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyParticleSystem_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllParticleSystems_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyAllParticleSystems_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllParticleSystems_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_clearScene_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_clearScene_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_clearScene_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_prepareWorldGeometry_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometry_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSuggestedViewpoint_ViewPoint(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setOption_ev_bool_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setOption_ev_bool_EVString_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setOption_ev_bool_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getOption_ev_bool_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getOption_ev_bool_EVString_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getOption_ev_bool_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_hasOption_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_hasOption_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasOption_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getOptionValues_ev_bool_EVString_StringVector( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getOptionValues_ev_bool_EVString_StringVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getOptionKeys_ev_bool_StringVector( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getOptionKeys_ev_bool_StringVector_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getOptionKeys_ev_bool_StringVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__updateSceneGraph_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__updateSceneGraph_void_CCamera_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__updateSceneGraph_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__applySceneAnimations_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__applySceneAnimations_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__applySceneAnimations_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__renderVisibleObjects_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__renderVisibleObjects_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__renderVisibleObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__renderScene_void_CCamera_CViewport_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__renderScene_void_CCamera_CViewport_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__queueSkiesForRendering_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__queueSkiesForRendering_void_CCamera_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__queueSkiesForRendering_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setDestinationRenderSystem_void_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setDestinationRenderSystem_void_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlaneEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyPlaneEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_isSkyPlaneEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_isSkyPlaneEnabled_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isSkyPlaneEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneNode_CSceneNode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBox_void_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyBox_void_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBoxEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyBoxEnabled_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyBoxEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_isSkyBoxEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_isSkyBoxEnabled_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isSkyBoxEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxNode_CSceneNode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDome_void_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setSkyDome_void_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDomeEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSkyDomeEnabled_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSkyDomeEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_isSkyDomeEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_isSkyDomeEnabled_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isSkyDomeEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeNode_CSceneNode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getFogMode_FogMode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getFogMode_FogMode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getFogMode_FogMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getFogColour_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getFogColour_CColourValue_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getFogColour_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getFogStart_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getFogStart_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getFogStart_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getFogEnd_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getFogEnd_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getFogEnd_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getFogDensity_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getFogDensity_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getFogDensity_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createBillboardSet_CBillboardSet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getBillboardSet_CBillboardSet_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getBillboardSet_CBillboardSet_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getBillboardSet_CBillboardSet_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_hasBillboardSet_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_hasBillboardSet_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasBillboardSet_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_CBillboardSet( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_CBillboardSet_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_CBillboardSet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyBillboardSet_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardSets_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardSets_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllBillboardSets_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setDisplaySceneNodes_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setDisplaySceneNodes_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setDisplaySceneNodes_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getDisplaySceneNodes_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getDisplaySceneNodes_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getDisplaySceneNodes_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createAnimation_CAnimation_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createAnimation_CAnimation_EVString_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createAnimation_CAnimation_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getAnimation_CAnimation_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getAnimation_CAnimation_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getAnimation_CAnimation_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_hasAnimation_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_hasAnimation_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasAnimation_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyAnimation_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAnimation_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimations_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimations_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimations_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createAnimationState_CAnimationState_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createAnimationState_CAnimationState_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createAnimationState_CAnimationState_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getAnimationState_CAnimationState_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getAnimationState_CAnimationState_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getAnimationState_CAnimationState_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_hasAnimationState_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_hasAnimationState_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasAnimationState_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAnimationState_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyAnimationState_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAnimationState_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimationStates_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimationStates_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllAnimationStates_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getRenderQueue_CRenderQueue( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getRenderQueue_CRenderQueue_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getRenderQueue_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_addRenderQueueListener_void_CRenderQueueListener( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_addRenderQueueListener_void_CRenderQueueListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_removeRenderQueueListener_void_CRenderQueueListener( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_removeRenderQueueListener_void_CRenderQueueListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_addRenderObjectListener_void_CRenderObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_addRenderObjectListener_void_CRenderObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_removeRenderObjectListener_void_CRenderObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_removeRenderObjectListener_void_CRenderObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_addSpecialCaseRenderQueue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_addSpecialCaseRenderQueue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_clearSpecialCaseRenderQueues_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_clearSpecialCaseRenderQueues_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_clearSpecialCaseRenderQueues_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometryRenderQueue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setWorldGeometryRenderQueue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getWorldGeometryRenderQueue_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getWorldGeometryRenderQueue_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_showBoundingBoxes_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_showBoundingBoxes_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_showBoundingBoxes_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShowBoundingBoxes_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShowBoundingBoxes_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShowBoundingBoxes_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createSphereQuery_CSphereSceneQuery_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createRayQuery_CRaySceneQuery_CRay(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createIntersectionQuery_CIntersectionSceneQuery(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyQuery_void_CSceneQuery( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyQuery_void_CSceneQuery_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyQuery_void_CSceneQuery(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTechnique_void_ShadowTechnique( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTechnique_void_ShadowTechnique_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTechnique_void_ShadowTechnique(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowTechnique_ShadowTechnique( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShadowTechnique_ShadowTechnique_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowTechnique_ShadowTechnique(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShowDebugShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShowDebugShadows_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShowDebugShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShowDebugShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShowDebugShadows_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShowDebugShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowColour_void_CColourValue_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowColour_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowColour_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShadowColour_CColourValue_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowColour_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowDirectionalLightExtrusionDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowDirectionalLightExtrusionDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorRRatio_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowColorRRatio_void_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorRRatio_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorGRatio_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowColorGRatio_void_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorGRatio_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorBRatio_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowColorBRatio_void_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowColorBRatio_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorRRatio_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShadowColorRRatio_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorRRatio_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorGRatio_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShadowColorGRatio_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorGRatio_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorBRatio_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShadowColorBRatio_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowColorBRatio_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowFarDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowFarDistance_void_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowFarDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistance_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistanceSquared_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistanceSquared_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowFarDistanceSquared_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowIndexBufferSize_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowIndexBufferSize_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowIndexBufferSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShadowIndexBufferSize_ev_size_t_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowIndexBufferSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSize_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSize_void_ev_uint16_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSize_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTexturePixelFormat_void_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTexturePixelFormat_void_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFSAA_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFSAA_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCount_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCount_void_ev_size_t_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCount_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowTexture_CTexturePtr_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowTexture_CTexturePtr_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowDirLightTextureOffset_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowDirLightTextureOffset_void_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowDirLightTextureOffset_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowDirLightTextureOffset_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShadowDirLightTextureOffset_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowDirLightTextureOffset_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeStart_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeStart_void_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeStart_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeEnd_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeEnd_void_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureFadeEnd_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSelfShadow_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureSelfShadow_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowTextureSelfShadow_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShadowTextureSelfShadow_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowTextureSelfShadow_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCasterMaterial_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureCasterMaterial_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureReceiverMaterial_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowTextureReceiverMaterial_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowCasterRenderBackFaces_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowCasterRenderBackFaces_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowCasterRenderBackFaces_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowCasterRenderBackFaces_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueStencilBased_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueStencilBased_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueTextureBased_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueTextureBased_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueModulative_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueModulative_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueModulative_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueAdditive_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueAdditive_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueAdditive_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueIntegrated_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueIntegrated_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueInUse_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueInUse_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isShadowTechniqueInUse_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowUseLightClipPlanes_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setShadowUseLightClipPlanes_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowUseLightClipPlanes_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getShadowUseLightClipPlanes_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setActiveCompositorChain_void_CCompositorChain( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setActiveCompositorChain_void_CCompositorChain(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setLateMaterialResolving_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setLateMaterialResolving_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setLateMaterialResolving_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_isLateMaterialResolving_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_isLateMaterialResolving_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_isLateMaterialResolving_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__getActiveCompositorChain_CCompositorChain( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__getActiveCompositorChain_CCompositorChain_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__getActiveCompositorChain_CCompositorChain(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_addListener_void_CSceneManagerListener( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_addListener_void_CSceneManagerListener_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_addListener_void_CSceneManagerListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_removeListener_void_CSceneManagerListener( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_removeListener_void_CSceneManagerListener_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_removeListener_void_CSceneManagerListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_existListener_ev_bool_CSceneManagerListener( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_existListener_ev_bool_CSceneManagerListener_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_existListener_ev_bool_CSceneManagerListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createStaticGeometry_CStaticGeometry_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createStaticGeometry_CStaticGeometry_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getStaticGeometry_CStaticGeometry_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getStaticGeometry_CStaticGeometry_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_hasStaticGeometry_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_hasStaticGeometry_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasStaticGeometry_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_CStaticGeometry( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_CStaticGeometry(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyStaticGeometry_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllStaticGeometry_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyAllStaticGeometry_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllStaticGeometry_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createInstancedGeometry_CInstancedGeometry_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createInstancedGeometry_CInstancedGeometry_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getInstancedGeometry_CInstancedGeometry_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getInstancedGeometry_CInstancedGeometry_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_CInstancedGeometry( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_CInstancedGeometry(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedGeometry_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstancedGeometry_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstancedGeometry_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstancedGeometry_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getInstanceManager_CInstanceManager_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getInstanceManager_CInstanceManager_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getInstanceManager_CInstanceManager_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_hasInstanceManager_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_hasInstanceManager_ev_bool_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasInstanceManager_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_CInstanceManager( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_CInstanceManager_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManager_void_CInstanceManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstanceManagers_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstanceManagers_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllInstanceManagers_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedEntity_void_CInstancedEntity( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyInstancedEntity_void_CInstancedEntity(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_createMovableObject_CMovableObject_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_EVString_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_CMovableObject_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyMovableObject_void_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjectsByType_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjectsByType_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjects_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjects_void_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_destroyAllMovableObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getMovableObject_CMovableObject_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getMovableObject_CMovableObject_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_hasMovableObject_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_hasMovableObject_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_injectMovableObject_void_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_injectMovableObject_void_CMovableObject_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_injectMovableObject_void_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_EVString_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_CMovableObject_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_extractMovableObject_void_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_extractAllMovableObjectsByType_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_extractAllMovableObjectsByType_void_EVString_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_extractAllMovableObjectsByType_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setVisibilityMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setVisibilityMask_void_ev_uint32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setVisibilityMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getVisibilityMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getVisibilityMask_ev_uint32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getVisibilityMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setFindVisibleObjects_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setFindVisibleObjects_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setFindVisibleObjects_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getFindVisibleObjects_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getFindVisibleObjects_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getFindVisibleObjects_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setNormaliseNormalsOnScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setNormaliseNormalsOnScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getNormaliseNormalsOnScale_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getNormaliseNormalsOnScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setFlipCullingOnNegativeScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setFlipCullingOnNegativeScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getFlipCullingOnNegativeScale_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getFlipCullingOnNegativeScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__injectRenderWithPass_void_CPass_CRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__suppressRenderStateChanges_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__suppressRenderStateChanges_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__suppressRenderStateChanges_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__areRenderStateChangesSuppressed_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__areRenderStateChangesSuppressed_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__setPass_CPass_CPass(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__markGpuParamsDirty_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__markGpuParamsDirty_void_ev_uint16_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__markGpuParamsDirty_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__suppressShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__suppressShadows_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__suppressShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__areShadowsSuppressed_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__areShadowsSuppressed_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__areShadowsSuppressed_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setCameraRelativeRendering_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setCameraRelativeRendering_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setCameraRelativeRendering_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getCameraRelativeRendering_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getCameraRelativeRendering_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getCameraRelativeRendering_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getHeightAt_Real_Real_Real_ev_real32( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getHeightAt_Real_Real_Real_ev_real32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getBestHeightAt_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getBestHeightAt_Real_Real_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getBestHeightAt_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getHeightAtTile_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getHeightAtTile_Real_Real_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getHeightAtTile_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_addTempLayer_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_addTempLayer_ev_bool_ILayer_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_addTempLayer_ev_bool_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_removeTempLayer_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_removeTempLayer_ev_bool_ILayer_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_removeTempLayer_ev_bool_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultSceneManager_setCollisionDetectionEnable_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback* pCallback )
			{
				CDefaultSceneManagerProxy* ptr = dynamic_cast<CDefaultSceneManagerProxy*>((EarthView::World::Graphic::CDefaultSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultSceneManager_setCollisionDetectionEnable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagers_push_ev_bool_EVString_CSceneManager(void *pObjectXXXX, _in const char* key, _in EarthView::World::Graphic::CSceneManager*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagers_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagers_OperatorIndex_CSceneManager_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers& objYYYY = *(EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers*) pObjXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagers_get_CSceneManager_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagers_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagers_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagers_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagers_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataList_push_back_void_SceneManagerMetaData(void *pObjectXXXX, _in const EarthView::World::Graphic::SceneManagerMetaData*& t )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::SceneManagerMetaData*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataList_front_SceneManagerMetaData(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList*) pObjectXXXX;
				const EarthView::World::Graphic::SceneManagerMetaData* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::SceneManagerMetaData*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataList_back_SceneManagerMetaData(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList*) pObjectXXXX;
				const EarthView::World::Graphic::SceneManagerMetaData* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataList_insert_void_ev_uint32_SceneManagerMetaData(void *pObjectXXXX, _in ev_uint32 pos, _in const EarthView::World::Graphic::SceneManagerMetaData*& t )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::SceneManagerMetaData*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataList_OperatorIndex_SceneManagerMetaData_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList& objYYYY = *(EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList*) pObjXXXX;
				const EarthView::World::Graphic::SceneManagerMetaData* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::SceneManagerMetaData*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataList_at_SceneManagerMetaData_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList*) pObjectXXXX;
				const EarthView::World::Graphic::SceneManagerMetaData* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagerIteratorPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagerIteratorPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall Get_EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagerIteratorPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagerIteratorPair_second( void *pObjectXXXX, EarthView::World::Graphic::CSceneManager*  value )
			{
				((EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::SceneManagerMetaData*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataIterator_getCurrent_SceneManagerMetaData(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator*) pObjectXXXX;
				const EarthView::World::Graphic::SceneManagerMetaData* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::SceneManagerMetaData*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataIterator_next_SceneManagerMetaData(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator*) pObjectXXXX;
				const EarthView::World::Graphic::SceneManagerMetaData* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::SceneManagerMetaData*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataIterator_getBegin_SceneManagerMetaData(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator*) pObjectXXXX;
				const EarthView::World::Graphic::SceneManagerMetaData* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::SceneManagerMetaData*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_MetaDataIterator_getEnd_SceneManagerMetaData(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator*) pObjectXXXX;
				const EarthView::World::Graphic::SceneManagerMetaData* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagerIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagerIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagerIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagerIterator_nextValue_CSceneManager(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager**  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagerIterator_nextValuePtr_CSceneManager(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagerIterator_next_CSceneManager(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagerIterator_getBegin_SceneManagerIteratorPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagerIterator_getEnd_SceneManagerIteratorPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_SceneManagerIterator_getCurrent_SceneManagerIteratorPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_addFactory_void_CSceneManagerFactory(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManagerFactory* ref_fact )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator*) pObjectXXXX;
				ptrNativeObject->addFactory(ref_fact);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_removeFactory_void_CSceneManagerFactory(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManagerFactory* fact )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator*) pObjectXXXX;
				ptrNativeObject->removeFactory(fact);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::SceneManagerMetaData*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_getMetaData_SceneManagerMetaData_EVString(void *pObjectXXXX, _in const char* typeName )
			{
				EarthView::World::Core::ev_string typeName1 = typeName;
				const EarthView::World::Graphic::CSceneManagerEnumerator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator*) pObjectXXXX;
				const EarthView::World::Graphic::SceneManagerMetaData* objXXXX = ptrNativeObject->getMetaData(typeName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_getMetaDataIterator_MetaDataIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSceneManagerEnumerator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator objXXXX = ptrNativeObject->getMetaDataIterator();
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator *pXXXX = new EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_createSceneManager_CSceneManager_EVString_EVString(void *pObjectXXXX, _in const char* typeName, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string typeName1 = typeName;
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::CSceneManagerEnumerator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->createSceneManager(typeName1, instanceName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_createSceneManager_CSceneManager_EVString(void *pObjectXXXX, _in const char* typeName )
			{
				EarthView::World::Core::ev_string typeName1 = typeName;
				EarthView::World::Graphic::CSceneManagerEnumerator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->createSceneManager(typeName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_createSceneManager_CSceneManager_ev_uint16_EVString(void *pObjectXXXX, _in ev_uint16 typeMask, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::CSceneManagerEnumerator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->createSceneManager(typeMask, instanceName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_createSceneManager_CSceneManager_ev_uint16(void *pObjectXXXX, _in ev_uint16 typeMask )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->createSceneManager(typeMask);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_destroySceneManager_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator*) pObjectXXXX;
				ptrNativeObject->destroySceneManager(sm);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_getSceneManager_CSceneManager_EVString(void *pObjectXXXX, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				const EarthView::World::Graphic::CSceneManagerEnumerator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->getSceneManager(instanceName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_hasSceneManager_ev_bool_EVString(void *pObjectXXXX, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				const EarthView::World::Graphic::CSceneManagerEnumerator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasSceneManager(instanceName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_renameSceneManager_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* oldName, _in const char* newName )
			{
				EarthView::World::Core::ev_string oldName1 = oldName;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Graphic::CSceneManagerEnumerator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->renameSceneManager(oldName1, newName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_getSceneManagerIterator_SceneManagerIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator objXXXX = ptrNativeObject->getSceneManagerIterator();
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator *pXXXX = new EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_setRenderSystem_void_CRenderSystem(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderSystem* ref_rs )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator*) pObjectXXXX;
				ptrNativeObject->setRenderSystem(ref_rs);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_shutdownAll_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator* ptrNativeObject = (EarthView::World::Graphic::CSceneManagerEnumerator*) pObjectXXXX;
				ptrNativeObject->shutdownAll();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_getSingleton_CSceneManagerEnumerator( )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator& objXXXX = EarthView::World::Graphic::CSceneManagerEnumerator::getSingleton();
				EarthView::World::Graphic::CSceneManagerEnumerator *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManagerEnumerator*  _stdcall EarthView_World_Graphic_CSceneManagerEnumerator_getSingletonPtr_CSceneManagerEnumerator( )
			{
				EarthView::World::Graphic::CSceneManagerEnumerator* objXXXX = EarthView::World::Graphic::CSceneManagerEnumerator::getSingletonPtr();
				return objXXXX;
			}
		}
	}
}
