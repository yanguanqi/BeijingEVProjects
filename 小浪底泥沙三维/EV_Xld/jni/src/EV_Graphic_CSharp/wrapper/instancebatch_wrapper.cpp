/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/instancebatch.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntityVec_push_back_void_CInstancedEntity(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedEntity*& ref_t )
			{
				EarthView::World::Graphic::CInstancedEntityVec* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntityVec*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntityVec_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedEntityVec* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntityVec*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedEntity*  _stdcall EarthView_World_Graphic_CInstancedEntityVec_front_CInstancedEntity(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedEntityVec* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntityVec*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedEntity* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedEntity*  _stdcall EarthView_World_Graphic_CInstancedEntityVec_back_CInstancedEntity(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedEntityVec* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntityVec*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedEntity* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntityVec_insert_void_ev_uint32_CInstancedEntity(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CInstancedEntity*& ref_t )
			{
				EarthView::World::Graphic::CInstancedEntityVec* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntityVec*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntityVec_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CInstancedEntityVec* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntityVec*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstancedEntityVec_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntityVec* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntityVec*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedEntity*  _stdcall EarthView_World_Graphic_CInstancedEntityVec_OperatorIndex_CInstancedEntity_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstancedEntityVec& objYYYY = *(EarthView::World::Graphic::CInstancedEntityVec*) pObjXXXX;
				EarthView::World::Graphic::CInstancedEntity* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedEntity*  _stdcall EarthView_World_Graphic_CInstancedEntityVec_at_CInstancedEntity_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstancedEntityVec* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntityVec*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedEntity* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstancedEntityVec_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstancedEntityVec* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntityVec*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntityVec_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CInstancedEntityVec* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntityVec*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntityVec_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CInstancedEntityVec* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntityVec*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstancedEntityVec_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstancedEntityVec* ptrNativeObject = (EarthView::World::Graphic::CInstancedEntityVec*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getMovableType_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch__notifyCurrentCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* ref_cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getBoundingBox_CAxisAlignedBox_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getBoundingRadius_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch__updateRenderQueue_void_CRenderQueue_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch__notifyAttached_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getReceivesShadows_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback)(_in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback)(_in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_renderSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_clearSelection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_startEditing_ev_bool_ev_uint32_Callback)(_in ev_uint32 objectIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_endEditing_void_Callback)();
			typedef EarthView::World::Graphic::CEditBoundingBox*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getEditBoundingBox_CEditBoundingBox_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _inout void* matrix);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _in const void* matrix);
			typedef EarthView::World::Graphic::CInstancedEntity*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getInstanceEntity_CInstancedEntity_ev_uint32_Callback)(_in ev_uint32 objectIndex);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_trackParentNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* pNode);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getTrackingNode_CNode_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_onInstancedEntityStateChanged_void_CInstancedEntity_Callback)(_in EarthView::World::Graphic::CInstancedEntity* instancedEntity);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CInstanceBatch_calculateMaxNumInstances_ev_size_t_CSubMesh_ev_uint16_Callback)(_in const EarthView::World::Graphic::CSubMesh* baseSubMesh, _in ev_uint16 flags);
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_build_CRenderOperation_CSubMesh_Callback)(_in const EarthView::World::Graphic::CSubMesh* baseSubMesh);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_buildFrom_void_CSubMesh_CRenderOperation_Callback)(_in const EarthView::World::Graphic::CSubMesh* baseSubMesh, _in const void* renderOperation);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch__boundsDirty_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_setStaticAndUpdate_void_ev_bool_Callback)(_in ev_bool bStatic);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_isStatic_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_useBoneWorldMatrices_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getMaterial_CMaterialPtr_Callback)();
			typedef EarthView::World::Graphic::CTechnique*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getTechnique_CTechnique_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getRenderOperation_void_CRenderOperation_Callback)(_inout void* op);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_preRender_ev_bool_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_postRender_void_CSceneManager_CRenderSystem_Callback)(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getWorldTransforms_void_CMatrix4_Callback)(_in EarthView::World::Spatial::Math::CMatrix4* xform);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getNumWorldTransforms_ev_uint16_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getSquaredViewDepth_Real_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getLights_LightList_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getCastsShadows_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback)(_in const void* constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_setPolygonModeOverrideable_void_ev_bool_Callback)(_in ev_bool override);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getPolygonModeOverrideable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_setCustomAmbient_void_CColourValue_Callback)(_in const void* ambient);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getCustomAmbient_CColourValue_Callback)();
			typedef bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getCustomAmbientEnabled_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_setCustomAmbientEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef EarthView::World::Graphic::CMovableObject*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getMovableObject_CMovableObject_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_addListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_removeListener_void_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_existListener_ev_bool_CRenderableListener_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CRenderable::CRenderableListener*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getListener_CRenderableListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef EarthView::World::Graphic::CRenderable::CRenderSystemData*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_getRenderSystemData_CRenderSystemData_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_setRenderSystemData_void_CRenderSystemData_Callback)(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val);
			class CInstanceBatchProxy : public EarthView::World::Graphic::CInstanceBatch
			{
			private:
				EarthView_World_Graphic_CInstanceBatch_getMovableType_EVString_Callback* m_EarthView_World_Graphic_CInstanceBatch_getMovableType_EVString_Callback;
				EarthView_World_Graphic_CInstanceBatch__notifyCurrentCamera_void_CCamera_Callback* m_EarthView_World_Graphic_CInstanceBatch__notifyCurrentCamera_void_CCamera_Callback;
				EarthView_World_Graphic_CInstanceBatch_getBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CInstanceBatch_getBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CInstanceBatch_getBoundingRadius_Real_Callback* m_EarthView_World_Graphic_CInstanceBatch_getBoundingRadius_Real_Callback;
				EarthView_World_Graphic_CInstanceBatch__updateRenderQueue_void_CRenderQueue_Callback* m_EarthView_World_Graphic_CInstanceBatch__updateRenderQueue_void_CRenderQueue_Callback;
				EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_Callback* m_EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_Callback;
				EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch__notifyAttached_void_CNode_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch__notifyAttached_void_CNode_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_getReceivesShadows_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_getReceivesShadows_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CInstanceBatch_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_CInstanceBatch_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_CInstanceBatch_renderSelection_void_Callback* m_EarthView_World_Graphic_CInstanceBatch_renderSelection_void_Callback;
				EarthView_World_Graphic_CInstanceBatch_clearSelection_void_Callback* m_EarthView_World_Graphic_CInstanceBatch_clearSelection_void_Callback;
				EarthView_World_Graphic_CInstanceBatch_startEditing_ev_bool_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_startEditing_ev_bool_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_endEditing_void_Callback* m_EarthView_World_Graphic_CInstanceBatch_endEditing_void_Callback;
				EarthView_World_Graphic_CInstanceBatch_getEditBoundingBox_CEditBoundingBox_Callback* m_EarthView_World_Graphic_CInstanceBatch_getEditBoundingBox_CEditBoundingBox_Callback;
				EarthView_World_Graphic_CInstanceBatch_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_CInstanceBatch_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_CInstanceBatch_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_CInstanceBatch_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_CInstanceBatch_getInstanceEntity_CInstancedEntity_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_getInstanceEntity_CInstancedEntity_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_trackParentNode_ev_bool_CNode_Callback* m_EarthView_World_Graphic_CInstanceBatch_trackParentNode_ev_bool_CNode_Callback;
				EarthView_World_Graphic_CInstanceBatch_getTrackingNode_CNode_Callback* m_EarthView_World_Graphic_CInstanceBatch_getTrackingNode_CNode_Callback;
				EarthView_World_Graphic_CInstanceBatch_onInstancedEntityStateChanged_void_CInstancedEntity_Callback* m_EarthView_World_Graphic_CInstanceBatch_onInstancedEntityStateChanged_void_CInstancedEntity_Callback;
				EarthView_World_Graphic_CInstanceBatch_calculateMaxNumInstances_ev_size_t_CSubMesh_ev_uint16_Callback* m_EarthView_World_Graphic_CInstanceBatch_calculateMaxNumInstances_ev_size_t_CSubMesh_ev_uint16_Callback;
				EarthView_World_Graphic_CInstanceBatch_build_CRenderOperation_CSubMesh_Callback* m_EarthView_World_Graphic_CInstanceBatch_build_CRenderOperation_CSubMesh_Callback;
				EarthView_World_Graphic_CInstanceBatch_buildFrom_void_CSubMesh_CRenderOperation_Callback* m_EarthView_World_Graphic_CInstanceBatch_buildFrom_void_CSubMesh_CRenderOperation_Callback;
				EarthView_World_Graphic_CInstanceBatch__boundsDirty_void_Callback* m_EarthView_World_Graphic_CInstanceBatch__boundsDirty_void_Callback;
				EarthView_World_Graphic_CInstanceBatch_setStaticAndUpdate_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_setStaticAndUpdate_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_isStatic_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_isStatic_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_useBoneWorldMatrices_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_useBoneWorldMatrices_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_getMaterial_CMaterialPtr_Callback* m_EarthView_World_Graphic_CInstanceBatch_getMaterial_CMaterialPtr_Callback;
				EarthView_World_Graphic_CInstanceBatch_getTechnique_CTechnique_Callback* m_EarthView_World_Graphic_CInstanceBatch_getTechnique_CTechnique_Callback;
				EarthView_World_Graphic_CInstanceBatch_getRenderOperation_void_CRenderOperation_Callback* m_EarthView_World_Graphic_CInstanceBatch_getRenderOperation_void_CRenderOperation_Callback;
				EarthView_World_Graphic_CInstanceBatch_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CInstanceBatch_preRender_ev_bool_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CInstanceBatch_postRender_void_CSceneManager_CRenderSystem_Callback* m_EarthView_World_Graphic_CInstanceBatch_postRender_void_CSceneManager_CRenderSystem_Callback;
				EarthView_World_Graphic_CInstanceBatch_getWorldTransforms_void_CMatrix4_Callback* m_EarthView_World_Graphic_CInstanceBatch_getWorldTransforms_void_CMatrix4_Callback;
				EarthView_World_Graphic_CInstanceBatch_getNumWorldTransforms_ev_uint16_Callback* m_EarthView_World_Graphic_CInstanceBatch_getNumWorldTransforms_ev_uint16_Callback;
				EarthView_World_Graphic_CInstanceBatch_getSquaredViewDepth_Real_CCamera_Callback* m_EarthView_World_Graphic_CInstanceBatch_getSquaredViewDepth_Real_CCamera_Callback;
				EarthView_World_Graphic_CInstanceBatch_getLights_LightList_Callback* m_EarthView_World_Graphic_CInstanceBatch_getLights_LightList_Callback;
				EarthView_World_Graphic_CInstanceBatch_getCastsShadows_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_getCastsShadows_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* m_EarthView_World_Graphic_CInstanceBatch__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback;
				EarthView_World_Graphic_CInstanceBatch_setPolygonModeOverrideable_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_setPolygonModeOverrideable_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_getPolygonModeOverrideable_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_getPolygonModeOverrideable_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_setCustomAmbient_void_CColourValue_Callback* m_EarthView_World_Graphic_CInstanceBatch_setCustomAmbient_void_CColourValue_Callback;
				EarthView_World_Graphic_CInstanceBatch_getCustomAmbient_CColourValue_Callback* m_EarthView_World_Graphic_CInstanceBatch_getCustomAmbient_CColourValue_Callback;
				EarthView_World_Graphic_CInstanceBatch_getCustomAmbientEnabled_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_getCustomAmbientEnabled_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_setCustomAmbientEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_setCustomAmbientEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_getMovableObject_CMovableObject_Callback* m_EarthView_World_Graphic_CInstanceBatch_getMovableObject_CMovableObject_Callback;
				EarthView_World_Graphic_CInstanceBatch_addListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CInstanceBatch_addListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CInstanceBatch_removeListener_void_CRenderableListener_Callback* m_EarthView_World_Graphic_CInstanceBatch_removeListener_void_CRenderableListener_Callback;
				EarthView_World_Graphic_CInstanceBatch_existListener_ev_bool_CRenderableListener_Callback* m_EarthView_World_Graphic_CInstanceBatch_existListener_ev_bool_CRenderableListener_Callback;
				EarthView_World_Graphic_CInstanceBatch_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_getListener_CRenderableListener_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_getListener_CRenderableListener_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_getRenderSystemData_CRenderSystemData_Callback* m_EarthView_World_Graphic_CInstanceBatch_getRenderSystemData_CRenderSystemData_Callback;
				EarthView_World_Graphic_CInstanceBatch_setRenderSystemData_void_CRenderSystemData_Callback* m_EarthView_World_Graphic_CInstanceBatch_setRenderSystemData_void_CRenderSystemData_Callback;
			public:
				CInstanceBatchProxy(EarthView::World::Core::CNameValuePairList *pList) : CInstanceBatch(pList)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getMovableType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch__notifyCurrentCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getBoundingRadius_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch__updateRenderQueue_void_CRenderQueue_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch__notifyAttached_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getReceivesShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_renderSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_clearSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_startEditing_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_endEditing_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getEditBoundingBox_CEditBoundingBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getInstanceEntity_CInstancedEntity_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_trackParentNode_ev_bool_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getTrackingNode_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_onInstancedEntityStateChanged_void_CInstancedEntity_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_calculateMaxNumInstances_ev_size_t_CSubMesh_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_build_CRenderOperation_CSubMesh_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_buildFrom_void_CSubMesh_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch__boundsDirty_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_setStaticAndUpdate_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_isStatic_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_useBoneWorldMatrices_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getMaterial_CMaterialPtr_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getTechnique_CTechnique_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getRenderOperation_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_postRender_void_CSceneManager_CRenderSystem_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getWorldTransforms_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getNumWorldTransforms_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getSquaredViewDepth_Real_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getCastsShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_setPolygonModeOverrideable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getPolygonModeOverrideable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_setCustomAmbient_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getCustomAmbient_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getCustomAmbientEnabled_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_setCustomAmbientEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getMovableObject_CMovableObject_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_addListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_removeListener_void_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_existListener_ev_bool_CRenderableListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getListener_CRenderableListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_getRenderSystemData_CRenderSystemData_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_setRenderSystemData_void_CRenderSystemData_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getMovableType_EVString(EarthView_World_Graphic_CInstanceBatch_getMovableType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getMovableType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch__notifyCurrentCamera_void_CCamera(EarthView_World_Graphic_CInstanceBatch__notifyCurrentCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch__notifyCurrentCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_CInstanceBatch_getBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getBoundingRadius_Real(EarthView_World_Graphic_CInstanceBatch_getBoundingRadius_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getBoundingRadius_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch__updateRenderQueue_void_CRenderQueue(EarthView_World_Graphic_CInstanceBatch__updateRenderQueue_void_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch__updateRenderQueue_void_CRenderQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor(EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_ev_bool(EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch__notifyAttached_void_CNode_ev_bool(EarthView_World_Graphic_CInstanceBatch__notifyAttached_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch__notifyAttached_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getReceivesShadows_ev_bool(EarthView_World_Graphic_CInstanceBatch_getReceivesShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getReceivesShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CSphere_ev_bool_IntVector(EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(EarthView_World_Graphic_CInstanceBatch_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_renderSelection_void(EarthView_World_Graphic_CInstanceBatch_renderSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_renderSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_clearSelection_void(EarthView_World_Graphic_CInstanceBatch_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_startEditing_ev_bool_ev_uint32(EarthView_World_Graphic_CInstanceBatch_startEditing_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_startEditing_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_endEditing_void(EarthView_World_Graphic_CInstanceBatch_endEditing_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_endEditing_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getEditBoundingBox_CEditBoundingBox(EarthView_World_Graphic_CInstanceBatch_getEditBoundingBox_CEditBoundingBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getEditBoundingBox_CEditBoundingBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_CInstanceBatch_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_CInstanceBatch_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getInstanceEntity_CInstancedEntity_ev_uint32(EarthView_World_Graphic_CInstanceBatch_getInstanceEntity_CInstancedEntity_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getInstanceEntity_CInstancedEntity_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_trackParentNode_ev_bool_CNode(EarthView_World_Graphic_CInstanceBatch_trackParentNode_ev_bool_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_trackParentNode_ev_bool_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getTrackingNode_CNode(EarthView_World_Graphic_CInstanceBatch_getTrackingNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getTrackingNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_onInstancedEntityStateChanged_void_CInstancedEntity(EarthView_World_Graphic_CInstanceBatch_onInstancedEntityStateChanged_void_CInstancedEntity_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_onInstancedEntityStateChanged_void_CInstancedEntity_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_calculateMaxNumInstances_ev_size_t_CSubMesh_ev_uint16(EarthView_World_Graphic_CInstanceBatch_calculateMaxNumInstances_ev_size_t_CSubMesh_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_calculateMaxNumInstances_ev_size_t_CSubMesh_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_build_CRenderOperation_CSubMesh(EarthView_World_Graphic_CInstanceBatch_build_CRenderOperation_CSubMesh_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_build_CRenderOperation_CSubMesh_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_buildFrom_void_CSubMesh_CRenderOperation(EarthView_World_Graphic_CInstanceBatch_buildFrom_void_CSubMesh_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_buildFrom_void_CSubMesh_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch__boundsDirty_void(EarthView_World_Graphic_CInstanceBatch__boundsDirty_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch__boundsDirty_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_setStaticAndUpdate_void_ev_bool(EarthView_World_Graphic_CInstanceBatch_setStaticAndUpdate_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_setStaticAndUpdate_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_isStatic_ev_bool(EarthView_World_Graphic_CInstanceBatch_isStatic_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_isStatic_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_useBoneWorldMatrices_ev_bool(EarthView_World_Graphic_CInstanceBatch_useBoneWorldMatrices_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_useBoneWorldMatrices_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getMaterial_CMaterialPtr(EarthView_World_Graphic_CInstanceBatch_getMaterial_CMaterialPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getMaterial_CMaterialPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getTechnique_CTechnique(EarthView_World_Graphic_CInstanceBatch_getTechnique_CTechnique_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getTechnique_CTechnique_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getRenderOperation_void_CRenderOperation(EarthView_World_Graphic_CInstanceBatch_getRenderOperation_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getRenderOperation_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_preRender_ev_bool_CSceneManager_CRenderSystem(EarthView_World_Graphic_CInstanceBatch_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_preRender_ev_bool_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_postRender_void_CSceneManager_CRenderSystem(EarthView_World_Graphic_CInstanceBatch_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_postRender_void_CSceneManager_CRenderSystem_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getWorldTransforms_void_CMatrix4(EarthView_World_Graphic_CInstanceBatch_getWorldTransforms_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getWorldTransforms_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getNumWorldTransforms_ev_uint16(EarthView_World_Graphic_CInstanceBatch_getNumWorldTransforms_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getNumWorldTransforms_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getSquaredViewDepth_Real_CCamera(EarthView_World_Graphic_CInstanceBatch_getSquaredViewDepth_Real_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getSquaredViewDepth_Real_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getLights_LightList(EarthView_World_Graphic_CInstanceBatch_getLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getCastsShadows_ev_bool(EarthView_World_Graphic_CInstanceBatch_getCastsShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getCastsShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(EarthView_World_Graphic_CInstanceBatch__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_setPolygonModeOverrideable_void_ev_bool(EarthView_World_Graphic_CInstanceBatch_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_setPolygonModeOverrideable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getPolygonModeOverrideable_ev_bool(EarthView_World_Graphic_CInstanceBatch_getPolygonModeOverrideable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getPolygonModeOverrideable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_setCustomAmbient_void_CColourValue(EarthView_World_Graphic_CInstanceBatch_setCustomAmbient_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_setCustomAmbient_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getCustomAmbient_CColourValue(EarthView_World_Graphic_CInstanceBatch_getCustomAmbient_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getCustomAmbient_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getCustomAmbientEnabled_bool(EarthView_World_Graphic_CInstanceBatch_getCustomAmbientEnabled_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getCustomAmbientEnabled_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_setCustomAmbientEnabled_void_ev_bool(EarthView_World_Graphic_CInstanceBatch_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_setCustomAmbientEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getMovableObject_CMovableObject(EarthView_World_Graphic_CInstanceBatch_getMovableObject_CMovableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getMovableObject_CMovableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_addListener_void_CRenderableListener(EarthView_World_Graphic_CInstanceBatch_addListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_addListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_removeListener_void_CRenderableListener(EarthView_World_Graphic_CInstanceBatch_removeListener_void_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_removeListener_void_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_existListener_ev_bool_CRenderableListener(EarthView_World_Graphic_CInstanceBatch_existListener_ev_bool_CRenderableListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_existListener_ev_bool_CRenderableListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getListenerCount_ev_uint32(EarthView_World_Graphic_CInstanceBatch_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getListener_CRenderableListener_ev_uint32(EarthView_World_Graphic_CInstanceBatch_getListener_CRenderableListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getListener_CRenderableListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_getRenderSystemData_CRenderSystemData(EarthView_World_Graphic_CInstanceBatch_getRenderSystemData_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_getRenderSystemData_CRenderSystemData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_setRenderSystemData_void_CRenderSystemData(EarthView_World_Graphic_CInstanceBatch_setRenderSystemData_void_CRenderSystemData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_setRenderSystemData_void_CRenderSystemData_Callback = pCallback;
				}
				virtual EVString getMovableType() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getMovableType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CInstanceBatch_getMovableType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::getMovableType();
				}
				virtual void _notifyCurrentCamera(_in EarthView::World::Graphic::CCamera* ref_cam)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch__notifyCurrentCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch__notifyCurrentCamera_void_CCamera_Callback(ref_cam);
					}
					else
						return this->CInstanceBatch::_notifyCurrentCamera(ref_cam);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstanceBatch_getBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::getBoundingBox();
				}
				virtual Real getBoundingRadius() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getBoundingRadius_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstanceBatch_getBoundingRadius_Real_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::getBoundingRadius();
				}
				virtual void _updateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch__updateRenderQueue_void_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch__updateRenderQueue_void_CRenderQueue_Callback(queue);
					}
					else
						return this->CInstanceBatch::_updateRenderQueue(queue);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_Callback(visitor);
					}
					else
						return this->CInstanceBatch::visitRenderables(visitor);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->CInstanceBatch::visitRenderables(visitor, debugRenderables);
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch__notifyAttached_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch__notifyAttached_void_CNode_ev_bool_Callback(ref_parent, isTagPoint);
					}
					else
						return this->CInstanceBatch::_notifyAttached(ref_parent, isTagPoint);
				}
				virtual ev_bool preRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_preRender_ev_bool_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_preRender_ev_bool_CSceneManager_CRenderSystem_Callback(sm, rsys);
						return returnValue;
					}
					else
						return this->CInstanceBatch::preRender(sm, rsys);
				}
				virtual void postRender(_in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_postRender_void_CSceneManager_CRenderSystem_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_postRender_void_CSceneManager_CRenderSystem_Callback(sm, rsys);
					}
					else
						return this->CInstanceBatch::postRender(sm, rsys);
				}
				virtual ev_bool getReceivesShadows()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getReceivesShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_getReceivesShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::getReceivesShadows();
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, &point);
						return returnValue;
					}
					else
						return this->CInstanceBatch::selectBy(ray, viewport, prepareToRenderSelection, objIndex, point);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback(&aabb, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CInstanceBatch::selectBy(aabb, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback(&sphere, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CInstanceBatch::selectBy(sphere, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, &point);
						return returnValue;
					}
					else
						return this->CInstanceBatch::selectComponentBy(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
				}
				virtual void renderSelection()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_renderSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_renderSelection_void_Callback();
					}
					else
						return this->CInstanceBatch::renderSelection();
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_clearSelection_void_Callback();
					}
					else
						return this->CInstanceBatch::clearSelection();
				}
				virtual ev_bool startEditing(_in ev_uint32 objectIndex)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_startEditing_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_startEditing_ev_bool_ev_uint32_Callback(objectIndex);
						return returnValue;
					}
					else
						return this->CInstanceBatch::startEditing(objectIndex);
				}
				virtual void endEditing()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_endEditing_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_endEditing_void_Callback();
					}
					else
						return this->CInstanceBatch::endEditing();
				}
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getEditBoundingBox_CEditBoundingBox_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEditBoundingBox* returnValue = m_EarthView_World_Graphic_CInstanceBatch_getEditBoundingBox_CEditBoundingBox_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::getEditBoundingBox();
				}
				virtual ev_bool getSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _inout EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CInstanceBatch::getSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual ev_bool setSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _in const EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CInstanceBatch::setSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual EarthView::World::Graphic::CInstancedEntity* getInstanceEntity(_in ev_uint32 objectIndex)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getInstanceEntity_CInstancedEntity_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CInstancedEntity* returnValue = m_EarthView_World_Graphic_CInstanceBatch_getInstanceEntity_CInstancedEntity_ev_uint32_Callback(objectIndex);
						return returnValue;
					}
					else
						return this->CInstanceBatch::getInstanceEntity(objectIndex);
				}
				virtual EarthView::World::Graphic::CMovableObject* getMovableObject() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getMovableObject_CMovableObject_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject* returnValue = m_EarthView_World_Graphic_CInstanceBatch_getMovableObject_CMovableObject_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::getMovableObject();
				}
				virtual ev_bool trackParentNode(_in EarthView::World::Graphic::CNode* pNode)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_trackParentNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_trackParentNode_ev_bool_CNode_Callback(pNode);
						return returnValue;
					}
					else
						return this->CInstanceBatch::trackParentNode(pNode);
				}
				virtual EarthView::World::Graphic::CNode* getTrackingNode() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getTrackingNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CInstanceBatch_getTrackingNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::getTrackingNode();
				}
				virtual void onInstancedEntityStateChanged(_in EarthView::World::Graphic::CInstancedEntity* instancedEntity)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_onInstancedEntityStateChanged_void_CInstancedEntity_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_onInstancedEntityStateChanged_void_CInstancedEntity_Callback(instancedEntity);
					}
					else
						return this->CInstanceBatch::onInstancedEntityStateChanged(instancedEntity);
				}
				virtual ev_size_t calculateMaxNumInstances(_in const EarthView::World::Graphic::CSubMesh* baseSubMesh, _in ev_uint16 flags) const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_calculateMaxNumInstances_ev_size_t_CSubMesh_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CInstanceBatch_calculateMaxNumInstances_ev_size_t_CSubMesh_ev_uint16_Callback(baseSubMesh, flags);
						return returnValue;
					}
					else
						return this->CInstanceBatch::calculateMaxNumInstances(baseSubMesh, flags);
				}
				virtual EarthView::World::Graphic::CRenderOperation build(_in const EarthView::World::Graphic::CSubMesh* baseSubMesh)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_build_CRenderOperation_CSubMesh_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderOperation returnValue = *(EarthView::World::Graphic::CRenderOperation*)m_EarthView_World_Graphic_CInstanceBatch_build_CRenderOperation_CSubMesh_Callback(baseSubMesh);
						return returnValue;
					}
					else
						return this->CInstanceBatch::build(baseSubMesh);
				}
				virtual void buildFrom(_in const EarthView::World::Graphic::CSubMesh* baseSubMesh, _in const EarthView::World::Graphic::CRenderOperation& renderOperation)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_buildFrom_void_CSubMesh_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_buildFrom_void_CSubMesh_CRenderOperation_Callback(baseSubMesh, &renderOperation);
					}
					else
						return this->CInstanceBatch::buildFrom(baseSubMesh, renderOperation);
				}
				virtual void _boundsDirty()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch__boundsDirty_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch__boundsDirty_void_Callback();
					}
					else
						return this->CInstanceBatch::_boundsDirty();
				}
				virtual void setStaticAndUpdate(_in ev_bool bStatic)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_setStaticAndUpdate_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_setStaticAndUpdate_void_ev_bool_Callback(bStatic);
					}
					else
						return this->CInstanceBatch::setStaticAndUpdate(bStatic);
				}
				virtual ev_bool isStatic() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_isStatic_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_isStatic_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::isStatic();
				}
				virtual ev_bool useBoneWorldMatrices() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_useBoneWorldMatrices_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_useBoneWorldMatrices_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::useBoneWorldMatrices();
				}
				virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getMaterial_CMaterialPtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMaterialPtr& returnValue = *(EarthView::World::Graphic::CMaterialPtr*)m_EarthView_World_Graphic_CInstanceBatch_getMaterial_CMaterialPtr_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::getMaterial();
				}
				virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getRenderOperation_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_getRenderOperation_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CInstanceBatch::getRenderOperation(op);
				}
				virtual Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera* cam) const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getSquaredViewDepth_Real_CCamera_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstanceBatch_getSquaredViewDepth_Real_CCamera_Callback(cam);
						return returnValue;
					}
					else
						return this->CInstanceBatch::getSquaredViewDepth(cam);
				}
				virtual const EarthView::World::Graphic::LightList& getLights() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CInstanceBatch_getLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::getLights();
				}
				virtual EarthView::World::Graphic::CTechnique* getTechnique() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getTechnique_CTechnique_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CTechnique* returnValue = m_EarthView_World_Graphic_CInstanceBatch_getTechnique_CTechnique_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::getTechnique();
				}
				virtual void getWorldTransforms(_in EarthView::World::Spatial::Math::CMatrix4* xform) const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getWorldTransforms_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_getWorldTransforms_void_CMatrix4_Callback(xform);
					}
					else
						return this->CInstanceBatch::getWorldTransforms(xform);
				}
				virtual ev_uint16 getNumWorldTransforms() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getNumWorldTransforms_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CInstanceBatch_getNumWorldTransforms_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::getNumWorldTransforms();
				}
				virtual ev_bool getCastsShadows() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getCastsShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_getCastsShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::getCastsShadows();
				}
				virtual void _updateCustomGpuParameter(_in const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& constantEntry, _in EarthView::World::Graphic::CGpuProgramParameters* params) const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback(&constantEntry, params);
					}
					else
						return this->CInstanceBatch::_updateCustomGpuParameter(constantEntry, params);
				}
				virtual void setPolygonModeOverrideable(_in ev_bool override)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_setPolygonModeOverrideable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_setPolygonModeOverrideable_void_ev_bool_Callback(override);
					}
					else
						return this->CInstanceBatch::setPolygonModeOverrideable(override);
				}
				virtual ev_bool getPolygonModeOverrideable() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getPolygonModeOverrideable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_getPolygonModeOverrideable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::getPolygonModeOverrideable();
				}
				virtual void setCustomAmbient(_in const EarthView::World::Graphic::CColourValue& ambient)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_setCustomAmbient_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_setCustomAmbient_void_CColourValue_Callback(&ambient);
					}
					else
						return this->CInstanceBatch::setCustomAmbient(ambient);
				}
				virtual const EarthView::World::Graphic::CColourValue& getCustomAmbient() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getCustomAmbient_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CColourValue& returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Graphic_CInstanceBatch_getCustomAmbient_CColourValue_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::getCustomAmbient();
				}
				virtual bool getCustomAmbientEnabled() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getCustomAmbientEnabled_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_getCustomAmbientEnabled_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::getCustomAmbientEnabled();
				}
				virtual void setCustomAmbientEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_setCustomAmbientEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_setCustomAmbientEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CInstanceBatch::setCustomAmbientEnabled(enabled);
				}
				virtual void addListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* ref_listener)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_addListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_addListener_void_CRenderableListener_Callback(ref_listener);
					}
					else
						return this->CInstanceBatch::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_removeListener_void_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_removeListener_void_CRenderableListener_Callback(listener);
					}
					else
						return this->CInstanceBatch::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CRenderable::CRenderableListener* listener) const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_existListener_ev_bool_CRenderableListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_existListener_ev_bool_CRenderableListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CInstanceBatch::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstanceBatch_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::getListenerCount();
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderableListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getListener_CRenderableListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderableListener* returnValue = m_EarthView_World_Graphic_CInstanceBatch_getListener_CRenderableListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CInstanceBatch::getListener(index);
				}
				virtual EarthView::World::Graphic::CRenderable::CRenderSystemData* getRenderSystemData() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_getRenderSystemData_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderable::CRenderSystemData* returnValue = m_EarthView_World_Graphic_CInstanceBatch_getRenderSystemData_CRenderSystemData_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatch::getRenderSystemData();
				}
				virtual void setRenderSystemData(_in EarthView::World::Graphic::CRenderable::CRenderSystemData* ref_val) const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_setRenderSystemData_void_CRenderSystemData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_setRenderSystemData_void_CRenderSystemData_Callback(ref_val);
					}
					else
						return this->CInstanceBatch::setRenderSystemData(ref_val);
				}
			};
			REGISTER_FACTORY_CLASS(CInstanceBatchProxy);
			typedef const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback)();
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueId_ev_uint8_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCreator_void_CMovableObjectFactory_Callback)(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact);
			typedef EarthView::World::Graphic::CMovableObjectFactory*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getCreator_CMovableObjectFactory_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyManager_void_CSceneManager_Callback)(_in EarthView::World::Graphic::CSceneManager* ref_mgr);
			typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getManager_CSceneManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getName_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getMovableType_EVString_Callback)();
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentNode_CNode_Callback)();
			typedef EarthView::World::Graphic::CSceneNode*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentSceneNode_CSceneNode_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isParentTagPoint_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_ev_bool_Callback)(_in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_parent);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isAttached_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_detachFromParent_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isInScene_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyMoved_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyLightsQueried_void_LightList_Callback)(_in const EarthView::World::Graphic::LightList* lightList);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightQueriedListener_void_CLightQueriedListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener);
			typedef EarthView::World::Graphic::CMovableObject::CLightQueriedListener*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightQueriedListener_CLightQueriedListener_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightListUpdated_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightListUpdated_void_ev_uint32_Callback)(_in ev_uint32 frame);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCurrentCamera_void_CCamera_Callback)(_in EarthView::World::Graphic::CCamera* ref_cam);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingBox_CAxisAlignedBox_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingRadius_Real_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__updateRenderQueue_void_CRenderQueue_Callback)(_in EarthView::World::Graphic::CRenderQueue* queue);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisible_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMaxDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMaxDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinDistance_void_Real_Callback)(_in Real dist);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinDistance_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinPixelSize_void_Real_Callback)(_in Real pixelSize);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinPixelSize_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectionColour_void_CColourValue_Callback)(_in const void* colour);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelected_ev_bool_IntVector_Callback)(_in const void* objIndics);
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelected_IntVector_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback)(_in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback)(_in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback)(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_renderSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_clearSelection_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_startEditing_ev_bool_ev_uint32_Callback)(_in ev_uint32 objectIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_endEditing_void_Callback)();
			typedef EarthView::World::Graphic::CEditBoundingBox*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEditBoundingBox_CEditBoundingBox_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _inout void* matrix);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback)(_in ev_uint32 objectIndex, _in const void* matrix);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroup_void_ev_uint8_Callback)(_in ev_uint8 queueID);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback)(_in ev_uint8 queueID, _in ev_uint16 priority);
			typedef ev_uint8  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueGroup_ev_uint8_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getParentNodeFullTransform_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeQueryFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getQueryFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeVisibilityFlags_void_ev_uint32_Callback)(_in ev_uint32 flags);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisibilityFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeListener_void_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_existListener_ev_bool_CMovableObjectListener_Callback)(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener);
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListenerCount_ev_uint32_Callback)();
			typedef EarthView::World::Graphic::CMovableObject::CMovableObjectListener*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListener_CMovableObjectListener_ev_uint32_Callback)(_in ev_uint32 index);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_queryLights_LightList_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightMask_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightMask_void_ev_uint32_Callback)(_in ev_uint32 lightMask);
			typedef EarthView::World::Graphic::LightList*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getLightList_LightList_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setCastShadows_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getReceivesShadows_ev_bool_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getTypeFlags_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_ev_bool_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_Callback)(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setDebugDisplayEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isDebugDisplayEnabled_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getCastShadows_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CEdgeData*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEdgeList_CEdgeData_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_hasEdgeList_ev_bool_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback)(_in ev_bool derive);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightCapBounds_CAxisAlignedBox_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback)(_in const void* light, _in Real dirLightExtrusionDist);
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance, _in ev_uint32 flags);
			typedef void*  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback)(_in int shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDistance);
			typedef Real  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getPointExtrusionDistance_Real_CLight_Callback)(_in const EarthView::World::Graphic::CLight* l);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* lightPos);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback)(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const void* indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout void* shadowRenderables, _in ev_uint32 flags);
			typedef void  ( _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback)(_inout void* box, _in const void* lightPos, _in Real extrudeDist);
			class CInstanceBatchInternalMovableProxy : public EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable
			{
			private:
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueId_ev_uint8_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueId_ev_uint8_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCreator_void_CMovableObjectFactory_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCreator_void_CMovableObjectFactory_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getCreator_CMovableObjectFactory_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getCreator_CMovableObjectFactory_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyManager_void_CSceneManager_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyManager_void_CSceneManager_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getManager_CSceneManager_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getManager_CSceneManager_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getName_EVString_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getName_EVString_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getMovableType_EVString_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getMovableType_EVString_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentNode_CNode_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentNode_CNode_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentSceneNode_CSceneNode_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentSceneNode_CSceneNode_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isParentTagPoint_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isParentTagPoint_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isAttached_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isAttached_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_detachFromParent_void_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_detachFromParent_void_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isInScene_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isInScene_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyMoved_void_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyMoved_void_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyLightsQueried_void_LightList_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyLightsQueried_void_LightList_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightQueriedListener_void_CLightQueriedListener_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightQueriedListener_void_CLightQueriedListener_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightQueriedListener_CLightQueriedListener_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightQueriedListener_CLightQueriedListener_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightListUpdated_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightListUpdated_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightListUpdated_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightListUpdated_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCurrentCamera_void_CCamera_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCurrentCamera_void_CCamera_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingRadius_Real_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingRadius_Real_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__updateRenderQueue_void_CRenderQueue_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__updateRenderQueue_void_CRenderQueue_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisible_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisible_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisible_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisible_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isVisible_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isVisible_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMaxDistance_void_Real_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMaxDistance_void_Real_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMaxDistance_Real_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMaxDistance_Real_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinDistance_void_Real_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinDistance_void_Real_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinDistance_Real_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinDistance_Real_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinPixelSize_void_Real_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinPixelSize_void_Real_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinPixelSize_Real_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinPixelSize_Real_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectionColour_void_CColourValue_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectionColour_void_CColourValue_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelected_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelected_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelected_IntVector_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelected_IntVector_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_renderSelection_void_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_renderSelection_void_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_clearSelection_void_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_clearSelection_void_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_startEditing_ev_bool_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_startEditing_ev_bool_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_endEditing_void_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_endEditing_void_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEditBoundingBox_CEditBoundingBox_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEditBoundingBox_CEditBoundingBox_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroup_void_ev_uint8_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroup_void_ev_uint8_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueGroup_ev_uint8_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueGroup_ev_uint8_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getParentNodeFullTransform_CMatrix4_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getParentNodeFullTransform_CMatrix4_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeQueryFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeQueryFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getQueryFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getQueryFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeVisibilityFlags_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeVisibilityFlags_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisibilityFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisibilityFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addListener_void_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addListener_void_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeListener_void_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeListener_void_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_existListener_ev_bool_CMovableObjectListener_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_existListener_ev_bool_CMovableObjectListener_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListenerCount_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListenerCount_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListener_CMovableObjectListener_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListener_CMovableObjectListener_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_queryLights_LightList_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_queryLights_LightList_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightMask_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightMask_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightMask_void_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightMask_void_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getLightList_LightList_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getLightList_LightList_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setCastShadows_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setCastShadows_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getReceivesShadows_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getReceivesShadows_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getTypeFlags_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getTypeFlags_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setDebugDisplayEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setDebugDisplayEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isDebugDisplayEnabled_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isDebugDisplayEnabled_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getCastShadows_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getCastShadows_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEdgeList_CEdgeData_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEdgeList_CEdgeData_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_hasEdgeList_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_hasEdgeList_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightCapBounds_CAxisAlignedBox_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightCapBounds_CAxisAlignedBox_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getPointExtrusionDistance_Real_CLight_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getPointExtrusionDistance_Real_CLight_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback;
				EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback;
			public:
				CInstanceBatchInternalMovableProxy(EarthView::World::Core::CNameValuePairList *pList) : CInstanceBatchInternalMovable(pList)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueId_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCreator_void_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getCreator_CMovableObjectFactory_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyManager_void_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getManager_CSceneManager_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getMovableType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentNode_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentSceneNode_CSceneNode_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isParentTagPoint_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isAttached_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_detachFromParent_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isInScene_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyMoved_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyLightsQueried_void_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightQueriedListener_void_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightQueriedListener_CLightQueriedListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightListUpdated_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightListUpdated_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCurrentCamera_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingRadius_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__updateRenderQueue_void_CRenderQueue_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMaxDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMaxDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinDistance_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinDistance_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinPixelSize_void_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinPixelSize_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectionColour_void_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelected_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelected_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_renderSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_clearSelection_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_startEditing_ev_bool_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_endEditing_void_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEditBoundingBox_CEditBoundingBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroup_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueGroup_ev_uint8_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getParentNodeFullTransform_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeQueryFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getQueryFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeVisibilityFlags_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisibilityFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeListener_void_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_existListener_ev_bool_CMovableObjectListener_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListenerCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListener_CMovableObjectListener_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_queryLights_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightMask_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightMask_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getLightList_LightList_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setCastShadows_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getReceivesShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getTypeFlags_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setDebugDisplayEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isDebugDisplayEnabled_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getCastShadows_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEdgeList_CEdgeData_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_hasEdgeList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightCapBounds_CAxisAlignedBox_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getPointExtrusionDistance_Real_CLight_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueId_ev_uint8(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueId_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueId_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCreator_void_CMovableObjectFactory(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCreator_void_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCreator_void_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getCreator_CMovableObjectFactory(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getCreator_CMovableObjectFactory_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getCreator_CMovableObjectFactory_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyManager_void_CSceneManager(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyManager_void_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyManager_void_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getManager_CSceneManager(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getManager_CSceneManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getManager_CSceneManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getName_EVString(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getMovableType_EVString(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getMovableType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getMovableType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentNode_CNode(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentSceneNode_CSceneNode(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentSceneNode_CSceneNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentSceneNode_CSceneNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isParentTagPoint_ev_bool(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isParentTagPoint_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isParentTagPoint_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_ev_bool(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isAttached_ev_bool(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isAttached_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isAttached_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_detachFromParent_void(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_detachFromParent_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_detachFromParent_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isInScene_ev_bool(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isInScene_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isInScene_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyMoved_void(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyMoved_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyMoved_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyLightsQueried_void_LightList(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyLightsQueried_void_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyLightsQueried_void_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightQueriedListener_void_CLightQueriedListener(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightQueriedListener_void_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightQueriedListener_CLightQueriedListener(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightQueriedListener_CLightQueriedListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightQueriedListener_CLightQueriedListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightListUpdated_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightListUpdated_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightListUpdated_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightListUpdated_void_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightListUpdated_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightListUpdated_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCurrentCamera_void_CCamera(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCurrentCamera_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCurrentCamera_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingRadius_Real(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingRadius_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingRadius_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_ev_bool(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__updateRenderQueue_void_CRenderQueue(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__updateRenderQueue_void_CRenderQueue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__updateRenderQueue_void_CRenderQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisible_void_ev_bool(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisible_ev_bool(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isVisible_ev_bool(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMaxDistance_void_Real(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMaxDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMaxDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMaxDistance_Real(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMaxDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMaxDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinDistance_void_Real(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinDistance_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinDistance_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinDistance_Real(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinDistance_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinDistance_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinPixelSize_void_Real(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinPixelSize_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinPixelSize_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinPixelSize_Real(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinPixelSize_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinPixelSize_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectionColour_void_CColourValue(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectionColour_void_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectionColour_void_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelected_ev_bool_IntVector(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelected_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelected_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelected_IntVector(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelected_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelected_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_renderSelection_void(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_renderSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_renderSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_clearSelection_void(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_startEditing_ev_bool_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_startEditing_ev_bool_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_startEditing_ev_bool_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_endEditing_void(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_endEditing_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_endEditing_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEditBoundingBox_CEditBoundingBox(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEditBoundingBox_CEditBoundingBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEditBoundingBox_CEditBoundingBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroup_void_ev_uint8(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroup_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroup_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueGroup_ev_uint8(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueGroup_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueGroup_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getParentNodeFullTransform_CMatrix4(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getParentNodeFullTransform_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getParentNodeFullTransform_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setQueryFlags_void_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addQueryFlags_void_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeQueryFlags_void_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeQueryFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeQueryFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getQueryFlags_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getQueryFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getQueryFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeVisibilityFlags_void_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeVisibilityFlags_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeVisibilityFlags_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisibilityFlags_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisibilityFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisibilityFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addListener_void_CMovableObjectListener(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeListener_void_CMovableObjectListener(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeListener_void_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeListener_void_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_existListener_ev_bool_CMovableObjectListener(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_existListener_ev_bool_CMovableObjectListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_existListener_ev_bool_CMovableObjectListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListenerCount_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListenerCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListenerCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListener_CMovableObjectListener_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListener_CMovableObjectListener_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_queryLights_LightList(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_queryLights_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_queryLights_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightMask_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightMask_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightMask_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightMask_void_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightMask_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightMask_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getLightList_LightList(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getLightList_LightList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getLightList_LightList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setCastShadows_void_ev_bool(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setCastShadows_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setCastShadows_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getReceivesShadows_ev_bool(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getReceivesShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getReceivesShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getTypeFlags_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getTypeFlags_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getTypeFlags_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_ev_bool(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setDebugDisplayEnabled_void_ev_bool(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setDebugDisplayEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isDebugDisplayEnabled_ev_bool(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isDebugDisplayEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isDebugDisplayEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getCastShadows_ev_bool(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getCastShadows_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getCastShadows_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEdgeList_CEdgeData(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEdgeList_CEdgeData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEdgeList_CEdgeData_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_hasEdgeList_ev_bool(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_hasEdgeList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_hasEdgeList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightCapBounds_CAxisAlignedBox(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightCapBounds_CAxisAlignedBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightCapBounds_CAxisAlignedBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getPointExtrusionDistance_Real_CLight(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getPointExtrusionDistance_Real_CLight_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getPointExtrusionDistance_Real_CLight_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback = pCallback;
				}
				virtual Real getBoundingRadius() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingRadius_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingRadius_Real_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getBoundingRadius();
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getBoundingBox();
				}
				virtual EVString getMovableType() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getMovableType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getMovableType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getMovableType();
				}
				virtual void _notifyCurrentCamera(_in EarthView::World::Graphic::CCamera* ref_cam)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCurrentCamera_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCurrentCamera_void_CCamera_Callback(ref_cam);
					}
					else
						return this->CInstanceBatchInternalMovable::_notifyCurrentCamera(ref_cam);
				}
				virtual void _updateRenderQueue(_in EarthView::World::Graphic::CRenderQueue* queue)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__updateRenderQueue_void_CRenderQueue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__updateRenderQueue_void_CRenderQueue_Callback(queue);
					}
					else
						return this->CInstanceBatchInternalMovable::_updateRenderQueue(queue);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_Callback(visitor);
					}
					else
						return this->CInstanceBatchInternalMovable::visitRenderables(visitor);
				}
				virtual void visitRenderables(_in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_ev_bool_Callback(visitor, debugRenderables);
					}
					else
						return this->CInstanceBatchInternalMovable::visitRenderables(visitor, debugRenderables);
				}
				virtual void _notifyAttached(_in EarthView::World::Graphic::CNode* parent, _in ev_bool isTagPoint)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_ev_bool_Callback(parent, isTagPoint);
					}
					else
						return this->CInstanceBatchInternalMovable::_notifyAttached(parent, isTagPoint);
				}
				virtual const EarthView::World::Graphic::LightList& queryLights() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_queryLights_LightList_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::LightList& returnValue = *(EarthView::World::Graphic::LightList*)m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_queryLights_LightList_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::queryLights();
				}
				virtual ev_bool getReceivesShadows()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getReceivesShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getReceivesShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getReceivesShadows();
				}
				virtual ev_bool setSelected(_in const EarthView::World::Core::IntVector& objIndics)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelected_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelected_ev_bool_IntVector_Callback(&objIndics);
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::setSelected(objIndics);
				}
				virtual EarthView::World::Core::IntVector getSelected() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelected_IntVector_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::IntVector returnValue = *(EarthView::World::Core::IntVector*)m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelected_IntVector_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getSelected();
				}
				virtual void setSelectionColour(_in const EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectionColour_void_CColourValue_Callback(&colour);
					}
					else
						return this->CInstanceBatchInternalMovable::setSelectionColour(colour);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, &point);
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::selectBy(ray, viewport, prepareToRenderSelection, objIndex, point);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback(&aabb, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::selectBy(aabb, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectBy(_in const EarthView::World::Spatial::Math::CSphere& sphere, _in ev_bool prepareToRenderSelection, _out EarthView::World::Core::IntVector& indexVec)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback(&sphere, prepareToRenderSelection, &indexVec);
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::selectBy(sphere, prepareToRenderSelection, indexVec);
				}
				virtual ev_bool selectComponentBy(_in const EarthView::World::Spatial::Math::CRay& ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out EarthView::World::Spatial::Math::CVector3& point)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback(&ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, &point);
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::selectComponentBy(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
				}
				virtual void renderSelection()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_renderSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_renderSelection_void_Callback();
					}
					else
						return this->CInstanceBatchInternalMovable::renderSelection();
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_clearSelection_void_Callback();
					}
					else
						return this->CInstanceBatchInternalMovable::clearSelection();
				}
				virtual ev_bool startEditing(_in ev_uint32 objectIndex)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_startEditing_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_startEditing_ev_bool_ev_uint32_Callback(objectIndex);
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::startEditing(objectIndex);
				}
				virtual void endEditing()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_endEditing_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_endEditing_void_Callback();
					}
					else
						return this->CInstanceBatchInternalMovable::endEditing();
				}
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEditBoundingBox_CEditBoundingBox_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEditBoundingBox* returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEditBoundingBox_CEditBoundingBox_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getEditBoundingBox();
				}
				virtual ev_bool getSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _inout EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual ev_bool setSelectedObjectWorldMatrix(_in ev_uint32 objectIndex, _in const EarthView::World::Spatial::Math::CMatrix4& matrix)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback(objectIndex, &matrix);
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::setSelectedObjectWorldMatrix(objectIndex, matrix);
				}
				virtual const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* getAnimableObjectPtr()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getAnimableObjectPtr();
				}
				virtual ev_uint8 getRenderQueueId() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueId_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueId_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getRenderQueueId();
				}
				virtual void _notifyCreator(_in EarthView::World::Graphic::CMovableObjectFactory* ref_fact)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCreator_void_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCreator_void_CMovableObjectFactory_Callback(ref_fact);
					}
					else
						return this->CInstanceBatchInternalMovable::_notifyCreator(ref_fact);
				}
				virtual EarthView::World::Graphic::CMovableObjectFactory* _getCreator() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getCreator_CMovableObjectFactory_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObjectFactory* returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getCreator_CMovableObjectFactory_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::_getCreator();
				}
				virtual void _notifyManager(_in EarthView::World::Graphic::CSceneManager* ref_mgr)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyManager_void_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyManager_void_CSceneManager_Callback(ref_mgr);
					}
					else
						return this->CInstanceBatchInternalMovable::_notifyManager(ref_mgr);
				}
				virtual EarthView::World::Graphic::CSceneManager* _getManager() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getManager_CSceneManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getManager_CSceneManager_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::_getManager();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getName();
				}
				virtual EarthView::World::Graphic::CNode* getParentNode() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getParentNode();
				}
				virtual EarthView::World::Graphic::CSceneNode* getParentSceneNode() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentSceneNode_CSceneNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSceneNode* returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentSceneNode_CSceneNode_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getParentSceneNode();
				}
				virtual ev_bool isParentTagPoint() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isParentTagPoint_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isParentTagPoint_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::isParentTagPoint();
				}
				virtual ev_bool isAttached() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isAttached_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::isAttached();
				}
				virtual void detachFromParent()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_detachFromParent_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_detachFromParent_void_Callback();
					}
					else
						return this->CInstanceBatchInternalMovable::detachFromParent();
				}
				virtual ev_bool isInScene() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isInScene_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isInScene_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::isInScene();
				}
				virtual void _notifyMoved()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyMoved_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyMoved_void_Callback();
					}
					else
						return this->CInstanceBatchInternalMovable::_notifyMoved();
				}
				virtual void _notifyLightsQueried(_in const EarthView::World::Graphic::LightList* lightList)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyLightsQueried_void_LightList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyLightsQueried_void_LightList_Callback(lightList);
					}
					else
						return this->CInstanceBatchInternalMovable::_notifyLightsQueried(lightList);
				}
				virtual void setLightQueriedListener(_in EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightQueriedListener_void_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightQueriedListener_void_CLightQueriedListener_Callback(listener);
					}
					else
						return this->CInstanceBatchInternalMovable::setLightQueriedListener(listener);
				}
				virtual EarthView::World::Graphic::CMovableObject::CLightQueriedListener* getLightQueriedListener()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightQueriedListener_CLightQueriedListener_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CLightQueriedListener* returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightQueriedListener_CLightQueriedListener_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getLightQueriedListener();
				}
				virtual ev_uint32 getLightListUpdated() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightListUpdated_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightListUpdated_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getLightListUpdated();
				}
				virtual void setLightListUpdated(_in ev_uint32 frame)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightListUpdated_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightListUpdated_void_ev_uint32_Callback(frame);
					}
					else
						return this->CInstanceBatchInternalMovable::setLightListUpdated(frame);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox(_in ev_bool derive) const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getWorldBoundingBox(derive);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getWorldBoundingBox();
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere(_in ev_bool derive) const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback(derive);
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getWorldBoundingSphere(derive);
				}
				virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CSphere& returnValue = *(EarthView::World::Spatial::Math::CSphere*)m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getWorldBoundingSphere();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CInstanceBatchInternalMovable::setVisible(visible);
				}
				virtual ev_bool getVisible() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getVisible();
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::isVisible();
				}
				virtual void setRenderingMaxDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMaxDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMaxDistance_void_Real_Callback(dist);
					}
					else
						return this->CInstanceBatchInternalMovable::setRenderingMaxDistance(dist);
				}
				virtual Real getRenderingMaxDistance() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMaxDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMaxDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getRenderingMaxDistance();
				}
				virtual void setRenderingMinDistance(_in Real dist)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinDistance_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinDistance_void_Real_Callback(dist);
					}
					else
						return this->CInstanceBatchInternalMovable::setRenderingMinDistance(dist);
				}
				virtual Real getRenderingMinDistance() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinDistance_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinDistance_Real_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getRenderingMinDistance();
				}
				virtual void setRenderingMinPixelSize(_in Real pixelSize)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinPixelSize_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinPixelSize_void_Real_Callback(pixelSize);
					}
					else
						return this->CInstanceBatchInternalMovable::setRenderingMinPixelSize(pixelSize);
				}
				virtual Real getRenderingMinPixelSize() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinPixelSize_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinPixelSize_Real_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getRenderingMinPixelSize();
				}
				virtual void setRenderQueueGroup(_in ev_uint8 queueID)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroup_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroup_void_ev_uint8_Callback(queueID);
					}
					else
						return this->CInstanceBatchInternalMovable::setRenderQueueGroup(queueID);
				}
				virtual void setRenderQueueGroupAndPriority(_in ev_uint8 queueID, _in ev_uint16 priority)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback(queueID, priority);
					}
					else
						return this->CInstanceBatchInternalMovable::setRenderQueueGroupAndPriority(queueID, priority);
				}
				virtual ev_uint8 getRenderQueueGroup() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueGroup_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueGroup_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getRenderQueueGroup();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getParentNodeFullTransform() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getParentNodeFullTransform_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getParentNodeFullTransform_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::_getParentNodeFullTransform();
				}
				virtual void setQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstanceBatchInternalMovable::setQueryFlags(flags);
				}
				virtual void addQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstanceBatchInternalMovable::addQueryFlags(flags);
				}
				virtual void removeQueryFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeQueryFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeQueryFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstanceBatchInternalMovable::removeQueryFlags(flags);
				}
				virtual ev_uint32 getQueryFlags() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getQueryFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getQueryFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getQueryFlags();
				}
				virtual void setVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstanceBatchInternalMovable::setVisibilityFlags(flags);
				}
				virtual void addVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstanceBatchInternalMovable::addVisibilityFlags(flags);
				}
				virtual void removeVisibilityFlags(_in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeVisibilityFlags_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeVisibilityFlags_void_ev_uint32_Callback(flags);
					}
					else
						return this->CInstanceBatchInternalMovable::removeVisibilityFlags(flags);
				}
				virtual ev_uint32 getVisibilityFlags() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisibilityFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisibilityFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getVisibilityFlags();
				}
				virtual void addListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addListener_void_CMovableObjectListener_Callback(ref_listener);
					}
					else
						return this->CInstanceBatchInternalMovable::addListener(ref_listener);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeListener_void_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeListener_void_CMovableObjectListener_Callback(listener);
					}
					else
						return this->CInstanceBatchInternalMovable::removeListener(listener);
				}
				virtual ev_bool existListener(_in EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener) const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_existListener_ev_bool_CMovableObjectListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_existListener_ev_bool_CMovableObjectListener_Callback(listener);
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::existListener(listener);
				}
				virtual ev_uint32 getListenerCount() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListenerCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListenerCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getListenerCount();
				}
				virtual EarthView::World::Graphic::CMovableObject::CMovableObjectListener* getListener(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListener_CMovableObjectListener_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CMovableObject::CMovableObjectListener* returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListener_CMovableObjectListener_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getListener(index);
				}
				virtual ev_uint32 getLightMask() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightMask_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightMask_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getLightMask();
				}
				virtual void setLightMask(_in ev_uint32 lightMask)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightMask_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightMask_void_ev_uint32_Callback(lightMask);
					}
					else
						return this->CInstanceBatchInternalMovable::setLightMask(lightMask);
				}
				virtual EarthView::World::Graphic::LightList* _getLightList()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getLightList_LightList_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::LightList* returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getLightList_LightList_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::_getLightList();
				}
				virtual EarthView::World::Graphic::CEdgeData* getEdgeList()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEdgeList_CEdgeData_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CEdgeData* returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEdgeList_CEdgeData_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getEdgeList();
				}
				virtual ev_bool hasEdgeList()
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_hasEdgeList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_hasEdgeList_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::hasEdgeList();
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
				}
				virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(_in EarthView::World::Graphic::ShadowTechnique shadowTechnique, _in const EarthView::World::Graphic::CLight* light, _in EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, _in ev_bool extrudeVertices, _in Real extrusionDist)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator returnValue = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*)m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback((int)shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
				}
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getLightCapBounds() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightCapBounds_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightCapBounds_CAxisAlignedBox_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getLightCapBounds();
				}
				virtual EarthView::World::Spatial::Math::CAxisAlignedBox getDarkCapBounds(_in const EarthView::World::Graphic::CLight& light, _in Real dirLightExtrusionDist) const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback(&light, dirLightExtrusionDist);
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getDarkCapBounds(light, dirLightExtrusionDist);
				}
				virtual void setCastShadows(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setCastShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setCastShadows_void_ev_bool_Callback(enabled);
					}
					else
						return this->CInstanceBatchInternalMovable::setCastShadows(enabled);
				}
				virtual ev_bool getCastShadows() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getCastShadows_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getCastShadows_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getCastShadows();
				}
				virtual Real getPointExtrusionDistance(_in const EarthView::World::Graphic::CLight* l) const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getPointExtrusionDistance_Real_CLight_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getPointExtrusionDistance_Real_CLight_Callback(l);
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getPointExtrusionDistance(l);
				}
				virtual ev_uint32 getTypeFlags() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getTypeFlags_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getTypeFlags_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::getTypeFlags();
				}
				virtual void setDebugDisplayEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setDebugDisplayEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setDebugDisplayEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CInstanceBatchInternalMovable::setDebugDisplayEnabled(enabled);
				}
				virtual ev_bool isDebugDisplayEnabled() const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isDebugDisplayEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isDebugDisplayEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CInstanceBatchInternalMovable::isDebugDisplayEnabled();
				}
				virtual void updateEdgeListLightFacing(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Spatial::Math::CVector4& lightPos)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback(edgeData, &lightPos);
					}
					else
						return this->CInstanceBatchInternalMovable::updateEdgeListLightFacing(edgeData, lightPos);
				}
				virtual void generateShadowVolume(_in EarthView::World::Graphic::CEdgeData* edgeData, _in const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr& indexBuffer, _in const EarthView::World::Graphic::CLight* light, _inout EarthView::World::Graphic::CShadowCaster::ShadowRenderableList& shadowRenderables, _in ev_uint32 flags)
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback(edgeData, &indexBuffer, light, &shadowRenderables, flags);
					}
					else
						return this->CInstanceBatchInternalMovable::generateShadowVolume(edgeData, indexBuffer, light, shadowRenderables, flags);
				}
				virtual void extrudeBounds(_inout EarthView::World::Spatial::Math::CAxisAlignedBox& box, _in const EarthView::World::Spatial::Math::CVector4& lightPos, _in Real extrudeDist) const
				{
					if(m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback(&box, &lightPos, extrudeDist);
					}
					else
						return this->CInstanceBatchInternalMovable::extrudeBounds(box, lightPos, extrudeDist);
				}
			};
			REGISTER_FACTORY_CLASS(CInstanceBatchInternalMovableProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSceneManger_CSceneManager(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->getSceneManger();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingRadius_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::getBoundingRadius();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getBoundingRadius();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingRadius_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingRadius_Real_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingRadius_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingRadius_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::getBoundingRadius();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingBox_CAxisAlignedBox(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::getBoundingBox();
					const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getBoundingBox();
					const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getBoundingBox_CAxisAlignedBox_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::getBoundingBox();
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getMovableType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::getMovableType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getMovableType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getMovableType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getMovableType_EVString_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getMovableType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getMovableType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::getMovableType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCurrentCamera_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* ref_cam )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::_notifyCurrentCamera(ref_cam);
				else
					ptrNativeObject->_notifyCurrentCamera(ref_cam);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCurrentCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCurrentCamera_void_CCamera_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCurrentCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCurrentCamera_void_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* ref_cam )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::_notifyCurrentCamera(ref_cam);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__updateRenderQueue_void_CRenderQueue(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::_updateRenderQueue(queue);
				else
					ptrNativeObject->_updateRenderQueue(queue);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__updateRenderQueue_void_CRenderQueue( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__updateRenderQueue_void_CRenderQueue_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__updateRenderQueue_void_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__updateRenderQueue_void_CRenderQueue_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::_updateRenderQueue(queue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::visitRenderables(visitor);
				else
					ptrNativeObject->visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::visitRenderables(visitor, debugRenderables);
				else
					ptrNativeObject->visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_visitRenderables_void_CVisitor_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* parent, _in ev_bool isTagPoint )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::_notifyAttached(parent, isTagPoint);
				else
					ptrNativeObject->_notifyAttached(parent, isTagPoint);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_ev_bool_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* parent, _in ev_bool isTagPoint )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::_notifyAttached(parent, isTagPoint);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_queryLights_LightList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::queryLights();
					const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->queryLights();
					const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_queryLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_queryLights_LightList_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_queryLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_queryLights_LightList_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::queryLights();
				const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getReceivesShadows_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::getReceivesShadows();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getReceivesShadows();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getReceivesShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getReceivesShadows_ev_bool_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getReceivesShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getReceivesShadows_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::getReceivesShadows();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelected_ev_bool_IntVector(void *pObjectXXXX, _in const void* objIndics )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::setSelected(*(EarthView::World::Core::IntVector*)objIndics);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->setSelected(*(EarthView::World::Core::IntVector*)objIndics);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelected_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelected_ev_bool_IntVector_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelected_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelected_ev_bool_IntVector_NoVirtual(void *pObjectXXXX, _in const void* objIndics )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::setSelected(*(EarthView::World::Core::IntVector*)objIndics);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelected_IntVector(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::IntVector objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::getSelected();
					EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::IntVector objXXXX = ptrNativeObject->getSelected();
					EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelected_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelected_IntVector_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelected_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelected_IntVector_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				EarthView::World::Core::IntVector objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::getSelected();
				EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectionColour_void_CColourValue(void *pObjectXXXX, _in const void* colour )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::setSelectionColour(*(EarthView::World::Graphic::CColourValue*)colour);
				else
					ptrNativeObject->setSelectionColour(*(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectionColour_void_CColourValue_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectionColour_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectionColour_void_CColourValue_NoVirtual(void *pObjectXXXX, _in const void* colour )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::setSelectionColour(*(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(void *pObjectXXXX, _in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::selectBy(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)aabb, prepareToRenderSelection, *(EarthView::World::Core::IntVector*)indexVec);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->selectBy(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)aabb, prepareToRenderSelection, *(EarthView::World::Core::IntVector*)indexVec);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_NoVirtual(void *pObjectXXXX, _in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::selectBy(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)aabb, prepareToRenderSelection, *(EarthView::World::Core::IntVector*)indexVec);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector(void *pObjectXXXX, _in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::selectBy(*(EarthView::World::Spatial::Math::CSphere*)sphere, prepareToRenderSelection, *(EarthView::World::Core::IntVector*)indexVec);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->selectBy(*(EarthView::World::Spatial::Math::CSphere*)sphere, prepareToRenderSelection, *(EarthView::World::Core::IntVector*)indexVec);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectBy_ev_bool_CSphere_ev_bool_IntVector_NoVirtual(void *pObjectXXXX, _in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::selectBy(*(EarthView::World::Spatial::Math::CSphere*)sphere, prepareToRenderSelection, *(EarthView::World::Core::IntVector*)indexVec);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_renderSelection_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::renderSelection();
				else
					ptrNativeObject->renderSelection();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_renderSelection_void( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_renderSelection_void_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_renderSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_renderSelection_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::renderSelection();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_clearSelection_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::clearSelection();
				else
					ptrNativeObject->clearSelection();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_clearSelection_void( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_clearSelection_void_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_clearSelection_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::clearSelection();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_startEditing_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 objectIndex )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::startEditing(objectIndex);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->startEditing(objectIndex);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_startEditing_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_startEditing_ev_bool_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_startEditing_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_startEditing_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 objectIndex )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::startEditing(objectIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_endEditing_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::endEditing();
				else
					ptrNativeObject->endEditing();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_endEditing_void( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_endEditing_void_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_endEditing_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_endEditing_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::endEditing();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEditBoundingBox*  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEditBoundingBox_CEditBoundingBox(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CEditBoundingBox* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::getEditBoundingBox();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CEditBoundingBox* objXXXX = ptrNativeObject->getEditBoundingBox();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEditBoundingBox_CEditBoundingBox( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEditBoundingBox_CEditBoundingBox_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEditBoundingBox_CEditBoundingBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEditBoundingBox*  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEditBoundingBox_CEditBoundingBox_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				EarthView::World::Graphic::CEditBoundingBox* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::getEditBoundingBox();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(void *pObjectXXXX, _in ev_uint32 objectIndex, _inout void* matrix )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::getSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_NoVirtual(void *pObjectXXXX, _in ev_uint32 objectIndex, _inout void* matrix )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::getSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(void *pObjectXXXX, _in ev_uint32 objectIndex, _in const void* matrix )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::setSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->setSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_NoVirtual(void *pObjectXXXX, _in ev_uint32 objectIndex, _in const void* matrix )
			{
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable::setSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceBatch*  _stdcall EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParent_CInstanceBatch(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceBatch* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getAnimableObjectPtr_CMovableObjectInternalAnimableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueId_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueId_ev_uint8_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueId_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCreator_void_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCreator_void_CMovableObjectFactory_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyCreator_void_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getCreator_CMovableObjectFactory( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getCreator_CMovableObjectFactory_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getCreator_CMovableObjectFactory(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyManager_void_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyManager_void_CSceneManager_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyManager_void_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getManager_CSceneManager( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getManager_CSceneManager_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getManager_CSceneManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getName_EVString_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentNode_CNode( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentNode_CNode_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentSceneNode_CSceneNode( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentSceneNode_CSceneNode_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getParentSceneNode_CSceneNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isParentTagPoint_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isParentTagPoint_ev_bool_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isParentTagPoint_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyAttached_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isAttached_ev_bool_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isAttached_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_detachFromParent_void( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_detachFromParent_void_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_detachFromParent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isInScene_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isInScene_ev_bool_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isInScene_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyMoved_void( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyMoved_void_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyMoved_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyLightsQueried_void_LightList( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyLightsQueried_void_LightList_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__notifyLightsQueried_void_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightQueriedListener_void_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightQueriedListener_void_CLightQueriedListener_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightQueriedListener_void_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightQueriedListener_CLightQueriedListener( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightQueriedListener_CLightQueriedListener_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightQueriedListener_CLightQueriedListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightListUpdated_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightListUpdated_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightListUpdated_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightListUpdated_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightListUpdated_void_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightListUpdated_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_ev_bool_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingSphere_CSphere(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisible_void_ev_bool_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisible_ev_bool_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isVisible_ev_bool_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMaxDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMaxDistance_void_Real_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMaxDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMaxDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMaxDistance_Real_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMaxDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinDistance_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinDistance_void_Real_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinDistance_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinDistance_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinDistance_Real_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinDistance_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinPixelSize_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinPixelSize_void_Real_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderingMinPixelSize_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinPixelSize_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinPixelSize_Real_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderingMinPixelSize_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroup_void_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroup_void_ev_uint8_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroup_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setRenderQueueGroupAndPriority_void_ev_uint8_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueGroup_ev_uint8( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueGroup_ev_uint8_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getRenderQueueGroup_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getParentNodeFullTransform_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getParentNodeFullTransform_CMatrix4_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getParentNodeFullTransform_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeQueryFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeQueryFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeQueryFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getQueryFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getQueryFlags_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getQueryFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeVisibilityFlags_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeVisibilityFlags_void_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeVisibilityFlags_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisibilityFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisibilityFlags_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getVisibilityFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_addListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeListener_void_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeListener_void_CMovableObjectListener_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_removeListener_void_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_existListener_ev_bool_CMovableObjectListener( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_existListener_ev_bool_CMovableObjectListener_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_existListener_ev_bool_CMovableObjectListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListener_CMovableObjectListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListener_CMovableObjectListener_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getListener_CMovableObjectListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightMask_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightMask_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightMask_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightMask_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightMask_void_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setLightMask_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getLightList_LightList( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getLightList_LightList_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable__getLightList_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setCastShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setCastShadows_void_ev_bool_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setCastShadows_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getTypeFlags_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getTypeFlags_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getTypeFlags_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setDebugDisplayEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setDebugDisplayEnabled_void_ev_bool_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_setDebugDisplayEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isDebugDisplayEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isDebugDisplayEnabled_ev_bool_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_isDebugDisplayEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getCastShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getCastShadows_ev_bool_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getCastShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEdgeList_CEdgeData( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEdgeList_CEdgeData_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getEdgeList_CEdgeData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_hasEdgeList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_hasEdgeList_ev_bool_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_hasEdgeList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getWorldBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightCapBounds_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightCapBounds_CAxisAlignedBox_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getLightCapBounds_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getDarkCapBounds_CAxisAlignedBox_CLight_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getShadowVolumeRenderableIterator_ShadowRenderableListIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getPointExtrusionDistance_Real_CLight( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getPointExtrusionDistance_Real_CLight_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_getPointExtrusionDistance_Real_CLight(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_updateEdgeListLightFacing_void_CEdgeData_CVector4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_generateShadowVolume_void_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real_Callback* pCallback )
			{
				CInstanceBatchInternalMovableProxy* ptr = dynamic_cast<CInstanceBatchInternalMovableProxy*>((EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_CInstanceBatchInternalMovable_extrudeBounds_void_CAxisAlignedBox_CVector4_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CInstanceBatch_getMovableType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getMovableType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getMovableType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getMovableType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getMovableType_EVString_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getMovableType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CInstanceBatch_getMovableType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getMovableType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch__notifyCurrentCamera_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* ref_cam )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::_notifyCurrentCamera(ref_cam);
				else
					ptrNativeObject->_notifyCurrentCamera(ref_cam);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch__notifyCurrentCamera_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch__notifyCurrentCamera_void_CCamera_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch__notifyCurrentCamera_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch__notifyCurrentCamera_void_CCamera_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* ref_cam )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::_notifyCurrentCamera(ref_cam);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstanceBatch_getBoundingBox_CAxisAlignedBox(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getBoundingBox();
					const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getBoundingBox();
					const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getBoundingBox_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getBoundingBox_CAxisAlignedBox_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getBoundingBox_CAxisAlignedBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstanceBatch_getBoundingBox_CAxisAlignedBox_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getBoundingBox();
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstanceBatch_getBoundingRadius_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getBoundingRadius();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getBoundingRadius();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getBoundingRadius_Real( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getBoundingRadius_Real_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getBoundingRadius_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstanceBatch_getBoundingRadius_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getBoundingRadius();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch__updateRenderQueue_void_CRenderQueue(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::_updateRenderQueue(queue);
				else
					ptrNativeObject->_updateRenderQueue(queue);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch__updateRenderQueue_void_CRenderQueue( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch__updateRenderQueue_void_CRenderQueue_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch__updateRenderQueue_void_CRenderQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch__updateRenderQueue_void_CRenderQueue_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderQueue* queue )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::_updateRenderQueue(queue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::visitRenderables(visitor);
				else
					ptrNativeObject->visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::visitRenderables(visitor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::visitRenderables(visitor, debugRenderables);
				else
					ptrNativeObject->visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_ev_bool_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_visitRenderables_void_CVisitor_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable::CVisitor* visitor, _in ev_bool debugRenderables )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::visitRenderables(visitor, debugRenderables);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch__notifyAttached_void_CNode_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::_notifyAttached(ref_parent, isTagPoint);
				else
					ptrNativeObject->_notifyAttached(ref_parent, isTagPoint);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch__notifyAttached_void_CNode_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch__notifyAttached_void_CNode_ev_bool_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch__notifyAttached_void_CNode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch__notifyAttached_void_CNode_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_parent, _in ev_bool isTagPoint )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::_notifyAttached(ref_parent, isTagPoint);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_preRender_ev_bool_CSceneManager_CRenderSystem(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::preRender(sm, rsys);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->preRender(sm, rsys);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_preRender_ev_bool_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_preRender_ev_bool_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_preRender_ev_bool_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_preRender_ev_bool_CSceneManager_CRenderSystem_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::preRender(sm, rsys);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_postRender_void_CSceneManager_CRenderSystem(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::postRender(sm, rsys);
				else
					ptrNativeObject->postRender(sm, rsys);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_postRender_void_CSceneManager_CRenderSystem( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_postRender_void_CSceneManager_CRenderSystem_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_postRender_void_CSceneManager_CRenderSystem(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_postRender_void_CSceneManager_CRenderSystem_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm, _in EarthView::World::Graphic::CRenderSystem* rsys )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::postRender(sm, rsys);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_getReceivesShadows_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getReceivesShadows();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getReceivesShadows();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getReceivesShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getReceivesShadows_ev_bool_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getReceivesShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_getReceivesShadows_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getReceivesShadows();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_setSelected_ev_bool_IntVector(void *pObjectXXXX, _in const void* objIndics )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setSelected(*(EarthView::World::Core::IntVector*)objIndics);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_setSelectionColour_void_CColourValue(void *pObjectXXXX, _in const void* colour )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->setSelectionColour(*(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstanceBatch_getSelectionColour_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getSelectionColour();
				const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstanceBatch_getSelected_IntVector(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				EarthView::World::Core::IntVector objXXXX = ptrNativeObject->getSelected();
				EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_setMaterial_void_CMaterialPtr(void *pObjectXXXX, _in const void* matPtr )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->setMaterial(*(EarthView::World::Graphic::CMaterialPtr*)matPtr);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_CVector3_NoVirtual(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out void* point )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::selectBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(void *pObjectXXXX, _in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::selectBy(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)aabb, prepareToRenderSelection, *(EarthView::World::Core::IntVector*)indexVec);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->selectBy(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)aabb, prepareToRenderSelection, *(EarthView::World::Core::IntVector*)indexVec);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CAxisAlignedBox_ev_bool_IntVector_NoVirtual(void *pObjectXXXX, _in const void* aabb, _in ev_bool prepareToRenderSelection, _out void* indexVec )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::selectBy(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)aabb, prepareToRenderSelection, *(EarthView::World::Core::IntVector*)indexVec);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CSphere_ev_bool_IntVector(void *pObjectXXXX, _in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::selectBy(*(EarthView::World::Spatial::Math::CSphere*)sphere, prepareToRenderSelection, *(EarthView::World::Core::IntVector*)indexVec);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->selectBy(*(EarthView::World::Spatial::Math::CSphere*)sphere, prepareToRenderSelection, *(EarthView::World::Core::IntVector*)indexVec);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CSphere_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CSphere_ev_bool_IntVector_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CSphere_ev_bool_IntVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_selectBy_ev_bool_CSphere_ev_bool_IntVector_NoVirtual(void *pObjectXXXX, _in const void* sphere, _in ev_bool prepareToRenderSelection, _out void* indexVec )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::selectBy(*(EarthView::World::Spatial::Math::CSphere*)sphere, prepareToRenderSelection, *(EarthView::World::Core::IntVector*)indexVec);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_selectComponentBy_ev_bool_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_NoVirtual(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in ev_bool prepareToRenderSelection, _out ev_int32& objIndex, _out ev_int32& submeshIndex, _out ev_int32& instanceIndex, _out ev_int32& segmentIndex, _out void* point )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::selectComponentBy(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, *(EarthView::World::Spatial::Math::CVector3*)point);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_renderSelection_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::renderSelection();
				else
					ptrNativeObject->renderSelection();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_renderSelection_void( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_renderSelection_void_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_renderSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_renderSelection_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::renderSelection();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_clearSelection_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::clearSelection();
				else
					ptrNativeObject->clearSelection();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_clearSelection_void( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_clearSelection_void_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_clearSelection_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::clearSelection();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_startEditing_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 objectIndex )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::startEditing(objectIndex);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->startEditing(objectIndex);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_startEditing_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_startEditing_ev_bool_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_startEditing_ev_bool_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_startEditing_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 objectIndex )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::startEditing(objectIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_endEditing_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::endEditing();
				else
					ptrNativeObject->endEditing();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_endEditing_void( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_endEditing_void_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_endEditing_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_endEditing_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::endEditing();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEditBoundingBox*  _stdcall EarthView_World_Graphic_CInstanceBatch_getEditBoundingBox_CEditBoundingBox(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CEditBoundingBox* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getEditBoundingBox();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CEditBoundingBox* objXXXX = ptrNativeObject->getEditBoundingBox();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getEditBoundingBox_CEditBoundingBox( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getEditBoundingBox_CEditBoundingBox_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getEditBoundingBox_CEditBoundingBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEditBoundingBox*  _stdcall EarthView_World_Graphic_CInstanceBatch_getEditBoundingBox_CEditBoundingBox_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				EarthView::World::Graphic::CEditBoundingBox* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getEditBoundingBox();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(void *pObjectXXXX, _in ev_uint32 objectIndex, _inout void* matrix )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_getSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_NoVirtual(void *pObjectXXXX, _in ev_uint32 objectIndex, _inout void* matrix )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(void *pObjectXXXX, _in ev_uint32 objectIndex, _in const void* matrix )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::setSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->setSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_setSelectedObjectWorldMatrix_ev_bool_ev_uint32_CMatrix4_NoVirtual(void *pObjectXXXX, _in ev_uint32 objectIndex, _in const void* matrix )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::setSelectedObjectWorldMatrix(objectIndex, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedEntity*  _stdcall EarthView_World_Graphic_CInstanceBatch_getInstanceEntity_CInstancedEntity_ev_uint32(void *pObjectXXXX, _in ev_uint32 objectIndex )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CInstancedEntity* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getInstanceEntity(objectIndex);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CInstancedEntity* objXXXX = ptrNativeObject->getInstanceEntity(objectIndex);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getInstanceEntity_CInstancedEntity_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getInstanceEntity_CInstancedEntity_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getInstanceEntity_CInstancedEntity_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedEntity*  _stdcall EarthView_World_Graphic_CInstanceBatch_getInstanceEntity_CInstancedEntity_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 objectIndex )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedEntity* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getInstanceEntity(objectIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable*  _stdcall EarthView_World_Graphic_CInstanceBatch_getMovableObjectPtr_CInstanceBatchInternalMovable(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceBatch::CInstanceBatchInternalMovable* objXXXX = ptrNativeObject->getMovableObjectPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CInstanceBatch_getMovableObject_CMovableObject(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getMovableObject();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->getMovableObject();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getMovableObject_CMovableObject( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getMovableObject_CMovableObject_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getMovableObject_CMovableObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObject*  _stdcall EarthView_World_Graphic_CInstanceBatch_getMovableObject_CMovableObject_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObject* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getMovableObject();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_CInstanceBatch_getRenderQueueID_ev_uint8(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->getRenderQueueID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CInstanceBatch_getRenderQueuePriority_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getRenderQueuePriority();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_trackParentNode_ev_bool_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* pNode )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::trackParentNode(pNode);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->trackParentNode(pNode);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_trackParentNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_trackParentNode_ev_bool_CNode_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_trackParentNode_ev_bool_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_trackParentNode_ev_bool_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* pNode )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::trackParentNode(pNode);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CInstanceBatch_getTrackingNode_CNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getTrackingNode();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getTrackingNode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getTrackingNode_CNode( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getTrackingNode_CNode_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getTrackingNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CInstanceBatch_getTrackingNode_CNode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getTrackingNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_onInstancedEntityStateChanged_void_CInstancedEntity(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedEntity* instancedEntity )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::onInstancedEntityStateChanged(instancedEntity);
				else
					ptrNativeObject->onInstancedEntityStateChanged(instancedEntity);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_onInstancedEntityStateChanged_void_CInstancedEntity( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_onInstancedEntityStateChanged_void_CInstancedEntity_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_onInstancedEntityStateChanged_void_CInstancedEntity(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_onInstancedEntityStateChanged_void_CInstancedEntity_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedEntity* instancedEntity )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::onInstancedEntityStateChanged(instancedEntity);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceManager*  _stdcall EarthView_World_Graphic_CInstanceBatch_getOwner_CInstanceManager(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceManager* objXXXX = ptrNativeObject->getOwner();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstanceBatch__getMeshRef_CMeshPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				EarthView::World::Graphic::CMeshPtr& objXXXX = ptrNativeObject->_getMeshRef();
				EarthView::World::Graphic::CMeshPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch__setInstancesPerBatch_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  instancesPerBatch )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->_setInstancesPerBatch(instancesPerBatch);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::IndexMap*  _stdcall EarthView_World_Graphic_CInstanceBatch__getIndexToBoneMap_IndexMap(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				const EarthView::World::Graphic::IndexMap* objXXXX = ptrNativeObject->_getIndexToBoneMap();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch__supportsSkeletalAnimation_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_supportsSkeletalAnimation();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch__updateBounds_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->_updateBounds();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstanceBatch_calculateMaxNumInstances_ev_size_t_CSubMesh_ev_uint16(void *pObjectXXXX, _in const EarthView::World::Graphic::CSubMesh* baseSubMesh, _in ev_uint16 flags )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::calculateMaxNumInstances(baseSubMesh, flags);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->calculateMaxNumInstances(baseSubMesh, flags);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_calculateMaxNumInstances_ev_size_t_CSubMesh_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_calculateMaxNumInstances_ev_size_t_CSubMesh_ev_uint16_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_calculateMaxNumInstances_ev_size_t_CSubMesh_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstanceBatch_calculateMaxNumInstances_ev_size_t_CSubMesh_ev_uint16_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CSubMesh* baseSubMesh, _in ev_uint16 flags )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::calculateMaxNumInstances(baseSubMesh, flags);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstanceBatch_build_CRenderOperation_CSubMesh(void *pObjectXXXX, _in const EarthView::World::Graphic::CSubMesh* baseSubMesh )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CRenderOperation objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::build(baseSubMesh);
					EarthView::World::Graphic::CRenderOperation *pXXXX = new EarthView::World::Graphic::CRenderOperation(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CRenderOperation objXXXX = ptrNativeObject->build(baseSubMesh);
					EarthView::World::Graphic::CRenderOperation *pXXXX = new EarthView::World::Graphic::CRenderOperation(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_build_CRenderOperation_CSubMesh( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_build_CRenderOperation_CSubMesh_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_build_CRenderOperation_CSubMesh(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstanceBatch_build_CRenderOperation_CSubMesh_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CSubMesh* baseSubMesh )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				EarthView::World::Graphic::CRenderOperation objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::build(baseSubMesh);
				EarthView::World::Graphic::CRenderOperation *pXXXX = new EarthView::World::Graphic::CRenderOperation(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_buildFrom_void_CSubMesh_CRenderOperation(void *pObjectXXXX, _in const EarthView::World::Graphic::CSubMesh* baseSubMesh, _in const void* renderOperation )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::buildFrom(baseSubMesh, *(EarthView::World::Graphic::CRenderOperation*)renderOperation);
				else
					ptrNativeObject->buildFrom(baseSubMesh, *(EarthView::World::Graphic::CRenderOperation*)renderOperation);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_buildFrom_void_CSubMesh_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_buildFrom_void_CSubMesh_CRenderOperation_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_buildFrom_void_CSubMesh_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_buildFrom_void_CSubMesh_CRenderOperation_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CSubMesh* baseSubMesh, _in const void* renderOperation )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::buildFrom(baseSubMesh, *(EarthView::World::Graphic::CRenderOperation*)renderOperation);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstanceBatch__getMeshReference_CMeshPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				const EarthView::World::Graphic::CMeshPtr& objXXXX = ptrNativeObject->_getMeshReference();
				const EarthView::World::Graphic::CMeshPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_isBatchFull_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isBatchFull();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_isBatchUnused_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isBatchUnused();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_isBatchReused_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isBatchReused();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CInstanceBatch_getInstancedEntitiesCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getInstancedEntitiesCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_getInstancedEntitiesInUse_void_CInstancedEntityVec(void *pObjectXXXX, _inout void* outEntities )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->getInstancedEntitiesInUse(*(EarthView::World::Graphic::CInstancedEntityVec*)outEntities);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch__boundsDirty_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::_boundsDirty();
				else
					ptrNativeObject->_boundsDirty();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch__boundsDirty_void( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch__boundsDirty_void_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch__boundsDirty_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch__boundsDirty_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::_boundsDirty();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_setStaticAndUpdate_void_ev_bool(void *pObjectXXXX, _in ev_bool bStatic )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::setStaticAndUpdate(bStatic);
				else
					ptrNativeObject->setStaticAndUpdate(bStatic);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_setStaticAndUpdate_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_setStaticAndUpdate_void_ev_bool_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_setStaticAndUpdate_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_setStaticAndUpdate_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bStatic )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::setStaticAndUpdate(bStatic);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_isStatic_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::isStatic();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isStatic();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_isStatic_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_isStatic_ev_bool_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_isStatic_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_isStatic_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::isStatic();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedEntity*  _stdcall EarthView_World_Graphic_CInstanceBatch_createInstancedEntity_CInstancedEntity(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedEntity* objXXXX = ptrNativeObject->createInstancedEntity();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedEntity*  _stdcall EarthView_World_Graphic_CInstanceBatch_createInstancedEntity_CInstancedEntity_ev_bool(void *pObjectXXXX, _in ev_bool bInUse )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedEntity* objXXXX = ptrNativeObject->createInstancedEntity(bInUse);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_removeInstancedEntity_void_CInstancedEntity(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedEntity* instancedEntity )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->removeInstancedEntity(instancedEntity);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_useBoneWorldMatrices_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::useBoneWorldMatrices();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->useBoneWorldMatrices();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_useBoneWorldMatrices_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_useBoneWorldMatrices_ev_bool_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_useBoneWorldMatrices_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceBatch_useBoneWorldMatrices_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::useBoneWorldMatrices();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch__markTransformSharingDirty_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->_markTransformSharingDirty();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstanceBatch_getMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getMaterial();
					const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->getMaterial();
					const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getMaterial_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getMaterial_CMaterialPtr_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getMaterial_CMaterialPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstanceBatch_getMaterial_CMaterialPtr_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getMaterial();
				const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_getRenderOperation_void_CRenderOperation(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
				else
					ptrNativeObject->getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getRenderOperation_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getRenderOperation_void_CRenderOperation_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getRenderOperation_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_getRenderOperation_void_CRenderOperation_NoVirtual(void *pObjectXXXX, _inout void* op )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstanceBatch_getSquaredViewDepth_Real_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getSquaredViewDepth(cam);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getSquaredViewDepth(cam);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getSquaredViewDepth_Real_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getSquaredViewDepth_Real_CCamera_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getSquaredViewDepth_Real_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CInstanceBatch_getSquaredViewDepth_Real_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getSquaredViewDepth(cam);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstanceBatch_getLights_LightList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getLights();
					const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->getLights();
					const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getLights_LightList( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getLights_LightList_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getLights_LightList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstanceBatch_getLights_LightList_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				const EarthView::World::Graphic::LightList& objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getLights();
				const EarthView::World::Graphic::LightList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CInstanceBatch_getTechnique_CTechnique(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				if (dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getTechnique();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getTechnique();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getTechnique_CTechnique( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getTechnique_CTechnique_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getTechnique_CTechnique(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CInstanceBatch_getTechnique_CTechnique_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->EarthView::World::Graphic::CInstanceBatch::getTechnique();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CInstanceBatch__ref_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->_ref();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CInstanceBatch__unRef_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->_unRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CInstanceBatch_getRefCount_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getRefCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceBatch_prepareSelectObject_void_ev_int32(void *pObjectXXXX, _in ev_int32 objIndex )
			{
				EarthView::World::Graphic::CInstanceBatch* ptrNativeObject = (EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX;
				ptrNativeObject->prepareSelectObject(objIndex);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getWorldTransforms_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getWorldTransforms_void_CMatrix4_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getWorldTransforms_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getNumWorldTransforms_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getNumWorldTransforms_ev_uint16_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getNumWorldTransforms_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getCastsShadows_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getCastsShadows_ev_bool_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getCastsShadows_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch__updateCustomGpuParameter_void_CAutoConstantEntry_CGpuProgramParameters(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_setPolygonModeOverrideable_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_setPolygonModeOverrideable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getPolygonModeOverrideable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getPolygonModeOverrideable_ev_bool_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getPolygonModeOverrideable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_setCustomAmbient_void_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_setCustomAmbient_void_CColourValue_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_setCustomAmbient_void_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getCustomAmbient_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getCustomAmbient_CColourValue_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getCustomAmbient_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getCustomAmbientEnabled_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getCustomAmbientEnabled_bool_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getCustomAmbientEnabled_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_setCustomAmbientEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_setCustomAmbientEnabled_void_ev_bool_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_setCustomAmbientEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_addListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_addListener_void_CRenderableListener_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_addListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_removeListener_void_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_removeListener_void_CRenderableListener_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_removeListener_void_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_existListener_ev_bool_CRenderableListener( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_existListener_ev_bool_CRenderableListener_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_existListener_ev_bool_CRenderableListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getListenerCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getListenerCount_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getListenerCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getListener_CRenderableListener_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getListener_CRenderableListener_ev_uint32_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getListener_CRenderableListener_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_getRenderSystemData_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_getRenderSystemData_CRenderSystemData_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_getRenderSystemData_CRenderSystemData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CInstanceBatch_setRenderSystemData_void_CRenderSystemData( void *pObjectXXXX, EarthView_World_Graphic_CInstanceBatch_setRenderSystemData_void_CRenderSystemData_Callback* pCallback )
			{
				CInstanceBatchProxy* ptr = dynamic_cast<CInstanceBatchProxy*>((EarthView::World::Graphic::CInstanceBatch*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CInstanceBatch_setRenderSystemData_void_CRenderSystemData(pCallback);
				}
			}
		}
	}
}
