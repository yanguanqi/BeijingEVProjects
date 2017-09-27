/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_octreescenemanager/octreescenemanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_BoxList_push_back_void_CWireBoundingBox(void *pObjectXXXX, _in EarthView::World::Graphic::CWireBoundingBox*& ref_t )
			{
				EarthView::World::Graphic::BoxList* ptrNativeObject = (EarthView::World::Graphic::BoxList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_BoxList_push_front_void_CWireBoundingBox(void *pObjectXXXX, _in EarthView::World::Graphic::CWireBoundingBox*& ref_t )
			{
				EarthView::World::Graphic::BoxList* ptrNativeObject = (EarthView::World::Graphic::BoxList*) pObjectXXXX;
				ptrNativeObject->push_front(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_BoxList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::BoxList* ptrNativeObject = (EarthView::World::Graphic::BoxList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_BoxList_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::BoxList* ptrNativeObject = (EarthView::World::Graphic::BoxList*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CWireBoundingBox*  _stdcall EarthView_World_Graphic_BoxList_front_CWireBoundingBox(void *pObjectXXXX )
			{
				EarthView::World::Graphic::BoxList* ptrNativeObject = (EarthView::World::Graphic::BoxList*) pObjectXXXX;
				EarthView::World::Graphic::CWireBoundingBox* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CWireBoundingBox*  _stdcall EarthView_World_Graphic_BoxList_back_CWireBoundingBox(void *pObjectXXXX )
			{
				EarthView::World::Graphic::BoxList* ptrNativeObject = (EarthView::World::Graphic::BoxList*) pObjectXXXX;
				EarthView::World::Graphic::CWireBoundingBox* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CWireBoundingBox*  _stdcall EarthView_World_Graphic_BoxList_at_CWireBoundingBox_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::BoxList* ptrNativeObject = (EarthView::World::Graphic::BoxList*) pObjectXXXX;
				EarthView::World::Graphic::CWireBoundingBox* objXXXX = ptrNativeObject->at(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_BoxList_insert_void_ev_uint32_CWireBoundingBox(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CWireBoundingBox*& ref_t )
			{
				EarthView::World::Graphic::BoxList* ptrNativeObject = (EarthView::World::Graphic::BoxList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_BoxList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::BoxList* ptrNativeObject = (EarthView::World::Graphic::BoxList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_BoxList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::BoxList* ptrNativeObject = (EarthView::World::Graphic::BoxList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_BoxList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::BoxList* ptrNativeObject = (EarthView::World::Graphic::BoxList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_BoxList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::BoxList* ptrNativeObject = (EarthView::World::Graphic::BoxList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_BoxList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::BoxList* ptrNativeObject = (EarthView::World::Graphic::BoxList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ColorList_push_back_void_ev_uint32(void *pObjectXXXX, _in ev_uint32& t )
			{
				EarthView::World::Graphic::ColorList* ptrNativeObject = (EarthView::World::Graphic::ColorList*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ColorList_push_front_void_ev_uint32(void *pObjectXXXX, _in ev_uint32& t )
			{
				EarthView::World::Graphic::ColorList* ptrNativeObject = (EarthView::World::Graphic::ColorList*) pObjectXXXX;
				ptrNativeObject->push_front(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ColorList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ColorList* ptrNativeObject = (EarthView::World::Graphic::ColorList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ColorList_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ColorList* ptrNativeObject = (EarthView::World::Graphic::ColorList*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32&  _stdcall EarthView_World_Graphic_ColorList_front_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ColorList* ptrNativeObject = (EarthView::World::Graphic::ColorList*) pObjectXXXX;
				ev_uint32& objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32&  _stdcall EarthView_World_Graphic_ColorList_back_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ColorList* ptrNativeObject = (EarthView::World::Graphic::ColorList*) pObjectXXXX;
				ev_uint32& objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32&  _stdcall EarthView_World_Graphic_ColorList_at_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::ColorList* ptrNativeObject = (EarthView::World::Graphic::ColorList*) pObjectXXXX;
				ev_uint32& objXXXX = ptrNativeObject->at(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ColorList_insert_void_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos, _in ev_uint32& t )
			{
				EarthView::World::Graphic::ColorList* ptrNativeObject = (EarthView::World::Graphic::ColorList*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ColorList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::ColorList* ptrNativeObject = (EarthView::World::Graphic::ColorList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_ColorList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ColorList* ptrNativeObject = (EarthView::World::Graphic::ColorList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_ColorList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ColorList* ptrNativeObject = (EarthView::World::Graphic::ColorList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ColorList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::ColorList* ptrNativeObject = (EarthView::World::Graphic::ColorList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ColorList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ColorList* ptrNativeObject = (EarthView::World::Graphic::ColorList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneNodes_push_back_void_CSceneNode(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode*& ref_t )
			{
				EarthView::World::Graphic::SceneNodes* ptrNativeObject = (EarthView::World::Graphic::SceneNodes*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneNodes_push_front_void_CSceneNode(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneNode*& ref_t )
			{
				EarthView::World::Graphic::SceneNodes* ptrNativeObject = (EarthView::World::Graphic::SceneNodes*) pObjectXXXX;
				ptrNativeObject->push_front(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneNodes_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneNodes* ptrNativeObject = (EarthView::World::Graphic::SceneNodes*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneNodes_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneNodes* ptrNativeObject = (EarthView::World::Graphic::SceneNodes*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_SceneNodes_front_CSceneNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneNodes* ptrNativeObject = (EarthView::World::Graphic::SceneNodes*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_SceneNodes_back_CSceneNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneNodes* ptrNativeObject = (EarthView::World::Graphic::SceneNodes*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_SceneNodes_at_CSceneNode_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::SceneNodes* ptrNativeObject = (EarthView::World::Graphic::SceneNodes*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->at(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneNodes_insert_void_ev_uint32_CSceneNode(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CSceneNode*& ref_t )
			{
				EarthView::World::Graphic::SceneNodes* ptrNativeObject = (EarthView::World::Graphic::SceneNodes*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneNodes_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::SceneNodes* ptrNativeObject = (EarthView::World::Graphic::SceneNodes*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_SceneNodes_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::SceneNodes* ptrNativeObject = (EarthView::World::Graphic::SceneNodes*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_SceneNodes_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::SceneNodes* ptrNativeObject = (EarthView::World::Graphic::SceneNodes*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneNodes_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::SceneNodes* ptrNativeObject = (EarthView::World::Graphic::SceneNodes*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_SceneNodes_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::SceneNodes* ptrNativeObject = (EarthView::World::Graphic::SceneNodes*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__alertVisibleObjects_void_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_initRenderQueue_void_Callback)();
			typedef const EarthView::World::Graphic::CPass*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_deriveShadowCasterPass_CPass_CPass_Callback)(_in const EarthView::World::Graphic::CPass* pass);
			typedef const EarthView::World::Graphic::CPass*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback)(_in const EarthView::World::Graphic::CPass* pass);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_validatePassForRendering_ev_bool_CPass_Callback)(_in const EarthView::World::Graphic::CPass* pass);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback)(_in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CRenderable* rend);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback)(_in int bp, _in Real distance, _in const void* orientation, _in char*& groupName);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback)(_in int bp, _in Real curvature, _in Real tiling, _in Real distance, _in const void* orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ySegmentsToKeep, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback)(_in const EarthView::World::Graphic::CRenderable* pRend, _in ev_bool fixedFunction);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_resetViewProjMode_void_ev_bool_Callback)(_in ev_bool fixedFunction);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_firePreRenderQueues_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_firePostRenderQueues_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback)(_in ev_uint8 id, _in char*& invocation);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback)(_in ev_uint8 id, _in char*& invocation);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback)(_in ev_uint64  numberOfShadowTextures);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback)(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* camera, _in ev_uint64  iteration);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback)(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CFrustum* f);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* camera);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* camera);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_firePreFindVisibleObjects_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* v);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_firePostFindVisibleObjects_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* v);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_fireSceneManagerDestroyed_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setViewport_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* vp);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsDefaultSequence_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback)(_in EarthView::World::Graphic::CRenderQueueInvocationSequence* s);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_prepareRenderQueue_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration);
			typedef EarthView::World::Graphic::CAutoParamDataSource*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_findLightsAffectingFrustum_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* camera);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_initShadowVolumeMaterials_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_ensureShadowTexturesCreated_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyShadowTextures_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback)(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::LightList* lightList);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback)(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CViewport* vp);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback)(_in const void* matPtr);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback)(_in const ev_bool& useDefaultMat);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSunPosition_CVector3_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setAtmosphereVisible_void_ev_bool_Callback)(_in const ev_bool& visible);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_storeAtmosphereVisibleState_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_restoreAtmosphereVisibleState_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSunVisible_void_ev_bool_Callback)(_in ev_bool flag);
			typedef EarthView::World::Graphic::CSceneManager::RenderContext*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__pauseRendering_RenderContext_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__resumeRendering_void_RenderContext_Callback)(_in EarthView::World::Graphic::CSceneManager::RenderContext* context);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback)(_in const EarthView::World::Graphic::CLight* light, _in const EarthView::World::Graphic::CCamera* cam, _in ev_bool calcScissor);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback)(_in ev_bool secondpass, _in ev_bool zfail, _in ev_bool twosided);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback)(_in const EarthView::World::Graphic::CLight* light, _in const EarthView::World::Graphic::CCamera* camera);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* pGroup, _in int om);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in int om);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in int om);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in int om);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in int om);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in int om);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in int om);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback)(_in const void* objs, _in int om, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback)(_in const void* objs, _in int om, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback)(_in const void* objs, _in int om, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback)(_in const void* objs, _in int om, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueSplitOptions_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in ev_bool suppressShadows, _in ev_bool suppressRenderState);
			typedef int  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback)(_in const void* ll, _in const EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback)(_in const EarthView::World::Graphic::CLight* l, _in const EarthView::World::Graphic::CCamera* cam, _inout void* rect);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_resetScissor_void_Callback)();
			typedef int  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback)(_in const void* ll);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_buildLightClip_void_CLight_PlaneList_Callback)(_in const EarthView::World::Graphic::CLight* l, _inout void* planes);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_resetLightClip_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_checkCachedLightClippingInfo_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_useLights_void_LightList_ev_uint16_Callback)(_in const void* lights, _in ev_uint16 limit);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setViewMatrix_void_CMatrix4_Callback)(_in const void* m);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback)(_in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::LightList* lights);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_bindGpuProgram_void_CGpuProgram_Callback)(_in EarthView::World::Graphic::CGpuProgram* prog);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_updateGpuProgramParameters_void_CPass_Callback)(_in const EarthView::World::Graphic::CPass* p);
			typedef char*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getTypeName_EVString_Callback)();
			typedef EarthView::World::Graphic::CCamera*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createCamera_CCamera_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CCamera*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getCamera_CCamera_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_hasCamera_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyAllCameras_void_Callback)();
			typedef EarthView::World::Graphic::CLight*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CLight*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_Callback)();
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getLightCount_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CLight*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_ev_uint16_Callback)(_in ev_uint16 index);
			typedef EarthView::World::Graphic::CLight*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_hasLight_ev_bool_EVString_Callback)(_in char*& name);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback)(_in EarthView::World::Graphic::CLight* l);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback)(_in EarthView::World::Graphic::CLight* l, _in const EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_CLight_Callback)(_in EarthView::World::Graphic::CLight* light);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyAllLights_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSoftShadowTexName_EVString_Callback)();
			typedef EarthView::World::Graphic::CCamera*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShadowTexCam_CCamera_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback)();
			typedef float  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback)(_in ev_uint8 index);
			typedef float  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback)(_in ev_uint8 index);
			typedef bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback)(_in bool flag);
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getCurrentClipIndex_ev_uint8_Callback)();
			typedef bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowTechnique_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback)(_in bool flag);
			typedef float  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsPercent_float_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsPercent_void_float_Callback)(_in float percent);
			typedef int  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback)(_in ev_uint8 index);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback)(_in ev_uint8 index, _in ev_uint8 distance);
			typedef int  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* camera);
			typedef bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_hasShadowCasterInFrustum_bool_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSoftShadowLightBleedPower_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSoftShadowLightBleedPower_void_Real_Callback)(_in Real power);
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSoftShadowDepthOffset_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSoftShadowDepthOffset_void_Real_Callback)(_in Real offset);
			typedef float  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNormalFactor_float_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSoftShadowNormalFactor_void_float_Callback)(_in float factor);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__notifyLightsDirty_void_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__getLightsAffectingFrustum_LightList_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback)(_in const void* position, _in Real radius, _inout void* destList, _in ev_uint32 lightMask);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_Callback)(_in const void* position, _in Real radius, _inout void* destList);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_showImage_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getImageVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_showOcean_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getOceanVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback)(_in const EarthView::World::Graphic::CSceneNode* sn, _in Real radius, _inout void* destList, _in ev_uint32 lightMask);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback)(_in const EarthView::World::Graphic::CSceneNode* sn, _in Real radius, _inout void* destList);
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_CSceneNode_Callback)(_in EarthView::World::Graphic::CSceneNode* sn);
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getRootSceneNode_CSceneNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSceneNode_CSceneNode_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_hasSceneNode_ev_bool_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback)(_in char*& entityName, _in char*& meshName, _in const void* subentityIndics, _in char*& groupName);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback)(_in char*& entityName, _in char*& meshName, _in char*& groupName);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback)(_in char*& entityName, _in char*& meshName, _in const void* subentityIndics);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_Callback)(_in char*& entityName, _in char*& meshName);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback)(_in char*& entityName, _in const void* pMesh, _in const void* subentityIndics);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback)(_in char*& entityName, _in const void* pMesh);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback)(_in const void* pMesh, _in const void* subentityIndics);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_Callback)(_in const void* pMesh);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_IntVector_Callback)(_in char*& meshName, _in const void* subentityIndics);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_Callback)(_in char*& meshName);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_PrefabType_Callback)(_in char*& entityName, _in int ptype);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_PrefabType_Callback)(_in int ptype);
			typedef EarthView::World::Graphic::CEntity*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getEntity_CEntity_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_hasEntity_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_CEntity_Callback)(_in EarthView::World::Graphic::CEntity* ent);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyAllEntities_void_Callback)();
			typedef EarthView::World::Graphic::CManualObject*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CManualObject*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_Callback)();
			typedef EarthView::World::Graphic::CManualObject*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getManualObject_CManualObject_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_hasManualObject_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_CManualObject_Callback)(_in EarthView::World::Graphic::CManualObject* obj);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyAllManualObjects_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_usingWebMercator_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CBillboardChain*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CBillboardChain*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_Callback)();
			typedef EarthView::World::Graphic::CBillboardChain*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getBillboardChain_CBillboardChain_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_hasBillboardChain_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_CBillboardChain_Callback)(_in EarthView::World::Graphic::CBillboardChain* obj);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardChains_void_Callback)();
			typedef EarthView::World::Graphic::CRibbonTrail*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CRibbonTrail*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_Callback)();
			typedef EarthView::World::Graphic::CRibbonTrail*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_hasRibbonTrail_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback)(_in EarthView::World::Graphic::CRibbonTrail* obj);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyAllRibbonTrails_void_Callback)();
			typedef EarthView::World::Graphic::CParticleSystem*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback)(_in char*& name, _in char*& templateName);
			typedef EarthView::World::Graphic::CParticleSystem*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback)(_in char*& name, _in ev_uint64  quota, _in char*& resourceGroup);
			typedef EarthView::World::Graphic::CParticleSystem*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback)(_in char*& name, _in ev_uint64  quota);
			typedef EarthView::World::Graphic::CParticleSystem*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CParticleSystem*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback)(_in ev_uint64  quota, _in char*& resourceGroup);
			typedef EarthView::World::Graphic::CParticleSystem*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback)(_in ev_uint64  quota);
			typedef EarthView::World::Graphic::CParticleSystem*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_Callback)();
			typedef EarthView::World::Graphic::CParticleSystem*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getParticleSystem_CParticleSystem_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_hasParticleSystem_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_CParticleSystem_Callback)(_in EarthView::World::Graphic::CParticleSystem* obj);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyAllParticleSystems_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_clearScene_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_EVString_Callback)(_in char*& filename);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback)(_inout void* stream, _in char*& typeName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback)(_inout void* stream);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_EVString_Callback)(_in char*& filename);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback)(_inout void* stream, _in char*& typeName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_Callback)(_inout void* stream);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback)(_in char*& filename);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback)(_inout void* stream, _in char*& typeName);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback)(_inout void* stream);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback)(_in ev_bool random);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setOption_ev_bool_EVString_void_Callback)(_in char*& strKey, _in const void* pValue);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getOption_ev_bool_EVString_void_Callback)(_in char*& strKey, _in void* pDestValue);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_hasOption_ev_bool_EVString_Callback)(_in char*& strKey);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback)(_in char*& strKey, _inout void* refValueList);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getOptionKeys_ev_bool_StringVector_Callback)(_inout void* refKeys);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__updateSceneGraph_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback)(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool onlyShadowCasters);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__applySceneAnimations_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__renderVisibleObjects_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback)(_in EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Graphic::CViewport* vp, _in ev_bool includeOverlays);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__queueSkiesForRendering_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback)(_in EarthView::World::Graphic::CRenderSystem* ref_sys);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst, _in Real bow, _in ev_int32 xsegments, _in ev_int32 ysegments, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst, _in Real bow, _in ev_int32 xsegments, _in ev_int32 ysegments);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst, _in Real bow, _in ev_int32 xsegments);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst, _in Real bow);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue, _in Real bow, _in ev_int32 xsegments, _in ev_int32 ysegments, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue, _in Real bow, _in ev_int32 xsegments, _in ev_int32 ysegments);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue, _in Real bow, _in ev_int32 xsegments);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue, _in Real bow);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale, _in Real tiling);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName, _in Real scale);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback)(_in ev_bool enable, _in const void* plane, _in char*& materialName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_isSkyPlaneEnabled_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneNode_CSceneNode_Callback)();
			typedef const EarthView::World::Graphic::CSceneManager::SkyPlaneGenParameters&  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback)(_in ev_bool enable, _in char*& materialName, _in Real distance, _in ev_bool drawFirst, _in const void* orientation, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback)(_in ev_bool enable, _in char*& materialName, _in Real distance, _in ev_bool drawFirst, _in const void* orientation);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback)(_in ev_bool enable, _in char*& materialName, _in Real distance, _in ev_bool drawFirst);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback)(_in ev_bool enable, _in char*& materialName, _in Real distance);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Callback)(_in ev_bool enable, _in char*& materialName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback)(_in ev_bool enable, _in char*& materialName, _in Real distance, _in ev_uint8 renderQueue, _in const void* orientation, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback)(_in ev_bool enable, _in char*& materialName, _in Real distance, _in ev_uint8 renderQueue, _in const void* orientation);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback)(_in ev_bool enable, _in char*& materialName, _in Real distance, _in ev_uint8 renderQueue);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback)(_in ev_bool enable, _in char*& materialName, _in Real distance);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Callback)(_in ev_bool enable, _in char*& materialName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyBoxEnabled_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_isSkyBoxEnabled_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSkyBoxNode_CSceneNode_Callback)();
			typedef const EarthView::World::Graphic::CSceneManager::SkyBoxGenParameters&  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const void* orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ysegments_keep, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const void* orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ysegments_keep);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const void* orientation, _in ev_int32 xsegments, _in ev_int32 ysegments);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const void* orientation, _in ev_int32 xsegments);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const void* orientation);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Callback)(_in ev_bool enable, _in char*& materialName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const void* orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ysegments_keep, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const void* orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ysegments_keep);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const void* orientation, _in ev_int32 xsegments, _in ev_int32 ysegments);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const void* orientation, _in ev_int32 xsegments);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const void* orientation);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling, _in Real distance);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature, _in Real tiling);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback)(_in ev_bool enable, _in char*& materialName, _in Real curvature);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Callback)(_in ev_bool enable, _in char*& materialName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSkyDomeEnabled_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_isSkyDomeEnabled_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSkyDomeNode_CSceneNode_Callback)();
			typedef const EarthView::World::Graphic::CSceneManager::SkyDomeGenParameters&  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback)();
			typedef int  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getFogMode_FogMode_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getFogColour_CColourValue_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getFogStart_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getFogEnd_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getFogDensity_Real_Callback)();
			typedef EarthView::World::Graphic::CBillboardSet*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback)(_in char*& name, _in ev_uint32 poolSize);
			typedef EarthView::World::Graphic::CBillboardSet*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CBillboardSet*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback)(_in ev_uint32 poolSize);
			typedef EarthView::World::Graphic::CBillboardSet*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_Callback)();
			typedef EarthView::World::Graphic::CBillboardSet*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getBillboardSet_CBillboardSet_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_hasBillboardSet_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_CBillboardSet_Callback)(_in EarthView::World::Graphic::CBillboardSet* set);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardSets_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setDisplaySceneNodes_void_ev_bool_Callback)(_in ev_bool display);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getDisplaySceneNodes_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createAnimation_CAnimation_EVString_Real_Callback)(_in char*& name, _in Real length);
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getAnimation_CAnimation_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_hasAnimation_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyAnimation_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimations_void_Callback)();
			typedef EarthView::World::Graphic::CAnimationState*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createAnimationState_CAnimationState_EVString_Callback)(_in char*& animName);
			typedef EarthView::World::Graphic::CAnimationState*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getAnimationState_CAnimationState_EVString_Callback)(_in char*& animName);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_hasAnimationState_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyAnimationState_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimationStates_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderOperation* rend, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const void* worldMatrix, _in const void* viewMatrix, _in const void* projMatrix, _in ev_bool doBeginEndFrame);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback)(_in EarthView::World::Graphic::CRenderOperation* rend, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const void* worldMatrix, _in const void* viewMatrix, _in const void* projMatrix);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const void* viewMatrix, _in const void* projMatrix, _in ev_bool doBeginEndFrame, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const void* viewMatrix, _in const void* projMatrix, _in ev_bool doBeginEndFrame, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const void* viewMatrix, _in const void* projMatrix, _in ev_bool doBeginEndFrame, _in ev_bool lightScissoringClipping);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const void* viewMatrix, _in const void* projMatrix, _in ev_bool doBeginEndFrame);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const void* viewMatrix, _in const void* projMatrix);
			typedef EarthView::World::Graphic::CRenderQueue*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getRenderQueue_CRenderQueue_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback)(_in EarthView::World::Graphic::CRenderQueueListener* ref_newListener);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback)(_in EarthView::World::Graphic::CRenderQueueListener* delListener);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback)(_in EarthView::World::Graphic::CRenderObjectListener* ref_newListener);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback)(_in EarthView::World::Graphic::CRenderObjectListener* delListener);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback)(_in ev_uint8 qid);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback)(_in ev_uint8 qid);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_clearSpecialCaseRenderQueues_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback)(_in int mode);
			typedef int  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback)(_in ev_uint8 qid);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback)(_in ev_uint8 qid);
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_showBoundingBoxes_void_ev_bool_Callback)(_in ev_bool bShow);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShowBoundingBoxes_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback)(_in EarthView::World::Graphic::CSceneNode* node, _in ev_bool autoTrack);
			typedef EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback)(_in const void* box, _in ev_uint32 mask);
			typedef EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_Callback)(_in const void* box);
			typedef EarthView::World::Graphic::CSphereSceneQuery*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback)(_in const void* sphere, _in ev_uint32 mask);
			typedef EarthView::World::Graphic::CSphereSceneQuery*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_Callback)(_in const void* sphere);
			typedef EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback)(_in const void* volumes, _in ev_uint32 mask);
			typedef EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_Callback)(_in const void* volumes);
			typedef EarthView::World::Graphic::CRaySceneQuery*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback)(_in const void* ray, _in ev_uint32 mask);
			typedef EarthView::World::Graphic::CRaySceneQuery*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_Callback)(_in const void* ray);
			typedef EarthView::World::Graphic::CIntersectionSceneQuery*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback)(_in ev_uint32 mask);
			typedef EarthView::World::Graphic::CIntersectionSceneQuery*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyQuery_void_CSceneQuery_Callback)(_in EarthView::World::Graphic::CSceneQuery* query);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTechnique_void_ShadowTechnique_Callback)(_in int technique);
			typedef int  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShadowTechnique_ShadowTechnique_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShowDebugShadows_void_ev_bool_Callback)(_in ev_bool debug);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShowDebugShadows_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowColour_void_CColourValue_Callback)(_in const void* colour);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShadowColour_CColourValue_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowColorRRatio_void_Real_Callback)(_in Real rRatio);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowColorGRatio_void_Real_Callback)(_in Real gRatio);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowColorBRatio_void_Real_Callback)(_in Real bRatio);
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShadowColorRRatio_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShadowColorGRatio_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShadowColorBRatio_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowFarDistance_void_Real_Callback)(_in Real distance);
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistance_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistanceSquared_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback)(_in ev_uint64  size);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShadowIndexBufferSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSize_void_ev_uint16_Callback)(_in ev_uint16 size);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback)(_in ev_uint64  shadowIndex, _in ev_uint16 width, _in ev_uint16 height, _in int format);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback)(_in ev_uint64  shadowIndex, _in ev_uint16 width, _in ev_uint16 height, _in int format, _in ev_uint16 fsaa);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback)(_in ev_uint64  shadowIndex, _in ev_uint16 width, _in ev_uint16 height, _in int format, _in ev_uint16 fsaa, _in ev_uint16 depthBufferPoolId);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback)(_in ev_uint64  shadowIndex, _in const void* config);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback)(_in int fmt);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback)(_in ev_uint16 fsaa);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCount_void_ev_size_t_Callback)(_in ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback)(_in ev_uint16 size, _in ev_uint16 count);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback)(_in ev_uint16 size, _in ev_uint16 count, _in int fmt);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback)(_in ev_uint16 size, _in ev_uint16 count, _in int fmt, _in ev_uint16 fsaa);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback)(_in ev_uint16 size, _in ev_uint16 count, _in int fmt, _in ev_uint16 fsaa, _in ev_uint16 depthBufferPoolId);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback)(_in ev_uint64  shadowIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowDirLightTextureOffset_void_Real_Callback)(_in Real offset);
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShadowDirLightTextureOffset_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeStart_void_Real_Callback)(_in Real fadeStart);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeEnd_void_Real_Callback)(_in Real fadeEnd);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback)(_in ev_bool selfShadow);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShadowTextureSelfShadow_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback)(_in ev_bool bf);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback)(_in const void* shadowSetup);
			typedef const void*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback)(_in ev_bool enable);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueModulative_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueAdditive_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueInUse_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback)(_in EarthView::World::Graphic::CCompositorChain* chain);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setLateMaterialResolving_void_ev_bool_Callback)(_in ev_bool isLate);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_isLateMaterialResolving_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CCompositorChain*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__getActiveCompositorChain_CCompositorChain_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_addListener_void_CSceneManagerListener_Callback)(_in EarthView::World::Graphic::CSceneManager::CSceneManagerListener* ref_s);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_removeListener_void_CSceneManagerListener_Callback)(_in EarthView::World::Graphic::CSceneManager::CSceneManagerListener* s);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_existListener_ev_bool_CSceneManagerListener_Callback)(_in EarthView::World::Graphic::CSceneManager::CSceneManagerListener* s);
			typedef EarthView::World::Graphic::CStaticGeometry*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CStaticGeometry*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_hasStaticGeometry_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback)(_in EarthView::World::Graphic::CStaticGeometry* geom);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyAllStaticGeometry_void_Callback)();
			typedef EarthView::World::Graphic::CInstancedGeometry*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CInstancedGeometry*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback)(_in EarthView::World::Graphic::CInstancedGeometry* geom);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyAllInstancedGeometry_void_Callback)();
			typedef EarthView::World::Graphic::CInstanceManager*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback)(_in char*& customName, _in char*& meshName, _in char*& groupName, _in int technique, _in ev_uint64  numInstancesPerBatch, _in ev_uint16 flags, _in ev_uint16 subMeshIdx);
			typedef EarthView::World::Graphic::CInstanceManager*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback)(_in char*& customName, _in char*& meshName, _in char*& groupName, _in int technique, _in ev_uint64  numInstancesPerBatch, _in ev_uint16 flags);
			typedef EarthView::World::Graphic::CInstanceManager*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback)(_in char*& customName, _in char*& meshName, _in char*& groupName, _in int technique, _in ev_uint64  numInstancesPerBatch);
			typedef EarthView::World::Graphic::CInstanceManager*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getInstanceManager_CInstanceManager_EVString_Callback)(_in char*& managerName);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_hasInstanceManager_ev_bool_EVString_Callback)(_in char*& managerName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_CInstanceManager_Callback)(_in EarthView::World::Graphic::CInstanceManager* instanceManager);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback)(_in EarthView::World::Graphic::CInstanceManager* instanceManager);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyAllInstanceManagers_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback)(_in char*& meshName, _in char*& groupName, _in char*& materialName, _in int technique, _in ev_uint64  numInstancesPerBatch);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback)(_in char*& meshName, _in char*& groupName, _in char*& materialName, _in int technique, _in ev_uint64  numInstancesPerBatch, _in ev_uint16 flags);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback)(_in char*& meshName, _in char*& groupName, _in char*& materialName, _in int technique, _in ev_uint64  numInstancesPerBatch, _in ev_uint16 flags, _in ev_uint16 subMeshIdx);
			typedef EarthView::World::Graphic::CInstancedEntity*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback)(_in char*& materialName, _in char*& managerName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback)(_in EarthView::World::Graphic::CInstancedEntity* instancedEntity);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback)(_in char*& name, _in char*& typeName, _in const EarthView::World::Core::CommonStringPairList* params);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback)(_in char*& name, _in char*& typeName);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback)(_in char*& typeName, _in const EarthView::World::Core::CommonStringPairList* params);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_Callback)(_in char*& typeName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_EVString_EVString_Callback)(_in char*& name, _in char*& typeName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* m);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback)(_in char*& typeName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjects_void_Callback)();
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback)(_in char*& name, _in char*& typeName);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& typeName);
			typedef void*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback)(_in char*& typeName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_injectMovableObject_void_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* m);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_EVString_EVString_Callback)(_in char*& name, _in char*& typeName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_CMovableObject_Callback)(_in EarthView::World::Graphic::CMovableObject* m);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_extractAllMovableObjectsByType_void_EVString_Callback)(_in char*& typeName);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setVisibilityMask_void_ev_uint32_Callback)(_in ev_uint32 vmask);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getVisibilityMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setFindVisibleObjects_void_ev_bool_Callback)(_in ev_bool find);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getFindVisibleObjects_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback)(_in ev_bool n);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback)(_in ev_bool n);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback)(_in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CRenderable* rend, _in ev_bool shadowDerivation, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback)(_in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CRenderable* rend, _in ev_bool shadowDerivation, _in ev_bool doLightIteration);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback)(_in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CRenderable* rend, _in ev_bool shadowDerivation);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback)(_in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CRenderable* rend);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__suppressRenderStateChanges_void_ev_bool_Callback)(_in ev_bool suppress);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback)();
			typedef const EarthView::World::Graphic::CPass*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback)(_in const EarthView::World::Graphic::CPass* pass, _in ev_bool evenIfSuppressed, _in ev_bool shadowDerivation);
			typedef const EarthView::World::Graphic::CPass*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_Callback)(_in const EarthView::World::Graphic::CPass* pass, _in ev_bool evenIfSuppressed);
			typedef const EarthView::World::Graphic::CPass*  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_Callback)(_in const EarthView::World::Graphic::CPass* pass);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__markGpuParamsDirty_void_ev_uint16_Callback)(_in ev_uint16 mask);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__suppressShadows_void_ev_bool_Callback)(_in ev_bool suppress);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__areShadowsSuppressed_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback)(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in int om);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setCameraRelativeRendering_void_ev_bool_Callback)(_in ev_bool rel);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getCameraRelativeRendering_ev_bool_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback)(_in Real latitude, _in Real lontitude, _in ev_real32 targetSamplesPerDegrees);
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getBestHeightAt_Real_Real_Real_Callback)(_in Real latitude, _in Real lontitude);
			typedef Real  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getHeightAtTile_Real_Real_Real_Callback)(_in Real latitude, _in Real lontitude);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback)(_in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _inout Real& minX, _inout Real& maxX, _inout Real& minY, _inout Real& maxY);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_addTempLayer_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_removeTempLayer_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Callback)(_in bool updateImageGroup, _in bool updateFeatureGroup, _in bool updateKmlGroup);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback)(_in bool updateImageGroup, _in bool updateFeatureGroup, _in bool updateKmlGroup, _in Real minX, _in Real maxX, _in Real minY, _in Real maxY);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback)(_in ev_bool bUpdateVectorTexture, _in ev_bool bUpdateKmlTexture, _in ev_bool bUpdateTemporaryTexture, _in ev_bool bUpdateTerrain);
			typedef void  ( _stdcall EarthView_World_Graphic_COctreeSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback)(_in ev_bool enable);
			class COctreeSceneManagerProxy : public EarthView::World::Graphic::COctreeSceneManager
			{
			private:
				EarthView_World_Graphic_COctreeSceneManager__alertVisibleObjects_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager__alertVisibleObjects_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_initRenderQueue_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_initRenderQueue_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_deriveShadowCasterPass_CPass_CPass_Callback* m_EarthView_World_Graphic_COctreeSceneManager_deriveShadowCasterPass_CPass_CPass_Callback;
				EarthView_World_Graphic_COctreeSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback* m_EarthView_World_Graphic_COctreeSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback;
				EarthView_World_Graphic_COctreeSceneManager_validatePassForRendering_ev_bool_CPass_Callback* m_EarthView_World_Graphic_COctreeSceneManager_validatePassForRendering_ev_bool_CPass_Callback;
				EarthView_World_Graphic_COctreeSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback* m_EarthView_World_Graphic_COctreeSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_resetViewProjMode_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_resetViewProjMode_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_firePreRenderQueues_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_firePreRenderQueues_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_firePostRenderQueues_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_firePostRenderQueues_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback* m_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback;
				EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback* m_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback;
				EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback* m_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback;
				EarthView_World_Graphic_COctreeSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback* m_EarthView_World_Graphic_COctreeSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback;
				EarthView_World_Graphic_COctreeSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback* m_EarthView_World_Graphic_COctreeSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback;
				EarthView_World_Graphic_COctreeSceneManager_firePreFindVisibleObjects_void_CViewport_Callback* m_EarthView_World_Graphic_COctreeSceneManager_firePreFindVisibleObjects_void_CViewport_Callback;
				EarthView_World_Graphic_COctreeSceneManager_firePostFindVisibleObjects_void_CViewport_Callback* m_EarthView_World_Graphic_COctreeSceneManager_firePostFindVisibleObjects_void_CViewport_Callback;
				EarthView_World_Graphic_COctreeSceneManager_fireSceneManagerDestroyed_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_fireSceneManagerDestroyed_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setViewport_void_CViewport_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setViewport_void_CViewport_Callback;
				EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsDefaultSequence_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsDefaultSequence_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback* m_EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback;
				EarthView_World_Graphic_COctreeSceneManager_prepareRenderQueue_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_prepareRenderQueue_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback* m_EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback;
				EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback;
				EarthView_World_Graphic_COctreeSceneManager_findLightsAffectingFrustum_void_CCamera_Callback* m_EarthView_World_Graphic_COctreeSceneManager_findLightsAffectingFrustum_void_CCamera_Callback;
				EarthView_World_Graphic_COctreeSceneManager_initShadowVolumeMaterials_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_initShadowVolumeMaterials_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_ensureShadowTexturesCreated_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_ensureShadowTexturesCreated_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyShadowTextures_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyShadowTextures_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback* m_EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback;
				EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback* m_EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSunPosition_CVector3_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSunPosition_CVector3_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setAtmosphereVisible_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setAtmosphereVisible_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_storeAtmosphereVisibleState_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_storeAtmosphereVisibleState_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_restoreAtmosphereVisibleState_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_restoreAtmosphereVisibleState_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSunVisible_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSunVisible_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager__pauseRendering_RenderContext_Callback* m_EarthView_World_Graphic_COctreeSceneManager__pauseRendering_RenderContext_Callback;
				EarthView_World_Graphic_COctreeSceneManager__resumeRendering_void_RenderContext_Callback* m_EarthView_World_Graphic_COctreeSceneManager__resumeRendering_void_RenderContext_Callback;
				EarthView_World_Graphic_COctreeSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback* m_EarthView_World_Graphic_COctreeSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback;
				EarthView_World_Graphic_COctreeSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* m_EarthView_World_Graphic_COctreeSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* m_EarthView_World_Graphic_COctreeSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* m_EarthView_World_Graphic_COctreeSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* m_EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* m_EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* m_EarthView_World_Graphic_COctreeSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* m_EarthView_World_Graphic_COctreeSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback* m_EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback;
				EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback* m_EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback;
				EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueSplitOptions_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueSplitOptions_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback* m_EarthView_World_Graphic_COctreeSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback;
				EarthView_World_Graphic_COctreeSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback* m_EarthView_World_Graphic_COctreeSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback;
				EarthView_World_Graphic_COctreeSceneManager_resetScissor_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_resetScissor_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback* m_EarthView_World_Graphic_COctreeSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback;
				EarthView_World_Graphic_COctreeSceneManager_buildLightClip_void_CLight_PlaneList_Callback* m_EarthView_World_Graphic_COctreeSceneManager_buildLightClip_void_CLight_PlaneList_Callback;
				EarthView_World_Graphic_COctreeSceneManager_resetLightClip_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_resetLightClip_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_checkCachedLightClippingInfo_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_checkCachedLightClippingInfo_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_useLights_void_LightList_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeSceneManager_useLights_void_LightList_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setViewMatrix_void_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setViewMatrix_void_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback* m_EarthView_World_Graphic_COctreeSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback;
				EarthView_World_Graphic_COctreeSceneManager_bindGpuProgram_void_CGpuProgram_Callback* m_EarthView_World_Graphic_COctreeSceneManager_bindGpuProgram_void_CGpuProgram_Callback;
				EarthView_World_Graphic_COctreeSceneManager_updateGpuProgramParameters_void_CPass_Callback* m_EarthView_World_Graphic_COctreeSceneManager_updateGpuProgramParameters_void_CPass_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getTypeName_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getTypeName_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createCamera_CCamera_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createCamera_CCamera_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getCamera_CCamera_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getCamera_CCamera_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_hasCamera_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_hasCamera_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_CCamera_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_CCamera_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyAllCameras_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyAllCameras_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getLightCount_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getLightCount_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_hasLight_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_hasLight_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_CLight_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_CLight_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyAllLights_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyAllLights_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSoftShadowTexName_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowTexName_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShadowTexCam_CCamera_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShadowTexCam_CCamera_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getCurrentClipIndex_ev_uint8_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getCurrentClipIndex_ev_uint8_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowTechnique_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowTechnique_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsPercent_float_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsPercent_float_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsPercent_void_float_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsPercent_void_float_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback;
				EarthView_World_Graphic_COctreeSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback* m_EarthView_World_Graphic_COctreeSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback;
				EarthView_World_Graphic_COctreeSceneManager_hasShadowCasterInFrustum_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_hasShadowCasterInFrustum_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSoftShadowLightBleedPower_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowLightBleedPower_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSoftShadowLightBleedPower_void_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowLightBleedPower_void_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSoftShadowDepthOffset_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowDepthOffset_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSoftShadowDepthOffset_void_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowDepthOffset_void_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNormalFactor_float_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNormalFactor_float_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSoftShadowNormalFactor_void_float_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowNormalFactor_void_float_Callback;
				EarthView_World_Graphic_COctreeSceneManager__notifyLightsDirty_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager__notifyLightsDirty_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager__getLightsAffectingFrustum_LightList_Callback* m_EarthView_World_Graphic_COctreeSceneManager__getLightsAffectingFrustum_LightList_Callback;
				EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_Callback* m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_Callback;
				EarthView_World_Graphic_COctreeSceneManager_showImage_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_showImage_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getImageVisible_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getImageVisible_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_showOcean_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_showOcean_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getOceanVisible_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getOceanVisible_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback* m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_CSceneNode_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_CSceneNode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getRootSceneNode_CSceneNode_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getRootSceneNode_CSceneNode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSceneNode_CSceneNode_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSceneNode_CSceneNode_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_hasSceneNode_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_hasSceneNode_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_IntVector_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_IntVector_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_PrefabType_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_PrefabType_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_PrefabType_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_PrefabType_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getEntity_CEntity_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getEntity_CEntity_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_hasEntity_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_hasEntity_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_CEntity_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_CEntity_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyAllEntities_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyAllEntities_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getManualObject_CManualObject_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getManualObject_CManualObject_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_hasManualObject_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_hasManualObject_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_CManualObject_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_CManualObject_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyAllManualObjects_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyAllManualObjects_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_usingWebMercator_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_usingWebMercator_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getBillboardChain_CBillboardChain_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getBillboardChain_CBillboardChain_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_hasBillboardChain_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_hasBillboardChain_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_CBillboardChain_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_CBillboardChain_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardChains_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardChains_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_hasRibbonTrail_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_hasRibbonTrail_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyAllRibbonTrails_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyAllRibbonTrails_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getParticleSystem_CParticleSystem_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getParticleSystem_CParticleSystem_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_hasParticleSystem_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_hasParticleSystem_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_CParticleSystem_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_CParticleSystem_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyAllParticleSystems_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyAllParticleSystems_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_clearScene_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_clearScene_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_Callback;
				EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback* m_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setOption_ev_bool_EVString_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setOption_ev_bool_EVString_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getOption_ev_bool_EVString_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getOption_ev_bool_EVString_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_hasOption_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_hasOption_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getOptionKeys_ev_bool_StringVector_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getOptionKeys_ev_bool_StringVector_Callback;
				EarthView_World_Graphic_COctreeSceneManager__updateSceneGraph_void_CCamera_Callback* m_EarthView_World_Graphic_COctreeSceneManager__updateSceneGraph_void_CCamera_Callback;
				EarthView_World_Graphic_COctreeSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager__applySceneAnimations_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager__applySceneAnimations_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager__renderVisibleObjects_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager__renderVisibleObjects_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager__queueSkiesForRendering_void_CCamera_Callback* m_EarthView_World_Graphic_COctreeSceneManager__queueSkiesForRendering_void_CCamera_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_isSkyPlaneEnabled_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_isSkyPlaneEnabled_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneNode_CSceneNode_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneNode_CSceneNode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyBoxEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyBoxEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_isSkyBoxEnabled_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_isSkyBoxEnabled_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSkyBoxNode_CSceneNode_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSkyBoxNode_CSceneNode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSkyDomeEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSkyDomeEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_isSkyDomeEnabled_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_isSkyDomeEnabled_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSkyDomeNode_CSceneNode_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSkyDomeNode_CSceneNode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getFogMode_FogMode_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getFogMode_FogMode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getFogColour_CColourValue_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getFogColour_CColourValue_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getFogStart_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getFogStart_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getFogEnd_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getFogEnd_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getFogDensity_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getFogDensity_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getBillboardSet_CBillboardSet_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getBillboardSet_CBillboardSet_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_hasBillboardSet_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_hasBillboardSet_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_CBillboardSet_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_CBillboardSet_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardSets_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardSets_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setDisplaySceneNodes_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setDisplaySceneNodes_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getDisplaySceneNodes_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getDisplaySceneNodes_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createAnimation_CAnimation_EVString_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createAnimation_CAnimation_EVString_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getAnimation_CAnimation_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getAnimation_CAnimation_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_hasAnimation_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_hasAnimation_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyAnimation_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyAnimation_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimations_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimations_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createAnimationState_CAnimationState_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createAnimationState_CAnimationState_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getAnimationState_CAnimationState_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getAnimationState_CAnimationState_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_hasAnimationState_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_hasAnimationState_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyAnimationState_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyAnimationState_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimationStates_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimationStates_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback* m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback;
				EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback* m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getRenderQueue_CRenderQueue_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getRenderQueue_CRenderQueue_Callback;
				EarthView_World_Graphic_COctreeSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback* m_EarthView_World_Graphic_COctreeSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback;
				EarthView_World_Graphic_COctreeSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback* m_EarthView_World_Graphic_COctreeSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback;
				EarthView_World_Graphic_COctreeSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback* m_EarthView_World_Graphic_COctreeSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback;
				EarthView_World_Graphic_COctreeSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback* m_EarthView_World_Graphic_COctreeSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback;
				EarthView_World_Graphic_COctreeSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback* m_EarthView_World_Graphic_COctreeSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback;
				EarthView_World_Graphic_COctreeSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback* m_EarthView_World_Graphic_COctreeSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback;
				EarthView_World_Graphic_COctreeSceneManager_clearSpecialCaseRenderQueues_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_clearSpecialCaseRenderQueues_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback* m_EarthView_World_Graphic_COctreeSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback;
				EarthView_World_Graphic_COctreeSceneManager_showBoundingBoxes_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_showBoundingBoxes_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShowBoundingBoxes_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShowBoundingBoxes_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyQuery_void_CSceneQuery_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyQuery_void_CSceneQuery_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTechnique_void_ShadowTechnique_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTechnique_void_ShadowTechnique_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShadowTechnique_ShadowTechnique_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShadowTechnique_ShadowTechnique_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShowDebugShadows_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShowDebugShadows_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShowDebugShadows_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShowDebugShadows_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowColour_void_CColourValue_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowColour_void_CColourValue_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShadowColour_CColourValue_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShadowColour_CColourValue_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowColorRRatio_void_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowColorRRatio_void_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowColorGRatio_void_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowColorGRatio_void_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowColorBRatio_void_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowColorBRatio_void_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShadowColorRRatio_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShadowColorRRatio_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShadowColorGRatio_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShadowColorGRatio_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShadowColorBRatio_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShadowColorBRatio_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowFarDistance_void_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowFarDistance_void_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistance_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistance_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistanceSquared_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistanceSquared_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShadowIndexBufferSize_ev_size_t_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShadowIndexBufferSize_ev_size_t_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSize_void_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSize_void_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCount_void_ev_size_t_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCount_void_ev_size_t_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowDirLightTextureOffset_void_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowDirLightTextureOffset_void_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShadowDirLightTextureOffset_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShadowDirLightTextureOffset_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeStart_void_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeStart_void_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeEnd_void_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeEnd_void_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShadowTextureSelfShadow_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShadowTextureSelfShadow_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueModulative_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueModulative_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueAdditive_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueAdditive_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueInUse_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueInUse_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setLateMaterialResolving_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setLateMaterialResolving_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_isLateMaterialResolving_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_isLateMaterialResolving_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager__getActiveCompositorChain_CCompositorChain_Callback* m_EarthView_World_Graphic_COctreeSceneManager__getActiveCompositorChain_CCompositorChain_Callback;
				EarthView_World_Graphic_COctreeSceneManager_addListener_void_CSceneManagerListener_Callback* m_EarthView_World_Graphic_COctreeSceneManager_addListener_void_CSceneManagerListener_Callback;
				EarthView_World_Graphic_COctreeSceneManager_removeListener_void_CSceneManagerListener_Callback* m_EarthView_World_Graphic_COctreeSceneManager_removeListener_void_CSceneManagerListener_Callback;
				EarthView_World_Graphic_COctreeSceneManager_existListener_ev_bool_CSceneManagerListener_Callback* m_EarthView_World_Graphic_COctreeSceneManager_existListener_ev_bool_CSceneManagerListener_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_hasStaticGeometry_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_hasStaticGeometry_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyAllStaticGeometry_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyAllStaticGeometry_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyAllInstancedGeometry_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyAllInstancedGeometry_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getInstanceManager_CInstanceManager_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getInstanceManager_CInstanceManager_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_hasInstanceManager_ev_bool_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_hasInstanceManager_ev_bool_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_CInstanceManager_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_CInstanceManager_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyAllInstanceManagers_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyAllInstanceManagers_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback;
				EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_EVString_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_EVString_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_CMovableObject_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_CMovableObject_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjects_void_Callback* m_EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjects_void_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_injectMovableObject_void_CMovableObject_Callback* m_EarthView_World_Graphic_COctreeSceneManager_injectMovableObject_void_CMovableObject_Callback;
				EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_EVString_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_EVString_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_CMovableObject_Callback* m_EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_CMovableObject_Callback;
				EarthView_World_Graphic_COctreeSceneManager_extractAllMovableObjectsByType_void_EVString_Callback* m_EarthView_World_Graphic_COctreeSceneManager_extractAllMovableObjectsByType_void_EVString_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setVisibilityMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setVisibilityMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getVisibilityMask_ev_uint32_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getVisibilityMask_ev_uint32_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setFindVisibleObjects_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setFindVisibleObjects_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getFindVisibleObjects_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getFindVisibleObjects_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback* m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback;
				EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback* m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback;
				EarthView_World_Graphic_COctreeSceneManager__suppressRenderStateChanges_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager__suppressRenderStateChanges_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_Callback* m_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_Callback;
				EarthView_World_Graphic_COctreeSceneManager__markGpuParamsDirty_void_ev_uint16_Callback* m_EarthView_World_Graphic_COctreeSceneManager__markGpuParamsDirty_void_ev_uint16_Callback;
				EarthView_World_Graphic_COctreeSceneManager__suppressShadows_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager__suppressShadows_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager__areShadowsSuppressed_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager__areShadowsSuppressed_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* m_EarthView_World_Graphic_COctreeSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setCameraRelativeRendering_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setCameraRelativeRendering_void_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getCameraRelativeRendering_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getCameraRelativeRendering_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getBestHeightAt_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getBestHeightAt_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getHeightAtTile_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getHeightAtTile_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_addTempLayer_ev_bool_ILayer_Callback* m_EarthView_World_Graphic_COctreeSceneManager_addTempLayer_ev_bool_ILayer_Callback;
				EarthView_World_Graphic_COctreeSceneManager_removeTempLayer_ev_bool_ILayer_Callback* m_EarthView_World_Graphic_COctreeSceneManager_removeTempLayer_ev_bool_ILayer_Callback;
				EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_COctreeSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_COctreeSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback* m_EarthView_World_Graphic_COctreeSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback;
			public:
				COctreeSceneManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : COctreeSceneManager(pList)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__alertVisibleObjects_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_initRenderQueue_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_deriveShadowCasterPass_CPass_CPass_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_validatePassForRendering_ev_bool_CPass_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_resetViewProjMode_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_firePreRenderQueues_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_firePostRenderQueues_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_firePreFindVisibleObjects_void_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_firePostFindVisibleObjects_void_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_fireSceneManagerDestroyed_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setViewport_void_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsDefaultSequence_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_prepareRenderQueue_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_findLightsAffectingFrustum_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_initShadowVolumeMaterials_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_ensureShadowTexturesCreated_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyShadowTextures_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSunPosition_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setAtmosphereVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_storeAtmosphereVisibleState_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_restoreAtmosphereVisibleState_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSunVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__pauseRendering_RenderContext_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__resumeRendering_void_RenderContext_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueSplitOptions_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_resetScissor_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_buildLightClip_void_CLight_PlaneList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_resetLightClip_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_checkCachedLightClippingInfo_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_useLights_void_LightList_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setViewMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_bindGpuProgram_void_CGpuProgram_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_updateGpuProgramParameters_void_CPass_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getTypeName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createCamera_CCamera_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getCamera_CCamera_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_hasCamera_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllCameras_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getLightCount_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_hasLight_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_CLight_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllLights_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowTexName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowTexCam_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getCurrentClipIndex_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowTechnique_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsPercent_float_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsPercent_void_float_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_hasShadowCasterInFrustum_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowLightBleedPower_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowLightBleedPower_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowDepthOffset_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowDepthOffset_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNormalFactor_float_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowNormalFactor_void_float_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__notifyLightsDirty_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__getLightsAffectingFrustum_LightList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_showImage_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getImageVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_showOcean_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getOceanVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getRootSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSceneNode_CSceneNode_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_hasSceneNode_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_PrefabType_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_PrefabType_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getEntity_CEntity_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_hasEntity_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_CEntity_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllEntities_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getManualObject_CManualObject_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_hasManualObject_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_CManualObject_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllManualObjects_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_usingWebMercator_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getBillboardChain_CBillboardChain_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_hasBillboardChain_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_CBillboardChain_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardChains_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_hasRibbonTrail_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllRibbonTrails_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getParticleSystem_CParticleSystem_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_hasParticleSystem_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_CParticleSystem_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllParticleSystems_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_clearScene_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setOption_ev_bool_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getOption_ev_bool_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_hasOption_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getOptionKeys_ev_bool_StringVector_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__updateSceneGraph_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__applySceneAnimations_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__renderVisibleObjects_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__queueSkiesForRendering_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_isSkyPlaneEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyBoxEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_isSkyBoxEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSkyBoxNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDomeEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_isSkyDomeEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSkyDomeNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getFogMode_FogMode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getFogColour_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getFogStart_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getFogEnd_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getFogDensity_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getBillboardSet_CBillboardSet_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_hasBillboardSet_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_CBillboardSet_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardSets_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setDisplaySceneNodes_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getDisplaySceneNodes_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createAnimation_CAnimation_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getAnimation_CAnimation_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_hasAnimation_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAnimation_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimations_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createAnimationState_CAnimationState_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getAnimationState_CAnimationState_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_hasAnimationState_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAnimationState_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimationStates_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getRenderQueue_CRenderQueue_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_clearSpecialCaseRenderQueues_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_showBoundingBoxes_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShowBoundingBoxes_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyQuery_void_CSceneQuery_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTechnique_void_ShadowTechnique_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowTechnique_ShadowTechnique_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShowDebugShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShowDebugShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowColour_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowColour_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowColorRRatio_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowColorGRatio_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowColorBRatio_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowColorRRatio_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowColorGRatio_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowColorBRatio_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowFarDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistanceSquared_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowIndexBufferSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSize_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCount_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowDirLightTextureOffset_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowDirLightTextureOffset_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeStart_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeEnd_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowTextureSelfShadow_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueModulative_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueAdditive_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueInUse_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setLateMaterialResolving_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_isLateMaterialResolving_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__getActiveCompositorChain_CCompositorChain_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_addListener_void_CSceneManagerListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_removeListener_void_CSceneManagerListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_existListener_ev_bool_CSceneManagerListener_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_hasStaticGeometry_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllStaticGeometry_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllInstancedGeometry_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getInstanceManager_CInstanceManager_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_hasInstanceManager_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_CInstanceManager_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllInstanceManagers_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjects_void_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_injectMovableObject_void_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_extractAllMovableObjectsByType_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setVisibilityMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getVisibilityMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setFindVisibleObjects_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getFindVisibleObjects_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__suppressRenderStateChanges_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__markGpuParamsDirty_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__suppressShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__areShadowsSuppressed_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setCameraRelativeRendering_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getCameraRelativeRendering_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getBestHeightAt_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getHeightAtTile_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_addTempLayer_ev_bool_ILayer_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_removeTempLayer_ev_bool_ILayer_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_COctreeSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__alertVisibleObjects_void(EarthView_World_Graphic_COctreeSceneManager__alertVisibleObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__alertVisibleObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode(EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_EVString(EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_initRenderQueue_void(EarthView_World_Graphic_COctreeSceneManager_initRenderQueue_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_initRenderQueue_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_deriveShadowCasterPass_CPass_CPass(EarthView_World_Graphic_COctreeSceneManager_deriveShadowCasterPass_CPass_CPass_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_deriveShadowCasterPass_CPass_CPass_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_deriveShadowReceiverPass_CPass_CPass(EarthView_World_Graphic_COctreeSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_validatePassForRendering_ev_bool_CPass(EarthView_World_Graphic_COctreeSceneManager_validatePassForRendering_ev_bool_CPass_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_validatePassForRendering_ev_bool_CPass_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable(EarthView_World_Graphic_COctreeSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString(EarthView_World_Graphic_COctreeSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(EarthView_World_Graphic_COctreeSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool(EarthView_World_Graphic_COctreeSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_resetViewProjMode_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_resetViewProjMode_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_resetViewProjMode_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_firePreRenderQueues_void(EarthView_World_Graphic_COctreeSceneManager_firePreRenderQueues_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_firePreRenderQueues_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_firePostRenderQueues_void(EarthView_World_Graphic_COctreeSceneManager_firePostRenderQueues_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_firePostRenderQueues_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString(EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString(EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesUpdated_void_ev_size_t(EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t(EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum(EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_firePreUpdateSceneGraph_void_CCamera(EarthView_World_Graphic_COctreeSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_firePostUpdateSceneGraph_void_CCamera(EarthView_World_Graphic_COctreeSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_firePreFindVisibleObjects_void_CViewport(EarthView_World_Graphic_COctreeSceneManager_firePreFindVisibleObjects_void_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_firePreFindVisibleObjects_void_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_firePostFindVisibleObjects_void_CViewport(EarthView_World_Graphic_COctreeSceneManager_firePostFindVisibleObjects_void_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_firePostFindVisibleObjects_void_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_fireSceneManagerDestroyed_void(EarthView_World_Graphic_COctreeSceneManager_fireSceneManagerDestroyed_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_fireSceneManagerDestroyed_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setViewport_void_CViewport(EarthView_World_Graphic_COctreeSceneManager_setViewport_void_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setViewport_void_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsDefaultSequence_void(EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsDefaultSequence_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsDefaultSequence_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence(EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_prepareRenderQueue_void(EarthView_World_Graphic_COctreeSceneManager_prepareRenderQueue_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_prepareRenderQueue_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList(EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool(EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createAutoParamDataSource_CAutoParamDataSource(EarthView_World_Graphic_COctreeSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_findLightsAffectingFrustum_void_CCamera(EarthView_World_Graphic_COctreeSceneManager_findLightsAffectingFrustum_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_findLightsAffectingFrustum_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_initShadowVolumeMaterials_void(EarthView_World_Graphic_COctreeSceneManager_initShadowVolumeMaterials_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_initShadowVolumeMaterials_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_ensureShadowTexturesCreated_void(EarthView_World_Graphic_COctreeSceneManager_ensureShadowTexturesCreated_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_ensureShadowTexturesCreated_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyShadowTextures_void(EarthView_World_Graphic_COctreeSceneManager_destroyShadowTextures_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyShadowTextures_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList(EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport(EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setImageDefaultMaterial_void_CMaterialPtr(EarthView_World_Graphic_COctreeSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setImageUseDefaultMaterial_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSunPosition_CVector3(EarthView_World_Graphic_COctreeSceneManager_getSunPosition_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSunPosition_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setAtmosphereVisible_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setAtmosphereVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setAtmosphereVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_storeAtmosphereVisibleState_void(EarthView_World_Graphic_COctreeSceneManager_storeAtmosphereVisibleState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_storeAtmosphereVisibleState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_restoreAtmosphereVisibleState_void(EarthView_World_Graphic_COctreeSceneManager_restoreAtmosphereVisibleState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_restoreAtmosphereVisibleState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSunVisible_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setSunVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSunVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__pauseRendering_RenderContext(EarthView_World_Graphic_COctreeSceneManager__pauseRendering_RenderContext_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__pauseRendering_RenderContext_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__resumeRendering_void_RenderContext(EarthView_World_Graphic_COctreeSceneManager__resumeRendering_void_RenderContext_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__resumeRendering_void_RenderContext_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool(EarthView_World_Graphic_COctreeSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera(EarthView_World_Graphic_COctreeSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(EarthView_World_Graphic_COctreeSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(EarthView_World_Graphic_COctreeSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(EarthView_World_Graphic_COctreeSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(EarthView_World_Graphic_COctreeSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(EarthView_World_Graphic_COctreeSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList(EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool(EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList(EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool(EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueSplitOptions_void(EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueSplitOptions_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueSplitOptions_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool(EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera(EarthView_World_Graphic_COctreeSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_buildScissor_void_CLight_CCamera_RealRect(EarthView_World_Graphic_COctreeSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_resetScissor_void(EarthView_World_Graphic_COctreeSceneManager_resetScissor_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_resetScissor_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_buildAndSetLightClip_ClipResult_LightList(EarthView_World_Graphic_COctreeSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_buildLightClip_void_CLight_PlaneList(EarthView_World_Graphic_COctreeSceneManager_buildLightClip_void_CLight_PlaneList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_buildLightClip_void_CLight_PlaneList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_resetLightClip_void(EarthView_World_Graphic_COctreeSceneManager_resetLightClip_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_resetLightClip_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_checkCachedLightClippingInfo_void(EarthView_World_Graphic_COctreeSceneManager_checkCachedLightClippingInfo_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_checkCachedLightClippingInfo_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_useLights_void_LightList_ev_uint16(EarthView_World_Graphic_COctreeSceneManager_useLights_void_LightList_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_useLights_void_LightList_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setViewMatrix_void_CMatrix4(EarthView_World_Graphic_COctreeSceneManager_setViewMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setViewMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_useLightsGpuProgram_void_CPass_LightList(EarthView_World_Graphic_COctreeSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_bindGpuProgram_void_CGpuProgram(EarthView_World_Graphic_COctreeSceneManager_bindGpuProgram_void_CGpuProgram_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_bindGpuProgram_void_CGpuProgram_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_updateGpuProgramParameters_void_CPass(EarthView_World_Graphic_COctreeSceneManager_updateGpuProgramParameters_void_CPass_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_updateGpuProgramParameters_void_CPass_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getTypeName_EVString(EarthView_World_Graphic_COctreeSceneManager_getTypeName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getTypeName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createCamera_CCamera_EVString(EarthView_World_Graphic_COctreeSceneManager_createCamera_CCamera_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createCamera_CCamera_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getCamera_CCamera_EVString(EarthView_World_Graphic_COctreeSceneManager_getCamera_CCamera_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getCamera_CCamera_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasCamera_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager_hasCamera_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_hasCamera_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_CCamera(EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_EVString(EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllCameras_void(EarthView_World_Graphic_COctreeSceneManager_destroyAllCameras_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllCameras_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_EVString(EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createLight_CLight(EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getLightCount_ev_uint16(EarthView_World_Graphic_COctreeSceneManager_getLightCount_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getLightCount_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_ev_uint16(EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_EVString(EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasLight_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager_hasLight_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_hasLight_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getLightClippingPlanes_PlaneList_CLight(EarthView_World_Graphic_COctreeSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getLightScissorRect_RealRect_CLight_CCamera(EarthView_World_Graphic_COctreeSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_EVString(EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_CLight(EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_CLight_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllLights_void(EarthView_World_Graphic_COctreeSceneManager_destroyAllLights_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllLights_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowTexName_EVString(EarthView_World_Graphic_COctreeSceneManager_getSoftShadowTexName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowTexName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowTexCam_CCamera(EarthView_World_Graphic_COctreeSceneManager_getShadowTexCam_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowTexCam_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16(EarthView_World_Graphic_COctreeSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getCascadeEyeSpaceDepthArray_CVector4(EarthView_World_Graphic_COctreeSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNearClip_float_ev_uint8(EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowFarClip_float_ev_uint8(EarthView_World_Graphic_COctreeSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowFitToCascadesMode_bool(EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool(EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getCurrentClipIndex_ev_uint8(EarthView_World_Graphic_COctreeSceneManager_getCurrentClipIndex_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getCurrentClipIndex_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowTechnique_bool(EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowTechnique_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowTechnique_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowTechnique_void_bool(EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsPercent_float(EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsPercent_float_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsPercent_float_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsPercent_void_float(EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsPercent_void_float_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsPercent_void_float_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsDistance_int_ev_uint8(EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8(EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowOffsetFormat_PixelFormat(EarthView_World_Graphic_COctreeSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_checkShadowCasterInFrustum_void_CCamera(EarthView_World_Graphic_COctreeSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasShadowCasterInFrustum_bool(EarthView_World_Graphic_COctreeSceneManager_hasShadowCasterInFrustum_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_hasShadowCasterInFrustum_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowLightBleedPower_Real(EarthView_World_Graphic_COctreeSceneManager_getSoftShadowLightBleedPower_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowLightBleedPower_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowLightBleedPower_void_Real(EarthView_World_Graphic_COctreeSceneManager_setSoftShadowLightBleedPower_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowLightBleedPower_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowDepthOffset_Real(EarthView_World_Graphic_COctreeSceneManager_getSoftShadowDepthOffset_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowDepthOffset_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowDepthOffset_void_Real(EarthView_World_Graphic_COctreeSceneManager_setSoftShadowDepthOffset_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowDepthOffset_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNormalFactor_float(EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNormalFactor_float_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNormalFactor_float_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowNormalFactor_void_float(EarthView_World_Graphic_COctreeSceneManager_setSoftShadowNormalFactor_void_float_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowNormalFactor_void_float_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__notifyLightsDirty_void(EarthView_World_Graphic_COctreeSceneManager__notifyLightsDirty_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__notifyLightsDirty_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__getLightsAffectingFrustum_LightList(EarthView_World_Graphic_COctreeSceneManager__getLightsAffectingFrustum_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__getLightsAffectingFrustum_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32(EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList(EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_showImage_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_showImage_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_showImage_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getImageVisible_ev_bool(EarthView_World_Graphic_COctreeSceneManager_getImageVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getImageVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_showOcean_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_showOcean_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_showOcean_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getOceanVisible_ev_bool(EarthView_World_Graphic_COctreeSceneManager_getOceanVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getOceanVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32(EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList(EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode(EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_EVString(EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_EVString(EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_CSceneNode(EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getRootSceneNode_CSceneNode(EarthView_World_Graphic_COctreeSceneManager_getRootSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getRootSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSceneNode_CSceneNode_EVString(EarthView_World_Graphic_COctreeSceneManager_getSceneNode_CSceneNode_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSceneNode_CSceneNode_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasSceneNode_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager_hasSceneNode_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_hasSceneNode_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString(EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_EVString(EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector(EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString(EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector(EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr(EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_IntVector(EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr(EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_IntVector(EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString(EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_PrefabType(EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_PrefabType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_PrefabType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_PrefabType(EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_PrefabType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_PrefabType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getEntity_CEntity_EVString(EarthView_World_Graphic_COctreeSceneManager_getEntity_CEntity_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getEntity_CEntity_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasEntity_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager_hasEntity_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_hasEntity_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_CEntity(EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_CEntity_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_CEntity_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_EVString(EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllEntities_void(EarthView_World_Graphic_COctreeSceneManager_destroyAllEntities_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllEntities_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_EVString(EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject(EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getManualObject_CManualObject_EVString(EarthView_World_Graphic_COctreeSceneManager_getManualObject_CManualObject_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getManualObject_CManualObject_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasManualObject_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager_hasManualObject_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_hasManualObject_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_CManualObject(EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_CManualObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_CManualObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_EVString(EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllManualObjects_void(EarthView_World_Graphic_COctreeSceneManager_destroyAllManualObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllManualObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_usingWebMercator_ev_bool(EarthView_World_Graphic_COctreeSceneManager_usingWebMercator_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_usingWebMercator_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_EVString(EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain(EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getBillboardChain_CBillboardChain_EVString(EarthView_World_Graphic_COctreeSceneManager_getBillboardChain_CBillboardChain_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getBillboardChain_CBillboardChain_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasBillboardChain_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager_hasBillboardChain_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_hasBillboardChain_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_CBillboardChain(EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_CBillboardChain_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_CBillboardChain_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_EVString(EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardChains_void(EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardChains_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardChains_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_EVString(EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail(EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getRibbonTrail_CRibbonTrail_EVString(EarthView_World_Graphic_COctreeSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasRibbonTrail_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager_hasRibbonTrail_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_hasRibbonTrail_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_CRibbonTrail(EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_EVString(EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllRibbonTrails_void(EarthView_World_Graphic_COctreeSceneManager_destroyAllRibbonTrails_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllRibbonTrails_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_EVString(EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString(EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t(EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString(EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString(EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t(EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem(EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getParticleSystem_CParticleSystem_EVString(EarthView_World_Graphic_COctreeSceneManager_getParticleSystem_CParticleSystem_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getParticleSystem_CParticleSystem_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasParticleSystem_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager_hasParticleSystem_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_hasParticleSystem_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_CParticleSystem(EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_CParticleSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_CParticleSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_EVString(EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllParticleSystems_void(EarthView_World_Graphic_COctreeSceneManager_destroyAllParticleSystems_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllParticleSystems_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_clearScene_void(EarthView_World_Graphic_COctreeSceneManager_clearScene_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_clearScene_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_EVString(EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString(EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr(EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_EVString(EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_EVString(EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr(EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_EVString(EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString(EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr(EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool(EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint(EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setOption_ev_bool_EVString_void(EarthView_World_Graphic_COctreeSceneManager_setOption_ev_bool_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setOption_ev_bool_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getOption_ev_bool_EVString_void(EarthView_World_Graphic_COctreeSceneManager_getOption_ev_bool_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getOption_ev_bool_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasOption_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager_hasOption_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_hasOption_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getOptionValues_ev_bool_EVString_StringVector(EarthView_World_Graphic_COctreeSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getOptionKeys_ev_bool_StringVector(EarthView_World_Graphic_COctreeSceneManager_getOptionKeys_ev_bool_StringVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getOptionKeys_ev_bool_StringVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__updateSceneGraph_void_CCamera(EarthView_World_Graphic_COctreeSceneManager__updateSceneGraph_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__updateSceneGraph_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool(EarthView_World_Graphic_COctreeSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__applySceneAnimations_void(EarthView_World_Graphic_COctreeSceneManager__applySceneAnimations_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__applySceneAnimations_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__renderVisibleObjects_void(EarthView_World_Graphic_COctreeSceneManager__renderVisibleObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__renderVisibleObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__renderScene_void_CCamera_CViewport_ev_bool(EarthView_World_Graphic_COctreeSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__queueSkiesForRendering_void_CCamera(EarthView_World_Graphic_COctreeSceneManager__queueSkiesForRendering_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__queueSkiesForRendering_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setDestinationRenderSystem_void_CRenderSystem(EarthView_World_Graphic_COctreeSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString(EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32(EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32(EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real(EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real(EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real(EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString(EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString(EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32(EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32(EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real(EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8(EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real(EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real(EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString(EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlaneEnabled_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_isSkyPlaneEnabled_ev_bool(EarthView_World_Graphic_COctreeSceneManager_isSkyPlaneEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_isSkyPlaneEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneNode_CSceneNode(EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters(EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString(EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion(EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real(EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString(EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion(EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8(EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real(EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBoxEnabled_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setSkyBoxEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyBoxEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_isSkyBoxEnabled_ev_bool(EarthView_World_Graphic_COctreeSceneManager_isSkyBoxEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_isSkyBoxEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyBoxNode_CSceneNode(EarthView_World_Graphic_COctreeSceneManager_getSkyBoxNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSkyBoxNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters(EarthView_World_Graphic_COctreeSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32(EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32(EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32(EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion(EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real(EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real(EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real(EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32(EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32(EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32(EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion(EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8(EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real(EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real(EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real(EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDomeEnabled_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setSkyDomeEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSkyDomeEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_isSkyDomeEnabled_ev_bool(EarthView_World_Graphic_COctreeSceneManager_isSkyDomeEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_isSkyDomeEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyDomeNode_CSceneNode(EarthView_World_Graphic_COctreeSceneManager_getSkyDomeNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSkyDomeNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters(EarthView_World_Graphic_COctreeSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getFogMode_FogMode(EarthView_World_Graphic_COctreeSceneManager_getFogMode_FogMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getFogMode_FogMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getFogColour_CColourValue(EarthView_World_Graphic_COctreeSceneManager_getFogColour_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getFogColour_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getFogStart_Real(EarthView_World_Graphic_COctreeSceneManager_getFogStart_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getFogStart_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getFogEnd_Real(EarthView_World_Graphic_COctreeSceneManager_getFogEnd_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getFogEnd_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getFogDensity_Real(EarthView_World_Graphic_COctreeSceneManager_getFogDensity_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getFogDensity_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32(EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString(EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_ev_uint32(EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet(EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getBillboardSet_CBillboardSet_EVString(EarthView_World_Graphic_COctreeSceneManager_getBillboardSet_CBillboardSet_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getBillboardSet_CBillboardSet_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasBillboardSet_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager_hasBillboardSet_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_hasBillboardSet_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_CBillboardSet(EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_CBillboardSet_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_CBillboardSet_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_EVString(EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardSets_void(EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardSets_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardSets_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setDisplaySceneNodes_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setDisplaySceneNodes_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setDisplaySceneNodes_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getDisplaySceneNodes_ev_bool(EarthView_World_Graphic_COctreeSceneManager_getDisplaySceneNodes_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getDisplaySceneNodes_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createAnimation_CAnimation_EVString_Real(EarthView_World_Graphic_COctreeSceneManager_createAnimation_CAnimation_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createAnimation_CAnimation_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getAnimation_CAnimation_EVString(EarthView_World_Graphic_COctreeSceneManager_getAnimation_CAnimation_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getAnimation_CAnimation_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasAnimation_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager_hasAnimation_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_hasAnimation_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAnimation_void_EVString(EarthView_World_Graphic_COctreeSceneManager_destroyAnimation_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAnimation_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimations_void(EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimations_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimations_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createAnimationState_CAnimationState_EVString(EarthView_World_Graphic_COctreeSceneManager_createAnimationState_CAnimationState_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createAnimationState_CAnimationState_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getAnimationState_CAnimationState_EVString(EarthView_World_Graphic_COctreeSceneManager_getAnimationState_CAnimationState_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getAnimationState_CAnimationState_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasAnimationState_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager_hasAnimationState_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_hasAnimationState_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAnimationState_void_EVString(EarthView_World_Graphic_COctreeSceneManager_destroyAnimationState_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAnimationState_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimationStates_void(EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimationStates_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimationStates_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool(EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4(EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList(EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool(EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool(EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool(EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4(EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getRenderQueue_CRenderQueue(EarthView_World_Graphic_COctreeSceneManager_getRenderQueue_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getRenderQueue_CRenderQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_addRenderQueueListener_void_CRenderQueueListener(EarthView_World_Graphic_COctreeSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_removeRenderQueueListener_void_CRenderQueueListener(EarthView_World_Graphic_COctreeSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_addRenderObjectListener_void_CRenderObjectListener(EarthView_World_Graphic_COctreeSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_removeRenderObjectListener_void_CRenderObjectListener(EarthView_World_Graphic_COctreeSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_addSpecialCaseRenderQueue_void_ev_uint8(EarthView_World_Graphic_COctreeSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8(EarthView_World_Graphic_COctreeSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_clearSpecialCaseRenderQueues_void(EarthView_World_Graphic_COctreeSceneManager_clearSpecialCaseRenderQueues_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_clearSpecialCaseRenderQueues_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode(EarthView_World_Graphic_COctreeSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode(EarthView_World_Graphic_COctreeSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8(EarthView_World_Graphic_COctreeSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometryRenderQueue_void_ev_uint8(EarthView_World_Graphic_COctreeSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getWorldGeometryRenderQueue_ev_uint8(EarthView_World_Graphic_COctreeSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_showBoundingBoxes_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_showBoundingBoxes_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_showBoundingBoxes_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShowBoundingBoxes_ev_bool(EarthView_World_Graphic_COctreeSceneManager_getShowBoundingBoxes_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShowBoundingBoxes_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool(EarthView_World_Graphic_COctreeSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32(EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox(EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32(EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere(EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32(EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList(EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32(EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay(EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32(EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery(EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyQuery_void_CSceneQuery(EarthView_World_Graphic_COctreeSceneManager_destroyQuery_void_CSceneQuery_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyQuery_void_CSceneQuery_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTechnique_void_ShadowTechnique(EarthView_World_Graphic_COctreeSceneManager_setShadowTechnique_void_ShadowTechnique_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTechnique_void_ShadowTechnique_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowTechnique_ShadowTechnique(EarthView_World_Graphic_COctreeSceneManager_getShadowTechnique_ShadowTechnique_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowTechnique_ShadowTechnique_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShowDebugShadows_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setShowDebugShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShowDebugShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShowDebugShadows_ev_bool(EarthView_World_Graphic_COctreeSceneManager_getShowDebugShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShowDebugShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowColour_void_CColourValue(EarthView_World_Graphic_COctreeSceneManager_setShadowColour_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowColour_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowColour_CColourValue(EarthView_World_Graphic_COctreeSceneManager_getShadowColour_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowColour_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real(EarthView_World_Graphic_COctreeSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowDirectionalLightExtrusionDistance_Real(EarthView_World_Graphic_COctreeSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowColorRRatio_void_Real(EarthView_World_Graphic_COctreeSceneManager_setShadowColorRRatio_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowColorRRatio_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowColorGRatio_void_Real(EarthView_World_Graphic_COctreeSceneManager_setShadowColorGRatio_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowColorGRatio_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowColorBRatio_void_Real(EarthView_World_Graphic_COctreeSceneManager_setShadowColorBRatio_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowColorBRatio_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowColorRRatio_Real(EarthView_World_Graphic_COctreeSceneManager_getShadowColorRRatio_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowColorRRatio_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowColorGRatio_Real(EarthView_World_Graphic_COctreeSceneManager_getShadowColorGRatio_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowColorGRatio_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowColorBRatio_Real(EarthView_World_Graphic_COctreeSceneManager_getShadowColorBRatio_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowColorBRatio_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowFarDistance_void_Real(EarthView_World_Graphic_COctreeSceneManager_setShadowFarDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowFarDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistance_Real(EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistanceSquared_Real(EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistanceSquared_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistanceSquared_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowIndexBufferSize_void_ev_size_t(EarthView_World_Graphic_COctreeSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowIndexBufferSize_ev_size_t(EarthView_World_Graphic_COctreeSceneManager_getShadowIndexBufferSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowIndexBufferSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSize_void_ev_uint16(EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSize_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSize_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat(EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16(EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16(EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig(EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTexturePixelFormat_void_PixelFormat(EarthView_World_Graphic_COctreeSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFSAA_void_ev_uint16(EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCount_void_ev_size_t(EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCount_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCount_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16(EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat(EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16(EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16(EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowTexture_CTexturePtr_ev_size_t(EarthView_World_Graphic_COctreeSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowDirLightTextureOffset_void_Real(EarthView_World_Graphic_COctreeSceneManager_setShadowDirLightTextureOffset_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowDirLightTextureOffset_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowDirLightTextureOffset_Real(EarthView_World_Graphic_COctreeSceneManager_getShadowDirLightTextureOffset_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowDirLightTextureOffset_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeStart_void_Real(EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeStart_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeStart_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeEnd_void_Real(EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeEnd_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeEnd_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSelfShadow_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowTextureSelfShadow_ev_bool(EarthView_World_Graphic_COctreeSceneManager_getShadowTextureSelfShadow_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowTextureSelfShadow_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCasterMaterial_void_EVString(EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureReceiverMaterial_void_EVString(EarthView_World_Graphic_COctreeSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowCasterRenderBackFaces_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowCasterRenderBackFaces_ev_bool(EarthView_World_Graphic_COctreeSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr(EarthView_World_Graphic_COctreeSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr(EarthView_World_Graphic_COctreeSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueStencilBased_ev_bool(EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueTextureBased_ev_bool(EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueModulative_ev_bool(EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueModulative_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueModulative_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueAdditive_ev_bool(EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueAdditive_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueAdditive_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueIntegrated_ev_bool(EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueInUse_ev_bool(EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueInUse_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueInUse_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowUseLightClipPlanes_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowUseLightClipPlanes_ev_bool(EarthView_World_Graphic_COctreeSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setActiveCompositorChain_void_CCompositorChain(EarthView_World_Graphic_COctreeSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setLateMaterialResolving_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setLateMaterialResolving_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setLateMaterialResolving_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_isLateMaterialResolving_ev_bool(EarthView_World_Graphic_COctreeSceneManager_isLateMaterialResolving_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_isLateMaterialResolving_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__getActiveCompositorChain_CCompositorChain(EarthView_World_Graphic_COctreeSceneManager__getActiveCompositorChain_CCompositorChain_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__getActiveCompositorChain_CCompositorChain_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_addListener_void_CSceneManagerListener(EarthView_World_Graphic_COctreeSceneManager_addListener_void_CSceneManagerListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_addListener_void_CSceneManagerListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_removeListener_void_CSceneManagerListener(EarthView_World_Graphic_COctreeSceneManager_removeListener_void_CSceneManagerListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_removeListener_void_CSceneManagerListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_existListener_ev_bool_CSceneManagerListener(EarthView_World_Graphic_COctreeSceneManager_existListener_ev_bool_CSceneManagerListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_existListener_ev_bool_CSceneManagerListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createStaticGeometry_CStaticGeometry_EVString(EarthView_World_Graphic_COctreeSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getStaticGeometry_CStaticGeometry_EVString(EarthView_World_Graphic_COctreeSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasStaticGeometry_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager_hasStaticGeometry_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_hasStaticGeometry_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_CStaticGeometry(EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_EVString(EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllStaticGeometry_void(EarthView_World_Graphic_COctreeSceneManager_destroyAllStaticGeometry_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllStaticGeometry_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createInstancedGeometry_CInstancedGeometry_EVString(EarthView_World_Graphic_COctreeSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getInstancedGeometry_CInstancedGeometry_EVString(EarthView_World_Graphic_COctreeSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_CInstancedGeometry(EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_EVString(EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllInstancedGeometry_void(EarthView_World_Graphic_COctreeSceneManager_destroyAllInstancedGeometry_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllInstancedGeometry_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16(EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16(EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t(EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getInstanceManager_CInstanceManager_EVString(EarthView_World_Graphic_COctreeSceneManager_getInstanceManager_CInstanceManager_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getInstanceManager_CInstanceManager_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasInstanceManager_ev_bool_EVString(EarthView_World_Graphic_COctreeSceneManager_hasInstanceManager_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_hasInstanceManager_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_EVString(EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_CInstanceManager(EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_CInstanceManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_CInstanceManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString(EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager(EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllInstanceManagers_void(EarthView_World_Graphic_COctreeSceneManager_destroyAllInstanceManagers_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllInstanceManagers_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t(EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16(EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16(EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString(EarthView_World_Graphic_COctreeSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedEntity_void_CInstancedEntity(EarthView_World_Graphic_COctreeSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList(EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString(EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList(EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString(EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_EVString_EVString(EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_CMovableObject(EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjectsByType_void_EVString(EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjects_void(EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjects_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjects_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getMovableObject_CMovableObject_EVString_EVString(EarthView_World_Graphic_COctreeSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasMovableObject_ev_bool_EVString_EVString(EarthView_World_Graphic_COctreeSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString(EarthView_World_Graphic_COctreeSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_injectMovableObject_void_CMovableObject(EarthView_World_Graphic_COctreeSceneManager_injectMovableObject_void_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_injectMovableObject_void_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_EVString_EVString(EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_CMovableObject(EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_extractAllMovableObjectsByType_void_EVString(EarthView_World_Graphic_COctreeSceneManager_extractAllMovableObjectsByType_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_extractAllMovableObjectsByType_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setVisibilityMask_void_ev_uint32(EarthView_World_Graphic_COctreeSceneManager_setVisibilityMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setVisibilityMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getVisibilityMask_ev_uint32(EarthView_World_Graphic_COctreeSceneManager_getVisibilityMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getVisibilityMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setFindVisibleObjects_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setFindVisibleObjects_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setFindVisibleObjects_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getFindVisibleObjects_ev_bool(EarthView_World_Graphic_COctreeSceneManager_getFindVisibleObjects_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getFindVisibleObjects_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setNormaliseNormalsOnScale_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getNormaliseNormalsOnScale_ev_bool(EarthView_World_Graphic_COctreeSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setFlipCullingOnNegativeScale_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getFlipCullingOnNegativeScale_ev_bool(EarthView_World_Graphic_COctreeSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList(EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool(EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool(EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable(EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__suppressRenderStateChanges_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager__suppressRenderStateChanges_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__suppressRenderStateChanges_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__areRenderStateChangesSuppressed_ev_bool(EarthView_World_Graphic_COctreeSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_ev_bool(EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool(EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass(EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__markGpuParamsDirty_void_ev_uint16(EarthView_World_Graphic_COctreeSceneManager__markGpuParamsDirty_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__markGpuParamsDirty_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__suppressShadows_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager__suppressShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__suppressShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__areShadowsSuppressed_ev_bool(EarthView_World_Graphic_COctreeSceneManager__areShadowsSuppressed_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__areShadowsSuppressed_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(EarthView_World_Graphic_COctreeSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setCameraRelativeRendering_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setCameraRelativeRendering_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setCameraRelativeRendering_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getCameraRelativeRendering_ev_bool(EarthView_World_Graphic_COctreeSceneManager_getCameraRelativeRendering_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getCameraRelativeRendering_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getHeightAt_Real_Real_Real_ev_real32(EarthView_World_Graphic_COctreeSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getBestHeightAt_Real_Real_Real(EarthView_World_Graphic_COctreeSceneManager_getBestHeightAt_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getBestHeightAt_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getHeightAtTile_Real_Real_Real(EarthView_World_Graphic_COctreeSceneManager_getHeightAtTile_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getHeightAtTile_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real(EarthView_World_Graphic_COctreeSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_addTempLayer_ev_bool_ILayer(EarthView_World_Graphic_COctreeSceneManager_addTempLayer_ev_bool_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_addTempLayer_ev_bool_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_removeTempLayer_ev_bool_ILayer(EarthView_World_Graphic_COctreeSceneManager_removeTempLayer_ev_bool_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_removeTempLayer_ev_bool_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool(EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real(EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool(EarthView_World_Graphic_COctreeSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_COctreeSceneManager_setCollisionDetectionEnable_void_ev_bool(EarthView_World_Graphic_COctreeSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_COctreeSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback = pCallback;
				}
				virtual EVString getTypeName() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getTypeName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getTypeName_EVString_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getTypeName();
				}
				virtual EarthView::World::Graphic::CSceneNode* createSceneNodeImpl()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createSceneNodeImpl();
				}
				virtual EarthView::World::Graphic::CSceneNode* createSceneNodeImpl(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createSceneNodeImpl(name);
				}
				virtual EarthView::World::Graphic::CCamera* createCamera(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createCamera_CCamera_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CCamera* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createCamera_CCamera_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createCamera(name);
				}
				virtual void destroySceneNode(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeSceneManager::destroySceneNode(name);
				}
				virtual void _updateSceneGraph(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__updateSceneGraph_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__updateSceneGraph_void_CCamera_Callback(cam);
					}
					else
						return this->COctreeSceneManager::_updateSceneGraph(cam);
				}
				virtual void _findVisibleObjects(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool onlyShadowCasters)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback(cam, visibleBounds, onlyShadowCasters);
					}
					else
						return this->COctreeSceneManager::_findVisibleObjects(cam, visibleBounds, onlyShadowCasters);
				}
				virtual void _alertVisibleObjects()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__alertVisibleObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__alertVisibleObjects_void_Callback();
					}
					else
						return this->COctreeSceneManager::_alertVisibleObjects();
				}
				virtual ev_bool setOption(_in const EVString& key, _in const void* val)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setOption_ev_bool_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						char* key_Char = key.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_setOption_ev_bool_EVString_void_Callback(key_Char, val);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::setOption(key, val);
				}
				virtual ev_bool getOption(_in const EVString& key, _in void* val)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getOption_ev_bool_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						char* key_Char = key.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getOption_ev_bool_EVString_void_Callback(key_Char, val);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getOption(key, val);
				}
				virtual ev_bool getOptionValues(_in const EVString& key, _inout EarthView::World::Core::StringVector& refValueList)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback != NULL && this->isCustomExtend())
					{
						char* key_Char = key.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback(key_Char, &refValueList);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getOptionValues(key, refValueList);
				}
				virtual ev_bool getOptionKeys(_inout EarthView::World::Core::StringVector& refKeys)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getOptionKeys_ev_bool_StringVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getOptionKeys_ev_bool_StringVector_Callback(&refKeys);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getOptionKeys(refKeys);
				}
				virtual void clearScene()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_clearScene_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_clearScene_void_Callback();
					}
					else
						return this->COctreeSceneManager::clearScene();
				}
				virtual EarthView::World::Graphic::CAxisAlignedBoxSceneQuery* createAABBQuery(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CAxisAlignedBoxSceneQuery* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback(&box, mask);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createAABBQuery(box, mask);
				}
				virtual EarthView::World::Graphic::CSphereSceneQuery* createSphereQuery(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSphereSceneQuery* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback(&sphere, mask);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createSphereQuery(sphere, mask);
				}
				virtual EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery* createPlaneBoundedVolumeQuery(_in const EarthView::World::Spatial::Math::PlaneBoundedVolumeList& volumes, _in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback(&volumes, mask);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createPlaneBoundedVolumeQuery(volumes, mask);
				}
				virtual EarthView::World::Graphic::CRaySceneQuery* createRayQuery(_in const EarthView::World::Spatial::Math::CRay& ray, _in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRaySceneQuery* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback(&ray, mask);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createRayQuery(ray, mask);
				}
				virtual EarthView::World::Graphic::CIntersectionSceneQuery* createIntersectionQuery(_in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CIntersectionSceneQuery* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback(mask);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createIntersectionQuery(mask);
				}
				virtual void initRenderQueue()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_initRenderQueue_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_initRenderQueue_void_Callback();
					}
					else
						return this->COctreeSceneManager::initRenderQueue();
				}
				virtual const EarthView::World::Graphic::CPass* deriveShadowCasterPass(_in const EarthView::World::Graphic::CPass* pass)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_deriveShadowCasterPass_CPass_CPass_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CPass* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_deriveShadowCasterPass_CPass_CPass_Callback(pass);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::deriveShadowCasterPass(pass);
				}
				virtual const EarthView::World::Graphic::CPass* deriveShadowReceiverPass(_in const EarthView::World::Graphic::CPass* pass)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CPass* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback(pass);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::deriveShadowReceiverPass(pass);
				}
				virtual ev_bool validatePassForRendering(_in const EarthView::World::Graphic::CPass* pass)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_validatePassForRendering_ev_bool_CPass_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_validatePassForRendering_ev_bool_CPass_Callback(pass);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::validatePassForRendering(pass);
				}
				virtual ev_bool validateRenderableForRendering(_in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CRenderable* rend)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback(pass, rend);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::validateRenderableForRendering(pass, rend);
				}
				virtual EarthView::World::Graphic::CMeshPtr createSkyboxPlane(_in EarthView::World::Graphic::CSceneManager::BoxPlane bp, _in Real distance, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* groupName_Char = groupName.makeBuffer();
						EarthView::World::Graphic::CMeshPtr returnValue = *(EarthView::World::Graphic::CMeshPtr*)m_EarthView_World_Graphic_COctreeSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback((int)bp, distance, &orientation, groupName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createSkyboxPlane(bp, distance, orientation, groupName);
				}
				virtual EarthView::World::Graphic::CMeshPtr createSkydomePlane(_in EarthView::World::Graphic::CSceneManager::BoxPlane bp, _in Real curvature, _in Real tiling, _in Real distance, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ySegmentsToKeep, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* groupName_Char = groupName.makeBuffer();
						EarthView::World::Graphic::CMeshPtr returnValue = *(EarthView::World::Graphic::CMeshPtr*)m_EarthView_World_Graphic_COctreeSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback((int)bp, curvature, tiling, distance, &orientation, xsegments, ysegments, ySegmentsToKeep, groupName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createSkydomePlane(bp, curvature, tiling, distance, orientation, xsegments, ysegments, ySegmentsToKeep, groupName);
				}
				virtual void useRenderableViewProjMode(_in const EarthView::World::Graphic::CRenderable* pRend, _in ev_bool fixedFunction)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback(pRend, fixedFunction);
					}
					else
						return this->COctreeSceneManager::useRenderableViewProjMode(pRend, fixedFunction);
				}
				virtual void resetViewProjMode(_in ev_bool fixedFunction)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_resetViewProjMode_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_resetViewProjMode_void_ev_bool_Callback(fixedFunction);
					}
					else
						return this->COctreeSceneManager::resetViewProjMode(fixedFunction);
				}
				virtual void firePreRenderQueues()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_firePreRenderQueues_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_firePreRenderQueues_void_Callback();
					}
					else
						return this->COctreeSceneManager::firePreRenderQueues();
				}
				virtual void firePostRenderQueues()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_firePostRenderQueues_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_firePostRenderQueues_void_Callback();
					}
					else
						return this->COctreeSceneManager::firePostRenderQueues();
				}
				virtual ev_bool fireRenderQueueStarted(_in ev_uint8 id, _in const EVString& invocation)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* invocation_Char = invocation.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback(id, invocation_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::fireRenderQueueStarted(id, invocation);
				}
				virtual ev_bool fireRenderQueueEnded(_in ev_uint8 id, _in const EVString& invocation)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* invocation_Char = invocation.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback(id, invocation_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::fireRenderQueueEnded(id, invocation);
				}
				virtual void fireRenderSingleObjectStarted(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback(rend, pass, source, pLightList, suppressRenderStateChanges);
					}
					else
						return this->COctreeSceneManager::fireRenderSingleObjectStarted(rend, pass, source, pLightList, suppressRenderStateChanges);
				}
				virtual void fireRenderSingleObjectEnd(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList, _in ev_bool suppressRenderStateChanges)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback(rend, pass, source, pLightList, suppressRenderStateChanges);
					}
					else
						return this->COctreeSceneManager::fireRenderSingleObjectEnd(rend, pass, source, pLightList, suppressRenderStateChanges);
				}
				virtual void fireShadowTexturesUpdated(_in ev_size_t numberOfShadowTextures)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback(numberOfShadowTextures);
					}
					else
						return this->COctreeSceneManager::fireShadowTexturesUpdated(numberOfShadowTextures);
				}
				virtual void fireShadowTexturesPreCaster(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CCamera* camera, _in ev_size_t iteration)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback(light, camera, iteration);
					}
					else
						return this->COctreeSceneManager::fireShadowTexturesPreCaster(light, camera, iteration);
				}
				virtual void fireShadowTexturesPreReceiver(_in EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CFrustum* f)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback(light, f);
					}
					else
						return this->COctreeSceneManager::fireShadowTexturesPreReceiver(light, f);
				}
				virtual void firePreUpdateSceneGraph(_in EarthView::World::Graphic::CCamera* camera)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback(camera);
					}
					else
						return this->COctreeSceneManager::firePreUpdateSceneGraph(camera);
				}
				virtual void firePostUpdateSceneGraph(_in EarthView::World::Graphic::CCamera* camera)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback(camera);
					}
					else
						return this->COctreeSceneManager::firePostUpdateSceneGraph(camera);
				}
				virtual void firePreFindVisibleObjects(_in EarthView::World::Graphic::CViewport* v)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_firePreFindVisibleObjects_void_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_firePreFindVisibleObjects_void_CViewport_Callback(v);
					}
					else
						return this->COctreeSceneManager::firePreFindVisibleObjects(v);
				}
				virtual void firePostFindVisibleObjects(_in EarthView::World::Graphic::CViewport* v)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_firePostFindVisibleObjects_void_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_firePostFindVisibleObjects_void_CViewport_Callback(v);
					}
					else
						return this->COctreeSceneManager::firePostFindVisibleObjects(v);
				}
				virtual void fireSceneManagerDestroyed()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_fireSceneManagerDestroyed_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_fireSceneManagerDestroyed_void_Callback();
					}
					else
						return this->COctreeSceneManager::fireSceneManagerDestroyed();
				}
				virtual void setViewport(_in EarthView::World::Graphic::CViewport* vp)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setViewport_void_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setViewport_void_CViewport_Callback(vp);
					}
					else
						return this->COctreeSceneManager::setViewport(vp);
				}
				virtual void renderVisibleObjectsDefaultSequence()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsDefaultSequence_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsDefaultSequence_void_Callback();
					}
					else
						return this->COctreeSceneManager::renderVisibleObjectsDefaultSequence();
				}
				virtual void renderVisibleObjectsCustomSequence(_in EarthView::World::Graphic::CRenderQueueInvocationSequence* s)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback(s);
					}
					else
						return this->COctreeSceneManager::renderVisibleObjectsCustomSequence(s);
				}
				virtual void prepareRenderQueue()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_prepareRenderQueue_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_prepareRenderQueue_void_Callback();
					}
					else
						return this->COctreeSceneManager::prepareRenderQueue();
				}
				virtual void renderSingleObject(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback(rend, pass, lightScissoringClipping, doLightIteration, manualLightList);
					}
					else
						return this->COctreeSceneManager::renderSingleObject(rend, pass, lightScissoringClipping, doLightIteration, manualLightList);
				}
				virtual void renderSingleObject(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback(rend, pass, lightScissoringClipping, doLightIteration);
					}
					else
						return this->COctreeSceneManager::renderSingleObject(rend, pass, lightScissoringClipping, doLightIteration);
				}
				virtual EarthView::World::Graphic::CAutoParamDataSource* createAutoParamDataSource() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CAutoParamDataSource* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createAutoParamDataSource();
				}
				virtual void findLightsAffectingFrustum(_in const EarthView::World::Graphic::CCamera* camera)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_findLightsAffectingFrustum_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_findLightsAffectingFrustum_void_CCamera_Callback(camera);
					}
					else
						return this->COctreeSceneManager::findLightsAffectingFrustum(camera);
				}
				virtual void initShadowVolumeMaterials()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_initShadowVolumeMaterials_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_initShadowVolumeMaterials_void_Callback();
					}
					else
						return this->COctreeSceneManager::initShadowVolumeMaterials();
				}
				virtual void ensureShadowTexturesCreated()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_ensureShadowTexturesCreated_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_ensureShadowTexturesCreated_void_Callback();
					}
					else
						return this->COctreeSceneManager::ensureShadowTexturesCreated();
				}
				virtual void destroyShadowTextures()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyShadowTextures_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyShadowTextures_void_Callback();
					}
					else
						return this->COctreeSceneManager::destroyShadowTextures();
				}
				virtual void prepareShadowTextures(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Graphic::LightList* lightList)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback(cam, vp, lightList);
					}
					else
						return this->COctreeSceneManager::prepareShadowTextures(cam, vp, lightList);
				}
				virtual void prepareShadowTextures(_in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::CViewport* vp)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback(cam, vp);
					}
					else
						return this->COctreeSceneManager::prepareShadowTextures(cam, vp);
				}
				virtual void setImageDefaultMaterial(_in const EarthView::World::Graphic::CMaterialPtr& matPtr)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback(&matPtr);
					}
					else
						return this->COctreeSceneManager::setImageDefaultMaterial(matPtr);
				}
				virtual void setImageUseDefaultMaterial(_in const ev_bool& useDefaultMat)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback(useDefaultMat);
					}
					else
						return this->COctreeSceneManager::setImageUseDefaultMaterial(useDefaultMat);
				}
				virtual EarthView::World::Spatial::Math::CVector3 getSunPosition()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSunPosition_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CVector3 returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_World_Graphic_COctreeSceneManager_getSunPosition_CVector3_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSunPosition();
				}
				virtual void setAtmosphereVisible(_in const ev_bool& visible)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setAtmosphereVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setAtmosphereVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->COctreeSceneManager::setAtmosphereVisible(visible);
				}
				virtual void storeAtmosphereVisibleState()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_storeAtmosphereVisibleState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_storeAtmosphereVisibleState_void_Callback();
					}
					else
						return this->COctreeSceneManager::storeAtmosphereVisibleState();
				}
				virtual void restoreAtmosphereVisibleState()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_restoreAtmosphereVisibleState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_restoreAtmosphereVisibleState_void_Callback();
					}
					else
						return this->COctreeSceneManager::restoreAtmosphereVisibleState();
				}
				virtual void setSunVisible(_in ev_bool flag)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSunVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setSunVisible_void_ev_bool_Callback(flag);
					}
					else
						return this->COctreeSceneManager::setSunVisible(flag);
				}
				virtual EarthView::World::Graphic::CSceneManager::RenderContext* _pauseRendering()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__pauseRendering_RenderContext_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneManager::RenderContext* returnValue = m_EarthView_World_Graphic_COctreeSceneManager__pauseRendering_RenderContext_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::_pauseRendering();
				}
				virtual void _resumeRendering(_in EarthView::World::Graphic::CSceneManager::RenderContext* context)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__resumeRendering_void_RenderContext_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__resumeRendering_void_RenderContext_Callback(context);
					}
					else
						return this->COctreeSceneManager::_resumeRendering(context);
				}
				virtual void renderShadowVolumesToStencil(_in const EarthView::World::Graphic::CLight* light, _in const EarthView::World::Graphic::CCamera* cam, _in ev_bool calcScissor)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback(light, cam, calcScissor);
					}
					else
						return this->COctreeSceneManager::renderShadowVolumesToStencil(light, cam, calcScissor);
				}
				virtual void setShadowVolumeStencilState(_in ev_bool secondpass, _in ev_bool zfail, _in ev_bool twosided)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback(secondpass, zfail, twosided);
					}
					else
						return this->COctreeSceneManager::setShadowVolumeStencilState(secondpass, zfail, twosided);
				}
				virtual const EarthView::World::Graphic::CSceneManager::ShadowCasterList& findShadowCastersForLight(_in const EarthView::World::Graphic::CLight* light, _in const EarthView::World::Graphic::CCamera* camera)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneManager::ShadowCasterList& returnValue = *(EarthView::World::Graphic::CSceneManager::ShadowCasterList*)m_EarthView_World_Graphic_COctreeSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback(light, camera);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::findShadowCastersForLight(light, camera);
				}
				virtual void renderBasicQueueGroupObjects(_in EarthView::World::Graphic::CRenderQueueGroup* pGroup, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback(pGroup, (int)om);
					}
					else
						return this->COctreeSceneManager::renderBasicQueueGroupObjects(pGroup, om);
				}
				virtual void renderAdditiveStencilShadowedQueueGroupObjects(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback(group, (int)om);
					}
					else
						return this->COctreeSceneManager::renderAdditiveStencilShadowedQueueGroupObjects(group, om);
				}
				virtual void renderModulativeStencilShadowedQueueGroupObjects(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback(group, (int)om);
					}
					else
						return this->COctreeSceneManager::renderModulativeStencilShadowedQueueGroupObjects(group, om);
				}
				virtual void renderTextureShadowCasterQueueGroupObjects(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback(group, (int)om);
					}
					else
						return this->COctreeSceneManager::renderTextureShadowCasterQueueGroupObjects(group, om);
				}
				virtual void renderTextureShadowReceiverQueueGroupObjects(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback(group, (int)om);
					}
					else
						return this->COctreeSceneManager::renderTextureShadowReceiverQueueGroupObjects(group, om);
				}
				virtual void renderModulativeTextureShadowedQueueGroupObjects(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback(group, (int)om);
					}
					else
						return this->COctreeSceneManager::renderModulativeTextureShadowedQueueGroupObjects(group, om);
				}
				virtual void renderAdditiveTextureShadowedQueueGroupObjects(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback(group, (int)om);
					}
					else
						return this->COctreeSceneManager::renderAdditiveTextureShadowedQueueGroupObjects(group, om);
				}
				virtual void renderObjects(_in const EarthView::World::Graphic::CQueuedRenderableCollection& objs, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback(&objs, (int)om, lightScissoringClipping, doLightIteration, manualLightList);
					}
					else
						return this->COctreeSceneManager::renderObjects(objs, om, lightScissoringClipping, doLightIteration, manualLightList);
				}
				virtual void renderObjects(_in const EarthView::World::Graphic::CQueuedRenderableCollection& objs, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback(&objs, (int)om, lightScissoringClipping, doLightIteration);
					}
					else
						return this->COctreeSceneManager::renderObjects(objs, om, lightScissoringClipping, doLightIteration);
				}
				virtual void renderTransparentShadowCasterObjects(_in const EarthView::World::Graphic::CQueuedRenderableCollection& objs, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback(&objs, (int)om, lightScissoringClipping, doLightIteration, manualLightList);
					}
					else
						return this->COctreeSceneManager::renderTransparentShadowCasterObjects(objs, om, lightScissoringClipping, doLightIteration, manualLightList);
				}
				virtual void renderTransparentShadowCasterObjects(_in const EarthView::World::Graphic::CQueuedRenderableCollection& objs, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback(&objs, (int)om, lightScissoringClipping, doLightIteration);
					}
					else
						return this->COctreeSceneManager::renderTransparentShadowCasterObjects(objs, om, lightScissoringClipping, doLightIteration);
				}
				virtual void updateRenderQueueSplitOptions()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueSplitOptions_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueSplitOptions_void_Callback();
					}
					else
						return this->COctreeSceneManager::updateRenderQueueSplitOptions();
				}
				virtual void updateRenderQueueGroupSplitOptions(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in ev_bool suppressShadows, _in ev_bool suppressRenderState)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback(group, suppressShadows, suppressRenderState);
					}
					else
						return this->COctreeSceneManager::updateRenderQueueGroupSplitOptions(group, suppressShadows, suppressRenderState);
				}
				virtual EarthView::World::Graphic::ClipResult buildAndSetScissor(_in const EarthView::World::Graphic::LightList& ll, _in const EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ClipResult returnValue = (EarthView::World::Graphic::ClipResult)m_EarthView_World_Graphic_COctreeSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback(&ll, cam);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::buildAndSetScissor(ll, cam);
				}
				virtual void buildScissor(_in const EarthView::World::Graphic::CLight* l, _in const EarthView::World::Graphic::CCamera* cam, _inout EarthView::World::Graphic::RealRect& rect)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback(l, cam, &rect);
					}
					else
						return this->COctreeSceneManager::buildScissor(l, cam, rect);
				}
				virtual void resetScissor()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_resetScissor_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_resetScissor_void_Callback();
					}
					else
						return this->COctreeSceneManager::resetScissor();
				}
				virtual EarthView::World::Graphic::ClipResult buildAndSetLightClip(_in const EarthView::World::Graphic::LightList& ll)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ClipResult returnValue = (EarthView::World::Graphic::ClipResult)m_EarthView_World_Graphic_COctreeSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback(&ll);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::buildAndSetLightClip(ll);
				}
				virtual void buildLightClip(_in const EarthView::World::Graphic::CLight* l, _inout EarthView::World::Spatial::Math::PlaneList& planes)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_buildLightClip_void_CLight_PlaneList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_buildLightClip_void_CLight_PlaneList_Callback(l, &planes);
					}
					else
						return this->COctreeSceneManager::buildLightClip(l, planes);
				}
				virtual void resetLightClip()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_resetLightClip_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_resetLightClip_void_Callback();
					}
					else
						return this->COctreeSceneManager::resetLightClip();
				}
				virtual void checkCachedLightClippingInfo()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_checkCachedLightClippingInfo_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_checkCachedLightClippingInfo_void_Callback();
					}
					else
						return this->COctreeSceneManager::checkCachedLightClippingInfo();
				}
				virtual void useLights(_in const EarthView::World::Graphic::LightList& lights, _in ev_uint16 limit)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_useLights_void_LightList_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_useLights_void_LightList_ev_uint16_Callback(&lights, limit);
					}
					else
						return this->COctreeSceneManager::useLights(lights, limit);
				}
				virtual void setViewMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setViewMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setViewMatrix_void_CMatrix4_Callback(&m);
					}
					else
						return this->COctreeSceneManager::setViewMatrix(m);
				}
				virtual void useLightsGpuProgram(_in const EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::LightList* lights)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback(pass, lights);
					}
					else
						return this->COctreeSceneManager::useLightsGpuProgram(pass, lights);
				}
				virtual void bindGpuProgram(_in EarthView::World::Graphic::CGpuProgram* prog)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_bindGpuProgram_void_CGpuProgram_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_bindGpuProgram_void_CGpuProgram_Callback(prog);
					}
					else
						return this->COctreeSceneManager::bindGpuProgram(prog);
				}
				virtual void updateGpuProgramParameters(_in const EarthView::World::Graphic::CPass* p)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_updateGpuProgramParameters_void_CPass_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_updateGpuProgramParameters_void_CPass_Callback(p);
					}
					else
						return this->COctreeSceneManager::updateGpuProgramParameters(p);
				}
				virtual EarthView::World::Graphic::CCamera* getCamera(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getCamera_CCamera_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CCamera* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getCamera_CCamera_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getCamera(name);
				}
				virtual ev_bool hasCamera(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_hasCamera_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_hasCamera_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::hasCamera(name);
				}
				virtual void destroyCamera(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_CCamera_Callback(cam);
					}
					else
						return this->COctreeSceneManager::destroyCamera(cam);
				}
				virtual void destroyCamera(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeSceneManager::destroyCamera(name);
				}
				virtual void destroyAllCameras()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyAllCameras_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyAllCameras_void_Callback();
					}
					else
						return this->COctreeSceneManager::destroyAllCameras();
				}
				virtual EarthView::World::Graphic::CLight* createLight(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CLight* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createLight(name);
				}
				virtual EarthView::World::Graphic::CLight* createLight()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CLight* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createLight();
				}
				virtual ev_uint16 getLightCount() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getLightCount_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getLightCount_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getLightCount();
				}
				virtual EarthView::World::Graphic::CLight* getLight(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CLight* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getLight(index);
				}
				virtual EarthView::World::Graphic::CLight* getLight(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CLight* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getLight(name);
				}
				virtual ev_bool hasLight(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_hasLight_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_hasLight_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::hasLight(name);
				}
				virtual const EarthView::World::Spatial::Math::PlaneList& getLightClippingPlanes(_in EarthView::World::Graphic::CLight* l)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::PlaneList& returnValue = *(EarthView::World::Spatial::Math::PlaneList*)m_EarthView_World_Graphic_COctreeSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback(l);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getLightClippingPlanes(l);
				}
				virtual const EarthView::World::Graphic::RealRect& getLightScissorRect(_in EarthView::World::Graphic::CLight* l, _in const EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::RealRect& returnValue = *(EarthView::World::Graphic::RealRect*)m_EarthView_World_Graphic_COctreeSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback(l, cam);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getLightScissorRect(l, cam);
				}
				virtual void destroyLight(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeSceneManager::destroyLight(name);
				}
				virtual void destroyLight(_in EarthView::World::Graphic::CLight* light)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_CLight_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_CLight_Callback(light);
					}
					else
						return this->COctreeSceneManager::destroyLight(light);
				}
				virtual void destroyAllLights()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyAllLights_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyAllLights_void_Callback();
					}
					else
						return this->COctreeSceneManager::destroyAllLights();
				}
				virtual EVString getSoftShadowTexName() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowTexName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowTexName_EVString_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSoftShadowTexName();
				}
				virtual EarthView::World::Graphic::CCamera* getShadowTexCam() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShadowTexCam_CCamera_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CCamera* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getShadowTexCam_CCamera_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShadowTexCam();
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getSoftShadowProjMatrix(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSoftShadowProjMatrix(index);
				}
				virtual EarthView::World::Spatial::Math::CVector4 getCascadeEyeSpaceDepthArray() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CVector4 returnValue = *(EarthView::World::Spatial::Math::CVector4*)m_EarthView_World_Graphic_COctreeSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getCascadeEyeSpaceDepthArray();
				}
				virtual float getSoftShadowNearClip(_in ev_uint8 index) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						float returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback(index);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSoftShadowNearClip(index);
				}
				virtual float getSoftShadowFarClip(_in ev_uint8 index) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						float returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback(index);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSoftShadowFarClip(index);
				}
				virtual bool getIsUseSoftShadowFitToCascadesMode() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getIsUseSoftShadowFitToCascadesMode();
				}
				virtual void setIsUseSoftShadowFitToCascadesMode(_in bool flag)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback(flag);
					}
					else
						return this->COctreeSceneManager::setIsUseSoftShadowFitToCascadesMode(flag);
				}
				virtual ev_uint8 getCurrentClipIndex() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getCurrentClipIndex_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getCurrentClipIndex_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getCurrentClipIndex();
				}
				virtual bool getIsUseSoftShadowTechnique() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowTechnique_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowTechnique_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getIsUseSoftShadowTechnique();
				}
				virtual void setIsUseSoftShadowTechnique(_in bool flag)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback(flag);
					}
					else
						return this->COctreeSceneManager::setIsUseSoftShadowTechnique(flag);
				}
				virtual float getCascadePartitionsPercent() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsPercent_float_Callback != NULL && this->isCustomExtend())
					{
						float returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsPercent_float_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getCascadePartitionsPercent();
				}
				virtual void setCascadePartitionsPercent(_in float percent)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsPercent_void_float_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsPercent_void_float_Callback(percent);
					}
					else
						return this->COctreeSceneManager::setCascadePartitionsPercent(percent);
				}
				virtual int getCascadePartitionsDistance(_in ev_uint8 index) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						int returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback(index);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getCascadePartitionsDistance(index);
				}
				virtual void setCascadePartitionsDistance(_in ev_uint8 index, _in ev_uint8 distance)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback(index, distance);
					}
					else
						return this->COctreeSceneManager::setCascadePartitionsDistance(index, distance);
				}
				virtual EarthView::World::Graphic::PixelFormat getSoftShadowOffsetFormat() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::PixelFormat returnValue = (EarthView::World::Graphic::PixelFormat)m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSoftShadowOffsetFormat();
				}
				virtual void checkShadowCasterInFrustum(_in EarthView::World::Graphic::CCamera* camera)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback(camera);
					}
					else
						return this->COctreeSceneManager::checkShadowCasterInFrustum(camera);
				}
				virtual bool hasShadowCasterInFrustum() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_hasShadowCasterInFrustum_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_hasShadowCasterInFrustum_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::hasShadowCasterInFrustum();
				}
				virtual Real getSoftShadowLightBleedPower() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowLightBleedPower_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowLightBleedPower_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSoftShadowLightBleedPower();
				}
				virtual void setSoftShadowLightBleedPower(_in Real power)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowLightBleedPower_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowLightBleedPower_void_Real_Callback(power);
					}
					else
						return this->COctreeSceneManager::setSoftShadowLightBleedPower(power);
				}
				virtual Real getSoftShadowDepthOffset() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowDepthOffset_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowDepthOffset_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSoftShadowDepthOffset();
				}
				virtual void setSoftShadowDepthOffset(_in Real offset)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowDepthOffset_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowDepthOffset_void_Real_Callback(offset);
					}
					else
						return this->COctreeSceneManager::setSoftShadowDepthOffset(offset);
				}
				virtual float getSoftShadowNormalFactor() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNormalFactor_float_Callback != NULL && this->isCustomExtend())
					{
						float returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNormalFactor_float_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSoftShadowNormalFactor();
				}
				virtual void setSoftShadowNormalFactor(_in float factor)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowNormalFactor_void_float_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowNormalFactor_void_float_Callback(factor);
					}
					else
						return this->COctreeSceneManager::setSoftShadowNormalFactor(factor);
				}
				virtual void _notifyLightsDirty()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__notifyLightsDirty_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__notifyLightsDirty_void_Callback();
					}
					else
						return this->COctreeSceneManager::_notifyLightsDirty();
				}
				virtual const EarthView::World::Graphic::LightList& _getLightsAffectingFrustum() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__getLightsAffectingFrustum_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_COctreeSceneManager__getLightsAffectingFrustum_LightList_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::_getLightsAffectingFrustum();
				}
				virtual void _populateLightList(_in const EarthView::World::Spatial::Math::CVector3& position, _in Real radius, _inout EarthView::World::Graphic::LightList& destList, _in ev_uint32 lightMask)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback(&position, radius, &destList, lightMask);
					}
					else
						return this->COctreeSceneManager::_populateLightList(position, radius, destList, lightMask);
				}
				virtual void _populateLightList(_in const EarthView::World::Spatial::Math::CVector3& position, _in Real radius, _inout EarthView::World::Graphic::LightList& destList)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_Callback(&position, radius, &destList);
					}
					else
						return this->COctreeSceneManager::_populateLightList(position, radius, destList);
				}
				virtual void showImage(_in ev_bool visible)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_showImage_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_showImage_void_ev_bool_Callback(visible);
					}
					else
						return this->COctreeSceneManager::showImage(visible);
				}
				virtual ev_bool getImageVisible() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getImageVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getImageVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getImageVisible();
				}
				virtual void showOcean(_in ev_bool visible)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_showOcean_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_showOcean_void_ev_bool_Callback(visible);
					}
					else
						return this->COctreeSceneManager::showOcean(visible);
				}
				virtual ev_bool getOceanVisible() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getOceanVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getOceanVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getOceanVisible();
				}
				virtual void _populateLightList(_in const EarthView::World::Graphic::CSceneNode* sn, _in Real radius, _inout EarthView::World::Graphic::LightList& destList, _in ev_uint32 lightMask)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback(sn, radius, &destList, lightMask);
					}
					else
						return this->COctreeSceneManager::_populateLightList(sn, radius, destList, lightMask);
				}
				virtual void _populateLightList(_in const EarthView::World::Graphic::CSceneNode* sn, _in Real radius, _inout EarthView::World::Graphic::LightList& destList)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback(sn, radius, &destList);
					}
					else
						return this->COctreeSceneManager::_populateLightList(sn, radius, destList);
				}
				virtual EarthView::World::Graphic::CSceneNode* createSceneNode()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createSceneNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* createSceneNode(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createSceneNode(name);
				}
				virtual EarthView::World::Graphic::CSceneNode* getRootSceneNode()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getRootSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getRootSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getRootSceneNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* getSceneNode(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSceneNode_CSceneNode_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getSceneNode_CSceneNode_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSceneNode(name);
				}
				virtual ev_bool hasSceneNode(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_hasSceneNode_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_hasSceneNode_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::hasSceneNode(name);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& entityName, _in const EVString& meshName, _in const EarthView::World::Core::IntVector& subentityIndics, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* entityName_Char = entityName.makeBuffer();
						char* meshName_Char = meshName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback(entityName_Char, meshName_Char, &subentityIndics, groupName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createEntity(entityName, meshName, subentityIndics, groupName);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& entityName, _in const EVString& meshName, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* entityName_Char = entityName.makeBuffer();
						char* meshName_Char = meshName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback(entityName_Char, meshName_Char, groupName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createEntity(entityName, meshName, groupName);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& entityName, _in const EVString& meshName, _in const EarthView::World::Core::IntVector& subentityIndics)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback != NULL && this->isCustomExtend())
					{
						char* entityName_Char = entityName.makeBuffer();
						char* meshName_Char = meshName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback(entityName_Char, meshName_Char, &subentityIndics);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createEntity(entityName, meshName, subentityIndics);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& entityName, _in const EVString& meshName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* entityName_Char = entityName.makeBuffer();
						char* meshName_Char = meshName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_Callback(entityName_Char, meshName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createEntity(entityName, meshName);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& entityName, _in const EarthView::World::Graphic::CMeshPtr& pMesh, _in const EarthView::World::Core::IntVector& subentityIndics)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback != NULL && this->isCustomExtend())
					{
						char* entityName_Char = entityName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback(entityName_Char, &pMesh, &subentityIndics);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createEntity(entityName, pMesh, subentityIndics);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& entityName, _in const EarthView::World::Graphic::CMeshPtr& pMesh)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback != NULL && this->isCustomExtend())
					{
						char* entityName_Char = entityName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback(entityName_Char, &pMesh);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createEntity(entityName, pMesh);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EarthView::World::Graphic::CMeshPtr& pMesh, _in const EarthView::World::Core::IntVector& subentityIndics)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback(&pMesh, &subentityIndics);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createEntity(pMesh, subentityIndics);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EarthView::World::Graphic::CMeshPtr& pMesh)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_Callback(&pMesh);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createEntity(pMesh);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& meshName, _in const EarthView::World::Core::IntVector& subentityIndics)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_IntVector_Callback != NULL && this->isCustomExtend())
					{
						char* meshName_Char = meshName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_IntVector_Callback(meshName_Char, &subentityIndics);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createEntity(meshName, subentityIndics);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& meshName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* meshName_Char = meshName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_Callback(meshName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createEntity(meshName);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in const EVString& entityName, _in EarthView::World::Graphic::CSceneManager::PrefabType ptype)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_PrefabType_Callback != NULL && this->isCustomExtend())
					{
						char* entityName_Char = entityName.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_PrefabType_Callback(entityName_Char, (int)ptype);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createEntity(entityName, ptype);
				}
				virtual EarthView::World::Graphic::CEntity* createEntity(_in EarthView::World::Graphic::CSceneManager::PrefabType ptype)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_PrefabType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_PrefabType_Callback((int)ptype);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createEntity(ptype);
				}
				virtual EarthView::World::Graphic::CEntity* getEntity(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getEntity_CEntity_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CEntity* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getEntity_CEntity_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getEntity(name);
				}
				virtual ev_bool hasEntity(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_hasEntity_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_hasEntity_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::hasEntity(name);
				}
				virtual void destroyEntity(_in EarthView::World::Graphic::CEntity* ent)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_CEntity_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_CEntity_Callback(ent);
					}
					else
						return this->COctreeSceneManager::destroyEntity(ent);
				}
				virtual void destroyEntity(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeSceneManager::destroyEntity(name);
				}
				virtual void destroyAllEntities()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyAllEntities_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyAllEntities_void_Callback();
					}
					else
						return this->COctreeSceneManager::destroyAllEntities();
				}
				virtual EarthView::World::Graphic::CManualObject* createManualObject(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CManualObject* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createManualObject(name);
				}
				virtual EarthView::World::Graphic::CManualObject* createManualObject()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CManualObject* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createManualObject();
				}
				virtual EarthView::World::Graphic::CManualObject* getManualObject(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getManualObject_CManualObject_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CManualObject* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getManualObject_CManualObject_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getManualObject(name);
				}
				virtual ev_bool hasManualObject(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_hasManualObject_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_hasManualObject_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::hasManualObject(name);
				}
				virtual void destroyManualObject(_in EarthView::World::Graphic::CManualObject* obj)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_CManualObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_CManualObject_Callback(obj);
					}
					else
						return this->COctreeSceneManager::destroyManualObject(obj);
				}
				virtual void destroyManualObject(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeSceneManager::destroyManualObject(name);
				}
				virtual void destroyAllManualObjects()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyAllManualObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyAllManualObjects_void_Callback();
					}
					else
						return this->COctreeSceneManager::destroyAllManualObjects();
				}
				virtual ev_bool usingWebMercator() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_usingWebMercator_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_usingWebMercator_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::usingWebMercator();
				}
				virtual EarthView::World::Graphic::CBillboardChain* createBillboardChain(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CBillboardChain* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createBillboardChain(name);
				}
				virtual EarthView::World::Graphic::CBillboardChain* createBillboardChain()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CBillboardChain* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createBillboardChain();
				}
				virtual EarthView::World::Graphic::CBillboardChain* getBillboardChain(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getBillboardChain_CBillboardChain_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CBillboardChain* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getBillboardChain_CBillboardChain_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getBillboardChain(name);
				}
				virtual ev_bool hasBillboardChain(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_hasBillboardChain_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_hasBillboardChain_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::hasBillboardChain(name);
				}
				virtual void destroyBillboardChain(_in EarthView::World::Graphic::CBillboardChain* obj)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_CBillboardChain_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_CBillboardChain_Callback(obj);
					}
					else
						return this->COctreeSceneManager::destroyBillboardChain(obj);
				}
				virtual void destroyBillboardChain(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeSceneManager::destroyBillboardChain(name);
				}
				virtual void destroyAllBillboardChains()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardChains_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardChains_void_Callback();
					}
					else
						return this->COctreeSceneManager::destroyAllBillboardChains();
				}
				virtual EarthView::World::Graphic::CRibbonTrail* createRibbonTrail(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CRibbonTrail* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createRibbonTrail(name);
				}
				virtual EarthView::World::Graphic::CRibbonTrail* createRibbonTrail()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRibbonTrail* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createRibbonTrail();
				}
				virtual EarthView::World::Graphic::CRibbonTrail* getRibbonTrail(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CRibbonTrail* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getRibbonTrail(name);
				}
				virtual ev_bool hasRibbonTrail(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_hasRibbonTrail_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_hasRibbonTrail_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::hasRibbonTrail(name);
				}
				virtual void destroyRibbonTrail(_in EarthView::World::Graphic::CRibbonTrail* obj)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback(obj);
					}
					else
						return this->COctreeSceneManager::destroyRibbonTrail(obj);
				}
				virtual void destroyRibbonTrail(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeSceneManager::destroyRibbonTrail(name);
				}
				virtual void destroyAllRibbonTrails()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyAllRibbonTrails_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyAllRibbonTrails_void_Callback();
					}
					else
						return this->COctreeSceneManager::destroyAllRibbonTrails();
				}
				virtual EarthView::World::Graphic::CParticleSystem* createParticleSystem(_in const EVString& name, _in const EVString& templateName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* templateName_Char = templateName.makeBuffer();
						EarthView::World::Graphic::CParticleSystem* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback(name_Char, templateName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createParticleSystem(name, templateName);
				}
				virtual EarthView::World::Graphic::CParticleSystem* createParticleSystem(_in const EVString& name, _in ev_size_t quota, _in const EVString& resourceGroup)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* resourceGroup_Char = resourceGroup.makeBuffer();
						EarthView::World::Graphic::CParticleSystem* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback(name_Char, quota, resourceGroup_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createParticleSystem(name, quota, resourceGroup);
				}
				virtual EarthView::World::Graphic::CParticleSystem* createParticleSystem(_in const EVString& name, _in ev_size_t quota)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CParticleSystem* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback(name_Char, quota);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createParticleSystem(name, quota);
				}
				virtual EarthView::World::Graphic::CParticleSystem* createParticleSystem(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CParticleSystem* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createParticleSystem(name);
				}
				virtual EarthView::World::Graphic::CParticleSystem* createParticleSystem(_in ev_size_t quota, _in const EVString& resourceGroup)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* resourceGroup_Char = resourceGroup.makeBuffer();
						EarthView::World::Graphic::CParticleSystem* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback(quota, resourceGroup_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createParticleSystem(quota, resourceGroup);
				}
				virtual EarthView::World::Graphic::CParticleSystem* createParticleSystem(_in ev_size_t quota)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CParticleSystem* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback(quota);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createParticleSystem(quota);
				}
				virtual EarthView::World::Graphic::CParticleSystem* createParticleSystem()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CParticleSystem* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createParticleSystem();
				}
				virtual EarthView::World::Graphic::CParticleSystem* getParticleSystem(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getParticleSystem_CParticleSystem_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CParticleSystem* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getParticleSystem_CParticleSystem_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getParticleSystem(name);
				}
				virtual ev_bool hasParticleSystem(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_hasParticleSystem_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_hasParticleSystem_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::hasParticleSystem(name);
				}
				virtual void destroyParticleSystem(_in EarthView::World::Graphic::CParticleSystem* obj)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_CParticleSystem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_CParticleSystem_Callback(obj);
					}
					else
						return this->COctreeSceneManager::destroyParticleSystem(obj);
				}
				virtual void destroyParticleSystem(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeSceneManager::destroyParticleSystem(name);
				}
				virtual void destroyAllParticleSystems()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyAllParticleSystems_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyAllParticleSystems_void_Callback();
					}
					else
						return this->COctreeSceneManager::destroyAllParticleSystems();
				}
				virtual void prepareWorldGeometry(_in const EVString& filename)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_EVString_Callback(filename_Char);
					}
					else
						return this->COctreeSceneManager::prepareWorldGeometry(filename);
				}
				virtual void prepareWorldGeometry(_inout EarthView::World::Core::DataStreamPtr& stream, _in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* typeName_Char = typeName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback(&stream, typeName_Char);
					}
					else
						return this->COctreeSceneManager::prepareWorldGeometry(stream, typeName);
				}
				virtual void prepareWorldGeometry(_inout EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->COctreeSceneManager::prepareWorldGeometry(stream);
				}
				virtual void setWorldGeometry(_in const EVString& filename)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_EVString_Callback(filename_Char);
					}
					else
						return this->COctreeSceneManager::setWorldGeometry(filename);
				}
				virtual void setWorldGeometry(_inout EarthView::World::Core::DataStreamPtr& stream, _in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* typeName_Char = typeName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback(&stream, typeName_Char);
					}
					else
						return this->COctreeSceneManager::setWorldGeometry(stream, typeName);
				}
				virtual void setWorldGeometry(_inout EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_Callback(&stream);
					}
					else
						return this->COctreeSceneManager::setWorldGeometry(stream);
				}
				virtual ev_size_t estimateWorldGeometry(_in const EVString& filename)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback(filename_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::estimateWorldGeometry(filename);
				}
				virtual ev_size_t estimateWorldGeometry(_inout EarthView::World::Core::DataStreamPtr& stream, _in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* typeName_Char = typeName.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback(&stream, typeName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::estimateWorldGeometry(stream, typeName);
				}
				virtual ev_size_t estimateWorldGeometry(_inout EarthView::World::Core::DataStreamPtr& stream)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback(&stream);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::estimateWorldGeometry(stream);
				}
				virtual EarthView::World::Graphic::ViewPoint getSuggestedViewpoint(_in ev_bool random)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ViewPoint returnValue = *(EarthView::World::Graphic::ViewPoint*)m_EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback(random);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSuggestedViewpoint(random);
				}
				virtual EarthView::World::Graphic::ViewPoint getSuggestedViewpoint()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ViewPoint returnValue = *(EarthView::World::Graphic::ViewPoint*)m_EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSuggestedViewpoint();
				}
				virtual ev_bool hasOption(_in const EVString& strKey) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_hasOption_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* strKey_Char = strKey.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_hasOption_ev_bool_EVString_Callback(strKey_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::hasOption(strKey);
				}
				virtual void _applySceneAnimations()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__applySceneAnimations_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__applySceneAnimations_void_Callback();
					}
					else
						return this->COctreeSceneManager::_applySceneAnimations();
				}
				virtual void _renderVisibleObjects()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__renderVisibleObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__renderVisibleObjects_void_Callback();
					}
					else
						return this->COctreeSceneManager::_renderVisibleObjects();
				}
				virtual void _renderScene(_in EarthView::World::Graphic::CCamera* camera, _in EarthView::World::Graphic::CViewport* vp, _in ev_bool includeOverlays)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback(camera, vp, includeOverlays);
					}
					else
						return this->COctreeSceneManager::_renderScene(camera, vp, includeOverlays);
				}
				virtual void _queueSkiesForRendering(_in EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__queueSkiesForRendering_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__queueSkiesForRendering_void_CCamera_Callback(cam);
					}
					else
						return this->COctreeSceneManager::_queueSkiesForRendering(cam);
				}
				virtual void _setDestinationRenderSystem(_in EarthView::World::Graphic::CRenderSystem* ref_sys)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback(ref_sys);
					}
					else
						return this->COctreeSceneManager::_setDestinationRenderSystem(ref_sys);
				}
				virtual void setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst, _in Real bow, _in ev_int32 xsegments, _in ev_int32 ysegments, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback(enable, &plane, materialName_Char, scale, tiling, drawFirst, bow, xsegments, ysegments, groupName_Char);
					}
					else
						return this->COctreeSceneManager::setSkyPlane(enable, plane, materialName, scale, tiling, drawFirst, bow, xsegments, ysegments, groupName);
				}
				virtual void setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst, _in Real bow, _in ev_int32 xsegments, _in ev_int32 ysegments)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback(enable, &plane, materialName_Char, scale, tiling, drawFirst, bow, xsegments, ysegments);
					}
					else
						return this->COctreeSceneManager::setSkyPlane(enable, plane, materialName, scale, tiling, drawFirst, bow, xsegments, ysegments);
				}
				virtual void setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst, _in Real bow, _in ev_int32 xsegments)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback(enable, &plane, materialName_Char, scale, tiling, drawFirst, bow, xsegments);
					}
					else
						return this->COctreeSceneManager::setSkyPlane(enable, plane, materialName, scale, tiling, drawFirst, bow, xsegments);
				}
				virtual void setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst, _in Real bow)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback(enable, &plane, materialName_Char, scale, tiling, drawFirst, bow);
					}
					else
						return this->COctreeSceneManager::setSkyPlane(enable, plane, materialName, scale, tiling, drawFirst, bow);
				}
				virtual void setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_bool drawFirst)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback(enable, &plane, materialName_Char, scale, tiling, drawFirst);
					}
					else
						return this->COctreeSceneManager::setSkyPlane(enable, plane, materialName, scale, tiling, drawFirst);
				}
				virtual void setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback(enable, &plane, materialName_Char, scale, tiling);
					}
					else
						return this->COctreeSceneManager::setSkyPlane(enable, plane, materialName, scale, tiling);
				}
				virtual void setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback(enable, &plane, materialName_Char, scale);
					}
					else
						return this->COctreeSceneManager::setSkyPlane(enable, plane, materialName, scale);
				}
				virtual void setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback(enable, &plane, materialName_Char);
					}
					else
						return this->COctreeSceneManager::setSkyPlane(enable, plane, materialName);
				}
				virtual void _setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue, _in Real bow, _in ev_int32 xsegments, _in ev_int32 ysegments, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback(enable, &plane, materialName_Char, scale, tiling, renderQueue, bow, xsegments, ysegments, groupName_Char);
					}
					else
						return this->COctreeSceneManager::_setSkyPlane(enable, plane, materialName, scale, tiling, renderQueue, bow, xsegments, ysegments, groupName);
				}
				virtual void _setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue, _in Real bow, _in ev_int32 xsegments, _in ev_int32 ysegments)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback(enable, &plane, materialName_Char, scale, tiling, renderQueue, bow, xsegments, ysegments);
					}
					else
						return this->COctreeSceneManager::_setSkyPlane(enable, plane, materialName, scale, tiling, renderQueue, bow, xsegments, ysegments);
				}
				virtual void _setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue, _in Real bow, _in ev_int32 xsegments)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback(enable, &plane, materialName_Char, scale, tiling, renderQueue, bow, xsegments);
					}
					else
						return this->COctreeSceneManager::_setSkyPlane(enable, plane, materialName, scale, tiling, renderQueue, bow, xsegments);
				}
				virtual void _setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue, _in Real bow)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback(enable, &plane, materialName_Char, scale, tiling, renderQueue, bow);
					}
					else
						return this->COctreeSceneManager::_setSkyPlane(enable, plane, materialName, scale, tiling, renderQueue, bow);
				}
				virtual void _setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling, _in ev_uint8 renderQueue)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback(enable, &plane, materialName_Char, scale, tiling, renderQueue);
					}
					else
						return this->COctreeSceneManager::_setSkyPlane(enable, plane, materialName, scale, tiling, renderQueue);
				}
				virtual void _setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale, _in Real tiling)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback(enable, &plane, materialName_Char, scale, tiling);
					}
					else
						return this->COctreeSceneManager::_setSkyPlane(enable, plane, materialName, scale, tiling);
				}
				virtual void _setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName, _in Real scale)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback(enable, &plane, materialName_Char, scale);
					}
					else
						return this->COctreeSceneManager::_setSkyPlane(enable, plane, materialName, scale);
				}
				virtual void _setSkyPlane(_in ev_bool enable, _in const EarthView::World::Spatial::Math::CPlane& plane, _in const EVString& materialName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback(enable, &plane, materialName_Char);
					}
					else
						return this->COctreeSceneManager::_setSkyPlane(enable, plane, materialName);
				}
				virtual void setSkyPlaneEnabled(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback(enable);
					}
					else
						return this->COctreeSceneManager::setSkyPlaneEnabled(enable);
				}
				virtual ev_bool isSkyPlaneEnabled() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_isSkyPlaneEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_isSkyPlaneEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::isSkyPlaneEnabled();
				}
				virtual EarthView::World::Graphic::CSceneNode* getSkyPlaneNode() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSkyPlaneNode();
				}
				virtual const EarthView::World::Graphic::CSceneManager::SkyPlaneGenParameters& getSkyPlaneGenParameters() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneManager::SkyPlaneGenParameters& returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSkyPlaneGenParameters();
				}
				virtual void setSkyBox(_in ev_bool enable, _in const EVString& materialName, _in Real distance, _in ev_bool drawFirst, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback(enable, materialName_Char, distance, drawFirst, &orientation, groupName_Char);
					}
					else
						return this->COctreeSceneManager::setSkyBox(enable, materialName, distance, drawFirst, orientation, groupName);
				}
				virtual void setSkyBox(_in ev_bool enable, _in const EVString& materialName, _in Real distance, _in ev_bool drawFirst, _in const EarthView::World::Spatial::Math::CQuaternion& orientation)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback(enable, materialName_Char, distance, drawFirst, &orientation);
					}
					else
						return this->COctreeSceneManager::setSkyBox(enable, materialName, distance, drawFirst, orientation);
				}
				virtual void setSkyBox(_in ev_bool enable, _in const EVString& materialName, _in Real distance, _in ev_bool drawFirst)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback(enable, materialName_Char, distance, drawFirst);
					}
					else
						return this->COctreeSceneManager::setSkyBox(enable, materialName, distance, drawFirst);
				}
				virtual void setSkyBox(_in ev_bool enable, _in const EVString& materialName, _in Real distance)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback(enable, materialName_Char, distance);
					}
					else
						return this->COctreeSceneManager::setSkyBox(enable, materialName, distance);
				}
				virtual void setSkyBox(_in ev_bool enable, _in const EVString& materialName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Callback(enable, materialName_Char);
					}
					else
						return this->COctreeSceneManager::setSkyBox(enable, materialName);
				}
				virtual void _setSkyBox(_in ev_bool enable, _in const EVString& materialName, _in Real distance, _in ev_uint8 renderQueue, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback(enable, materialName_Char, distance, renderQueue, &orientation, groupName_Char);
					}
					else
						return this->COctreeSceneManager::_setSkyBox(enable, materialName, distance, renderQueue, orientation, groupName);
				}
				virtual void _setSkyBox(_in ev_bool enable, _in const EVString& materialName, _in Real distance, _in ev_uint8 renderQueue, _in const EarthView::World::Spatial::Math::CQuaternion& orientation)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback(enable, materialName_Char, distance, renderQueue, &orientation);
					}
					else
						return this->COctreeSceneManager::_setSkyBox(enable, materialName, distance, renderQueue, orientation);
				}
				virtual void _setSkyBox(_in ev_bool enable, _in const EVString& materialName, _in Real distance, _in ev_uint8 renderQueue)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback(enable, materialName_Char, distance, renderQueue);
					}
					else
						return this->COctreeSceneManager::_setSkyBox(enable, materialName, distance, renderQueue);
				}
				virtual void _setSkyBox(_in ev_bool enable, _in const EVString& materialName, _in Real distance)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback(enable, materialName_Char, distance);
					}
					else
						return this->COctreeSceneManager::_setSkyBox(enable, materialName, distance);
				}
				virtual void _setSkyBox(_in ev_bool enable, _in const EVString& materialName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Callback(enable, materialName_Char);
					}
					else
						return this->COctreeSceneManager::_setSkyBox(enable, materialName);
				}
				virtual void setSkyBoxEnabled(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyBoxEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyBoxEnabled_void_ev_bool_Callback(enable);
					}
					else
						return this->COctreeSceneManager::setSkyBoxEnabled(enable);
				}
				virtual ev_bool isSkyBoxEnabled() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_isSkyBoxEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_isSkyBoxEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::isSkyBoxEnabled();
				}
				virtual EarthView::World::Graphic::CSceneNode* getSkyBoxNode() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSkyBoxNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getSkyBoxNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSkyBoxNode();
				}
				virtual const EarthView::World::Graphic::CSceneManager::SkyBoxGenParameters& getSkyBoxGenParameters() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneManager::SkyBoxGenParameters& returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSkyBoxGenParameters();
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ysegments_keep, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback(enable, materialName_Char, curvature, tiling, distance, drawFirst, &orientation, xsegments, ysegments, ysegments_keep, groupName_Char);
					}
					else
						return this->COctreeSceneManager::setSkyDome(enable, materialName, curvature, tiling, distance, drawFirst, orientation, xsegments, ysegments, ysegments_keep, groupName);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ysegments_keep)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback(enable, materialName_Char, curvature, tiling, distance, drawFirst, &orientation, xsegments, ysegments, ysegments_keep);
					}
					else
						return this->COctreeSceneManager::setSkyDome(enable, materialName, curvature, tiling, distance, drawFirst, orientation, xsegments, ysegments, ysegments_keep);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments, _in ev_int32 ysegments)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback(enable, materialName_Char, curvature, tiling, distance, drawFirst, &orientation, xsegments, ysegments);
					}
					else
						return this->COctreeSceneManager::setSkyDome(enable, materialName, curvature, tiling, distance, drawFirst, orientation, xsegments, ysegments);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback(enable, materialName_Char, curvature, tiling, distance, drawFirst, &orientation, xsegments);
					}
					else
						return this->COctreeSceneManager::setSkyDome(enable, materialName, curvature, tiling, distance, drawFirst, orientation, xsegments);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst, _in const EarthView::World::Spatial::Math::CQuaternion& orientation)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback(enable, materialName_Char, curvature, tiling, distance, drawFirst, &orientation);
					}
					else
						return this->COctreeSceneManager::setSkyDome(enable, materialName, curvature, tiling, distance, drawFirst, orientation);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_bool drawFirst)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback(enable, materialName_Char, curvature, tiling, distance, drawFirst);
					}
					else
						return this->COctreeSceneManager::setSkyDome(enable, materialName, curvature, tiling, distance, drawFirst);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback(enable, materialName_Char, curvature, tiling, distance);
					}
					else
						return this->COctreeSceneManager::setSkyDome(enable, materialName, curvature, tiling, distance);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback(enable, materialName_Char, curvature, tiling);
					}
					else
						return this->COctreeSceneManager::setSkyDome(enable, materialName, curvature, tiling);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback(enable, materialName_Char, curvature);
					}
					else
						return this->COctreeSceneManager::setSkyDome(enable, materialName, curvature);
				}
				virtual void setSkyDome(_in ev_bool enable, _in const EVString& materialName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Callback(enable, materialName_Char);
					}
					else
						return this->COctreeSceneManager::setSkyDome(enable, materialName);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ysegments_keep, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback(enable, materialName_Char, curvature, tiling, distance, renderQueue, &orientation, xsegments, ysegments, ysegments_keep, groupName_Char);
					}
					else
						return this->COctreeSceneManager::_setSkyDome(enable, materialName, curvature, tiling, distance, renderQueue, orientation, xsegments, ysegments, ysegments_keep, groupName);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments, _in ev_int32 ysegments, _in ev_int32 ysegments_keep)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback(enable, materialName_Char, curvature, tiling, distance, renderQueue, &orientation, xsegments, ysegments, ysegments_keep);
					}
					else
						return this->COctreeSceneManager::_setSkyDome(enable, materialName, curvature, tiling, distance, renderQueue, orientation, xsegments, ysegments, ysegments_keep);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments, _in ev_int32 ysegments)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback(enable, materialName_Char, curvature, tiling, distance, renderQueue, &orientation, xsegments, ysegments);
					}
					else
						return this->COctreeSceneManager::_setSkyDome(enable, materialName, curvature, tiling, distance, renderQueue, orientation, xsegments, ysegments);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const EarthView::World::Spatial::Math::CQuaternion& orientation, _in ev_int32 xsegments)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback(enable, materialName_Char, curvature, tiling, distance, renderQueue, &orientation, xsegments);
					}
					else
						return this->COctreeSceneManager::_setSkyDome(enable, materialName, curvature, tiling, distance, renderQueue, orientation, xsegments);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue, _in const EarthView::World::Spatial::Math::CQuaternion& orientation)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback(enable, materialName_Char, curvature, tiling, distance, renderQueue, &orientation);
					}
					else
						return this->COctreeSceneManager::_setSkyDome(enable, materialName, curvature, tiling, distance, renderQueue, orientation);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance, _in ev_uint8 renderQueue)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback(enable, materialName_Char, curvature, tiling, distance, renderQueue);
					}
					else
						return this->COctreeSceneManager::_setSkyDome(enable, materialName, curvature, tiling, distance, renderQueue);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling, _in Real distance)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback(enable, materialName_Char, curvature, tiling, distance);
					}
					else
						return this->COctreeSceneManager::_setSkyDome(enable, materialName, curvature, tiling, distance);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature, _in Real tiling)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback(enable, materialName_Char, curvature, tiling);
					}
					else
						return this->COctreeSceneManager::_setSkyDome(enable, materialName, curvature, tiling);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName, _in Real curvature)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback(enable, materialName_Char, curvature);
					}
					else
						return this->COctreeSceneManager::_setSkyDome(enable, materialName, curvature);
				}
				virtual void _setSkyDome(_in ev_bool enable, _in const EVString& materialName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Callback(enable, materialName_Char);
					}
					else
						return this->COctreeSceneManager::_setSkyDome(enable, materialName);
				}
				virtual void setSkyDomeEnabled(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSkyDomeEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setSkyDomeEnabled_void_ev_bool_Callback(enable);
					}
					else
						return this->COctreeSceneManager::setSkyDomeEnabled(enable);
				}
				virtual ev_bool isSkyDomeEnabled() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_isSkyDomeEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_isSkyDomeEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::isSkyDomeEnabled();
				}
				virtual EarthView::World::Graphic::CSceneNode* getSkyDomeNode() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSkyDomeNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getSkyDomeNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSkyDomeNode();
				}
				virtual const EarthView::World::Graphic::CSceneManager::SkyDomeGenParameters& getSkyDomeGenParameters() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CSceneManager::SkyDomeGenParameters& returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSkyDomeGenParameters();
				}
				virtual EarthView::World::Graphic::FogMode getFogMode() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getFogMode_FogMode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::FogMode returnValue = (EarthView::World::Graphic::FogMode)m_EarthView_World_Graphic_COctreeSceneManager_getFogMode_FogMode_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getFogMode();
				}
				virtual const EarthView::World::Graphic::CColourValue& getFogColour() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getFogColour_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Graphic_COctreeSceneManager_getFogColour_CColourValue_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getFogColour();
				}
				virtual Real getFogStart() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getFogStart_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getFogStart_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getFogStart();
				}
				virtual Real getFogEnd() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getFogEnd_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getFogEnd_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getFogEnd();
				}
				virtual Real getFogDensity() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getFogDensity_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getFogDensity_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getFogDensity();
				}
				virtual EarthView::World::Graphic::CBillboardSet* createBillboardSet(_in const EVString& name, _in ev_uint32 poolSize)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CBillboardSet* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback(name_Char, poolSize);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createBillboardSet(name, poolSize);
				}
				virtual EarthView::World::Graphic::CBillboardSet* createBillboardSet(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CBillboardSet* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createBillboardSet(name);
				}
				virtual EarthView::World::Graphic::CBillboardSet* createBillboardSet(_in ev_uint32 poolSize)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CBillboardSet* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback(poolSize);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createBillboardSet(poolSize);
				}
				virtual EarthView::World::Graphic::CBillboardSet* createBillboardSet()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CBillboardSet* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createBillboardSet();
				}
				virtual EarthView::World::Graphic::CBillboardSet* getBillboardSet(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getBillboardSet_CBillboardSet_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CBillboardSet* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getBillboardSet_CBillboardSet_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getBillboardSet(name);
				}
				virtual ev_bool hasBillboardSet(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_hasBillboardSet_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_hasBillboardSet_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::hasBillboardSet(name);
				}
				virtual void destroyBillboardSet(_in EarthView::World::Graphic::CBillboardSet* set)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_CBillboardSet_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_CBillboardSet_Callback(set);
					}
					else
						return this->COctreeSceneManager::destroyBillboardSet(set);
				}
				virtual void destroyBillboardSet(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeSceneManager::destroyBillboardSet(name);
				}
				virtual void destroyAllBillboardSets()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardSets_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardSets_void_Callback();
					}
					else
						return this->COctreeSceneManager::destroyAllBillboardSets();
				}
				virtual void setDisplaySceneNodes(_in ev_bool display)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setDisplaySceneNodes_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setDisplaySceneNodes_void_ev_bool_Callback(display);
					}
					else
						return this->COctreeSceneManager::setDisplaySceneNodes(display);
				}
				virtual ev_bool getDisplaySceneNodes() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getDisplaySceneNodes_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getDisplaySceneNodes_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getDisplaySceneNodes();
				}
				virtual EarthView::World::Graphic::CAnimation* createAnimation(_in const EVString& name, _in Real length)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createAnimation_CAnimation_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createAnimation_CAnimation_EVString_Real_Callback(name_Char, length);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createAnimation(name, length);
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getAnimation_CAnimation_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getAnimation_CAnimation_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getAnimation(name);
				}
				virtual ev_bool hasAnimation(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_hasAnimation_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_hasAnimation_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::hasAnimation(name);
				}
				virtual void destroyAnimation(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_destroyAnimation_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeSceneManager::destroyAnimation(name);
				}
				virtual void destroyAllAnimations()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimations_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimations_void_Callback();
					}
					else
						return this->COctreeSceneManager::destroyAllAnimations();
				}
				virtual EarthView::World::Graphic::CAnimationState* createAnimationState(_in const EVString& animName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createAnimationState_CAnimationState_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* animName_Char = animName.makeBuffer();
						EarthView::World::Graphic::CAnimationState* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createAnimationState_CAnimationState_EVString_Callback(animName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createAnimationState(animName);
				}
				virtual EarthView::World::Graphic::CAnimationState* getAnimationState(_in const EVString& animName) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getAnimationState_CAnimationState_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* animName_Char = animName.makeBuffer();
						EarthView::World::Graphic::CAnimationState* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getAnimationState_CAnimationState_EVString_Callback(animName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getAnimationState(animName);
				}
				virtual ev_bool hasAnimationState(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_hasAnimationState_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_hasAnimationState_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::hasAnimationState(name);
				}
				virtual void destroyAnimationState(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyAnimationState_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_destroyAnimationState_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeSceneManager::destroyAnimationState(name);
				}
				virtual void destroyAllAnimationStates()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimationStates_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimationStates_void_Callback();
					}
					else
						return this->COctreeSceneManager::destroyAllAnimationStates();
				}
				virtual void manualRender(_in EarthView::World::Graphic::CRenderOperation* rend, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Spatial::Math::CMatrix4& worldMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& projMatrix, _in ev_bool doBeginEndFrame)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback(rend, pass, vp, &worldMatrix, &viewMatrix, &projMatrix, doBeginEndFrame);
					}
					else
						return this->COctreeSceneManager::manualRender(rend, pass, vp, worldMatrix, viewMatrix, projMatrix, doBeginEndFrame);
				}
				virtual void manualRender(_in EarthView::World::Graphic::CRenderOperation* rend, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Spatial::Math::CMatrix4& worldMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& projMatrix)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback(rend, pass, vp, &worldMatrix, &viewMatrix, &projMatrix);
					}
					else
						return this->COctreeSceneManager::manualRender(rend, pass, vp, worldMatrix, viewMatrix, projMatrix);
				}
				virtual void manualRender(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& projMatrix, _in ev_bool doBeginEndFrame, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback(rend, pass, vp, &viewMatrix, &projMatrix, doBeginEndFrame, lightScissoringClipping, doLightIteration, manualLightList);
					}
					else
						return this->COctreeSceneManager::manualRender(rend, pass, vp, viewMatrix, projMatrix, doBeginEndFrame, lightScissoringClipping, doLightIteration, manualLightList);
				}
				virtual void manualRender(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& projMatrix, _in ev_bool doBeginEndFrame, _in ev_bool lightScissoringClipping, _in ev_bool doLightIteration)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback(rend, pass, vp, &viewMatrix, &projMatrix, doBeginEndFrame, lightScissoringClipping, doLightIteration);
					}
					else
						return this->COctreeSceneManager::manualRender(rend, pass, vp, viewMatrix, projMatrix, doBeginEndFrame, lightScissoringClipping, doLightIteration);
				}
				virtual void manualRender(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& projMatrix, _in ev_bool doBeginEndFrame, _in ev_bool lightScissoringClipping)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback(rend, pass, vp, &viewMatrix, &projMatrix, doBeginEndFrame, lightScissoringClipping);
					}
					else
						return this->COctreeSceneManager::manualRender(rend, pass, vp, viewMatrix, projMatrix, doBeginEndFrame, lightScissoringClipping);
				}
				virtual void manualRender(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& projMatrix, _in ev_bool doBeginEndFrame)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback(rend, pass, vp, &viewMatrix, &projMatrix, doBeginEndFrame);
					}
					else
						return this->COctreeSceneManager::manualRender(rend, pass, vp, viewMatrix, projMatrix, doBeginEndFrame);
				}
				virtual void manualRender(_in EarthView::World::Graphic::CRenderable* rend, _in const EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CViewport* vp, _in const EarthView::World::Spatial::Math::CMatrix4& viewMatrix, _in const EarthView::World::Spatial::Math::CMatrix4& projMatrix)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback(rend, pass, vp, &viewMatrix, &projMatrix);
					}
					else
						return this->COctreeSceneManager::manualRender(rend, pass, vp, viewMatrix, projMatrix);
				}
				virtual EarthView::World::Graphic::CRenderQueue* getRenderQueue()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getRenderQueue_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderQueue* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getRenderQueue_CRenderQueue_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getRenderQueue();
				}
				virtual void addRenderQueueListener(_in EarthView::World::Graphic::CRenderQueueListener* ref_newListener)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback(ref_newListener);
					}
					else
						return this->COctreeSceneManager::addRenderQueueListener(ref_newListener);
				}
				virtual void removeRenderQueueListener(_in EarthView::World::Graphic::CRenderQueueListener* delListener)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback(delListener);
					}
					else
						return this->COctreeSceneManager::removeRenderQueueListener(delListener);
				}
				virtual void addRenderObjectListener(_in EarthView::World::Graphic::CRenderObjectListener* ref_newListener)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback(ref_newListener);
					}
					else
						return this->COctreeSceneManager::addRenderObjectListener(ref_newListener);
				}
				virtual void removeRenderObjectListener(_in EarthView::World::Graphic::CRenderObjectListener* delListener)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback(delListener);
					}
					else
						return this->COctreeSceneManager::removeRenderObjectListener(delListener);
				}
				virtual void addSpecialCaseRenderQueue(_in ev_uint8 qid)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback(qid);
					}
					else
						return this->COctreeSceneManager::addSpecialCaseRenderQueue(qid);
				}
				virtual void removeSpecialCaseRenderQueue(_in ev_uint8 qid)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback(qid);
					}
					else
						return this->COctreeSceneManager::removeSpecialCaseRenderQueue(qid);
				}
				virtual void clearSpecialCaseRenderQueues()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_clearSpecialCaseRenderQueues_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_clearSpecialCaseRenderQueues_void_Callback();
					}
					else
						return this->COctreeSceneManager::clearSpecialCaseRenderQueues();
				}
				virtual void setSpecialCaseRenderQueueMode(_in EarthView::World::Graphic::CSceneManager::SpecialCaseRenderQueueMode mode)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback((int)mode);
					}
					else
						return this->COctreeSceneManager::setSpecialCaseRenderQueueMode(mode);
				}
				virtual EarthView::World::Graphic::CSceneManager::SpecialCaseRenderQueueMode getSpecialCaseRenderQueueMode()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneManager::SpecialCaseRenderQueueMode returnValue = (EarthView::World::Graphic::CSceneManager::SpecialCaseRenderQueueMode)m_EarthView_World_Graphic_COctreeSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getSpecialCaseRenderQueueMode();
				}
				virtual ev_bool isRenderQueueToBeProcessed(_in ev_uint8 qid)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback(qid);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::isRenderQueueToBeProcessed(qid);
				}
				virtual void setWorldGeometryRenderQueue(_in ev_uint8 qid)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback(qid);
					}
					else
						return this->COctreeSceneManager::setWorldGeometryRenderQueue(qid);
				}
				virtual ev_uint8 getWorldGeometryRenderQueue()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getWorldGeometryRenderQueue();
				}
				virtual void showBoundingBoxes(_in ev_bool bShow)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_showBoundingBoxes_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_showBoundingBoxes_void_ev_bool_Callback(bShow);
					}
					else
						return this->COctreeSceneManager::showBoundingBoxes(bShow);
				}
				virtual ev_bool getShowBoundingBoxes() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShowBoundingBoxes_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getShowBoundingBoxes_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShowBoundingBoxes();
				}
				virtual void _notifyAutotrackingSceneNode(_in EarthView::World::Graphic::CSceneNode* node, _in ev_bool autoTrack)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback(node, autoTrack);
					}
					else
						return this->COctreeSceneManager::_notifyAutotrackingSceneNode(node, autoTrack);
				}
				virtual void destroyQuery(_in EarthView::World::Graphic::CSceneQuery* query)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyQuery_void_CSceneQuery_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyQuery_void_CSceneQuery_Callback(query);
					}
					else
						return this->COctreeSceneManager::destroyQuery(query);
				}
				virtual void setShadowTechnique(_in EarthView::World::Graphic::ShadowTechnique technique)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTechnique_void_ShadowTechnique_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTechnique_void_ShadowTechnique_Callback((int)technique);
					}
					else
						return this->COctreeSceneManager::setShadowTechnique(technique);
				}
				virtual EarthView::World::Graphic::ShadowTechnique getShadowTechnique() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShadowTechnique_ShadowTechnique_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ShadowTechnique returnValue = (EarthView::World::Graphic::ShadowTechnique)m_EarthView_World_Graphic_COctreeSceneManager_getShadowTechnique_ShadowTechnique_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShadowTechnique();
				}
				virtual void setShowDebugShadows(_in ev_bool debug)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShowDebugShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShowDebugShadows_void_ev_bool_Callback(debug);
					}
					else
						return this->COctreeSceneManager::setShowDebugShadows(debug);
				}
				virtual ev_bool getShowDebugShadows() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShowDebugShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getShowDebugShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShowDebugShadows();
				}
				virtual void setShadowColour(_in const EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowColour_void_CColourValue_Callback(&colour);
					}
					else
						return this->COctreeSceneManager::setShadowColour(colour);
				}
				virtual const EarthView::World::Graphic::CColourValue& getShadowColour() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShadowColour_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Graphic_COctreeSceneManager_getShadowColour_CColourValue_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShadowColour();
				}
				virtual void setShadowDirectionalLightExtrusionDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback(dist);
					}
					else
						return this->COctreeSceneManager::setShadowDirectionalLightExtrusionDistance(dist);
				}
				virtual Real getShadowDirectionalLightExtrusionDistance() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShadowDirectionalLightExtrusionDistance();
				}
				virtual void setShadowColorRRatio(_in Real rRatio)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowColorRRatio_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowColorRRatio_void_Real_Callback(rRatio);
					}
					else
						return this->COctreeSceneManager::setShadowColorRRatio(rRatio);
				}
				virtual void setShadowColorGRatio(_in Real gRatio)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowColorGRatio_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowColorGRatio_void_Real_Callback(gRatio);
					}
					else
						return this->COctreeSceneManager::setShadowColorGRatio(gRatio);
				}
				virtual void setShadowColorBRatio(_in Real bRatio)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowColorBRatio_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowColorBRatio_void_Real_Callback(bRatio);
					}
					else
						return this->COctreeSceneManager::setShadowColorBRatio(bRatio);
				}
				virtual Real getShadowColorRRatio() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShadowColorRRatio_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getShadowColorRRatio_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShadowColorRRatio();
				}
				virtual Real getShadowColorGRatio() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShadowColorGRatio_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getShadowColorGRatio_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShadowColorGRatio();
				}
				virtual Real getShadowColorBRatio() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShadowColorBRatio_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getShadowColorBRatio_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShadowColorBRatio();
				}
				virtual void setShadowFarDistance(_in Real distance)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowFarDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowFarDistance_void_Real_Callback(distance);
					}
					else
						return this->COctreeSceneManager::setShadowFarDistance(distance);
				}
				virtual Real getShadowFarDistance() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShadowFarDistance();
				}
				virtual Real getShadowFarDistanceSquared() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistanceSquared_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistanceSquared_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShadowFarDistanceSquared();
				}
				virtual void setShadowIndexBufferSize(_in ev_size_t size)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback(size);
					}
					else
						return this->COctreeSceneManager::setShadowIndexBufferSize(size);
				}
				virtual ev_size_t getShadowIndexBufferSize() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShadowIndexBufferSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getShadowIndexBufferSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShadowIndexBufferSize();
				}
				virtual void setShadowTextureSize(_in ev_uint16 size)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSize_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSize_void_ev_uint16_Callback(size);
					}
					else
						return this->COctreeSceneManager::setShadowTextureSize(size);
				}
				virtual void setShadowTextureConfig(_in ev_size_t shadowIndex, _in ev_uint16 width, _in ev_uint16 height, _in EarthView::World::Graphic::PixelFormat format)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback(shadowIndex, width, height, (int)format);
					}
					else
						return this->COctreeSceneManager::setShadowTextureConfig(shadowIndex, width, height, format);
				}
				virtual void setShadowTextureConfig(_in ev_size_t shadowIndex, _in ev_uint16 width, _in ev_uint16 height, _in EarthView::World::Graphic::PixelFormat format, _in ev_uint16 fsaa)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback(shadowIndex, width, height, (int)format, fsaa);
					}
					else
						return this->COctreeSceneManager::setShadowTextureConfig(shadowIndex, width, height, format, fsaa);
				}
				virtual void setShadowTextureConfig(_in ev_size_t shadowIndex, _in ev_uint16 width, _in ev_uint16 height, _in EarthView::World::Graphic::PixelFormat format, _in ev_uint16 fsaa, _in ev_uint16 depthBufferPoolId)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback(shadowIndex, width, height, (int)format, fsaa, depthBufferPoolId);
					}
					else
						return this->COctreeSceneManager::setShadowTextureConfig(shadowIndex, width, height, format, fsaa, depthBufferPoolId);
				}
				virtual void setShadowTextureConfig(_in ev_size_t shadowIndex, _in const EarthView::World::Graphic::ShadowTextureConfig& config)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback(shadowIndex, &config);
					}
					else
						return this->COctreeSceneManager::setShadowTextureConfig(shadowIndex, config);
				}
				virtual void setShadowTexturePixelFormat(_in EarthView::World::Graphic::PixelFormat fmt)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback((int)fmt);
					}
					else
						return this->COctreeSceneManager::setShadowTexturePixelFormat(fmt);
				}
				virtual void setShadowTextureFSAA(_in ev_uint16 fsaa)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback(fsaa);
					}
					else
						return this->COctreeSceneManager::setShadowTextureFSAA(fsaa);
				}
				virtual void setShadowTextureCount(_in ev_size_t count)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCount_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCount_void_ev_size_t_Callback(count);
					}
					else
						return this->COctreeSceneManager::setShadowTextureCount(count);
				}
				virtual void setShadowTextureSettings(_in ev_uint16 size, _in ev_uint16 count)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback(size, count);
					}
					else
						return this->COctreeSceneManager::setShadowTextureSettings(size, count);
				}
				virtual void setShadowTextureSettings(_in ev_uint16 size, _in ev_uint16 count, _in EarthView::World::Graphic::PixelFormat fmt)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback(size, count, (int)fmt);
					}
					else
						return this->COctreeSceneManager::setShadowTextureSettings(size, count, fmt);
				}
				virtual void setShadowTextureSettings(_in ev_uint16 size, _in ev_uint16 count, _in EarthView::World::Graphic::PixelFormat fmt, _in ev_uint16 fsaa)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback(size, count, (int)fmt, fsaa);
					}
					else
						return this->COctreeSceneManager::setShadowTextureSettings(size, count, fmt, fsaa);
				}
				virtual void setShadowTextureSettings(_in ev_uint16 size, _in ev_uint16 count, _in EarthView::World::Graphic::PixelFormat fmt, _in ev_uint16 fsaa, _in ev_uint16 depthBufferPoolId)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback(size, count, (int)fmt, fsaa, depthBufferPoolId);
					}
					else
						return this->COctreeSceneManager::setShadowTextureSettings(size, count, fmt, fsaa, depthBufferPoolId);
				}
				virtual const EarthView::World::Graphic::CTexturePtr& getShadowTexture(_in ev_size_t shadowIndex)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CTexturePtr& returnValue = *(EarthView::World::Graphic::CTexturePtr*)m_EarthView_World_Graphic_COctreeSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback(shadowIndex);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShadowTexture(shadowIndex);
				}
				virtual void setShadowDirLightTextureOffset(_in Real offset)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowDirLightTextureOffset_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowDirLightTextureOffset_void_Real_Callback(offset);
					}
					else
						return this->COctreeSceneManager::setShadowDirLightTextureOffset(offset);
				}
				virtual Real getShadowDirLightTextureOffset() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShadowDirLightTextureOffset_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getShadowDirLightTextureOffset_Real_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShadowDirLightTextureOffset();
				}
				virtual void setShadowTextureFadeStart(_in Real fadeStart)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeStart_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeStart_void_Real_Callback(fadeStart);
					}
					else
						return this->COctreeSceneManager::setShadowTextureFadeStart(fadeStart);
				}
				virtual void setShadowTextureFadeEnd(_in Real fadeEnd)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeEnd_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeEnd_void_Real_Callback(fadeEnd);
					}
					else
						return this->COctreeSceneManager::setShadowTextureFadeEnd(fadeEnd);
				}
				virtual void setShadowTextureSelfShadow(_in ev_bool selfShadow)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback(selfShadow);
					}
					else
						return this->COctreeSceneManager::setShadowTextureSelfShadow(selfShadow);
				}
				virtual ev_bool getShadowTextureSelfShadow() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShadowTextureSelfShadow_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getShadowTextureSelfShadow_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShadowTextureSelfShadow();
				}
				virtual void setShadowTextureCasterMaterial(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeSceneManager::setShadowTextureCasterMaterial(name);
				}
				virtual void setShadowTextureReceiverMaterial(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeSceneManager::setShadowTextureReceiverMaterial(name);
				}
				virtual void setShadowCasterRenderBackFaces(_in ev_bool bf)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback(bf);
					}
					else
						return this->COctreeSceneManager::setShadowCasterRenderBackFaces(bf);
				}
				virtual ev_bool getShadowCasterRenderBackFaces() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShadowCasterRenderBackFaces();
				}
				virtual void setShadowCameraSetup(_in const EarthView::World::Graphic::ShadowCameraSetupPtr& shadowSetup)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback(&shadowSetup);
					}
					else
						return this->COctreeSceneManager::setShadowCameraSetup(shadowSetup);
				}
				virtual const EarthView::World::Graphic::ShadowCameraSetupPtr& getShadowCameraSetup() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::ShadowCameraSetupPtr& returnValue = *(EarthView::World::Graphic::ShadowCameraSetupPtr*)m_EarthView_World_Graphic_COctreeSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShadowCameraSetup();
				}
				virtual void setShadowUseInfiniteFarPlane(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback(enable);
					}
					else
						return this->COctreeSceneManager::setShadowUseInfiniteFarPlane(enable);
				}
				virtual ev_bool isShadowTechniqueStencilBased() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::isShadowTechniqueStencilBased();
				}
				virtual ev_bool isShadowTechniqueTextureBased() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::isShadowTechniqueTextureBased();
				}
				virtual ev_bool isShadowTechniqueModulative() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueModulative_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueModulative_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::isShadowTechniqueModulative();
				}
				virtual ev_bool isShadowTechniqueAdditive() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueAdditive_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueAdditive_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::isShadowTechniqueAdditive();
				}
				virtual ev_bool isShadowTechniqueIntegrated() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::isShadowTechniqueIntegrated();
				}
				virtual ev_bool isShadowTechniqueInUse() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueInUse_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueInUse_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::isShadowTechniqueInUse();
				}
				virtual void setShadowUseLightClipPlanes(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback(enabled);
					}
					else
						return this->COctreeSceneManager::setShadowUseLightClipPlanes(enabled);
				}
				virtual ev_bool getShadowUseLightClipPlanes() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getShadowUseLightClipPlanes();
				}
				virtual void _setActiveCompositorChain(_in EarthView::World::Graphic::CCompositorChain* chain)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback(chain);
					}
					else
						return this->COctreeSceneManager::_setActiveCompositorChain(chain);
				}
				virtual void setLateMaterialResolving(_in ev_bool isLate)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setLateMaterialResolving_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setLateMaterialResolving_void_ev_bool_Callback(isLate);
					}
					else
						return this->COctreeSceneManager::setLateMaterialResolving(isLate);
				}
				virtual ev_bool isLateMaterialResolving() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_isLateMaterialResolving_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_isLateMaterialResolving_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::isLateMaterialResolving();
				}
				virtual EarthView::World::Graphic::CCompositorChain* _getActiveCompositorChain() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__getActiveCompositorChain_CCompositorChain_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CCompositorChain* returnValue = m_EarthView_World_Graphic_COctreeSceneManager__getActiveCompositorChain_CCompositorChain_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::_getActiveCompositorChain();
				}
				virtual void addListener(_in EarthView::World::Graphic::CSceneManager::CSceneManagerListener* ref_s)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_addListener_void_CSceneManagerListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_addListener_void_CSceneManagerListener_Callback(ref_s);
					}
					else
						return this->COctreeSceneManager::addListener(ref_s);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CSceneManager::CSceneManagerListener* s)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_removeListener_void_CSceneManagerListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_removeListener_void_CSceneManagerListener_Callback(s);
					}
					else
						return this->COctreeSceneManager::removeListener(s);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CSceneManager::CSceneManagerListener* s)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_existListener_ev_bool_CSceneManagerListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_existListener_ev_bool_CSceneManagerListener_Callback(s);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::existListener(s);
				}
				virtual EarthView::World::Graphic::CStaticGeometry* createStaticGeometry(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CStaticGeometry* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createStaticGeometry(name);
				}
				virtual EarthView::World::Graphic::CStaticGeometry* getStaticGeometry(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CStaticGeometry* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getStaticGeometry(name);
				}
				virtual ev_bool hasStaticGeometry(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_hasStaticGeometry_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_hasStaticGeometry_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::hasStaticGeometry(name);
				}
				virtual void destroyStaticGeometry(_in EarthView::World::Graphic::CStaticGeometry* geom)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback(geom);
					}
					else
						return this->COctreeSceneManager::destroyStaticGeometry(geom);
				}
				virtual void destroyStaticGeometry(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeSceneManager::destroyStaticGeometry(name);
				}
				virtual void destroyAllStaticGeometry()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyAllStaticGeometry_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyAllStaticGeometry_void_Callback();
					}
					else
						return this->COctreeSceneManager::destroyAllStaticGeometry();
				}
				virtual EarthView::World::Graphic::CInstancedGeometry* createInstancedGeometry(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CInstancedGeometry* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createInstancedGeometry(name);
				}
				virtual EarthView::World::Graphic::CInstancedGeometry* getInstancedGeometry(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CInstancedGeometry* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getInstancedGeometry(name);
				}
				virtual void destroyInstancedGeometry(_in EarthView::World::Graphic::CInstancedGeometry* geom)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback(geom);
					}
					else
						return this->COctreeSceneManager::destroyInstancedGeometry(geom);
				}
				virtual void destroyInstancedGeometry(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeSceneManager::destroyInstancedGeometry(name);
				}
				virtual void destroyAllInstancedGeometry()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyAllInstancedGeometry_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyAllInstancedGeometry_void_Callback();
					}
					else
						return this->COctreeSceneManager::destroyAllInstancedGeometry();
				}
				virtual EarthView::World::Graphic::CInstanceManager* createInstanceManager(_in const EVString& customName, _in const EVString& meshName, _in const EVString& groupName, _in EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique, _in ev_size_t numInstancesPerBatch, _in ev_uint16 flags, _in ev_uint16 subMeshIdx)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						char* customName_Char = customName.makeBuffer();
						char* meshName_Char = meshName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						EarthView::World::Graphic::CInstanceManager* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback(customName_Char, meshName_Char, groupName_Char, (int)technique, numInstancesPerBatch, flags, subMeshIdx);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createInstanceManager(customName, meshName, groupName, technique, numInstancesPerBatch, flags, subMeshIdx);
				}
				virtual EarthView::World::Graphic::CInstanceManager* createInstanceManager(_in const EVString& customName, _in const EVString& meshName, _in const EVString& groupName, _in EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique, _in ev_size_t numInstancesPerBatch, _in ev_uint16 flags)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						char* customName_Char = customName.makeBuffer();
						char* meshName_Char = meshName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						EarthView::World::Graphic::CInstanceManager* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback(customName_Char, meshName_Char, groupName_Char, (int)technique, numInstancesPerBatch, flags);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createInstanceManager(customName, meshName, groupName, technique, numInstancesPerBatch, flags);
				}
				virtual EarthView::World::Graphic::CInstanceManager* createInstanceManager(_in const EVString& customName, _in const EVString& meshName, _in const EVString& groupName, _in EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique, _in ev_size_t numInstancesPerBatch)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						char* customName_Char = customName.makeBuffer();
						char* meshName_Char = meshName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						EarthView::World::Graphic::CInstanceManager* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback(customName_Char, meshName_Char, groupName_Char, (int)technique, numInstancesPerBatch);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createInstanceManager(customName, meshName, groupName, technique, numInstancesPerBatch);
				}
				virtual EarthView::World::Graphic::CInstanceManager* getInstanceManager(_in const EVString& managerName) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getInstanceManager_CInstanceManager_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* managerName_Char = managerName.makeBuffer();
						EarthView::World::Graphic::CInstanceManager* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getInstanceManager_CInstanceManager_EVString_Callback(managerName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getInstanceManager(managerName);
				}
				virtual ev_bool hasInstanceManager(_in const EVString& managerName) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_hasInstanceManager_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* managerName_Char = managerName.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_hasInstanceManager_ev_bool_EVString_Callback(managerName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::hasInstanceManager(managerName);
				}
				virtual void destroyInstanceManager(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeSceneManager::destroyInstanceManager(name);
				}
				virtual void destroyInstanceManager(_in EarthView::World::Graphic::CInstanceManager* instanceManager)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_CInstanceManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_CInstanceManager_Callback(instanceManager);
					}
					else
						return this->COctreeSceneManager::destroyInstanceManager(instanceManager);
				}
				virtual void destroyInstanceManagerWithThreadSafe(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback(name_Char);
					}
					else
						return this->COctreeSceneManager::destroyInstanceManagerWithThreadSafe(name);
				}
				virtual void destroyInstanceManagerWithThreadSafe(_in EarthView::World::Graphic::CInstanceManager* instanceManager)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback(instanceManager);
					}
					else
						return this->COctreeSceneManager::destroyInstanceManagerWithThreadSafe(instanceManager);
				}
				virtual void destroyAllInstanceManagers()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyAllInstanceManagers_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyAllInstanceManagers_void_Callback();
					}
					else
						return this->COctreeSceneManager::destroyAllInstanceManagers();
				}
				virtual ev_size_t getNumInstancesPerBatch(_in const EVString& meshName, _in const EVString& groupName, _in const EVString& materialName, _in EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique, _in ev_size_t numInstancesPerBatch)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						char* meshName_Char = meshName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						char* materialName_Char = materialName.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback(meshName_Char, groupName_Char, materialName_Char, (int)technique, numInstancesPerBatch);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getNumInstancesPerBatch(meshName, groupName, materialName, technique, numInstancesPerBatch);
				}
				virtual ev_size_t getNumInstancesPerBatch(_in const EVString& meshName, _in const EVString& groupName, _in const EVString& materialName, _in EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique, _in ev_size_t numInstancesPerBatch, _in ev_uint16 flags)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						char* meshName_Char = meshName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						char* materialName_Char = materialName.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback(meshName_Char, groupName_Char, materialName_Char, (int)technique, numInstancesPerBatch, flags);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getNumInstancesPerBatch(meshName, groupName, materialName, technique, numInstancesPerBatch, flags);
				}
				virtual ev_size_t getNumInstancesPerBatch(_in const EVString& meshName, _in const EVString& groupName, _in const EVString& materialName, _in EarthView::World::Graphic::CInstanceManager::InstancingTechnique technique, _in ev_size_t numInstancesPerBatch, _in ev_uint16 flags, _in ev_uint16 subMeshIdx)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						char* meshName_Char = meshName.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						char* materialName_Char = materialName.makeBuffer();
						ev_size_t returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback(meshName_Char, groupName_Char, materialName_Char, (int)technique, numInstancesPerBatch, flags, subMeshIdx);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getNumInstancesPerBatch(meshName, groupName, materialName, technique, numInstancesPerBatch, flags, subMeshIdx);
				}
				virtual EarthView::World::Graphic::CInstancedEntity* createInstancedEntity(_in const EVString& materialName, _in const EVString& managerName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* materialName_Char = materialName.makeBuffer();
						char* managerName_Char = managerName.makeBuffer();
						EarthView::World::Graphic::CInstancedEntity* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback(materialName_Char, managerName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createInstancedEntity(materialName, managerName);
				}
				virtual void destroyInstancedEntity(_in EarthView::World::Graphic::CInstancedEntity* instancedEntity)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback(instancedEntity);
					}
					else
						return this->COctreeSceneManager::destroyInstancedEntity(instancedEntity);
				}
				virtual EarthView::World::Graphic::CMovableObject* createMovableObject(_in const EVString& name, _in const EVString& typeName, _in const EarthView::World::Core::CommonStringPairList* params)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* typeName_Char = typeName.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback(name_Char, typeName_Char, params);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createMovableObject(name, typeName, params);
				}
				virtual EarthView::World::Graphic::CMovableObject* createMovableObject(_in const EVString& name, _in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* typeName_Char = typeName.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback(name_Char, typeName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createMovableObject(name, typeName);
				}
				virtual EarthView::World::Graphic::CMovableObject* createMovableObject(_in const EVString& typeName, _in const EarthView::World::Core::CommonStringPairList* params)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* typeName_Char = typeName.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback(typeName_Char, params);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createMovableObject(typeName, params);
				}
				virtual EarthView::World::Graphic::CMovableObject* createMovableObject(_in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* typeName_Char = typeName.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_Callback(typeName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::createMovableObject(typeName);
				}
				virtual void destroyMovableObject(_in const EVString& name, _in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* typeName_Char = typeName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_EVString_EVString_Callback(name_Char, typeName_Char);
					}
					else
						return this->COctreeSceneManager::destroyMovableObject(name, typeName);
				}
				virtual void destroyMovableObject(_in EarthView::World::Graphic::CMovableObject* m)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_CMovableObject_Callback(m);
					}
					else
						return this->COctreeSceneManager::destroyMovableObject(m);
				}
				virtual void destroyAllMovableObjectsByType(_in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* typeName_Char = typeName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback(typeName_Char);
					}
					else
						return this->COctreeSceneManager::destroyAllMovableObjectsByType(typeName);
				}
				virtual void destroyAllMovableObjects()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjects_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjects_void_Callback();
					}
					else
						return this->COctreeSceneManager::destroyAllMovableObjects();
				}
				virtual EarthView::World::Graphic::CMovableObject* getMovableObject(_in const EVString& name, _in const EVString& typeName) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* typeName_Char = typeName.makeBuffer();
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback(name_Char, typeName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getMovableObject(name, typeName);
				}
				virtual ev_bool hasMovableObject(_in const EVString& name, _in const EVString& typeName) const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* typeName_Char = typeName.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback(name_Char, typeName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::hasMovableObject(name, typeName);
				}
				virtual EarthView::World::Graphic::CSceneManager::MovableObjectIterator getMovableObjectIterator(_in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* typeName_Char = typeName.makeBuffer();
						EarthView::World::Graphic::CSceneManager::MovableObjectIterator returnValue = *(EarthView::World::Graphic::CSceneManager::MovableObjectIterator*)m_EarthView_World_Graphic_COctreeSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback(typeName_Char);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getMovableObjectIterator(typeName);
				}
				virtual void injectMovableObject(_in EarthView::World::Graphic::CMovableObject* m)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_injectMovableObject_void_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_injectMovableObject_void_CMovableObject_Callback(m);
					}
					else
						return this->COctreeSceneManager::injectMovableObject(m);
				}
				virtual void extractMovableObject(_in const EVString& name, _in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* typeName_Char = typeName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_EVString_EVString_Callback(name_Char, typeName_Char);
					}
					else
						return this->COctreeSceneManager::extractMovableObject(name, typeName);
				}
				virtual void extractMovableObject(_in EarthView::World::Graphic::CMovableObject* m)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_CMovableObject_Callback(m);
					}
					else
						return this->COctreeSceneManager::extractMovableObject(m);
				}
				virtual void extractAllMovableObjectsByType(_in const EVString& typeName)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_extractAllMovableObjectsByType_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* typeName_Char = typeName.makeBuffer();
						m_EarthView_World_Graphic_COctreeSceneManager_extractAllMovableObjectsByType_void_EVString_Callback(typeName_Char);
					}
					else
						return this->COctreeSceneManager::extractAllMovableObjectsByType(typeName);
				}
				virtual void setVisibilityMask(_in ev_uint32 vmask)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setVisibilityMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setVisibilityMask_void_ev_uint32_Callback(vmask);
					}
					else
						return this->COctreeSceneManager::setVisibilityMask(vmask);
				}
				virtual ev_uint32 getVisibilityMask()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getVisibilityMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getVisibilityMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getVisibilityMask();
				}
				virtual void setFindVisibleObjects(_in ev_bool find)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setFindVisibleObjects_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setFindVisibleObjects_void_ev_bool_Callback(find);
					}
					else
						return this->COctreeSceneManager::setFindVisibleObjects(find);
				}
				virtual ev_bool getFindVisibleObjects()
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getFindVisibleObjects_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getFindVisibleObjects_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getFindVisibleObjects();
				}
				virtual void setNormaliseNormalsOnScale(_in ev_bool n)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback(n);
					}
					else
						return this->COctreeSceneManager::setNormaliseNormalsOnScale(n);
				}
				virtual ev_bool getNormaliseNormalsOnScale() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getNormaliseNormalsOnScale();
				}
				virtual void setFlipCullingOnNegativeScale(_in ev_bool n)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback(n);
					}
					else
						return this->COctreeSceneManager::setFlipCullingOnNegativeScale(n);
				}
				virtual ev_bool getFlipCullingOnNegativeScale() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getFlipCullingOnNegativeScale();
				}
				virtual void _injectRenderWithPass(_in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CRenderable* rend, _in ev_bool shadowDerivation, _in ev_bool doLightIteration, _in const EarthView::World::Graphic::LightList* manualLightList)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback(pass, rend, shadowDerivation, doLightIteration, manualLightList);
					}
					else
						return this->COctreeSceneManager::_injectRenderWithPass(pass, rend, shadowDerivation, doLightIteration, manualLightList);
				}
				virtual void _injectRenderWithPass(_in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CRenderable* rend, _in ev_bool shadowDerivation, _in ev_bool doLightIteration)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback(pass, rend, shadowDerivation, doLightIteration);
					}
					else
						return this->COctreeSceneManager::_injectRenderWithPass(pass, rend, shadowDerivation, doLightIteration);
				}
				virtual void _injectRenderWithPass(_in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CRenderable* rend, _in ev_bool shadowDerivation)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback(pass, rend, shadowDerivation);
					}
					else
						return this->COctreeSceneManager::_injectRenderWithPass(pass, rend, shadowDerivation);
				}
				virtual void _injectRenderWithPass(_in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::CRenderable* rend)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback(pass, rend);
					}
					else
						return this->COctreeSceneManager::_injectRenderWithPass(pass, rend);
				}
				virtual void _suppressRenderStateChanges(_in ev_bool suppress)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__suppressRenderStateChanges_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__suppressRenderStateChanges_void_ev_bool_Callback(suppress);
					}
					else
						return this->COctreeSceneManager::_suppressRenderStateChanges(suppress);
				}
				virtual ev_bool _areRenderStateChangesSuppressed() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::_areRenderStateChangesSuppressed();
				}
				virtual const EarthView::World::Graphic::CPass* _setPass(_in const EarthView::World::Graphic::CPass* pass, _in ev_bool evenIfSuppressed, _in ev_bool shadowDerivation)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CPass* returnValue = m_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback(pass, evenIfSuppressed, shadowDerivation);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::_setPass(pass, evenIfSuppressed, shadowDerivation);
				}
				virtual const EarthView::World::Graphic::CPass* _setPass(_in const EarthView::World::Graphic::CPass* pass, _in ev_bool evenIfSuppressed)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CPass* returnValue = m_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_Callback(pass, evenIfSuppressed);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::_setPass(pass, evenIfSuppressed);
				}
				virtual const EarthView::World::Graphic::CPass* _setPass(_in const EarthView::World::Graphic::CPass* pass)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CPass* returnValue = m_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_Callback(pass);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::_setPass(pass);
				}
				virtual void _markGpuParamsDirty(_in ev_uint16 mask)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__markGpuParamsDirty_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__markGpuParamsDirty_void_ev_uint16_Callback(mask);
					}
					else
						return this->COctreeSceneManager::_markGpuParamsDirty(mask);
				}
				virtual void _suppressShadows(_in ev_bool suppress)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__suppressShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__suppressShadows_void_ev_bool_Callback(suppress);
					}
					else
						return this->COctreeSceneManager::_suppressShadows(suppress);
				}
				virtual ev_bool _areShadowsSuppressed() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__areShadowsSuppressed_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager__areShadowsSuppressed_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::_areShadowsSuppressed();
				}
				virtual void _renderQueueGroupObjects(_in EarthView::World::Graphic::CRenderQueueGroup* group, _in EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback(group, (int)om);
					}
					else
						return this->COctreeSceneManager::_renderQueueGroupObjects(group, om);
				}
				virtual void setCameraRelativeRendering(_in ev_bool rel)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setCameraRelativeRendering_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setCameraRelativeRendering_void_ev_bool_Callback(rel);
					}
					else
						return this->COctreeSceneManager::setCameraRelativeRendering(rel);
				}
				virtual ev_bool getCameraRelativeRendering() const
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getCameraRelativeRendering_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getCameraRelativeRendering_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getCameraRelativeRendering();
				}
				virtual Real getHeightAt(_in Real latitude, _in Real lontitude, _in ev_real32 targetSamplesPerDegrees)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback(latitude, lontitude, targetSamplesPerDegrees);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getHeightAt(latitude, lontitude, targetSamplesPerDegrees);
				}
				virtual Real getBestHeightAt(_in Real latitude, _in Real lontitude)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getBestHeightAt_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getBestHeightAt_Real_Real_Real_Callback(latitude, lontitude);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getBestHeightAt(latitude, lontitude);
				}
				virtual Real getHeightAtTile(_in Real latitude, _in Real lontitude)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getHeightAtTile_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getHeightAtTile_Real_Real_Real_Callback(latitude, lontitude);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getHeightAtTile(latitude, lontitude);
				}
				virtual ev_bool getTileEnvelope(_in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col, _inout Real& minX, _inout Real& maxX, _inout Real& minY, _inout Real& maxY)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback(level, row, col, minX, maxX, minY, maxY);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::getTileEnvelope(level, row, col, minX, maxX, minY, maxY);
				}
				virtual ev_bool addTempLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_addTempLayer_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_addTempLayer_ev_bool_ILayer_Callback(layer);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::addTempLayer(layer);
				}
				virtual ev_bool removeTempLayer(_in EarthView::World::Spatial::Atlas::ILayer* layer)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_removeTempLayer_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_COctreeSceneManager_removeTempLayer_ev_bool_ILayer_Callback(layer);
						return returnValue;
					}
					else
						return this->COctreeSceneManager::removeTempLayer(layer);
				}
				virtual void updateQuadImage(_in bool updateImageGroup, _in bool updateFeatureGroup, _in bool updateKmlGroup)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Callback(updateImageGroup, updateFeatureGroup, updateKmlGroup);
					}
					else
						return this->COctreeSceneManager::updateQuadImage(updateImageGroup, updateFeatureGroup, updateKmlGroup);
				}
				virtual void updateQuadImage(_in bool updateImageGroup, _in bool updateFeatureGroup, _in bool updateKmlGroup, _in Real minX, _in Real maxX, _in Real minY, _in Real maxY)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback(updateImageGroup, updateFeatureGroup, updateKmlGroup, minX, maxX, minY, maxY);
					}
					else
						return this->COctreeSceneManager::updateQuadImage(updateImageGroup, updateFeatureGroup, updateKmlGroup, minX, maxX, minY, maxY);
				}
				virtual void updateOBQ(_in ev_bool bUpdateVectorTexture, _in ev_bool bUpdateKmlTexture, _in ev_bool bUpdateTemporaryTexture, _in ev_bool bUpdateTerrain)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback(bUpdateVectorTexture, bUpdateKmlTexture, bUpdateTemporaryTexture, bUpdateTerrain);
					}
					else
						return this->COctreeSceneManager::updateOBQ(bUpdateVectorTexture, bUpdateKmlTexture, bUpdateTemporaryTexture, bUpdateTerrain);
				}
				virtual void setCollisionDetectionEnable(_in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_COctreeSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_COctreeSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback(enable);
					}
					else
						return this->COctreeSceneManager::setCollisionDetectionEnable(enable);
				}
			};
			REGISTER_FACTORY_CLASS(COctreeSceneManagerProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_COctreeSceneManager_intersect_call()
			{
				int objXXXX = EarthView::World::Graphic::COctreeSceneManager::intersect_call;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_COctreeSceneManager_intersect_call( int  value )
			{
				EarthView::World::Graphic::COctreeSceneManager::intersect_call = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_COctreeSceneManager_getTypeName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::getTypeName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getTypeName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getTypeName_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getTypeName_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getTypeName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_COctreeSceneManager_getTypeName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::getTypeName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_init_void_CAxisAlignedBox_int(void *pObjectXXXX, _inout void* box, _in int d )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->init(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, d);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::createSceneNodeImpl();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->createSceneNodeImpl();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::createSceneNodeImpl();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::createSceneNodeImpl(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->createSceneNodeImpl(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_World_Graphic_COctreeSceneManager_createSceneNodeImpl_CSceneNode_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::createSceneNodeImpl(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCamera*  _stdcall EarthView_World_Graphic_COctreeSceneManager_createCamera_CCamera_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::createCamera(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->createCamera(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createCamera_CCamera_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createCamera_CCamera_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createCamera_CCamera_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCamera*  _stdcall EarthView_World_Graphic_COctreeSceneManager_createCamera_CCamera_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				EarthView::World::Graphic::CCamera* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::createCamera(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::destroySceneNode(name1);
				else
					ptrNativeObject->destroySceneNode(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::destroySceneNode(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager__updateSceneGraph_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::_updateSceneGraph(cam);
				else
					ptrNativeObject->_updateSceneGraph(cam);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__updateSceneGraph_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__updateSceneGraph_void_CCamera_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__updateSceneGraph_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager__updateSceneGraph_void_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::_updateSceneGraph(cam);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool onlyShadowCasters )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::_findVisibleObjects(cam, visibleBounds, onlyShadowCasters);
				else
					ptrNativeObject->_findVisibleObjects(cam, visibleBounds, onlyShadowCasters);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager__findVisibleObjects_void_CCamera_VisibleObjectsBoundsInfo_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* cam, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool onlyShadowCasters )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::_findVisibleObjects(cam, visibleBounds, onlyShadowCasters);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager__alertVisibleObjects_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::_alertVisibleObjects();
				else
					ptrNativeObject->_alertVisibleObjects();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__alertVisibleObjects_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__alertVisibleObjects_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__alertVisibleObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager__alertVisibleObjects_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::_alertVisibleObjects();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_walkOctree_void_COctreeCamera_CRenderQueue_COctree_VisibleObjectsBoundsInfo_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::COctreeCamera* camera, _in EarthView::World::Graphic::CRenderQueue* queue, _in EarthView::World::Graphic::COctree* octant, _in EarthView::World::Graphic::VisibleObjectsBoundsInfo* visibleBounds, _in ev_bool foundvisible, _in ev_bool onlyShadowCasters, _in ev_bool oceanDepthRendering )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->walkOctree(camera, queue, octant, visibleBounds, foundvisible, onlyShadowCasters, oceanDepthRendering);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_walkOctree_void_COctreeCamera_COctree_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::COctreeCamera* camera, _in EarthView::World::Graphic::COctree* octant, _in ev_bool foundvisible )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->walkOctree(camera, octant, foundvisible);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager__updateOctreeNode_void_COctreeNode(void *pObjectXXXX, _in EarthView::World::Graphic::COctreeNode* onode )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->_updateOctreeNode(onode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager__removeOctreeNode_void_COctreeNode(void *pObjectXXXX, _in EarthView::World::Graphic::COctreeNode* onode )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->_removeOctreeNode(onode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager__addOctreeNode_void_COctreeNode_COctree_int(void *pObjectXXXX, _in EarthView::World::Graphic::COctreeNode* ref_n, _in EarthView::World::Graphic::COctree* ref_octree, _in int depth )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->_addOctreeNode(ref_n, ref_octree, depth);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager__addOctreeNode_void_COctreeNode_COctree(void *pObjectXXXX, _in EarthView::World::Graphic::COctreeNode* ref_n, _in EarthView::World::Graphic::COctree* ref_octree )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->_addOctreeNode(ref_n, ref_octree);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_findNodesIn_void_CAxisAlignedBox_SceneNodes_CSceneNode(void *pObjectXXXX, _in const void* box, _inout void* list, _in EarthView::World::Graphic::CSceneNode* exclude )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->findNodesIn(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, *(EarthView::World::Graphic::SceneNodes*)list, exclude);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_findNodesIn_void_CAxisAlignedBox_SceneNodes(void *pObjectXXXX, _in const void* box, _inout void* list )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->findNodesIn(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, *(EarthView::World::Graphic::SceneNodes*)list);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_findNodesIn_void_CSphere_SceneNodes_CSceneNode(void *pObjectXXXX, _in const void* sphere, _inout void* list, _in EarthView::World::Graphic::CSceneNode* exclude )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->findNodesIn(*(EarthView::World::Spatial::Math::CSphere*)sphere, *(EarthView::World::Graphic::SceneNodes*)list, exclude);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_findNodesIn_void_CSphere_SceneNodes(void *pObjectXXXX, _in const void* sphere, _inout void* list )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->findNodesIn(*(EarthView::World::Spatial::Math::CSphere*)sphere, *(EarthView::World::Graphic::SceneNodes*)list);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_findNodesIn_void_CPlaneBoundedVolume_SceneNodes_CSceneNode(void *pObjectXXXX, _in const void* volume, _inout void* list, _in EarthView::World::Graphic::CSceneNode* exclude )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->findNodesIn(*(EarthView::World::Spatial::Math::CPlaneBoundedVolume*)volume, *(EarthView::World::Graphic::SceneNodes*)list, exclude);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_findNodesIn_void_CPlaneBoundedVolume_SceneNodes(void *pObjectXXXX, _in const void* volume, _inout void* list )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->findNodesIn(*(EarthView::World::Spatial::Math::CPlaneBoundedVolume*)volume, *(EarthView::World::Graphic::SceneNodes*)list);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_findNodesIn_void_CRay_SceneNodes_CSceneNode(void *pObjectXXXX, _in const void* ray, _inout void* list, _in EarthView::World::Graphic::CSceneNode* exclude )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->findNodesIn(*(EarthView::World::Spatial::Math::CRay*)ray, *(EarthView::World::Graphic::SceneNodes*)list, exclude);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_findNodesIn_void_CRay_SceneNodes(void *pObjectXXXX, _in const void* ray, _inout void* list )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->findNodesIn(*(EarthView::World::Spatial::Math::CRay*)ray, *(EarthView::World::Graphic::SceneNodes*)list);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_setShowBoxes_void_ev_bool(void *pObjectXXXX, _in ev_bool b )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->setShowBoxes(b);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_setLooseOctree_void_ev_bool(void *pObjectXXXX, _in ev_bool b )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->setLooseOctree(b);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_resize_void_CAxisAlignedBox(void *pObjectXXXX, _in const void* box )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->resize(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COctreeSceneManager_setOption_ev_bool_EVString_void(void *pObjectXXXX, _in const char* key, _in const void* val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::setOption(key1, val);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->setOption(key1, val);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setOption_ev_bool_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setOption_ev_bool_EVString_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setOption_ev_bool_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COctreeSceneManager_setOption_ev_bool_EVString_void_NoVirtual(void *pObjectXXXX, _in const char* key, _in const void* val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::setOption(key1, val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COctreeSceneManager_getOption_ev_bool_EVString_void(void *pObjectXXXX, _in const char* key, _in void* val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::getOption(key1, val);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getOption(key1, val);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getOption_ev_bool_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getOption_ev_bool_EVString_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getOption_ev_bool_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COctreeSceneManager_getOption_ev_bool_EVString_void_NoVirtual(void *pObjectXXXX, _in const char* key, _in void* val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::getOption(key1, val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COctreeSceneManager_getOptionValues_ev_bool_EVString_StringVector(void *pObjectXXXX, _in const char* key, _inout void* refValueList )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::getOptionValues(key1, *(EarthView::World::Core::StringVector*)refValueList);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getOptionValues(key1, *(EarthView::World::Core::StringVector*)refValueList);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getOptionValues_ev_bool_EVString_StringVector( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getOptionValues_ev_bool_EVString_StringVector_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getOptionValues_ev_bool_EVString_StringVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COctreeSceneManager_getOptionValues_ev_bool_EVString_StringVector_NoVirtual(void *pObjectXXXX, _in const char* key, _inout void* refValueList )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::getOptionValues(key1, *(EarthView::World::Core::StringVector*)refValueList);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COctreeSceneManager_getOptionKeys_ev_bool_StringVector(void *pObjectXXXX, _inout void* refKeys )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::getOptionKeys(*(EarthView::World::Core::StringVector*)refKeys);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getOptionKeys(*(EarthView::World::Core::StringVector*)refKeys);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getOptionKeys_ev_bool_StringVector( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getOptionKeys_ev_bool_StringVector_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getOptionKeys_ev_bool_StringVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COctreeSceneManager_getOptionKeys_ev_bool_StringVector_NoVirtual(void *pObjectXXXX, _inout void* refKeys )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::getOptionKeys(*(EarthView::World::Core::StringVector*)refKeys);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_clearScene_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::clearScene();
				else
					ptrNativeObject->clearScene();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_clearScene_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_clearScene_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_clearScene_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctreeSceneManager_clearScene_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::clearScene();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*  _stdcall EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32(void *pObjectXXXX, _in const void* box, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAxisAlignedBoxSceneQuery* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::createAABBQuery(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, mask);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAxisAlignedBoxSceneQuery* objXXXX = ptrNativeObject->createAABBQuery(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, mask);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAxisAlignedBoxSceneQuery*  _stdcall EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* box, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				EarthView::World::Graphic::CAxisAlignedBoxSceneQuery* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::createAABBQuery(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, mask);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSphereSceneQuery*  _stdcall EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32(void *pObjectXXXX, _in const void* sphere, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSphereSceneQuery* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::createSphereQuery(*(EarthView::World::Spatial::Math::CSphere*)sphere, mask);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSphereSceneQuery* objXXXX = ptrNativeObject->createSphereQuery(*(EarthView::World::Spatial::Math::CSphere*)sphere, mask);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSphereSceneQuery*  _stdcall EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* sphere, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				EarthView::World::Graphic::CSphereSceneQuery* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::createSphereQuery(*(EarthView::World::Spatial::Math::CSphere*)sphere, mask);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*  _stdcall EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32(void *pObjectXXXX, _in const void* volumes, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::createPlaneBoundedVolumeQuery(*(EarthView::World::Spatial::Math::PlaneBoundedVolumeList*)volumes, mask);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery* objXXXX = ptrNativeObject->createPlaneBoundedVolumeQuery(*(EarthView::World::Spatial::Math::PlaneBoundedVolumeList*)volumes, mask);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery*  _stdcall EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* volumes, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				EarthView::World::Graphic::CPlaneBoundedVolumeListSceneQuery* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::createPlaneBoundedVolumeQuery(*(EarthView::World::Spatial::Math::PlaneBoundedVolumeList*)volumes, mask);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRaySceneQuery*  _stdcall EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32(void *pObjectXXXX, _in const void* ray, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CRaySceneQuery* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::createRayQuery(*(EarthView::World::Spatial::Math::CRay*)ray, mask);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CRaySceneQuery* objXXXX = ptrNativeObject->createRayQuery(*(EarthView::World::Spatial::Math::CRay*)ray, mask);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRaySceneQuery*  _stdcall EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* ray, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				EarthView::World::Graphic::CRaySceneQuery* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::createRayQuery(*(EarthView::World::Spatial::Math::CRay*)ray, mask);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CIntersectionSceneQuery*  _stdcall EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32(void *pObjectXXXX, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				if (dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CIntersectionSceneQuery* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::createIntersectionQuery(mask);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CIntersectionSceneQuery* objXXXX = ptrNativeObject->createIntersectionQuery(mask);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CIntersectionSceneQuery*  _stdcall EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::COctreeSceneManager* ptrNativeObject = (EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX;
				EarthView::World::Graphic::CIntersectionSceneQuery* objXXXX = ptrNativeObject->EarthView::World::Graphic::COctreeSceneManager::createIntersectionQuery(mask);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_initRenderQueue_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_initRenderQueue_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_initRenderQueue_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_deriveShadowCasterPass_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_deriveShadowCasterPass_CPass_CPass_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_deriveShadowCasterPass_CPass_CPass(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_deriveShadowReceiverPass_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_deriveShadowReceiverPass_CPass_CPass_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_deriveShadowReceiverPass_CPass_CPass(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_validatePassForRendering_ev_bool_CPass( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_validatePassForRendering_ev_bool_CPass_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_validatePassForRendering_ev_bool_CPass(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_validateRenderableForRendering_ev_bool_CPass_CRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createSkyboxPlane_CMeshPtr_BoxPlane_Real_CQuaternion_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createSkydomePlane_CMeshPtr_BoxPlane_Real_Real_Real_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_useRenderableViewProjMode_void_CRenderable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_resetViewProjMode_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_resetViewProjMode_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_resetViewProjMode_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_firePreRenderQueues_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_firePreRenderQueues_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_firePreRenderQueues_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_firePostRenderQueues_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_firePostRenderQueues_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_firePostRenderQueues_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueStarted_ev_bool_ev_uint8_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_fireRenderQueueEnded_ev_bool_ev_uint8_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectStarted_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_fireRenderSingleObjectEnd_void_CRenderable_CPass_CAutoParamDataSource_LightList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesUpdated_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesUpdated_void_ev_size_t_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesUpdated_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreCaster_void_CLight_CCamera_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_fireShadowTexturesPreReceiver_void_CLight_CFrustum(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_firePreUpdateSceneGraph_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_firePreUpdateSceneGraph_void_CCamera_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_firePreUpdateSceneGraph_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_firePostUpdateSceneGraph_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_firePostUpdateSceneGraph_void_CCamera_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_firePostUpdateSceneGraph_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_firePreFindVisibleObjects_void_CViewport( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_firePreFindVisibleObjects_void_CViewport_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_firePreFindVisibleObjects_void_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_firePostFindVisibleObjects_void_CViewport( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_firePostFindVisibleObjects_void_CViewport_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_firePostFindVisibleObjects_void_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_fireSceneManagerDestroyed_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_fireSceneManagerDestroyed_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_fireSceneManagerDestroyed_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setViewport_void_CViewport( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setViewport_void_CViewport_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setViewport_void_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsDefaultSequence_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsDefaultSequence_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsDefaultSequence_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderVisibleObjectsCustomSequence_void_CRenderQueueInvocationSequence(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_prepareRenderQueue_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_prepareRenderQueue_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_prepareRenderQueue_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderSingleObject_void_CRenderable_CPass_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createAutoParamDataSource_CAutoParamDataSource( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createAutoParamDataSource_CAutoParamDataSource_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createAutoParamDataSource_CAutoParamDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_findLightsAffectingFrustum_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_findLightsAffectingFrustum_void_CCamera_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_findLightsAffectingFrustum_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_initShadowVolumeMaterials_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_initShadowVolumeMaterials_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_initShadowVolumeMaterials_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_ensureShadowTexturesCreated_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_ensureShadowTexturesCreated_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_ensureShadowTexturesCreated_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyShadowTextures_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyShadowTextures_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyShadowTextures_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_prepareShadowTextures_void_CCamera_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setImageDefaultMaterial_void_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setImageDefaultMaterial_void_CMaterialPtr_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setImageDefaultMaterial_void_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setImageUseDefaultMaterial_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setImageUseDefaultMaterial_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setImageUseDefaultMaterial_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSunPosition_CVector3( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSunPosition_CVector3_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSunPosition_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setAtmosphereVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setAtmosphereVisible_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setAtmosphereVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_storeAtmosphereVisibleState_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_storeAtmosphereVisibleState_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_storeAtmosphereVisibleState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_restoreAtmosphereVisibleState_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_restoreAtmosphereVisibleState_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_restoreAtmosphereVisibleState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSunVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSunVisible_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSunVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__pauseRendering_RenderContext( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__pauseRendering_RenderContext_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__pauseRendering_RenderContext(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__resumeRendering_void_RenderContext( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__resumeRendering_void_RenderContext_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__resumeRendering_void_RenderContext(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderShadowVolumesToStencil_void_CLight_CCamera_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowVolumeStencilState_void_ev_bool_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_findShadowCastersForLight_ShadowCasterList_CLight_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderBasicQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderAdditiveStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderModulativeStencilShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowCasterQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderTextureShadowReceiverQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderModulativeTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderAdditiveTextureShadowedQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_renderTransparentShadowCasterObjects_void_CQueuedRenderableCollection_OrganisationMode_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueSplitOptions_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueSplitOptions_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueSplitOptions_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_updateRenderQueueGroupSplitOptions_void_CRenderQueueGroup_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_buildAndSetScissor_ClipResult_LightList_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_buildScissor_void_CLight_CCamera_RealRect( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_buildScissor_void_CLight_CCamera_RealRect_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_buildScissor_void_CLight_CCamera_RealRect(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_resetScissor_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_resetScissor_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_resetScissor_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_buildAndSetLightClip_ClipResult_LightList( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_buildAndSetLightClip_ClipResult_LightList_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_buildAndSetLightClip_ClipResult_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_buildLightClip_void_CLight_PlaneList( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_buildLightClip_void_CLight_PlaneList_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_buildLightClip_void_CLight_PlaneList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_resetLightClip_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_resetLightClip_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_resetLightClip_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_checkCachedLightClippingInfo_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_checkCachedLightClippingInfo_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_checkCachedLightClippingInfo_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_useLights_void_LightList_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_useLights_void_LightList_ev_uint16_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_useLights_void_LightList_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setViewMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setViewMatrix_void_CMatrix4_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setViewMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_useLightsGpuProgram_void_CPass_LightList( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_useLightsGpuProgram_void_CPass_LightList_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_useLightsGpuProgram_void_CPass_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_bindGpuProgram_void_CGpuProgram( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_bindGpuProgram_void_CGpuProgram_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_bindGpuProgram_void_CGpuProgram(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_updateGpuProgramParameters_void_CPass( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_updateGpuProgramParameters_void_CPass_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_updateGpuProgramParameters_void_CPass(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getCamera_CCamera_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getCamera_CCamera_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getCamera_CCamera_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_hasCamera_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_hasCamera_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasCamera_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_CCamera_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyCamera_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllCameras_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyAllCameras_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllCameras_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createLight_CLight( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createLight_CLight_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createLight_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getLightCount_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getLightCount_ev_uint16_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getLightCount_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_ev_uint16_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getLight_CLight_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_hasLight_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_hasLight_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasLight_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getLightClippingPlanes_PlaneList_CLight( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getLightClippingPlanes_PlaneList_CLight_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getLightClippingPlanes_PlaneList_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getLightScissorRect_RealRect_CLight_CCamera( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getLightScissorRect_RealRect_CLight_CCamera_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getLightScissorRect_RealRect_CLight_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_CLight( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_CLight_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyLight_void_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllLights_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyAllLights_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllLights_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowTexName_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSoftShadowTexName_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowTexName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowTexCam_CCamera( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShadowTexCam_CCamera_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowTexCam_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowProjMatrix_CMatrix4_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getCascadeEyeSpaceDepthArray_CVector4( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getCascadeEyeSpaceDepthArray_CVector4_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getCascadeEyeSpaceDepthArray_CVector4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNearClip_float_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNearClip_float_ev_uint8_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNearClip_float_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowFarClip_float_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSoftShadowFarClip_float_ev_uint8_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowFarClip_float_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowFitToCascadesMode_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowFitToCascadesMode_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowFitToCascadesMode_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowFitToCascadesMode_void_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getCurrentClipIndex_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getCurrentClipIndex_ev_uint8_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getCurrentClipIndex_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowTechnique_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowTechnique_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getIsUseSoftShadowTechnique_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowTechnique_void_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowTechnique_void_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setIsUseSoftShadowTechnique_void_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsPercent_float( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsPercent_float_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsPercent_float(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsPercent_void_float( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsPercent_void_float_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsPercent_void_float(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsDistance_int_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsDistance_int_ev_uint8_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getCascadePartitionsDistance_int_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setCascadePartitionsDistance_void_ev_uint8_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowOffsetFormat_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSoftShadowOffsetFormat_PixelFormat_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowOffsetFormat_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_checkShadowCasterInFrustum_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_checkShadowCasterInFrustum_void_CCamera_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_checkShadowCasterInFrustum_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_hasShadowCasterInFrustum_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_hasShadowCasterInFrustum_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasShadowCasterInFrustum_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowLightBleedPower_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSoftShadowLightBleedPower_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowLightBleedPower_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowLightBleedPower_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSoftShadowLightBleedPower_void_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowLightBleedPower_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowDepthOffset_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSoftShadowDepthOffset_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowDepthOffset_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowDepthOffset_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSoftShadowDepthOffset_void_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowDepthOffset_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNormalFactor_float( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNormalFactor_float_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSoftShadowNormalFactor_float(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowNormalFactor_void_float( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSoftShadowNormalFactor_void_float_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSoftShadowNormalFactor_void_float(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__notifyLightsDirty_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__notifyLightsDirty_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__notifyLightsDirty_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__getLightsAffectingFrustum_LightList( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__getLightsAffectingFrustum_LightList_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__getLightsAffectingFrustum_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CVector3_Real_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_showImage_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_showImage_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_showImage_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getImageVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getImageVisible_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getImageVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_showOcean_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_showOcean_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_showOcean_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getOceanVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getOceanVisible_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getOceanVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__populateLightList_void_CSceneNode_Real_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createSceneNode_CSceneNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_CSceneNode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroySceneNode_void_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getRootSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getRootSceneNode_CSceneNode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getRootSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSceneNode_CSceneNode_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSceneNode_CSceneNode_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSceneNode_CSceneNode_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_hasSceneNode_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_hasSceneNode_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasSceneNode_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_CMeshPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_IntVector( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_IntVector_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_CMeshPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_IntVector( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_IntVector_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_PrefabType( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_PrefabType_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_EVString_PrefabType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_PrefabType( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_PrefabType_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createEntity_CEntity_PrefabType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getEntity_CEntity_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getEntity_CEntity_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getEntity_CEntity_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_hasEntity_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_hasEntity_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasEntity_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_CEntity( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_CEntity_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_CEntity(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyEntity_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllEntities_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyAllEntities_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllEntities_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createManualObject_CManualObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getManualObject_CManualObject_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getManualObject_CManualObject_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getManualObject_CManualObject_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_hasManualObject_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_hasManualObject_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasManualObject_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_CManualObject( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_CManualObject_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_CManualObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyManualObject_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllManualObjects_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyAllManualObjects_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllManualObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_usingWebMercator_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_usingWebMercator_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_usingWebMercator_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardChain_CBillboardChain(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getBillboardChain_CBillboardChain_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getBillboardChain_CBillboardChain_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getBillboardChain_CBillboardChain_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_hasBillboardChain_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_hasBillboardChain_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasBillboardChain_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_CBillboardChain( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_CBillboardChain_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_CBillboardChain(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardChain_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardChains_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardChains_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardChains_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createRibbonTrail_CRibbonTrail(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getRibbonTrail_CRibbonTrail_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getRibbonTrail_CRibbonTrail_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getRibbonTrail_CRibbonTrail_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_hasRibbonTrail_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_hasRibbonTrail_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasRibbonTrail_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_CRibbonTrail( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_CRibbonTrail_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_CRibbonTrail(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyRibbonTrail_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllRibbonTrails_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyAllRibbonTrails_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllRibbonTrails_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createParticleSystem_CParticleSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getParticleSystem_CParticleSystem_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getParticleSystem_CParticleSystem_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getParticleSystem_CParticleSystem_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_hasParticleSystem_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_hasParticleSystem_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasParticleSystem_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_CParticleSystem( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_CParticleSystem_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_CParticleSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyParticleSystem_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllParticleSystems_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyAllParticleSystems_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllParticleSystems_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_prepareWorldGeometry_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometry_void_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_estimateWorldGeometry_ev_size_t_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSuggestedViewpoint_ViewPoint(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_hasOption_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_hasOption_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasOption_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__applySceneAnimations_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__applySceneAnimations_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__applySceneAnimations_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__renderVisibleObjects_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__renderVisibleObjects_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__renderVisibleObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__renderScene_void_CCamera_CViewport_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__renderScene_void_CCamera_CViewport_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__renderScene_void_CCamera_CViewport_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__queueSkiesForRendering_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__queueSkiesForRendering_void_CCamera_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__queueSkiesForRendering_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setDestinationRenderSystem_void_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setDestinationRenderSystem_void_CRenderSystem_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setDestinationRenderSystem_void_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlane_void_ev_bool_CPlane_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyPlane_void_ev_bool_CPlane_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlaneEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyPlaneEnabled_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyPlaneEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_isSkyPlaneEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_isSkyPlaneEnabled_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_isSkyPlaneEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneNode_CSceneNode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyPlaneGenParameters_SkyPlaneGenParameters(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBox_void_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyBox_void_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBoxEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyBoxEnabled_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyBoxEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_isSkyBoxEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_isSkyBoxEnabled_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_isSkyBoxEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyBoxNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSkyBoxNode_CSceneNode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyBoxNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyBoxGenParameters_SkyBoxGenParameters(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDome_void_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setSkyDome_void_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDomeEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSkyDomeEnabled_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSkyDomeEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_isSkyDomeEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_isSkyDomeEnabled_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_isSkyDomeEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyDomeNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSkyDomeNode_CSceneNode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyDomeNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSkyDomeGenParameters_SkyDomeGenParameters(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getFogMode_FogMode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getFogMode_FogMode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getFogMode_FogMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getFogColour_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getFogColour_CColourValue_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getFogColour_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getFogStart_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getFogStart_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getFogStart_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getFogEnd_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getFogEnd_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getFogEnd_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getFogDensity_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getFogDensity_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getFogDensity_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_ev_uint32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createBillboardSet_CBillboardSet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getBillboardSet_CBillboardSet_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getBillboardSet_CBillboardSet_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getBillboardSet_CBillboardSet_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_hasBillboardSet_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_hasBillboardSet_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasBillboardSet_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_CBillboardSet( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_CBillboardSet_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_CBillboardSet(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyBillboardSet_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardSets_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardSets_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllBillboardSets_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setDisplaySceneNodes_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setDisplaySceneNodes_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setDisplaySceneNodes_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getDisplaySceneNodes_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getDisplaySceneNodes_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getDisplaySceneNodes_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createAnimation_CAnimation_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createAnimation_CAnimation_EVString_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createAnimation_CAnimation_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getAnimation_CAnimation_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getAnimation_CAnimation_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getAnimation_CAnimation_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_hasAnimation_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_hasAnimation_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasAnimation_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyAnimation_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAnimation_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimations_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimations_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimations_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createAnimationState_CAnimationState_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createAnimationState_CAnimationState_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createAnimationState_CAnimationState_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getAnimationState_CAnimationState_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getAnimationState_CAnimationState_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getAnimationState_CAnimationState_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_hasAnimationState_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_hasAnimationState_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasAnimationState_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAnimationState_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyAnimationState_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAnimationState_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimationStates_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimationStates_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllAnimationStates_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderOperation_CPass_CViewport_CMatrix4_CMatrix4_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_manualRender_void_CRenderable_CPass_CViewport_CMatrix4_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getRenderQueue_CRenderQueue( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getRenderQueue_CRenderQueue_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getRenderQueue_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_addRenderQueueListener_void_CRenderQueueListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_addRenderQueueListener_void_CRenderQueueListener_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_addRenderQueueListener_void_CRenderQueueListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_removeRenderQueueListener_void_CRenderQueueListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_removeRenderQueueListener_void_CRenderQueueListener_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_removeRenderQueueListener_void_CRenderQueueListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_addRenderObjectListener_void_CRenderObjectListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_addRenderObjectListener_void_CRenderObjectListener_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_addRenderObjectListener_void_CRenderObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_removeRenderObjectListener_void_CRenderObjectListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_removeRenderObjectListener_void_CRenderObjectListener_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_removeRenderObjectListener_void_CRenderObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_addSpecialCaseRenderQueue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_addSpecialCaseRenderQueue_void_ev_uint8_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_addSpecialCaseRenderQueue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_removeSpecialCaseRenderQueue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_clearSpecialCaseRenderQueues_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_clearSpecialCaseRenderQueues_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_clearSpecialCaseRenderQueues_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setSpecialCaseRenderQueueMode_void_SpecialCaseRenderQueueMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getSpecialCaseRenderQueueMode_SpecialCaseRenderQueueMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_isRenderQueueToBeProcessed_ev_bool_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometryRenderQueue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setWorldGeometryRenderQueue_void_ev_uint8_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setWorldGeometryRenderQueue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getWorldGeometryRenderQueue_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getWorldGeometryRenderQueue_ev_uint8_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getWorldGeometryRenderQueue_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_showBoundingBoxes_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_showBoundingBoxes_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_showBoundingBoxes_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShowBoundingBoxes_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShowBoundingBoxes_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShowBoundingBoxes_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__notifyAutotrackingSceneNode_void_CSceneNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createAABBQuery_CAxisAlignedBoxSceneQuery_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createSphereQuery_CSphereSceneQuery_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createPlaneBoundedVolumeQuery_CPlaneBoundedVolumeListSceneQuery_PlaneBoundedVolumeList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createRayQuery_CRaySceneQuery_CRay(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createIntersectionQuery_CIntersectionSceneQuery(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyQuery_void_CSceneQuery( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyQuery_void_CSceneQuery_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyQuery_void_CSceneQuery(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTechnique_void_ShadowTechnique( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTechnique_void_ShadowTechnique_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTechnique_void_ShadowTechnique(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowTechnique_ShadowTechnique( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShadowTechnique_ShadowTechnique_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowTechnique_ShadowTechnique(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShowDebugShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShowDebugShadows_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShowDebugShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShowDebugShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShowDebugShadows_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShowDebugShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowColour_void_CColourValue_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowColour_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowColour_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShadowColour_CColourValue_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowColour_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowDirectionalLightExtrusionDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowDirectionalLightExtrusionDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShadowDirectionalLightExtrusionDistance_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowDirectionalLightExtrusionDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowColorRRatio_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowColorRRatio_void_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowColorRRatio_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowColorGRatio_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowColorGRatio_void_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowColorGRatio_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowColorBRatio_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowColorBRatio_void_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowColorBRatio_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowColorRRatio_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShadowColorRRatio_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowColorRRatio_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowColorGRatio_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShadowColorGRatio_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowColorGRatio_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowColorBRatio_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShadowColorBRatio_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowColorBRatio_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowFarDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowFarDistance_void_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowFarDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistance_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistanceSquared_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistanceSquared_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowFarDistanceSquared_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowIndexBufferSize_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowIndexBufferSize_void_ev_size_t_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowIndexBufferSize_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowIndexBufferSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShadowIndexBufferSize_ev_size_t_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowIndexBufferSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSize_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSize_void_ev_uint16_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSize_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureConfig_void_ev_size_t_ShadowTextureConfig(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTexturePixelFormat_void_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTexturePixelFormat_void_PixelFormat_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTexturePixelFormat_void_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFSAA_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFSAA_void_ev_uint16_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFSAA_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCount_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCount_void_ev_size_t_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCount_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSettings_void_ev_uint16_ev_uint16_PixelFormat_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowTexture_CTexturePtr_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShadowTexture_CTexturePtr_ev_size_t_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowTexture_CTexturePtr_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowDirLightTextureOffset_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowDirLightTextureOffset_void_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowDirLightTextureOffset_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowDirLightTextureOffset_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShadowDirLightTextureOffset_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowDirLightTextureOffset_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeStart_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeStart_void_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeStart_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeEnd_void_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeEnd_void_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureFadeEnd_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSelfShadow_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSelfShadow_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureSelfShadow_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowTextureSelfShadow_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShadowTextureSelfShadow_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowTextureSelfShadow_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCasterMaterial_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCasterMaterial_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureCasterMaterial_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureReceiverMaterial_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowTextureReceiverMaterial_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowTextureReceiverMaterial_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowCasterRenderBackFaces_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowCasterRenderBackFaces_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowCasterRenderBackFaces_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowCasterRenderBackFaces_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShadowCasterRenderBackFaces_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowCasterRenderBackFaces_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowCameraSetup_void_ShadowCameraSetupPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowCameraSetup_ShadowCameraSetupPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowUseInfiniteFarPlane_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueStencilBased_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueStencilBased_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueStencilBased_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueTextureBased_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueTextureBased_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueTextureBased_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueModulative_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueModulative_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueModulative_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueAdditive_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueAdditive_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueAdditive_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueIntegrated_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueIntegrated_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueIntegrated_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueInUse_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueInUse_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_isShadowTechniqueInUse_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowUseLightClipPlanes_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setShadowUseLightClipPlanes_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setShadowUseLightClipPlanes_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowUseLightClipPlanes_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getShadowUseLightClipPlanes_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getShadowUseLightClipPlanes_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setActiveCompositorChain_void_CCompositorChain( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setActiveCompositorChain_void_CCompositorChain_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setActiveCompositorChain_void_CCompositorChain(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setLateMaterialResolving_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setLateMaterialResolving_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setLateMaterialResolving_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_isLateMaterialResolving_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_isLateMaterialResolving_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_isLateMaterialResolving_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__getActiveCompositorChain_CCompositorChain( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__getActiveCompositorChain_CCompositorChain_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__getActiveCompositorChain_CCompositorChain(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_addListener_void_CSceneManagerListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_addListener_void_CSceneManagerListener_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_addListener_void_CSceneManagerListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_removeListener_void_CSceneManagerListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_removeListener_void_CSceneManagerListener_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_removeListener_void_CSceneManagerListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_existListener_ev_bool_CSceneManagerListener( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_existListener_ev_bool_CSceneManagerListener_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_existListener_ev_bool_CSceneManagerListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createStaticGeometry_CStaticGeometry_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createStaticGeometry_CStaticGeometry_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createStaticGeometry_CStaticGeometry_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getStaticGeometry_CStaticGeometry_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getStaticGeometry_CStaticGeometry_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getStaticGeometry_CStaticGeometry_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_hasStaticGeometry_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_hasStaticGeometry_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasStaticGeometry_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_CStaticGeometry( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_CStaticGeometry_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_CStaticGeometry(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyStaticGeometry_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllStaticGeometry_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyAllStaticGeometry_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllStaticGeometry_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createInstancedGeometry_CInstancedGeometry_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createInstancedGeometry_CInstancedGeometry_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createInstancedGeometry_CInstancedGeometry_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getInstancedGeometry_CInstancedGeometry_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getInstancedGeometry_CInstancedGeometry_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getInstancedGeometry_CInstancedGeometry_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_CInstancedGeometry( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_CInstancedGeometry_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_CInstancedGeometry(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedGeometry_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllInstancedGeometry_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyAllInstancedGeometry_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllInstancedGeometry_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createInstanceManager_CInstanceManager_EVString_EVString_EVString_InstancingTechnique_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getInstanceManager_CInstanceManager_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getInstanceManager_CInstanceManager_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getInstanceManager_CInstanceManager_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_hasInstanceManager_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_hasInstanceManager_ev_bool_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasInstanceManager_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_CInstanceManager( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_CInstanceManager_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManager_void_CInstanceManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstanceManagerWithThreadSafe_void_CInstanceManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllInstanceManagers_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyAllInstanceManagers_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllInstanceManagers_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getNumInstancesPerBatch_ev_size_t_EVString_EVString_EVString_InstancingTechnique_ev_size_t_ev_uint16_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createInstancedEntity_CInstancedEntity_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedEntity_void_CInstancedEntity( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyInstancedEntity_void_CInstancedEntity_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyInstancedEntity_void_CInstancedEntity(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_createMovableObject_CMovableObject_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_EVString_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_CMovableObject_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyMovableObject_void_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjectsByType_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjectsByType_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjectsByType_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjects_void( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjects_void_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_destroyAllMovableObjects_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getMovableObject_CMovableObject_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getMovableObject_CMovableObject_EVString_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getMovableObject_CMovableObject_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_hasMovableObject_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_hasMovableObject_ev_bool_EVString_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_hasMovableObject_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getMovableObjectIterator_MovableObjectIterator_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_injectMovableObject_void_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_injectMovableObject_void_CMovableObject_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_injectMovableObject_void_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_EVString_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_CMovableObject_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_extractMovableObject_void_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_extractAllMovableObjectsByType_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_extractAllMovableObjectsByType_void_EVString_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_extractAllMovableObjectsByType_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setVisibilityMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setVisibilityMask_void_ev_uint32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setVisibilityMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getVisibilityMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getVisibilityMask_ev_uint32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getVisibilityMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setFindVisibleObjects_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setFindVisibleObjects_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setFindVisibleObjects_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getFindVisibleObjects_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getFindVisibleObjects_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getFindVisibleObjects_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setNormaliseNormalsOnScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setNormaliseNormalsOnScale_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setNormaliseNormalsOnScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getNormaliseNormalsOnScale_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getNormaliseNormalsOnScale_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getNormaliseNormalsOnScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setFlipCullingOnNegativeScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setFlipCullingOnNegativeScale_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setFlipCullingOnNegativeScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getFlipCullingOnNegativeScale_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getFlipCullingOnNegativeScale_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getFlipCullingOnNegativeScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__injectRenderWithPass_void_CPass_CRenderable(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__suppressRenderStateChanges_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__suppressRenderStateChanges_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__suppressRenderStateChanges_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__areRenderStateChangesSuppressed_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__areRenderStateChangesSuppressed_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__areRenderStateChangesSuppressed_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__setPass_CPass_CPass(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__markGpuParamsDirty_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__markGpuParamsDirty_void_ev_uint16_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__markGpuParamsDirty_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__suppressShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__suppressShadows_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__suppressShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__areShadowsSuppressed_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__areShadowsSuppressed_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__areShadowsSuppressed_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager__renderQueueGroupObjects_void_CRenderQueueGroup_OrganisationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setCameraRelativeRendering_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setCameraRelativeRendering_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setCameraRelativeRendering_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getCameraRelativeRendering_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getCameraRelativeRendering_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getCameraRelativeRendering_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getHeightAt_Real_Real_Real_ev_real32( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getHeightAt_Real_Real_Real_ev_real32_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getHeightAt_Real_Real_Real_ev_real32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getBestHeightAt_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getBestHeightAt_Real_Real_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getBestHeightAt_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getHeightAtTile_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getHeightAtTile_Real_Real_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getHeightAtTile_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_getTileEnvelope_ev_bool_ev_int32_ev_uint32_ev_uint32_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_addTempLayer_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_addTempLayer_ev_bool_ILayer_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_addTempLayer_ev_bool_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_removeTempLayer_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_removeTempLayer_ev_bool_ILayer_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_removeTempLayer_ev_bool_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_updateQuadImage_void_bool_bool_bool_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_updateOBQ_void_ev_bool_ev_bool_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_COctreeSceneManager_setCollisionDetectionEnable_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_COctreeSceneManager_setCollisionDetectionEnable_void_ev_bool_Callback* pCallback )
			{
				COctreeSceneManagerProxy* ptr = dynamic_cast<COctreeSceneManagerProxy*>((EarthView::World::Graphic::COctreeSceneManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_COctreeSceneManager_setCollisionDetectionEnable_void_ev_bool(pCallback);
				}
			}
		}
	}
}
