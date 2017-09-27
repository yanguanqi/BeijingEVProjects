/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/manualmodelobject.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
			namespace ModelManager
			{
				class JCManualModelObjectProxy : public EarthView::World::Spatial3D::ModelManager::CManualModelObject
				{
				 private:
					EarthView::World::Core::ev_string m_getEntity_void_callback;
					EarthView::World::Core::ev_string m_applyEnvMap_ev_bool_callback;
					EarthView::World::Core::ev_string m_isApplyEnvMap_void_callback;
					EarthView::World::Core::ev_string m_load_IntVector_callback;
					EarthView::World::Core::ev_string m_setLocalMatrix_CMatrix4_callback;
					EarthView::World::Core::ev_string m_getLocalMatrix_void_callback;
					EarthView::World::Core::ev_string m_getModelDBTransform_CVector3_CVector3_CQuaternion_callback;
					EarthView::World::Core::ev_string m_getFile_void_callback;
					EarthView::World::Core::ev_string m_isFileDirAsGroup_void_callback;
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_getSceneManager_void_callback;
					EarthView::World::Core::ev_string m_getWorldAABB_void_callback;
					EarthView::World::Core::ev_string m_isVisible_void_callback;
					EarthView::World::Core::ev_string m_setVisible_ev_bool_callback;
					EarthView::World::Core::ev_string m_setVisible_ev_bool_ev_bool_callback;
					EarthView::World::Core::ev_string m_setSubEntityVisibility_ev_uint32_ev_bool_callback;
					EarthView::World::Core::ev_string m_setSubEntityVisibility_ev_uint32_ev_bool_ev_bool_callback;
					EarthView::World::Core::ev_string m_getSubEntityVisibility_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setRenderingMaxDistance_ev_real64_callback;
					EarthView::World::Core::ev_string m_getRenderingMaxDistance_void_callback;
					EarthView::World::Core::ev_string m_setRenderingMinDistance_ev_real64_callback;
					EarthView::World::Core::ev_string m_getRenderingMinDistance_void_callback;
					EarthView::World::Core::ev_string m_calculateSubEntityIndex_ev_uint16_ev_uint32_callback;
					EarthView::World::Core::ev_string m_calculateInstanceIndex_ev_uint32_ev_int16_ev_int32_callback;
					EarthView::World::Core::ev_string m_getNumSubEntities_void_callback;
					EarthView::World::Core::ev_string m_getAliasName_void_callback;
					EarthView::World::Core::ev_string m_getBindedState_void_callback;
					EarthView::World::Core::ev_string m_getAllBindedEffect_void_callback;
					EarthView::World::Core::ev_string m_getAllBindedLight_void_callback;
					EarthView::World::Core::ev_string m_getBindedEffect_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getBindedLight_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getBindedParticle_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getBindedRibbonTrail_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getBindedEffect_EVString_callback;
					EarthView::World::Core::ev_string m_getBindedEffectByNodeName_EVString_callback;
					EarthView::World::Core::ev_string m_getBindedParticle_EVString_callback;
					EarthView::World::Core::ev_string m_getBindedRibbonTrail_EVString_callback;
					EarthView::World::Core::ev_string m_getBindedRibbonTrailByNodeName_EVString_callback;
					EarthView::World::Core::ev_string m_getAllBindedModel_void_callback;
					EarthView::World::Core::ev_string m_getBindedModel_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getBindedModelByNodeName_EVString_callback;
					EarthView::World::Core::ev_string m_getComponentByName_EVString_callback;
					EarthView::World::Core::ev_string m_getComponentBySubEntityIndex_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getParentComponentByName_EVString_callback;
					EarthView::World::Core::ev_string m_getRootComponent_void_callback;
					EarthView::World::Core::ev_string m_getBindedModel_EVString_callback;
					EarthView::World::Core::ev_string m_getBindedParticleByName_EVString_callback;
					EarthView::World::Core::ev_string m_getBindedRibbonTrailByName_EVString_callback;
					EarthView::World::Core::ev_string m_getBindedModelByName_EVString_callback;
					EarthView::World::Core::ev_string m_getBindedLightByName_EVString_callback;
					EarthView::World::Core::ev_string m_bindEffectAtBone_CEffect_EVString_CMatrix4_EVString_callback;
					EarthView::World::Core::ev_string m_bindEffectAtNode_CEffect_EVString_CMatrix4_EVString_callback;
					EarthView::World::Core::ev_string m_bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString_callback;
					EarthView::World::Core::ev_string m_bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString_callback;
					EarthView::World::Core::ev_string m_bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString_callback;
					EarthView::World::Core::ev_string m_bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString_callback;
					EarthView::World::Core::ev_string m_bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString_callback;
					EarthView::World::Core::ev_string m_unBindEffect_CEffect_callback;
					EarthView::World::Core::ev_string m_unBindLight_CLight_callback;
					EarthView::World::Core::ev_string m_unBindModel_CModelBaseObject_callback;
					EarthView::World::Core::ev_string m_getBindedID_void_callback;
					EarthView::World::Core::ev_string m_setBindedID_ev_uint32_callback;
					EarthView::World::Core::ev_string m_setBindedEffectVisibility_ev_bool_callback;
					EarthView::World::Core::ev_string m_updateMaterial_CMaterialPtr_StringVector_StringVector_callback;
					EarthView::World::Core::ev_string m_setMaterial_ev_uint32_CMaterialPtr_callback;
					EarthView::World::Core::ev_string m_getMeshPtr_void_callback;
					EarthView::World::Core::ev_string m_getTexturePtrs_void_callback;
					EarthView::World::Core::ev_string m_getMaterialPtrs_void_callback;
					EarthView::World::Core::ev_string m_getGpuPtrs_void_callback;
					EarthView::World::Core::ev_string m_getMeshFeature_void_callback;
					EarthView::World::Core::ev_string m_getOrigTextureFeatures_void_callback;
					EarthView::World::Core::ev_string m_getThumbTextureFeatures_void_callback;
					EarthView::World::Core::ev_string m_getMaterialFeatures_void_callback;
					EarthView::World::Core::ev_string m_getAnimationFeatures_void_callback;
					EarthView::World::Core::ev_string m_getGpuFeatures_void_callback;
					EarthView::World::Core::ev_string m_getProgramFeatures_void_callback;
					EarthView::World::Core::ev_string m_getResourceFeature_void_callback;
					EarthView::World::Core::ev_string m_setSelectionColour_CColourValue_callback;
					EarthView::World::Core::ev_string m_getSelectionColour_void_callback;
					EarthView::World::Core::ev_string m_startFlash_CColourValue_ev_uint32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_stopFlash_void_callback;
					EarthView::World::Core::ev_string m_isSelectable_void_callback;
					EarthView::World::Core::ev_string m_isSelected_void_callback;
					EarthView::World::Core::ev_string m_setSelected_ev_bool_callback;
					EarthView::World::Core::ev_string m_setSubEntitySelected_ev_uint32_ev_bool_callback;
					EarthView::World::Core::ev_string m_setSubEntitySelected_ev_uint32_ev_int32_ev_bool_callback;
					EarthView::World::Core::ev_string m_getSubEntitySelected_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32_callback;
					EarthView::World::Core::ev_string m_getSubMeshName_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getSubMeshMatrix_ev_uint32_callback;
					EarthView::World::Core::ev_string m_addNodeListenerForSubMesh_ev_uint32_CNodeListener_callback;
					EarthView::World::Core::ev_string m_removeNodeListenerForSubMesh_ev_uint32_CNodeListener_callback;
					EarthView::World::Core::ev_string m_clearSelection_void_callback;
					EarthView::World::Core::ev_string m_setEditable_ev_bool_callback;
					EarthView::World::Core::ev_string m_endEditing_void_callback;
					EarthView::World::Core::ev_string m_setTransparency_ev_real64_callback;
					EarthView::World::Core::ev_string m_setTransparency_ev_uint32_ev_real64_callback;
					EarthView::World::Core::ev_string m_setCastShadows_ev_bool_callback;
					EarthView::World::Core::ev_string m_setEnvParam_CColourValue_CColourValue_CColourValue_callback;
					EarthView::World::Core::ev_string m_setReflectable_ev_bool_callback;
					EarthView::World::Core::ev_string m_getReflectable_void_callback;
					EarthView::World::Core::ev_string m_setRefractable_ev_bool_callback;
					EarthView::World::Core::ev_string m_getRefractable_void_callback;
					EarthView::World::Core::ev_string m_getModelState_void_callback;
					EarthView::World::Core::ev_string m_getTextureState_void_callback;
					EarthView::World::Core::ev_string m_needSwitchTexture_void_callback;
					EarthView::World::Core::ev_string m_switchThumb_TexturePtrVector_callback;
					EarthView::World::Core::ev_string m_attachThumb_TexturePtrVector_callback;
					EarthView::World::Core::ev_string m_switchOrig_TexturePtrVector_callback;
					EarthView::World::Core::ev_string m_attachOrig_TexturePtrVector_callback;
					EarthView::World::Core::ev_string m_clearTmpTextureStream_TexturePtrVector_callback;
					EarthView::World::Core::ev_string m_setLoadFromLayer_ev_bool_callback;
					EarthView::World::Core::ev_string m_getLoadFromLayer_void_callback;
					EarthView::World::Core::ev_string m_hasFltAnimation_void_callback;
					EarthView::World::Core::ev_string m_mergeBoundingBoxForNode_void_callback;
					EarthView::World::Core::ev_string m_prepareForNodeAnimation_void_callback;
					EarthView::World::Core::ev_string m_resumeNodeAnimationState_void_callback;
					EarthView::World::Core::ev_string m_startAllNodeAnimation_void_callback;
					EarthView::World::Core::ev_string m_stopAllNodeAnimation_void_callback;
					EarthView::World::Core::ev_string m_startAllAnimation_void_callback;
					EarthView::World::Core::ev_string m_startRangeAnimation_EVString_ev_int32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_startRangeAnimation_EVString_callback;
					EarthView::World::Core::ev_string m_startRangeAnimationIndependently_EVString_ev_int32_ev_uint32_callback;
					EarthView::World::Core::ev_string m_startRangeAnimationIndependently_EVString_callback;
					EarthView::World::Core::ev_string m_stopRangeAnimation_ev_bool_callback;
					EarthView::World::Core::ev_string m_stopRangeAnimation_ev_bool_ev_int32_callback;
					EarthView::World::Core::ev_string m_stopAllAnimation_void_callback;
					EarthView::World::Core::ev_string m_pauseAllAnimation_void_callback;
					EarthView::World::Core::ev_string m_continueAllAnimation_void_callback;
					EarthView::World::Core::ev_string m_setAllAnimationLoop_ev_bool_callback;
					EarthView::World::Core::ev_string m_startAnimation_EVString_callback;
					EarthView::World::Core::ev_string m_stopAnimation_EVString_callback;
					EarthView::World::Core::ev_string m_stopAnimation_EVString_ev_bool_callback;
					EarthView::World::Core::ev_string m_pauseAnimation_EVString_callback;
					EarthView::World::Core::ev_string m_pauseAnimation_EVString_ev_bool_callback;
					EarthView::World::Core::ev_string m_continueAnimation_EVString_callback;
					EarthView::World::Core::ev_string m_continueAnimation_EVString_ev_bool_callback;
					EarthView::World::Core::ev_string m_setAnimationLoop_EVString_bool_callback;
					EarthView::World::Core::ev_string m_setAnimationLoop_EVString_bool_ev_bool_callback;
					EarthView::World::Core::ev_string m_createLocalAxisNode_void_callback;
					EarthView::World::Core::ev_string m_createLocalAxisNode_EVString_callback;
					EarthView::World::Core::ev_string m_getLocalAxisNode_void_callback;
					EarthView::World::Core::ev_string m_destroyLocalAxisNode_void_callback;
					EarthView::World::Core::ev_string m_getBoneNode_EVString_callback;
					EarthView::World::Core::ev_string m_updateSkeletonAnimationVertex_void_callback;
					EarthView::World::Core::ev_string m_initializeAnimation_void_callback;
					EarthView::World::Core::ev_string m_initializeModelAnimation_void_callback;
					EarthView::World::Core::ev_string m_initializeNodeAnimation_void_callback;
					EarthView::World::Core::ev_string m_setComponentVisible_CComponent_ev_bool_callback;
					EarthView::World::Core::ev_string m_setComponentHighlight_CComponent_ev_bool_callback;
					EarthView::World::Core::ev_string m_setComponentTransparency_CComponent_ev_real32_callback;
					EarthView::World::Core::ev_string m_getNode_void_callback;
					EarthView::World::Core::ev_string m_isLoaded_void_callback;
					EarthView::World::Core::ev_string m_isAttached_void_callback;
					EarthView::World::Core::ev_string m_load_void_callback;
					EarthView::World::Core::ev_string m_unload_void_callback;
					EarthView::World::Core::ev_string m_attachToNode_CNode_callback;
					EarthView::World::Core::ev_string m_detachFromNode_void_callback;
					EarthView::World::Core::ev_string m_attachToScene_void_callback;
					EarthView::World::Core::ev_string m_detachFromScene_void_callback;
					EarthView::World::Core::ev_string m_setUserData_CFeatureUserData_callback;
					EarthView::World::Core::ev_string m_setSelectable_ev_bool_callback;
					EarthView::World::Core::ev_string m_getSelectable_void_callback;
					EarthView::World::Core::ev_string m_update_void_callback;
					EarthView::World::Core::ev_string m_getLayer_void_callback;
					EarthView::World::Core::ev_string m_getDataset_void_callback;
					EarthView::World::Core::ev_string m_getID_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_setMatrix_CMatrix4_callback;
					EarthView::World::Core::ev_string m_getMatrix_void_callback;
					EarthView::World::Core::ev_string m_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback;
					EarthView::World::Core::ev_string m_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback;
				public:
					JCManualModelObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CManualModelObject(pList)
					{
					}
					ev_void unRegisterJavaReference()
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						if(__gr != NULL)
						{
							delete __gr;
							this->registerJavaReference(NULL);
						}
					}
				public:
					void register_getEntity_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEntity_void_callback = __method;
					}
					void register_applyEnvMap_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_applyEnvMap_ev_bool_callback = __method;
					}
					void register_isApplyEnvMap_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isApplyEnvMap_void_callback = __method;
					}
					void register_load_IntVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_load_IntVector_callback = __method;
					}
					void register_setLocalMatrix_CMatrix4_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setLocalMatrix_CMatrix4_callback = __method;
					}
					void register_getLocalMatrix_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLocalMatrix_void_callback = __method;
					}
					void register_getModelDBTransform_CVector3_CVector3_CQuaternion_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getModelDBTransform_CVector3_CVector3_CQuaternion_callback = __method;
					}
					void register_getFile_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getFile_void_callback = __method;
					}
					void register_isFileDirAsGroup_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isFileDirAsGroup_void_callback = __method;
					}
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_getSceneManager_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSceneManager_void_callback = __method;
					}
					void register_getWorldAABB_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getWorldAABB_void_callback = __method;
					}
					void register_isVisible_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isVisible_void_callback = __method;
					}
					void register_setVisible_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setVisible_ev_bool_callback = __method;
					}
					void register_setVisible_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setVisible_ev_bool_ev_bool_callback = __method;
					}
					void register_setSubEntityVisibility_ev_uint32_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSubEntityVisibility_ev_uint32_ev_bool_callback = __method;
					}
					void register_setSubEntityVisibility_ev_uint32_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSubEntityVisibility_ev_uint32_ev_bool_ev_bool_callback = __method;
					}
					void register_getSubEntityVisibility_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSubEntityVisibility_ev_uint32_callback = __method;
					}
					void register_setRenderingMaxDistance_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setRenderingMaxDistance_ev_real64_callback = __method;
					}
					void register_getRenderingMaxDistance_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRenderingMaxDistance_void_callback = __method;
					}
					void register_setRenderingMinDistance_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setRenderingMinDistance_ev_real64_callback = __method;
					}
					void register_getRenderingMinDistance_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRenderingMinDistance_void_callback = __method;
					}
					void register_calculateSubEntityIndex_ev_uint16_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_calculateSubEntityIndex_ev_uint16_ev_uint32_callback = __method;
					}
					void register_calculateInstanceIndex_ev_uint32_ev_int16_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_calculateInstanceIndex_ev_uint32_ev_int16_ev_int32_callback = __method;
					}
					void register_getNumSubEntities_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getNumSubEntities_void_callback = __method;
					}
					void register_getAliasName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAliasName_void_callback = __method;
					}
					void register_getBindedState_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedState_void_callback = __method;
					}
					void register_getAllBindedEffect_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAllBindedEffect_void_callback = __method;
					}
					void register_getAllBindedLight_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAllBindedLight_void_callback = __method;
					}
					void register_getBindedEffect_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedEffect_ev_uint32_callback = __method;
					}
					void register_getBindedLight_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedLight_ev_uint32_callback = __method;
					}
					void register_getBindedParticle_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedParticle_ev_uint32_callback = __method;
					}
					void register_getBindedRibbonTrail_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedRibbonTrail_ev_uint32_callback = __method;
					}
					void register_getBindedEffect_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedEffect_EVString_callback = __method;
					}
					void register_getBindedEffectByNodeName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedEffectByNodeName_EVString_callback = __method;
					}
					void register_getBindedParticle_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedParticle_EVString_callback = __method;
					}
					void register_getBindedRibbonTrail_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedRibbonTrail_EVString_callback = __method;
					}
					void register_getBindedRibbonTrailByNodeName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedRibbonTrailByNodeName_EVString_callback = __method;
					}
					void register_getAllBindedModel_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAllBindedModel_void_callback = __method;
					}
					void register_getBindedModel_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedModel_ev_uint32_callback = __method;
					}
					void register_getBindedModelByNodeName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedModelByNodeName_EVString_callback = __method;
					}
					void register_getComponentByName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getComponentByName_EVString_callback = __method;
					}
					void register_getComponentBySubEntityIndex_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getComponentBySubEntityIndex_ev_uint32_callback = __method;
					}
					void register_getParentComponentByName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getParentComponentByName_EVString_callback = __method;
					}
					void register_getRootComponent_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRootComponent_void_callback = __method;
					}
					void register_getBindedModel_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedModel_EVString_callback = __method;
					}
					void register_getBindedParticleByName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedParticleByName_EVString_callback = __method;
					}
					void register_getBindedRibbonTrailByName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedRibbonTrailByName_EVString_callback = __method;
					}
					void register_getBindedModelByName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedModelByName_EVString_callback = __method;
					}
					void register_getBindedLightByName_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedLightByName_EVString_callback = __method;
					}
					void register_bindEffectAtBone_CEffect_EVString_CMatrix4_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_bindEffectAtBone_CEffect_EVString_CMatrix4_EVString_callback = __method;
					}
					void register_bindEffectAtNode_CEffect_EVString_CMatrix4_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_bindEffectAtNode_CEffect_EVString_CMatrix4_EVString_callback = __method;
					}
					void register_bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString_callback = __method;
					}
					void register_bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString_callback = __method;
					}
					void register_bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString_callback = __method;
					}
					void register_bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString_callback = __method;
					}
					void register_bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString_callback = __method;
					}
					void register_unBindEffect_CEffect_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_unBindEffect_CEffect_callback = __method;
					}
					void register_unBindLight_CLight_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_unBindLight_CLight_callback = __method;
					}
					void register_unBindModel_CModelBaseObject_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_unBindModel_CModelBaseObject_callback = __method;
					}
					void register_getBindedID_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBindedID_void_callback = __method;
					}
					void register_setBindedID_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setBindedID_ev_uint32_callback = __method;
					}
					void register_setBindedEffectVisibility_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setBindedEffectVisibility_ev_bool_callback = __method;
					}
					void register_updateMaterial_CMaterialPtr_StringVector_StringVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_updateMaterial_CMaterialPtr_StringVector_StringVector_callback = __method;
					}
					void register_setMaterial_ev_uint32_CMaterialPtr_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMaterial_ev_uint32_CMaterialPtr_callback = __method;
					}
					void register_getMeshPtr_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMeshPtr_void_callback = __method;
					}
					void register_getTexturePtrs_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTexturePtrs_void_callback = __method;
					}
					void register_getMaterialPtrs_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMaterialPtrs_void_callback = __method;
					}
					void register_getGpuPtrs_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGpuPtrs_void_callback = __method;
					}
					void register_getMeshFeature_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMeshFeature_void_callback = __method;
					}
					void register_getOrigTextureFeatures_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getOrigTextureFeatures_void_callback = __method;
					}
					void register_getThumbTextureFeatures_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getThumbTextureFeatures_void_callback = __method;
					}
					void register_getMaterialFeatures_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMaterialFeatures_void_callback = __method;
					}
					void register_getAnimationFeatures_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAnimationFeatures_void_callback = __method;
					}
					void register_getGpuFeatures_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getGpuFeatures_void_callback = __method;
					}
					void register_getProgramFeatures_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getProgramFeatures_void_callback = __method;
					}
					void register_getResourceFeature_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getResourceFeature_void_callback = __method;
					}
					void register_setSelectionColour_CColourValue_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSelectionColour_CColourValue_callback = __method;
					}
					void register_getSelectionColour_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSelectionColour_void_callback = __method;
					}
					void register_startFlash_CColourValue_ev_uint32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startFlash_CColourValue_ev_uint32_ev_uint32_callback = __method;
					}
					void register_stopFlash_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_stopFlash_void_callback = __method;
					}
					void register_isSelectable_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isSelectable_void_callback = __method;
					}
					void register_isSelected_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isSelected_void_callback = __method;
					}
					void register_setSelected_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSelected_ev_bool_callback = __method;
					}
					void register_setSubEntitySelected_ev_uint32_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSubEntitySelected_ev_uint32_ev_bool_callback = __method;
					}
					void register_setSubEntitySelected_ev_uint32_ev_int32_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSubEntitySelected_ev_uint32_ev_int32_ev_bool_callback = __method;
					}
					void register_getSubEntitySelected_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSubEntitySelected_ev_uint32_callback = __method;
					}
					void register_getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32_callback = __method;
					}
					void register_getSubMeshName_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSubMeshName_ev_uint32_callback = __method;
					}
					void register_getSubMeshMatrix_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSubMeshMatrix_ev_uint32_callback = __method;
					}
					void register_addNodeListenerForSubMesh_ev_uint32_CNodeListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addNodeListenerForSubMesh_ev_uint32_CNodeListener_callback = __method;
					}
					void register_removeNodeListenerForSubMesh_ev_uint32_CNodeListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeNodeListenerForSubMesh_ev_uint32_CNodeListener_callback = __method;
					}
					void register_clearSelection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clearSelection_void_callback = __method;
					}
					void register_setEditable_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEditable_ev_bool_callback = __method;
					}
					void register_endEditing_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_endEditing_void_callback = __method;
					}
					void register_setTransparency_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setTransparency_ev_real64_callback = __method;
					}
					void register_setTransparency_ev_uint32_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setTransparency_ev_uint32_ev_real64_callback = __method;
					}
					void register_setCastShadows_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCastShadows_ev_bool_callback = __method;
					}
					void register_setEnvParam_CColourValue_CColourValue_CColourValue_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEnvParam_CColourValue_CColourValue_CColourValue_callback = __method;
					}
					void register_setReflectable_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setReflectable_ev_bool_callback = __method;
					}
					void register_getReflectable_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getReflectable_void_callback = __method;
					}
					void register_setRefractable_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setRefractable_ev_bool_callback = __method;
					}
					void register_getRefractable_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRefractable_void_callback = __method;
					}
					void register_getModelState_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getModelState_void_callback = __method;
					}
					void register_getTextureState_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTextureState_void_callback = __method;
					}
					void register_needSwitchTexture_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_needSwitchTexture_void_callback = __method;
					}
					void register_switchThumb_TexturePtrVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_switchThumb_TexturePtrVector_callback = __method;
					}
					void register_attachThumb_TexturePtrVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_attachThumb_TexturePtrVector_callback = __method;
					}
					void register_switchOrig_TexturePtrVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_switchOrig_TexturePtrVector_callback = __method;
					}
					void register_attachOrig_TexturePtrVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_attachOrig_TexturePtrVector_callback = __method;
					}
					void register_clearTmpTextureStream_TexturePtrVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clearTmpTextureStream_TexturePtrVector_callback = __method;
					}
					void register_setLoadFromLayer_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setLoadFromLayer_ev_bool_callback = __method;
					}
					void register_getLoadFromLayer_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLoadFromLayer_void_callback = __method;
					}
					void register_hasFltAnimation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_hasFltAnimation_void_callback = __method;
					}
					void register_mergeBoundingBoxForNode_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_mergeBoundingBoxForNode_void_callback = __method;
					}
					void register_prepareForNodeAnimation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_prepareForNodeAnimation_void_callback = __method;
					}
					void register_resumeNodeAnimationState_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_resumeNodeAnimationState_void_callback = __method;
					}
					void register_startAllNodeAnimation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startAllNodeAnimation_void_callback = __method;
					}
					void register_stopAllNodeAnimation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_stopAllNodeAnimation_void_callback = __method;
					}
					void register_startAllAnimation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startAllAnimation_void_callback = __method;
					}
					void register_startRangeAnimation_EVString_ev_int32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startRangeAnimation_EVString_ev_int32_ev_uint32_callback = __method;
					}
					void register_startRangeAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startRangeAnimation_EVString_callback = __method;
					}
					void register_startRangeAnimationIndependently_EVString_ev_int32_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startRangeAnimationIndependently_EVString_ev_int32_ev_uint32_callback = __method;
					}
					void register_startRangeAnimationIndependently_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startRangeAnimationIndependently_EVString_callback = __method;
					}
					void register_stopRangeAnimation_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_stopRangeAnimation_ev_bool_callback = __method;
					}
					void register_stopRangeAnimation_ev_bool_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_stopRangeAnimation_ev_bool_ev_int32_callback = __method;
					}
					void register_stopAllAnimation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_stopAllAnimation_void_callback = __method;
					}
					void register_pauseAllAnimation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_pauseAllAnimation_void_callback = __method;
					}
					void register_continueAllAnimation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_continueAllAnimation_void_callback = __method;
					}
					void register_setAllAnimationLoop_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setAllAnimationLoop_ev_bool_callback = __method;
					}
					void register_startAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startAnimation_EVString_callback = __method;
					}
					void register_stopAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_stopAnimation_EVString_callback = __method;
					}
					void register_stopAnimation_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_stopAnimation_EVString_ev_bool_callback = __method;
					}
					void register_pauseAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_pauseAnimation_EVString_callback = __method;
					}
					void register_pauseAnimation_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_pauseAnimation_EVString_ev_bool_callback = __method;
					}
					void register_continueAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_continueAnimation_EVString_callback = __method;
					}
					void register_continueAnimation_EVString_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_continueAnimation_EVString_ev_bool_callback = __method;
					}
					void register_setAnimationLoop_EVString_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setAnimationLoop_EVString_bool_callback = __method;
					}
					void register_setAnimationLoop_EVString_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setAnimationLoop_EVString_bool_ev_bool_callback = __method;
					}
					void register_createLocalAxisNode_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createLocalAxisNode_void_callback = __method;
					}
					void register_createLocalAxisNode_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_createLocalAxisNode_EVString_callback = __method;
					}
					void register_getLocalAxisNode_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLocalAxisNode_void_callback = __method;
					}
					void register_destroyLocalAxisNode_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_destroyLocalAxisNode_void_callback = __method;
					}
					void register_getBoneNode_EVString_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBoneNode_EVString_callback = __method;
					}
					void register_updateSkeletonAnimationVertex_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_updateSkeletonAnimationVertex_void_callback = __method;
					}
					void register_initializeAnimation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_initializeAnimation_void_callback = __method;
					}
					void register_initializeModelAnimation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_initializeModelAnimation_void_callback = __method;
					}
					void register_initializeNodeAnimation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_initializeNodeAnimation_void_callback = __method;
					}
					void register_setComponentVisible_CComponent_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setComponentVisible_CComponent_ev_bool_callback = __method;
					}
					void register_setComponentHighlight_CComponent_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setComponentHighlight_CComponent_ev_bool_callback = __method;
					}
					void register_setComponentTransparency_CComponent_ev_real32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setComponentTransparency_CComponent_ev_real32_callback = __method;
					}
					void register_getNode_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getNode_void_callback = __method;
					}
					void register_isLoaded_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isLoaded_void_callback = __method;
					}
					void register_isAttached_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isAttached_void_callback = __method;
					}
					void register_load_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_load_void_callback = __method;
					}
					void register_unload_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_unload_void_callback = __method;
					}
					void register_attachToNode_CNode_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_attachToNode_CNode_callback = __method;
					}
					void register_detachFromNode_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_detachFromNode_void_callback = __method;
					}
					void register_attachToScene_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_attachToScene_void_callback = __method;
					}
					void register_detachFromScene_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_detachFromScene_void_callback = __method;
					}
					void register_setUserData_CFeatureUserData_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setUserData_CFeatureUserData_callback = __method;
					}
					void register_setSelectable_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSelectable_ev_bool_callback = __method;
					}
					void register_getSelectable_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSelectable_void_callback = __method;
					}
					void register_update_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_update_void_callback = __method;
					}
					void register_getLayer_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLayer_void_callback = __method;
					}
					void register_getDataset_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDataset_void_callback = __method;
					}
					void register_getID_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getID_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_setMatrix_CMatrix4_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setMatrix_CMatrix4_callback = __method;
					}
					void register_getMatrix_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMatrix_void_callback = __method;
					}
					void register_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback = __method;
					}
					void register_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback = __method;
					}
					virtual ev_bool attachToNode(EarthView::World::Graphic::CNode* n)
					{
						if (this->_gRef != NULL && this->m_attachToNode_CNode_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong n_j = (jlong) n;
							jmethodID __method = __gr->getMethod("attachToNode_CNode_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , n_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::attachToNode(n);
						}
					}
					virtual EarthView::World::Graphic::CNode* detachFromNode()
					{
						if (this->_gRef != NULL && this->m_detachFromNode_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("detachFromNode_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::detachFromNode();
						}
					}
					virtual ev_bool isVisible()
					{
						if (this->_gRef != NULL && this->m_isVisible_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isVisible_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::isVisible();
						}
					}
					virtual void setVisible(ev_bool flag)
					{
						if (this->_gRef != NULL && this->m_setVisible_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean flag_j = (jboolean) flag;
							jmethodID __method = __gr->getMethod("setVisible_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , flag_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setVisible(flag);
						}
					}
					virtual void setVisible(ev_bool flag, ev_bool bRecursive)
					{
						if (this->_gRef != NULL && this->m_setVisible_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean flag_j = (jboolean) flag;
							jboolean bRecursive_j = (jboolean) bRecursive;
							jmethodID __method = __gr->getMethod("setVisible_ev_bool_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , flag_j, bRecursive_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setVisible(flag, bRecursive);
						}
					}
					virtual void setSubEntityVisibility(ev_uint32 subEntityIndex, ev_bool isVisible)
					{
						if (this->_gRef != NULL && this->m_setSubEntityVisibility_ev_uint32_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jboolean isVisible_j = (jboolean) isVisible;
							jmethodID __method = __gr->getMethod("setSubEntityVisibility_ev_uint32_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , subEntityIndex_j, isVisible_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setSubEntityVisibility(subEntityIndex, isVisible);
						}
					}
					virtual void setSubEntityVisibility(ev_uint32 subEntityIndex, ev_bool isVisible, ev_bool bRecursive)
					{
						if (this->_gRef != NULL && this->m_setSubEntityVisibility_ev_uint32_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jboolean isVisible_j = (jboolean) isVisible;
							jboolean bRecursive_j = (jboolean) bRecursive;
							jmethodID __method = __gr->getMethod("setSubEntityVisibility_ev_uint32_ev_bool_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , subEntityIndex_j, isVisible_j, bRecursive_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setSubEntityVisibility(subEntityIndex, isVisible, bRecursive);
						}
					}
					virtual ev_bool getSubEntityVisibility(ev_uint32 subEntityIndex)
					{
						if (this->_gRef != NULL && this->m_getSubEntityVisibility_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jmethodID __method = __gr->getMethod("getSubEntityVisibility_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , subEntityIndex_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getSubEntityVisibility(subEntityIndex);
						}
					}
					virtual EarthView::World::Spatial3D::ModelType getType()
					{
						if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getType_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelType __values1 = (EarthView::World::Spatial3D::ModelType) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getType();
						}
					}
					virtual EarthView::World::Graphic::CEntity* getEntity()
					{
						if (this->_gRef != NULL && this->m_getEntity_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getEntity_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CEntity *__values1 = (EarthView::World::Graphic::CEntity*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getEntity();
						}
					}
					virtual void setRenderingMaxDistance(ev_real64 dist)
					{
						if (this->_gRef != NULL && this->m_setRenderingMaxDistance_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble dist_j = (jdouble) dist;
							jmethodID __method = __gr->getMethod("setRenderingMaxDistance_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , dist_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setRenderingMaxDistance(dist);
						}
					}
					virtual ev_real64 getRenderingMaxDistance()
					{
						if (this->_gRef != NULL && this->m_getRenderingMaxDistance_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRenderingMaxDistance_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getRenderingMaxDistance();
						}
					}
					virtual void setRenderingMinDistance(ev_real64 dist)
					{
						if (this->_gRef != NULL && this->m_setRenderingMinDistance_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble dist_j = (jdouble) dist;
							jmethodID __method = __gr->getMethod("setRenderingMinDistance_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , dist_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setRenderingMinDistance(dist);
						}
					}
					virtual ev_real64 getRenderingMinDistance()
					{
						if (this->_gRef != NULL && this->m_getRenderingMinDistance_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRenderingMinDistance_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_real64 __values1 = (ev_real64) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getRenderingMinDistance();
						}
					}
					virtual ev_int32 calculateSubEntityIndex(ev_uint16 submeshIndex, ev_uint32 instanceIndex)
					{
						if (this->_gRef != NULL && this->m_calculateSubEntityIndex_ev_uint16_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint submeshIndex_j = (jint) submeshIndex;
							jlong instanceIndex_j = (jlong) instanceIndex;
							jmethodID __method = __gr->getMethod("calculateSubEntityIndex_ev_uint16_ev_uint32_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , submeshIndex_j, instanceIndex_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::calculateSubEntityIndex(submeshIndex, instanceIndex);
						}
					}
					virtual void calculateInstanceIndex(ev_uint32 subEntityIndex, ev_int16& submeshIndex, ev_int32& instanceIndex)
					{
						if (this->_gRef != NULL && this->m_calculateInstanceIndex_ev_uint32_ev_int16_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jlong submeshIndex_j = (jlong) &submeshIndex;
							jlong instanceIndex_j = (jlong) &instanceIndex;
							jmethodID __method = __gr->getMethod("calculateInstanceIndex_ev_uint32_ev_int16_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , subEntityIndex_j, submeshIndex_j, instanceIndex_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::calculateInstanceIndex(subEntityIndex, submeshIndex, instanceIndex);
						}
					}
					virtual ev_int32 getNumSubEntities()
					{
						if (this->_gRef != NULL && this->m_getNumSubEntities_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getNumSubEntities_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getNumSubEntities();
						}
					}
					virtual EarthView::World::Graphic::CNode* createLocalAxisNode()
					{
						if (this->_gRef != NULL && this->m_createLocalAxisNode_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("createLocalAxisNode_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::createLocalAxisNode();
						}
					}
					virtual EarthView::World::Graphic::CNode* createLocalAxisNode(const EVString& componentName)
					{
						if (this->_gRef != NULL && this->m_createLocalAxisNode_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring componentName_wch = componentName;
							jstring componentName_j = __env->NewString((const jchar*)componentName_wch.getString(), componentName_wch.size());
							jmethodID __method = __gr->getMethod("createLocalAxisNode_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , componentName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::createLocalAxisNode(componentName);
						}
					}
					virtual EarthView::World::Graphic::CNode* getLocalAxisNode()
					{
						if (this->_gRef != NULL && this->m_getLocalAxisNode_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getLocalAxisNode_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getLocalAxisNode();
						}
					}
					virtual ev_bool destroyLocalAxisNode()
					{
						if (this->_gRef != NULL && this->m_destroyLocalAxisNode_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("destroyLocalAxisNode_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::destroyLocalAxisNode();
						}
					}
					virtual EarthView::World::Graphic::CNode* getBoneNode(const EVString& boneName)
					{
						if (this->_gRef != NULL && this->m_getBoneNode_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring boneName_wch = boneName;
							jstring boneName_j = __env->NewString((const jchar*)boneName_wch.getString(), boneName_wch.size());
							jmethodID __method = __gr->getMethod("getBoneNode_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , boneName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBoneNode(boneName);
						}
					}
					virtual void updateSkeletonAnimationVertex()
					{
						if (this->_gRef != NULL && this->m_updateSkeletonAnimationVertex_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("updateSkeletonAnimationVertex_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::updateSkeletonAnimationVertex();
						}
					}
					virtual void setSelectionColour(const EarthView::World::Graphic::CColourValue& color)
					{
						if (this->_gRef != NULL && this->m_setSelectionColour_CColourValue_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong color_j = (jlong) &color;
							jmethodID __method = __gr->getMethod("setSelectionColour_CColourValue_callback");
							__env->CallVoidMethod(__obj, __method , color_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setSelectionColour(color);
						}
					}
					virtual EarthView::World::Graphic::CColourValue getSelectionColour()
					{
						if (this->_gRef != NULL && this->m_getSelectionColour_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSelectionColour_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CColourValue __values1 = *(EarthView::World::Graphic::CColourValue*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getSelectionColour();
						}
					}
					virtual void setEnvParam(const EarthView::World::Graphic::CColourValue& ambient, const EarthView::World::Graphic::CColourValue& diffuse, const EarthView::World::Graphic::CColourValue& specular)
					{
						if (this->_gRef != NULL && this->m_setEnvParam_CColourValue_CColourValue_CColourValue_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ambient_j = (jlong) &ambient;
							jlong diffuse_j = (jlong) &diffuse;
							jlong specular_j = (jlong) &specular;
							jmethodID __method = __gr->getMethod("setEnvParam_CColourValue_CColourValue_CColourValue_callback");
							__env->CallVoidMethod(__obj, __method , ambient_j, diffuse_j, specular_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setEnvParam(ambient, diffuse, specular);
						}
					}
					virtual ev_bool isSelectable()
					{
						if (this->_gRef != NULL && this->m_isSelectable_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isSelectable_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::isSelectable();
						}
					}
					virtual ev_bool isSelected()
					{
						if (this->_gRef != NULL && this->m_isSelected_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isSelected_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::isSelected();
						}
					}
					virtual void setSelectable(ev_bool flag)
					{
						if (this->_gRef != NULL && this->m_setSelectable_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean flag_j = (jboolean) flag;
							jmethodID __method = __gr->getMethod("setSelectable_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , flag_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setSelectable(flag);
						}
					}
					virtual void setSelected(ev_bool flag)
					{
						if (this->_gRef != NULL && this->m_setSelected_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean flag_j = (jboolean) flag;
							jmethodID __method = __gr->getMethod("setSelected_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , flag_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setSelected(flag);
						}
					}
					virtual void setSubEntitySelected(ev_uint32 subEntityIndex, ev_bool flag)
					{
						if (this->_gRef != NULL && this->m_setSubEntitySelected_ev_uint32_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jboolean flag_j = (jboolean) flag;
							jmethodID __method = __gr->getMethod("setSubEntitySelected_ev_uint32_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , subEntityIndex_j, flag_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setSubEntitySelected(subEntityIndex, flag);
						}
					}
					virtual void setSubEntitySelected(ev_uint32 subEntityIndex, ev_int32 segmentIndex, ev_bool flag)
					{
						if (this->_gRef != NULL && this->m_setSubEntitySelected_ev_uint32_ev_int32_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jint segmentIndex_j = (jint) segmentIndex;
							jboolean flag_j = (jboolean) flag;
							jmethodID __method = __gr->getMethod("setSubEntitySelected_ev_uint32_ev_int32_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , subEntityIndex_j, segmentIndex_j, flag_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setSubEntitySelected(subEntityIndex, segmentIndex, flag);
						}
					}
					virtual ev_bool getSubEntitySelected(ev_uint32 subEntityIndex)
					{
						if (this->_gRef != NULL && this->m_getSubEntitySelected_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jmethodID __method = __gr->getMethod("getSubEntitySelected_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , subEntityIndex_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getSubEntitySelected(subEntityIndex);
						}
					}
					virtual ev_bool getSelectedSubEntityIndex(ev_uint32& subMeshIndex, ev_uint32& instanceIndex, ev_int32& segmentIndex)
					{
						if (this->_gRef != NULL && this->m_getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subMeshIndex_j = (jlong) &subMeshIndex;
							jlong instanceIndex_j = (jlong) &instanceIndex;
							jlong segmentIndex_j = (jlong) &segmentIndex;
							jmethodID __method = __gr->getMethod("getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , subMeshIndex_j, instanceIndex_j, segmentIndex_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getSelectedSubEntityIndex(subMeshIndex, instanceIndex, segmentIndex);
						}
					}
					virtual EVString getSubMeshName(ev_uint32 subEntityIndex)
					{
						if (this->_gRef != NULL && this->m_getSubMeshName_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jmethodID __method = __gr->getMethod("getSubMeshName_ev_uint32_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , subEntityIndex_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getSubMeshName(subEntityIndex);
						}
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 getSubMeshMatrix(ev_uint32 subEntityIndex)
					{
						if (this->_gRef != NULL && this->m_getSubMeshMatrix_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jmethodID __method = __gr->getMethod("getSubMeshMatrix_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , subEntityIndex_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Math::CMatrix4 __values1 = *(EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getSubMeshMatrix(subEntityIndex);
						}
					}
					virtual ev_bool addNodeListenerForSubMesh(ev_uint32 subEntityIndex, EarthView::World::Graphic::CNode::CNodeListener* nodeListener)
					{
						if (this->_gRef != NULL && this->m_addNodeListenerForSubMesh_ev_uint32_CNodeListener_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jlong nodeListener_j = (jlong) nodeListener;
							jmethodID __method = __gr->getMethod("addNodeListenerForSubMesh_ev_uint32_CNodeListener_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , subEntityIndex_j, nodeListener_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::addNodeListenerForSubMesh(subEntityIndex, nodeListener);
						}
					}
					virtual void removeNodeListenerForSubMesh(ev_uint32 subEntityIndex, EarthView::World::Graphic::CNode::CNodeListener* nodeListener)
					{
						if (this->_gRef != NULL && this->m_removeNodeListenerForSubMesh_ev_uint32_CNodeListener_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jlong nodeListener_j = (jlong) nodeListener;
							jmethodID __method = __gr->getMethod("removeNodeListenerForSubMesh_ev_uint32_CNodeListener_callback");
							__env->CallVoidMethod(__obj, __method , subEntityIndex_j, nodeListener_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::removeNodeListenerForSubMesh(subEntityIndex, nodeListener);
						}
					}
					virtual void clearSelection()
					{
						if (this->_gRef != NULL && this->m_clearSelection_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("clearSelection_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::clearSelection();
						}
					}
					virtual void setEditable(ev_bool flag)
					{
						if (this->_gRef != NULL && this->m_setEditable_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean flag_j = (jboolean) flag;
							jmethodID __method = __gr->getMethod("setEditable_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , flag_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setEditable(flag);
						}
					}
					virtual void endEditing()
					{
						if (this->_gRef != NULL && this->m_endEditing_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("endEditing_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::endEditing();
						}
					}
					virtual void setTransparency(ev_real64 percent)
					{
						if (this->_gRef != NULL && this->m_setTransparency_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble percent_j = (jdouble) percent;
							jmethodID __method = __gr->getMethod("setTransparency_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , percent_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setTransparency(percent);
						}
					}
					virtual void setTransparency(ev_uint32 subEntityIndex, ev_real64 percent)
					{
						if (this->_gRef != NULL && this->m_setTransparency_ev_uint32_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jdouble percent_j = (jdouble) percent;
							jmethodID __method = __gr->getMethod("setTransparency_ev_uint32_ev_real64_callback");
							__env->CallVoidMethod(__obj, __method , subEntityIndex_j, percent_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setTransparency(subEntityIndex, percent);
						}
					}
					virtual void setCastShadows(ev_bool flag)
					{
						if (this->_gRef != NULL && this->m_setCastShadows_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean flag_j = (jboolean) flag;
							jmethodID __method = __gr->getMethod("setCastShadows_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , flag_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setCastShadows(flag);
						}
					}
					virtual void setReflectable(ev_bool flag)
					{
						if (this->_gRef != NULL && this->m_setReflectable_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean flag_j = (jboolean) flag;
							jmethodID __method = __gr->getMethod("setReflectable_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , flag_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setReflectable(flag);
						}
					}
					virtual ev_bool getReflectable()
					{
						if (this->_gRef != NULL && this->m_getReflectable_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getReflectable_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getReflectable();
						}
					}
					virtual void setRefractable(ev_bool flag)
					{
						if (this->_gRef != NULL && this->m_setRefractable_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean flag_j = (jboolean) flag;
							jmethodID __method = __gr->getMethod("setRefractable_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , flag_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setRefractable(flag);
						}
					}
					virtual ev_bool getRefractable()
					{
						if (this->_gRef != NULL && this->m_getRefractable_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRefractable_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getRefractable();
						}
					}
					virtual void setMaterial(ev_uint32 subEntityIndex, EarthView::World::Graphic::CMaterialPtr& matPtr)
					{
						if (this->_gRef != NULL && this->m_setMaterial_ev_uint32_CMaterialPtr_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jlong matPtr_j = (jlong) &matPtr;
							jmethodID __method = __gr->getMethod("setMaterial_ev_uint32_CMaterialPtr_callback");
							__env->CallVoidMethod(__obj, __method , subEntityIndex_j, matPtr_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setMaterial(subEntityIndex, matPtr);
						}
					}
					virtual void initializeAnimation()
					{
						if (this->_gRef != NULL && this->m_initializeAnimation_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("initializeAnimation_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::initializeAnimation();
						}
					}
					virtual void initializeModelAnimation()
					{
						if (this->_gRef != NULL && this->m_initializeModelAnimation_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("initializeModelAnimation_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::initializeModelAnimation();
						}
					}
					virtual void initializeNodeAnimation()
					{
						if (this->_gRef != NULL && this->m_initializeNodeAnimation_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("initializeNodeAnimation_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::initializeNodeAnimation();
						}
					}
					virtual void applyEnvMap(ev_bool enabled)
					{
						if (this->_gRef != NULL && this->m_applyEnvMap_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean enabled_j = (jboolean) enabled;
							jmethodID __method = __gr->getMethod("applyEnvMap_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , enabled_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::applyEnvMap(enabled);
						}
					}
					virtual ev_bool isApplyEnvMap()
					{
						if (this->_gRef != NULL && this->m_isApplyEnvMap_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isApplyEnvMap_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::isApplyEnvMap();
						}
					}
					virtual void prepareForNodeAnimation()
					{
						if (this->_gRef != NULL && this->m_prepareForNodeAnimation_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("prepareForNodeAnimation_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::prepareForNodeAnimation();
						}
					}
					virtual void resumeNodeAnimationState()
					{
						if (this->_gRef != NULL && this->m_resumeNodeAnimationState_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("resumeNodeAnimationState_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::resumeNodeAnimationState();
						}
					}
					virtual void setComponentVisible(const EarthView::World::Spatial3D::CComponent& component, ev_bool visible)
					{
						if (this->_gRef != NULL && this->m_setComponentVisible_CComponent_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong component_j = (jlong) &component;
							jboolean visible_j = (jboolean) visible;
							jmethodID __method = __gr->getMethod("setComponentVisible_CComponent_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , component_j, visible_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setComponentVisible(component, visible);
						}
					}
					virtual void setComponentHighlight(const EarthView::World::Spatial3D::CComponent& component, ev_bool highlight)
					{
						if (this->_gRef != NULL && this->m_setComponentHighlight_CComponent_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong component_j = (jlong) &component;
							jboolean highlight_j = (jboolean) highlight;
							jmethodID __method = __gr->getMethod("setComponentHighlight_CComponent_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , component_j, highlight_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setComponentHighlight(component, highlight);
						}
					}
					virtual void setComponentTransparency(const EarthView::World::Spatial3D::CComponent& component, ev_real32 alpha)
					{
						if (this->_gRef != NULL && this->m_setComponentTransparency_CComponent_ev_real32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong component_j = (jlong) &component;
							jfloat alpha_j = (jfloat) alpha;
							jmethodID __method = __gr->getMethod("setComponentTransparency_CComponent_ev_real32_callback");
							__env->CallVoidMethod(__obj, __method , component_j, alpha_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setComponentTransparency(component, alpha);
						}
					}
					virtual ev_bool load()
					{
						if (this->_gRef != NULL && this->m_load_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("load_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::load();
						}
					}
					virtual ev_bool load(const EarthView::World::Core::IntVector& subEntityIndexs)
					{
						if (this->_gRef != NULL && this->m_load_IntVector_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndexs_j = (jlong) &subEntityIndexs;
							jmethodID __method = __gr->getMethod("load_IntVector_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , subEntityIndexs_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::load(subEntityIndexs);
						}
					}
					virtual ev_bool unload()
					{
						if (this->_gRef != NULL && this->m_unload_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("unload_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::unload();
						}
					}
					virtual ev_bool isLoaded()
					{
						if (this->_gRef != NULL && this->m_isLoaded_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isLoaded_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::isLoaded();
						}
					}
					virtual ev_bool isAttached()
					{
						if (this->_gRef != NULL && this->m_isAttached_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isAttached_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::isAttached();
						}
					}
					virtual void setMatrix(const EarthView::World::Spatial::Math::CMatrix4& m)
					{
						if (this->_gRef != NULL && this->m_setMatrix_CMatrix4_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong m_j = (jlong) &m;
							jmethodID __method = __gr->getMethod("setMatrix_CMatrix4_callback");
							__env->CallVoidMethod(__obj, __method , m_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setMatrix(m);
						}
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
					{
						if (this->_gRef != NULL && this->m_getMatrix_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getMatrix_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Math::CMatrix4 __values1 = *(EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getMatrix();
						}
					}
					virtual void setLocalMatrix(const EarthView::World::Spatial::Math::CMatrix4& m)
					{
						if (this->_gRef != NULL && this->m_setLocalMatrix_CMatrix4_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong m_j = (jlong) &m;
							jmethodID __method = __gr->getMethod("setLocalMatrix_CMatrix4_callback");
							__env->CallVoidMethod(__obj, __method , m_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setLocalMatrix(m);
						}
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 getLocalMatrix()
					{
						if (this->_gRef != NULL && this->m_getLocalMatrix_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getLocalMatrix_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Math::CMatrix4 __values1 = *(EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getLocalMatrix();
						}
					}
					virtual void setPosition(ev_real64 latitude, ev_real64 longitude, ev_real64 altitude, const EarthView::World::Spatial::Math::CVector3& scale, const EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if (this->_gRef != NULL && this->m_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble latitude_j = (jdouble) latitude;
							jdouble longitude_j = (jdouble) longitude;
							jdouble altitude_j = (jdouble) altitude;
							jlong scale_j = (jlong) &scale;
							jlong qua_j = (jlong) &qua;
							jmethodID __method = __gr->getMethod("setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
							__env->CallVoidMethod(__obj, __method , latitude_j, longitude_j, altitude_j, scale_j, qua_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setPosition(latitude, longitude, altitude, scale, qua);
						}
					}
					virtual void getPosition(ev_real64& latitude, ev_real64& longitude, ev_real64& altitude, EarthView::World::Spatial::Math::CVector3& scale, EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if (this->_gRef != NULL && this->m_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong latitude_j = (jlong) &latitude;
							jlong longitude_j = (jlong) &longitude;
							jlong altitude_j = (jlong) &altitude;
							jlong scale_j = (jlong) &scale;
							jlong qua_j = (jlong) &qua;
							jmethodID __method = __gr->getMethod("getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
							__env->CallVoidMethod(__obj, __method , latitude_j, longitude_j, altitude_j, scale_j, qua_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::getPosition(latitude, longitude, altitude, scale, qua);
						}
					}
					virtual void getModelDBTransform(EarthView::World::Spatial::Math::CVector3& offPosition, EarthView::World::Spatial::Math::CVector3& scale, EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if (this->_gRef != NULL && this->m_getModelDBTransform_CVector3_CVector3_CQuaternion_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong offPosition_j = (jlong) &offPosition;
							jlong scale_j = (jlong) &scale;
							jlong qua_j = (jlong) &qua;
							jmethodID __method = __gr->getMethod("getModelDBTransform_CVector3_CVector3_CQuaternion_callback");
							__env->CallVoidMethod(__obj, __method , offPosition_j, scale_j, qua_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::getModelDBTransform(offPosition, scale, qua);
						}
					}
					virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
					{
						if (this->_gRef != NULL && this->m_getLayer_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getLayer_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::Atlas::IGlobeLayer *__values1 = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getLayer();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if (this->_gRef != NULL && this->m_getDataset_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getDataset_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IDataset *__values1 = (EarthView::World::Spatial::GeoDataset::IDataset*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getDataset();
						}
					}
					virtual ev_uint32 getID()
					{
						if (this->_gRef != NULL && this->m_getID_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getID_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint32 __values1 = (ev_uint32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getID();
						}
					}
					virtual EVString getName()
					{
						if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getName_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getName();
						}
					}
					virtual EVString getFile()
					{
						if (this->_gRef != NULL && this->m_getFile_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getFile_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getFile();
						}
					}
					virtual ev_bool isFileDirAsGroup()
					{
						if (this->_gRef != NULL && this->m_isFileDirAsGroup_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isFileDirAsGroup_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::isFileDirAsGroup();
						}
					}
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager()
					{
						if (this->_gRef != NULL && this->m_getSceneManager_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSceneManager_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CSceneManager *__values1 = (EarthView::World::Graphic::CSceneManager*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getSceneManager();
						}
					}
					virtual EarthView::World::Spatial::Math::CAxisAlignedBox getWorldAABB()
					{
						if (this->_gRef != NULL && this->m_getWorldAABB_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getWorldAABB_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getWorldAABB();
						}
					}
					virtual EVString getAliasName()
					{
						if (this->_gRef != NULL && this->m_getAliasName_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getAliasName_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getAliasName();
						}
					}
					virtual EarthView::World::Spatial3D::BindedState getBindedState()
					{
						if (this->_gRef != NULL && this->m_getBindedState_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getBindedState_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::BindedState __values1 = (EarthView::World::Spatial3D::BindedState) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedState();
						}
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getAllBindedEffect()
					{
						if (this->_gRef != NULL && this->m_getAllBindedEffect_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getAllBindedEffect_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap __values1 = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getAllBindedEffect();
						}
					}
					virtual EarthView::World::Spatial3D::ModelManager::LightObjectMap getAllBindedLight()
					{
						if (this->_gRef != NULL && this->m_getAllBindedLight_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getAllBindedLight_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelManager::LightObjectMap __values1 = *(EarthView::World::Spatial3D::ModelManager::LightObjectMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getAllBindedLight();
						}
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedEffect(ev_uint32 subEntityIndex)
					{
						if (this->_gRef != NULL && this->m_getBindedEffect_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jmethodID __method = __gr->getMethod("getBindedEffect_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , subEntityIndex_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap __values1 = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedEffect(subEntityIndex);
						}
					}
					virtual EarthView::World::Spatial3D::ModelManager::LightObjectMap getBindedLight(ev_uint32 subEntityIndex)
					{
						if (this->_gRef != NULL && this->m_getBindedLight_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jmethodID __method = __gr->getMethod("getBindedLight_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , subEntityIndex_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelManager::LightObjectMap __values1 = *(EarthView::World::Spatial3D::ModelManager::LightObjectMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedLight(subEntityIndex);
						}
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedParticle(ev_uint32 subEntityIndex)
					{
						if (this->_gRef != NULL && this->m_getBindedParticle_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jmethodID __method = __gr->getMethod("getBindedParticle_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , subEntityIndex_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap __values1 = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedParticle(subEntityIndex);
						}
					}
					virtual EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap getBindedRibbonTrail(ev_uint32 subEntityIndex)
					{
						if (this->_gRef != NULL && this->m_getBindedRibbonTrail_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jmethodID __method = __gr->getMethod("getBindedRibbonTrail_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , subEntityIndex_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap __values1 = *(EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedRibbonTrail(subEntityIndex);
						}
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedEffect(const EVString& boneName)
					{
						if (this->_gRef != NULL && this->m_getBindedEffect_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring boneName_wch = boneName;
							jstring boneName_j = __env->NewString((const jchar*)boneName_wch.getString(), boneName_wch.size());
							jmethodID __method = __gr->getMethod("getBindedEffect_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , boneName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap __values1 = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedEffect(boneName);
						}
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedEffectByNodeName(const EVString& nodeName)
					{
						if (this->_gRef != NULL && this->m_getBindedEffectByNodeName_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring nodeName_wch = nodeName;
							jstring nodeName_j = __env->NewString((const jchar*)nodeName_wch.getString(), nodeName_wch.size());
							jmethodID __method = __gr->getMethod("getBindedEffectByNodeName_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , nodeName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap __values1 = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedEffectByNodeName(nodeName);
						}
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedParticle(const EVString& boneName)
					{
						if (this->_gRef != NULL && this->m_getBindedParticle_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring boneName_wch = boneName;
							jstring boneName_j = __env->NewString((const jchar*)boneName_wch.getString(), boneName_wch.size());
							jmethodID __method = __gr->getMethod("getBindedParticle_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , boneName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap __values1 = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedParticle(boneName);
						}
					}
					virtual EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap getBindedRibbonTrail(const EVString& boneName)
					{
						if (this->_gRef != NULL && this->m_getBindedRibbonTrail_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring boneName_wch = boneName;
							jstring boneName_j = __env->NewString((const jchar*)boneName_wch.getString(), boneName_wch.size());
							jmethodID __method = __gr->getMethod("getBindedRibbonTrail_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , boneName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap __values1 = *(EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedRibbonTrail(boneName);
						}
					}
					virtual EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap getBindedRibbonTrailByNodeName(const EVString& nodeName)
					{
						if (this->_gRef != NULL && this->m_getBindedRibbonTrailByNodeName_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring nodeName_wch = nodeName;
							jstring nodeName_j = __env->NewString((const jchar*)nodeName_wch.getString(), nodeName_wch.size());
							jmethodID __method = __gr->getMethod("getBindedRibbonTrailByNodeName_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , nodeName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap __values1 = *(EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedRibbonTrailByNodeName(nodeName);
						}
					}
					virtual EarthView::World::Spatial3D::ModelManager::ModelObjectMap getAllBindedModel()
					{
						if (this->_gRef != NULL && this->m_getAllBindedModel_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getAllBindedModel_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelManager::ModelObjectMap __values1 = *(EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getAllBindedModel();
						}
					}
					virtual EarthView::World::Spatial3D::ModelManager::ModelObjectMap getBindedModel(ev_uint32 subEntityIndex)
					{
						if (this->_gRef != NULL && this->m_getBindedModel_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jmethodID __method = __gr->getMethod("getBindedModel_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , subEntityIndex_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelManager::ModelObjectMap __values1 = *(EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedModel(subEntityIndex);
						}
					}
					virtual EarthView::World::Spatial3D::ModelManager::ModelObjectMap getBindedModelByNodeName(const EVString& nodeName)
					{
						if (this->_gRef != NULL && this->m_getBindedModelByNodeName_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring nodeName_wch = nodeName;
							jstring nodeName_j = __env->NewString((const jchar*)nodeName_wch.getString(), nodeName_wch.size());
							jmethodID __method = __gr->getMethod("getBindedModelByNodeName_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , nodeName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelManager::ModelObjectMap __values1 = *(EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedModelByNodeName(nodeName);
						}
					}
					virtual EarthView::World::Spatial3D::CComponent getComponentByName(const EVString& name)
					{
						if (this->_gRef != NULL && this->m_getComponentByName_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring name_wch = name;
							jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
							jmethodID __method = __gr->getMethod("getComponentByName_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::CComponent __values1 = *(EarthView::World::Spatial3D::CComponent*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getComponentByName(name);
						}
					}
					virtual EarthView::World::Spatial3D::CComponent getComponentBySubEntityIndex(ev_uint32 subEntityIndex)
					{
						if (this->_gRef != NULL && this->m_getComponentBySubEntityIndex_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jmethodID __method = __gr->getMethod("getComponentBySubEntityIndex_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , subEntityIndex_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::CComponent __values1 = *(EarthView::World::Spatial3D::CComponent*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getComponentBySubEntityIndex(subEntityIndex);
						}
					}
					virtual EarthView::World::Spatial3D::CComponent getParentComponentByName(const EVString& name)
					{
						if (this->_gRef != NULL && this->m_getParentComponentByName_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring name_wch = name;
							jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
							jmethodID __method = __gr->getMethod("getParentComponentByName_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::CComponent __values1 = *(EarthView::World::Spatial3D::CComponent*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getParentComponentByName(name);
						}
					}
					virtual EarthView::World::Spatial3D::CComponent getRootComponent()
					{
						if (this->_gRef != NULL && this->m_getRootComponent_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRootComponent_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::CComponent __values1 = *(EarthView::World::Spatial3D::CComponent*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getRootComponent();
						}
					}
					virtual EarthView::World::Spatial3D::ModelManager::ModelObjectMap getBindedModel(const EVString& boneName)
					{
						if (this->_gRef != NULL && this->m_getBindedModel_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring boneName_wch = boneName;
							jstring boneName_j = __env->NewString((const jchar*)boneName_wch.getString(), boneName_wch.size());
							jmethodID __method = __gr->getMethod("getBindedModel_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , boneName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelManager::ModelObjectMap __values1 = *(EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedModel(boneName);
						}
					}
					virtual EarthView::World::Spatial3D::EffectManager::CEffect* getBindedParticleByName(const EVString& aliasName)
					{
						if (this->_gRef != NULL && this->m_getBindedParticleByName_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring aliasName_wch = aliasName;
							jstring aliasName_j = __env->NewString((const jchar*)aliasName_wch.getString(), aliasName_wch.size());
							jmethodID __method = __gr->getMethod("getBindedParticleByName_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , aliasName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::EffectManager::CEffect *__values1 = (EarthView::World::Spatial3D::EffectManager::CEffect*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedParticleByName(aliasName);
						}
					}
					virtual EarthView::World::Graphic::CRibbonTrail* getBindedRibbonTrailByName(const EVString& aliasName)
					{
						if (this->_gRef != NULL && this->m_getBindedRibbonTrailByName_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring aliasName_wch = aliasName;
							jstring aliasName_j = __env->NewString((const jchar*)aliasName_wch.getString(), aliasName_wch.size());
							jmethodID __method = __gr->getMethod("getBindedRibbonTrailByName_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , aliasName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CRibbonTrail *__values1 = (EarthView::World::Graphic::CRibbonTrail*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedRibbonTrailByName(aliasName);
						}
					}
					virtual EarthView::World::Spatial3D::ModelManager::CModelBaseObject* getBindedModelByName(const EVString& aliasName)
					{
						if (this->_gRef != NULL && this->m_getBindedModelByName_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring aliasName_wch = aliasName;
							jstring aliasName_j = __env->NewString((const jchar*)aliasName_wch.getString(), aliasName_wch.size());
							jmethodID __method = __gr->getMethod("getBindedModelByName_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , aliasName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelManager::CModelBaseObject *__values1 = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedModelByName(aliasName);
						}
					}
					virtual EarthView::World::Graphic::CLight* getBindedLightByName(const EVString& aliasName)
					{
						if (this->_gRef != NULL && this->m_getBindedLightByName_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring aliasName_wch = aliasName;
							jstring aliasName_j = __env->NewString((const jchar*)aliasName_wch.getString(), aliasName_wch.size());
							jmethodID __method = __gr->getMethod("getBindedLightByName_EVString_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , aliasName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CLight *__values1 = (EarthView::World::Graphic::CLight*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedLightByName(aliasName);
						}
					}
					virtual ev_bool bindEffectAtBone(EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, const EVString& boneName, const EarthView::World::Spatial::Math::CMatrix4& offMatrix, const EVString& aliasName)
					{
						if (this->_gRef != NULL && this->m_bindEffectAtBone_CEffect_EVString_CMatrix4_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ref_pEffect_j = (jlong) ref_pEffect;
							EarthView::World::Core::ev_wstring boneName_wch = boneName;
							jstring boneName_j = __env->NewString((const jchar*)boneName_wch.getString(), boneName_wch.size());
							jlong offMatrix_j = (jlong) &offMatrix;
							EarthView::World::Core::ev_wstring aliasName_wch = aliasName;
							jstring aliasName_j = __env->NewString((const jchar*)aliasName_wch.getString(), aliasName_wch.size());
							jmethodID __method = __gr->getMethod("bindEffectAtBone_CEffect_EVString_CMatrix4_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ref_pEffect_j, boneName_j, offMatrix_j, aliasName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::bindEffectAtBone(ref_pEffect, boneName, offMatrix, aliasName);
						}
					}
					virtual ev_bool bindEffectAtNode(EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, const EVString& nodeName, const EarthView::World::Spatial::Math::CMatrix4& offMatrix, const EVString& aliasName)
					{
						if (this->_gRef != NULL && this->m_bindEffectAtNode_CEffect_EVString_CMatrix4_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ref_pEffect_j = (jlong) ref_pEffect;
							EarthView::World::Core::ev_wstring nodeName_wch = nodeName;
							jstring nodeName_j = __env->NewString((const jchar*)nodeName_wch.getString(), nodeName_wch.size());
							jlong offMatrix_j = (jlong) &offMatrix;
							EarthView::World::Core::ev_wstring aliasName_wch = aliasName;
							jstring aliasName_j = __env->NewString((const jchar*)aliasName_wch.getString(), aliasName_wch.size());
							jmethodID __method = __gr->getMethod("bindEffectAtNode_CEffect_EVString_CMatrix4_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ref_pEffect_j, nodeName_j, offMatrix_j, aliasName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::bindEffectAtNode(ref_pEffect, nodeName, offMatrix, aliasName);
						}
					}
					virtual ev_bool bindEffectAtSubEntity(EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, ev_uint32 subEntityIndex, const EarthView::World::Spatial::Math::CMatrix4& offMatrix, const EVString& aliasName)
					{
						if (this->_gRef != NULL && this->m_bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ref_pEffect_j = (jlong) ref_pEffect;
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jlong offMatrix_j = (jlong) &offMatrix;
							EarthView::World::Core::ev_wstring aliasName_wch = aliasName;
							jstring aliasName_j = __env->NewString((const jchar*)aliasName_wch.getString(), aliasName_wch.size());
							jmethodID __method = __gr->getMethod("bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ref_pEffect_j, subEntityIndex_j, offMatrix_j, aliasName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::bindEffectAtSubEntity(ref_pEffect, subEntityIndex, offMatrix, aliasName);
						}
					}
					virtual ev_bool bindLightAtSubEntity(EarthView::World::Graphic::CLight* l, ev_uint32 subEntityIndex, const EarthView::World::Spatial::Math::CMatrix4& offMatrix, const EVString& aliasName)
					{
						if (this->_gRef != NULL && this->m_bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong l_j = (jlong) l;
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jlong offMatrix_j = (jlong) &offMatrix;
							EarthView::World::Core::ev_wstring aliasName_wch = aliasName;
							jstring aliasName_j = __env->NewString((const jchar*)aliasName_wch.getString(), aliasName_wch.size());
							jmethodID __method = __gr->getMethod("bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , l_j, subEntityIndex_j, offMatrix_j, aliasName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::bindLightAtSubEntity(l, subEntityIndex, offMatrix, aliasName);
						}
					}
					virtual ev_bool bindModelAtBone(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, const EVString& boneName, const EarthView::World::Spatial::Math::CMatrix4& offMatrix, const EVString& aliasName)
					{
						if (this->_gRef != NULL && this->m_bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ref_pModel_j = (jlong) ref_pModel;
							EarthView::World::Core::ev_wstring boneName_wch = boneName;
							jstring boneName_j = __env->NewString((const jchar*)boneName_wch.getString(), boneName_wch.size());
							jlong offMatrix_j = (jlong) &offMatrix;
							EarthView::World::Core::ev_wstring aliasName_wch = aliasName;
							jstring aliasName_j = __env->NewString((const jchar*)aliasName_wch.getString(), aliasName_wch.size());
							jmethodID __method = __gr->getMethod("bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ref_pModel_j, boneName_j, offMatrix_j, aliasName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::bindModelAtBone(ref_pModel, boneName, offMatrix, aliasName);
						}
					}
					virtual ev_bool bindModelAtSubEntity(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, ev_uint32 subEntityIndex, const EarthView::World::Spatial::Math::CMatrix4& offMatrix, const EVString& aliasName)
					{
						if (this->_gRef != NULL && this->m_bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ref_pModel_j = (jlong) ref_pModel;
							jlong subEntityIndex_j = (jlong) subEntityIndex;
							jlong offMatrix_j = (jlong) &offMatrix;
							EarthView::World::Core::ev_wstring aliasName_wch = aliasName;
							jstring aliasName_j = __env->NewString((const jchar*)aliasName_wch.getString(), aliasName_wch.size());
							jmethodID __method = __gr->getMethod("bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ref_pModel_j, subEntityIndex_j, offMatrix_j, aliasName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::bindModelAtSubEntity(ref_pModel, subEntityIndex, offMatrix, aliasName);
						}
					}
					virtual ev_bool bindModelAtNode(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, const EVString& nodeName, const EarthView::World::Spatial::Math::CMatrix4& offMatrix, const EVString& aliasName)
					{
						if (this->_gRef != NULL && this->m_bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ref_pModel_j = (jlong) ref_pModel;
							EarthView::World::Core::ev_wstring nodeName_wch = nodeName;
							jstring nodeName_j = __env->NewString((const jchar*)nodeName_wch.getString(), nodeName_wch.size());
							jlong offMatrix_j = (jlong) &offMatrix;
							EarthView::World::Core::ev_wstring aliasName_wch = aliasName;
							jstring aliasName_j = __env->NewString((const jchar*)aliasName_wch.getString(), aliasName_wch.size());
							jmethodID __method = __gr->getMethod("bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ref_pModel_j, nodeName_j, offMatrix_j, aliasName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::bindModelAtNode(ref_pModel, nodeName, offMatrix, aliasName);
						}
					}
					virtual ev_bool unBindEffect(EarthView::World::Spatial3D::EffectManager::CEffect* pEffect)
					{
						if (this->_gRef != NULL && this->m_unBindEffect_CEffect_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong pEffect_j = (jlong) pEffect;
							jmethodID __method = __gr->getMethod("unBindEffect_CEffect_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pEffect_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::unBindEffect(pEffect);
						}
					}
					virtual ev_bool unBindLight(EarthView::World::Graphic::CLight* pLight)
					{
						if (this->_gRef != NULL && this->m_unBindLight_CLight_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong pLight_j = (jlong) pLight;
							jmethodID __method = __gr->getMethod("unBindLight_CLight_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pLight_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::unBindLight(pLight);
						}
					}
					virtual ev_bool unBindModel(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel)
					{
						if (this->_gRef != NULL && this->m_unBindModel_CModelBaseObject_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong pModel_j = (jlong) pModel;
							jmethodID __method = __gr->getMethod("unBindModel_CModelBaseObject_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , pModel_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::unBindModel(pModel);
						}
					}
					virtual ev_uint32 getBindedID()
					{
						if (this->_gRef != NULL && this->m_getBindedID_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getBindedID_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint32 __values1 = (ev_uint32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getBindedID();
						}
					}
					virtual void setBindedID(ev_uint32 bindedID)
					{
						if (this->_gRef != NULL && this->m_setBindedID_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong bindedID_j = (jlong) bindedID;
							jmethodID __method = __gr->getMethod("setBindedID_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , bindedID_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setBindedID(bindedID);
						}
					}
					virtual void setBindedEffectVisibility(ev_bool isVisible)
					{
						if (this->_gRef != NULL && this->m_setBindedEffectVisibility_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean isVisible_j = (jboolean) isVisible;
							jmethodID __method = __gr->getMethod("setBindedEffectVisibility_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , isVisible_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setBindedEffectVisibility(isVisible);
						}
					}
					virtual ev_bool updateMaterial(const EarthView::World::Graphic::CMaterialPtr& matPtr, const EarthView::World::Core::StringVector& replacedTextures, const EarthView::World::Core::StringVector& newTextureFilesPath)
					{
						if (this->_gRef != NULL && this->m_updateMaterial_CMaterialPtr_StringVector_StringVector_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong matPtr_j = (jlong) &matPtr;
							jlong replacedTextures_j = (jlong) &replacedTextures;
							jlong newTextureFilesPath_j = (jlong) &newTextureFilesPath;
							jmethodID __method = __gr->getMethod("updateMaterial_CMaterialPtr_StringVector_StringVector_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , matPtr_j, replacedTextures_j, newTextureFilesPath_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::updateMaterial(matPtr, replacedTextures, newTextureFilesPath);
						}
					}
					virtual EarthView::World::Graphic::CMeshPtr getMeshPtr()
					{
						if (this->_gRef != NULL && this->m_getMeshPtr_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getMeshPtr_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CMeshPtr __values1 = *(EarthView::World::Graphic::CMeshPtr*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getMeshPtr();
						}
					}
					virtual EarthView::World::Spatial3D::TexturePtrVector getTexturePtrs()
					{
						if (this->_gRef != NULL && this->m_getTexturePtrs_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getTexturePtrs_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::TexturePtrVector __values1 = *(EarthView::World::Spatial3D::TexturePtrVector*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getTexturePtrs();
						}
					}
					virtual EarthView::World::Spatial3D::MaterialPtrVector getMaterialPtrs()
					{
						if (this->_gRef != NULL && this->m_getMaterialPtrs_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getMaterialPtrs_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::MaterialPtrVector __values1 = *(EarthView::World::Spatial3D::MaterialPtrVector*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getMaterialPtrs();
						}
					}
					virtual EarthView::World::Spatial3D::GpuPtrVector getGpuPtrs()
					{
						if (this->_gRef != NULL && this->m_getGpuPtrs_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getGpuPtrs_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::GpuPtrVector __values1 = *(EarthView::World::Spatial3D::GpuPtrVector*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getGpuPtrs();
						}
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getMeshFeature()
					{
						if (this->_gRef != NULL && this->m_getMeshFeature_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getMeshFeature_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::GeoDataset::IFeature *__values1 = (EarthView::World::Spatial::GeoDataset::IFeature*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getMeshFeature();
						}
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getOrigTextureFeatures()
					{
						if (this->_gRef != NULL && this->m_getOrigTextureFeatures_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getOrigTextureFeatures_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial3D::Dataset::FeatureVector &__values1 = *(const EarthView::World::Spatial3D::Dataset::FeatureVector*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getOrigTextureFeatures();
						}
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getThumbTextureFeatures()
					{
						if (this->_gRef != NULL && this->m_getThumbTextureFeatures_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getThumbTextureFeatures_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial3D::Dataset::FeatureVector &__values1 = *(const EarthView::World::Spatial3D::Dataset::FeatureVector*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getThumbTextureFeatures();
						}
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getMaterialFeatures()
					{
						if (this->_gRef != NULL && this->m_getMaterialFeatures_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getMaterialFeatures_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial3D::Dataset::FeatureVector &__values1 = *(const EarthView::World::Spatial3D::Dataset::FeatureVector*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getMaterialFeatures();
						}
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getAnimationFeatures()
					{
						if (this->_gRef != NULL && this->m_getAnimationFeatures_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getAnimationFeatures_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial3D::Dataset::FeatureVector &__values1 = *(const EarthView::World::Spatial3D::Dataset::FeatureVector*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getAnimationFeatures();
						}
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getGpuFeatures()
					{
						if (this->_gRef != NULL && this->m_getGpuFeatures_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getGpuFeatures_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial3D::Dataset::FeatureVector &__values1 = *(const EarthView::World::Spatial3D::Dataset::FeatureVector*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getGpuFeatures();
						}
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getProgramFeatures()
					{
						if (this->_gRef != NULL && this->m_getProgramFeatures_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getProgramFeatures_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial3D::Dataset::FeatureVector &__values1 = *(const EarthView::World::Spatial3D::Dataset::FeatureVector*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getProgramFeatures();
						}
					}
					virtual EarthView::World::Spatial3D::Dataset::FeatureVector getResourceFeature()
					{
						if (this->_gRef != NULL && this->m_getResourceFeature_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getResourceFeature_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::Dataset::FeatureVector __values1 = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getResourceFeature();
						}
					}
					virtual void startFlash(const EarthView::World::Graphic::CColourValue& color, ev_uint32 hightLight_ms, ev_uint32 normally_ms)
					{
						if (this->_gRef != NULL && this->m_startFlash_CColourValue_ev_uint32_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong color_j = (jlong) &color;
							jlong hightLight_ms_j = (jlong) hightLight_ms;
							jlong normally_ms_j = (jlong) normally_ms;
							jmethodID __method = __gr->getMethod("startFlash_CColourValue_ev_uint32_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , color_j, hightLight_ms_j, normally_ms_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::startFlash(color, hightLight_ms, normally_ms);
						}
					}
					virtual void stopFlash()
					{
						if (this->_gRef != NULL && this->m_stopFlash_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("stopFlash_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::stopFlash();
						}
					}
					virtual EarthView::World::Spatial3D::ModelObjectState getModelState()
					{
						if (this->_gRef != NULL && this->m_getModelState_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getModelState_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::ModelObjectState __values1 = (EarthView::World::Spatial3D::ModelObjectState) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getModelState();
						}
					}
					virtual EarthView::World::Spatial3D::TextureState getTextureState()
					{
						if (this->_gRef != NULL && this->m_getTextureState_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getTextureState_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial3D::TextureState __values1 = (EarthView::World::Spatial3D::TextureState) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getTextureState();
						}
					}
					virtual ev_bool needSwitchTexture()
					{
						if (this->_gRef != NULL && this->m_needSwitchTexture_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("needSwitchTexture_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::needSwitchTexture();
						}
					}
					virtual ev_bool switchThumb(EarthView::World::Spatial3D::TexturePtrVector& outTmpTextureVec)
					{
						if (this->_gRef != NULL && this->m_switchThumb_TexturePtrVector_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong outTmpTextureVec_j = (jlong) &outTmpTextureVec;
							jmethodID __method = __gr->getMethod("switchThumb_TexturePtrVector_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , outTmpTextureVec_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::switchThumb(outTmpTextureVec);
						}
					}
					virtual void attachThumb(EarthView::World::Spatial3D::TexturePtrVector& tmpTextureVec)
					{
						if (this->_gRef != NULL && this->m_attachThumb_TexturePtrVector_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong tmpTextureVec_j = (jlong) &tmpTextureVec;
							jmethodID __method = __gr->getMethod("attachThumb_TexturePtrVector_callback");
							__env->CallVoidMethod(__obj, __method , tmpTextureVec_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::attachThumb(tmpTextureVec);
						}
					}
					virtual ev_bool switchOrig(EarthView::World::Spatial3D::TexturePtrVector& outTmpTextureVec)
					{
						if (this->_gRef != NULL && this->m_switchOrig_TexturePtrVector_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong outTmpTextureVec_j = (jlong) &outTmpTextureVec;
							jmethodID __method = __gr->getMethod("switchOrig_TexturePtrVector_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , outTmpTextureVec_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::switchOrig(outTmpTextureVec);
						}
					}
					virtual void attachOrig(EarthView::World::Spatial3D::TexturePtrVector& tmpTextureVec)
					{
						if (this->_gRef != NULL && this->m_attachOrig_TexturePtrVector_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong tmpTextureVec_j = (jlong) &tmpTextureVec;
							jmethodID __method = __gr->getMethod("attachOrig_TexturePtrVector_callback");
							__env->CallVoidMethod(__obj, __method , tmpTextureVec_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::attachOrig(tmpTextureVec);
						}
					}
					virtual void clearTmpTextureStream(EarthView::World::Spatial3D::TexturePtrVector& tmpTextureVec)
					{
						if (this->_gRef != NULL && this->m_clearTmpTextureStream_TexturePtrVector_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong tmpTextureVec_j = (jlong) &tmpTextureVec;
							jmethodID __method = __gr->getMethod("clearTmpTextureStream_TexturePtrVector_callback");
							__env->CallVoidMethod(__obj, __method , tmpTextureVec_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::clearTmpTextureStream(tmpTextureVec);
						}
					}
					virtual void setLoadFromLayer(const ev_bool& fromLayer)
					{
						if (this->_gRef != NULL && this->m_setLoadFromLayer_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean fromLayer_j = (jboolean) fromLayer;
							jmethodID __method = __gr->getMethod("setLoadFromLayer_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , fromLayer_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setLoadFromLayer(fromLayer);
						}
					}
					virtual ev_bool getLoadFromLayer()
					{
						if (this->_gRef != NULL && this->m_getLoadFromLayer_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getLoadFromLayer_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getLoadFromLayer();
						}
					}
					virtual ev_bool hasFltAnimation()
					{
						if (this->_gRef != NULL && this->m_hasFltAnimation_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("hasFltAnimation_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::hasFltAnimation();
						}
					}
					virtual void mergeBoundingBoxForNode()
					{
						if (this->_gRef != NULL && this->m_mergeBoundingBoxForNode_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("mergeBoundingBoxForNode_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::mergeBoundingBoxForNode();
						}
					}
					virtual void startAllNodeAnimation()
					{
						if (this->_gRef != NULL && this->m_startAllNodeAnimation_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("startAllNodeAnimation_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::startAllNodeAnimation();
						}
					}
					virtual void stopAllNodeAnimation()
					{
						if (this->_gRef != NULL && this->m_stopAllNodeAnimation_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("stopAllNodeAnimation_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::stopAllNodeAnimation();
						}
					}
					virtual void startAllAnimation()
					{
						if (this->_gRef != NULL && this->m_startAllAnimation_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("startAllAnimation_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::startAllAnimation();
						}
					}
					virtual void startRangeAnimation(const EVString& keyTimeTagName, ev_int32 segmentConut, ev_uint32 option)
					{
						if (this->_gRef != NULL && this->m_startRangeAnimation_EVString_ev_int32_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring keyTimeTagName_wch = keyTimeTagName;
							jstring keyTimeTagName_j = __env->NewString((const jchar*)keyTimeTagName_wch.getString(), keyTimeTagName_wch.size());
							jint segmentConut_j = (jint) segmentConut;
							jlong option_j = (jlong) option;
							jmethodID __method = __gr->getMethod("startRangeAnimation_EVString_ev_int32_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , keyTimeTagName_j, segmentConut_j, option_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::startRangeAnimation(keyTimeTagName, segmentConut, option);
						}
					}
					virtual void startRangeAnimation(const EVString& keyTimeTagName)
					{
						if (this->_gRef != NULL && this->m_startRangeAnimation_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring keyTimeTagName_wch = keyTimeTagName;
							jstring keyTimeTagName_j = __env->NewString((const jchar*)keyTimeTagName_wch.getString(), keyTimeTagName_wch.size());
							jmethodID __method = __gr->getMethod("startRangeAnimation_EVString_callback");
							__env->CallVoidMethod(__obj, __method , keyTimeTagName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::startRangeAnimation(keyTimeTagName);
						}
					}
					virtual ev_int32 startRangeAnimationIndependently(const EVString& keyTimeTagName, ev_int32 segmentConut, ev_uint32 option)
					{
						if (this->_gRef != NULL && this->m_startRangeAnimationIndependently_EVString_ev_int32_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring keyTimeTagName_wch = keyTimeTagName;
							jstring keyTimeTagName_j = __env->NewString((const jchar*)keyTimeTagName_wch.getString(), keyTimeTagName_wch.size());
							jint segmentConut_j = (jint) segmentConut;
							jlong option_j = (jlong) option;
							jmethodID __method = __gr->getMethod("startRangeAnimationIndependently_EVString_ev_int32_ev_uint32_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , keyTimeTagName_j, segmentConut_j, option_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::startRangeAnimationIndependently(keyTimeTagName, segmentConut, option);
						}
					}
					virtual ev_int32 startRangeAnimationIndependently(const EVString& keyTimeTagName)
					{
						if (this->_gRef != NULL && this->m_startRangeAnimationIndependently_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring keyTimeTagName_wch = keyTimeTagName;
							jstring keyTimeTagName_j = __env->NewString((const jchar*)keyTimeTagName_wch.getString(), keyTimeTagName_wch.size());
							jmethodID __method = __gr->getMethod("startRangeAnimationIndependently_EVString_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , keyTimeTagName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::startRangeAnimationIndependently(keyTimeTagName);
						}
					}
					virtual void stopRangeAnimation(ev_bool stopAtRangeStart)
					{
						if (this->_gRef != NULL && this->m_stopRangeAnimation_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean stopAtRangeStart_j = (jboolean) stopAtRangeStart;
							jmethodID __method = __gr->getMethod("stopRangeAnimation_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , stopAtRangeStart_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::stopRangeAnimation(stopAtRangeStart);
						}
					}
					virtual void stopRangeAnimation(ev_bool stopAtRangeStart, ev_int32 handle)
					{
						if (this->_gRef != NULL && this->m_stopRangeAnimation_ev_bool_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean stopAtRangeStart_j = (jboolean) stopAtRangeStart;
							jint handle_j = (jint) handle;
							jmethodID __method = __gr->getMethod("stopRangeAnimation_ev_bool_ev_int32_callback");
							__env->CallVoidMethod(__obj, __method , stopAtRangeStart_j, handle_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::stopRangeAnimation(stopAtRangeStart, handle);
						}
					}
					virtual void stopAllAnimation()
					{
						if (this->_gRef != NULL && this->m_stopAllAnimation_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("stopAllAnimation_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::stopAllAnimation();
						}
					}
					virtual void pauseAllAnimation()
					{
						if (this->_gRef != NULL && this->m_pauseAllAnimation_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("pauseAllAnimation_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::pauseAllAnimation();
						}
					}
					virtual void continueAllAnimation()
					{
						if (this->_gRef != NULL && this->m_continueAllAnimation_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("continueAllAnimation_void_callback");
							__env->CallVoidMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::continueAllAnimation();
						}
					}
					virtual void setAllAnimationLoop(ev_bool loop)
					{
						if (this->_gRef != NULL && this->m_setAllAnimationLoop_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean loop_j = (jboolean) loop;
							jmethodID __method = __gr->getMethod("setAllAnimationLoop_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , loop_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setAllAnimationLoop(loop);
						}
					}
					virtual void startAnimation(const EVString& animationName)
					{
						if (this->_gRef != NULL && this->m_startAnimation_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring animationName_wch = animationName;
							jstring animationName_j = __env->NewString((const jchar*)animationName_wch.getString(), animationName_wch.size());
							jmethodID __method = __gr->getMethod("startAnimation_EVString_callback");
							__env->CallVoidMethod(__obj, __method , animationName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::startAnimation(animationName);
						}
					}
					virtual void stopAnimation(const EVString& animationName)
					{
						if (this->_gRef != NULL && this->m_stopAnimation_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring animationName_wch = animationName;
							jstring animationName_j = __env->NewString((const jchar*)animationName_wch.getString(), animationName_wch.size());
							jmethodID __method = __gr->getMethod("stopAnimation_EVString_callback");
							__env->CallVoidMethod(__obj, __method , animationName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::stopAnimation(animationName);
						}
					}
					virtual void stopAnimation(const EVString& animationName, ev_bool processChild)
					{
						if (this->_gRef != NULL && this->m_stopAnimation_EVString_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring animationName_wch = animationName;
							jstring animationName_j = __env->NewString((const jchar*)animationName_wch.getString(), animationName_wch.size());
							jboolean processChild_j = (jboolean) processChild;
							jmethodID __method = __gr->getMethod("stopAnimation_EVString_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , animationName_j, processChild_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::stopAnimation(animationName, processChild);
						}
					}
					virtual void pauseAnimation(const EVString& animationName)
					{
						if (this->_gRef != NULL && this->m_pauseAnimation_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring animationName_wch = animationName;
							jstring animationName_j = __env->NewString((const jchar*)animationName_wch.getString(), animationName_wch.size());
							jmethodID __method = __gr->getMethod("pauseAnimation_EVString_callback");
							__env->CallVoidMethod(__obj, __method , animationName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::pauseAnimation(animationName);
						}
					}
					virtual void pauseAnimation(const EVString& animationName, ev_bool processChild)
					{
						if (this->_gRef != NULL && this->m_pauseAnimation_EVString_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring animationName_wch = animationName;
							jstring animationName_j = __env->NewString((const jchar*)animationName_wch.getString(), animationName_wch.size());
							jboolean processChild_j = (jboolean) processChild;
							jmethodID __method = __gr->getMethod("pauseAnimation_EVString_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , animationName_j, processChild_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::pauseAnimation(animationName, processChild);
						}
					}
					virtual void continueAnimation(const EVString& animationName)
					{
						if (this->_gRef != NULL && this->m_continueAnimation_EVString_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring animationName_wch = animationName;
							jstring animationName_j = __env->NewString((const jchar*)animationName_wch.getString(), animationName_wch.size());
							jmethodID __method = __gr->getMethod("continueAnimation_EVString_callback");
							__env->CallVoidMethod(__obj, __method , animationName_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::continueAnimation(animationName);
						}
					}
					virtual void continueAnimation(const EVString& animationName, ev_bool processChild)
					{
						if (this->_gRef != NULL && this->m_continueAnimation_EVString_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring animationName_wch = animationName;
							jstring animationName_j = __env->NewString((const jchar*)animationName_wch.getString(), animationName_wch.size());
							jboolean processChild_j = (jboolean) processChild;
							jmethodID __method = __gr->getMethod("continueAnimation_EVString_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , animationName_j, processChild_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::continueAnimation(animationName, processChild);
						}
					}
					virtual void setAnimationLoop(const EVString& animationName, bool loop)
					{
						if (this->_gRef != NULL && this->m_setAnimationLoop_EVString_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring animationName_wch = animationName;
							jstring animationName_j = __env->NewString((const jchar*)animationName_wch.getString(), animationName_wch.size());
							jboolean loop_j = (jboolean) loop;
							jmethodID __method = __gr->getMethod("setAnimationLoop_EVString_bool_callback");
							__env->CallVoidMethod(__obj, __method , animationName_j, loop_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setAnimationLoop(animationName, loop);
						}
					}
					virtual void setAnimationLoop(const EVString& animationName, bool loop, ev_bool processChild)
					{
						if (this->_gRef != NULL && this->m_setAnimationLoop_EVString_bool_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							EarthView::World::Core::ev_wstring animationName_wch = animationName;
							jstring animationName_j = __env->NewString((const jchar*)animationName_wch.getString(), animationName_wch.size());
							jboolean loop_j = (jboolean) loop;
							jboolean processChild_j = (jboolean) processChild;
							jmethodID __method = __gr->getMethod("setAnimationLoop_EVString_bool_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , animationName_j, loop_j, processChild_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setAnimationLoop(animationName, loop, processChild);
						}
					}
					virtual EarthView::World::Graphic::CNode* getNode()
					{
						if (this->_gRef != NULL && this->m_getNode_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getNode_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getNode();
						}
					}
					virtual ev_bool attachToScene()
					{
						if (this->_gRef != NULL && this->m_attachToScene_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("attachToScene_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::attachToScene();
						}
					}
					virtual ev_bool detachFromScene()
					{
						if (this->_gRef != NULL && this->m_detachFromScene_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("detachFromScene_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::detachFromScene();
						}
					}
					virtual void setUserData(EarthView::World::Spatial3D::CFeatureUserData& userData)
					{
						if (this->_gRef != NULL && this->m_setUserData_CFeatureUserData_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong userData_j = (jlong) &userData;
							jmethodID __method = __gr->getMethod("setUserData_CFeatureUserData_callback");
							__env->CallVoidMethod(__obj, __method , userData_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CManualModelObject::setUserData(userData);
						}
					}
					virtual ev_bool getSelectable()
					{
						if (this->_gRef != NULL && this->m_getSelectable_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSelectable_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::getSelectable();
						}
					}
					virtual ev_bool update()
					{
						if (this->_gRef != NULL && this->m_update_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("update_void_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CManualModelObject::update();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCManualModelObjectProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_attachToNode_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					EarthView::World::Graphic::CNode *n = (EarthView::World::Graphic::CNode*) n_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::attachToNode(n);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->attachToNode(n);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1attachToNode_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_attachToNode_CNode_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"attachToNode_CNode_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_attachToNode_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					EarthView::World::Graphic::CNode *n = (EarthView::World::Graphic::CNode*) n_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::attachToNode(n);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_detachFromNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::detachFromNode();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::CNode* __values1 = pObjectX->detachFromNode();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1detachFromNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_detachFromNode_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"detachFromNode_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_detachFromNode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::detachFromNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::isVisible();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isVisible();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1isVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isVisible_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isVisible_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_isVisible_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::isVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setVisible(flag);
					}
					else
					{
						pObjectX->setVisible(flag);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setVisible_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setVisible_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setVisible_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setVisible(flag);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setVisible_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j, jboolean bRecursive_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					ev_bool bRecursive = (ev_bool) bRecursive_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setVisible(flag, bRecursive);
					}
					else
					{
						pObjectX->setVisible(flag, bRecursive);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setVisible_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setVisible_ev_bool_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setVisible_ev_bool_ev_bool_callback", "(ZZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setVisible_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j, jboolean bRecursive_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					ev_bool bRecursive = (ev_bool) bRecursive_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setVisible(flag, bRecursive);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setSubEntityVisibility_1ev_1uint32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jboolean isVisible_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					ev_bool isVisible = (ev_bool) isVisible_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setSubEntityVisibility(subEntityIndex, isVisible);
					}
					else
					{
						pObjectX->setSubEntityVisibility(subEntityIndex, isVisible);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setSubEntityVisibility_1ev_1uint32_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSubEntityVisibility_ev_uint32_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSubEntityVisibility_ev_uint32_ev_bool_callback", "(JZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setSubEntityVisibility_1ev_1uint32_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jboolean isVisible_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					ev_bool isVisible = (ev_bool) isVisible_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setSubEntityVisibility(subEntityIndex, isVisible);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setSubEntityVisibility_1ev_1uint32_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jboolean isVisible_j, jboolean bRecursive_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					ev_bool isVisible = (ev_bool) isVisible_j;
					ev_bool bRecursive = (ev_bool) bRecursive_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setSubEntityVisibility(subEntityIndex, isVisible, bRecursive);
					}
					else
					{
						pObjectX->setSubEntityVisibility(subEntityIndex, isVisible, bRecursive);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setSubEntityVisibility_1ev_1uint32_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSubEntityVisibility_ev_uint32_ev_bool_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSubEntityVisibility_ev_uint32_ev_bool_ev_bool_callback", "(JZZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setSubEntityVisibility_1ev_1uint32_1ev_1bool_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jboolean isVisible_j, jboolean bRecursive_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					ev_bool isVisible = (ev_bool) isVisible_j;
					ev_bool bRecursive = (ev_bool) bRecursive_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setSubEntityVisibility(subEntityIndex, isVisible, bRecursive);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getSubEntityVisibility_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getSubEntityVisibility(subEntityIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getSubEntityVisibility(subEntityIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getSubEntityVisibility_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSubEntityVisibility_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSubEntityVisibility_ev_uint32_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getSubEntityVisibility_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getSubEntityVisibility(subEntityIndex);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						EarthView::World::Spatial3D::ModelType __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial3D::ModelType __values1 = pObjectX->getType();
						jint __values1_j = (jint) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					EarthView::World::Spatial3D::ModelType __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getEntity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						EarthView::World::Graphic::CEntity* __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getEntity();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::CEntity* __values1 = pObjectX->getEntity();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getEntity_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEntity_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEntity_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getEntity_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					EarthView::World::Graphic::CEntity* __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getEntity();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setRenderingMaxDistance_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dist_j)
				{
					ev_real64 dist = (ev_real64) dist_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setRenderingMaxDistance(dist);
					}
					else
					{
						pObjectX->setRenderingMaxDistance(dist);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setRenderingMaxDistance_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setRenderingMaxDistance_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setRenderingMaxDistance_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setRenderingMaxDistance_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dist_j)
				{
					ev_real64 dist = (ev_real64) dist_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setRenderingMaxDistance(dist);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getRenderingMaxDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getRenderingMaxDistance();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getRenderingMaxDistance();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getRenderingMaxDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRenderingMaxDistance_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRenderingMaxDistance_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getRenderingMaxDistance_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getRenderingMaxDistance();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setRenderingMinDistance_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dist_j)
				{
					ev_real64 dist = (ev_real64) dist_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setRenderingMinDistance(dist);
					}
					else
					{
						pObjectX->setRenderingMinDistance(dist);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setRenderingMinDistance_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setRenderingMinDistance_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setRenderingMinDistance_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setRenderingMinDistance_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dist_j)
				{
					ev_real64 dist = (ev_real64) dist_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setRenderingMinDistance(dist);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getRenderingMinDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getRenderingMinDistance();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						ev_real64 __values1 = pObjectX->getRenderingMinDistance();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getRenderingMinDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRenderingMinDistance_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRenderingMinDistance_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getRenderingMinDistance_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					ev_real64 __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getRenderingMinDistance();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_calculateSubEntityIndex_1ev_1uint16_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint submeshIndex_j, jlong instanceIndex_j)
				{
					ev_uint16 submeshIndex = (ev_uint16) submeshIndex_j;
					ev_uint32 instanceIndex = (ev_uint32) instanceIndex_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::calculateSubEntityIndex(submeshIndex, instanceIndex);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->calculateSubEntityIndex(submeshIndex, instanceIndex);
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1calculateSubEntityIndex_1ev_1uint16_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_calculateSubEntityIndex_ev_uint16_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"calculateSubEntityIndex_ev_uint16_ev_uint32_callback", "(IJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_calculateSubEntityIndex_1ev_1uint16_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint submeshIndex_j, jlong instanceIndex_j)
				{
					ev_uint16 submeshIndex = (ev_uint16) submeshIndex_j;
					ev_uint32 instanceIndex = (ev_uint32) instanceIndex_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::calculateSubEntityIndex(submeshIndex, instanceIndex);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_calculateInstanceIndex_1ev_1uint32_1ev_1int16_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jlong submeshIndex_j, jlong instanceIndex_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					ev_int16 &submeshIndex = *(ev_int16*) submeshIndex_j;
					ev_int32 &instanceIndex = *(ev_int32*) instanceIndex_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::calculateInstanceIndex(subEntityIndex, submeshIndex, instanceIndex);
					}
					else
					{
						pObjectX->calculateInstanceIndex(subEntityIndex, submeshIndex, instanceIndex);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1calculateInstanceIndex_1ev_1uint32_1ev_1int16_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_calculateInstanceIndex_ev_uint32_ev_int16_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"calculateInstanceIndex_ev_uint32_ev_int16_ev_int32_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_calculateInstanceIndex_1ev_1uint32_1ev_1int16_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jlong submeshIndex_j, jlong instanceIndex_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					ev_int16 &submeshIndex = *(ev_int16*) submeshIndex_j;
					ev_int32 &instanceIndex = *(ev_int32*) instanceIndex_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::calculateInstanceIndex(subEntityIndex, submeshIndex, instanceIndex);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getNumSubEntities_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getNumSubEntities();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getNumSubEntities();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getNumSubEntities_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getNumSubEntities_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getNumSubEntities_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getNumSubEntities_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getNumSubEntities();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_createLocalAxisNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::createLocalAxisNode();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::CNode* __values1 = pObjectX->createLocalAxisNode();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1createLocalAxisNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createLocalAxisNode_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createLocalAxisNode_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_createLocalAxisNode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::createLocalAxisNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_createLocalAxisNode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring componentName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* componentName_ch = (const ev_char*)__env->GetStringUTFChars(componentName_j,JNI_FALSE);
					const EVString componentName = componentName_ch;
					__env->ReleaseStringUTFChars(componentName_j, (const char *)componentName_ch);
					#else
					const ev_wchar* componentName_ch = (const ev_wchar*)__env->GetStringChars(componentName_j,JNI_FALSE);
					const EVString componentName = componentName_ch;
					__env->ReleaseStringChars(componentName_j, (const jchar *)componentName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::createLocalAxisNode(componentName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::CNode* __values1 = pObjectX->createLocalAxisNode(componentName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1createLocalAxisNode_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_createLocalAxisNode_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"createLocalAxisNode_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_createLocalAxisNode_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring componentName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* componentName_ch = (const ev_char*)__env->GetStringUTFChars(componentName_j,JNI_FALSE);
					const EVString componentName = componentName_ch;
					__env->ReleaseStringUTFChars(componentName_j, (const char *)componentName_ch);
					#else
					const ev_wchar* componentName_ch = (const ev_wchar*)__env->GetStringChars(componentName_j,JNI_FALSE);
					const EVString componentName = componentName_ch;
					__env->ReleaseStringChars(componentName_j, (const jchar *)componentName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::createLocalAxisNode(componentName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getLocalAxisNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getLocalAxisNode();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::CNode* __values1 = pObjectX->getLocalAxisNode();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getLocalAxisNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLocalAxisNode_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLocalAxisNode_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getLocalAxisNode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getLocalAxisNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_destroyLocalAxisNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::destroyLocalAxisNode();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->destroyLocalAxisNode();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1destroyLocalAxisNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_destroyLocalAxisNode_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"destroyLocalAxisNode_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_destroyLocalAxisNode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::destroyLocalAxisNode();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getBoneNode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring boneName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* boneName_ch = (const ev_char*)__env->GetStringUTFChars(boneName_j,JNI_FALSE);
					const EVString boneName = boneName_ch;
					__env->ReleaseStringUTFChars(boneName_j, (const char *)boneName_ch);
					#else
					const ev_wchar* boneName_ch = (const ev_wchar*)__env->GetStringChars(boneName_j,JNI_FALSE);
					const EVString boneName = boneName_ch;
					__env->ReleaseStringChars(boneName_j, (const jchar *)boneName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getBoneNode(boneName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::CNode* __values1 = pObjectX->getBoneNode(boneName);
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBoneNode_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBoneNode_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBoneNode_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getBoneNode_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring boneName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* boneName_ch = (const ev_char*)__env->GetStringUTFChars(boneName_j,JNI_FALSE);
					const EVString boneName = boneName_ch;
					__env->ReleaseStringUTFChars(boneName_j, (const char *)boneName_ch);
					#else
					const ev_wchar* boneName_ch = (const ev_wchar*)__env->GetStringChars(boneName_j,JNI_FALSE);
					const EVString boneName = boneName_ch;
					__env->ReleaseStringChars(boneName_j, (const jchar *)boneName_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getBoneNode(boneName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_updateSkeletonAnimationVertex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::updateSkeletonAnimationVertex();
					}
					else
					{
						pObjectX->updateSkeletonAnimationVertex();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1updateSkeletonAnimationVertex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_updateSkeletonAnimationVertex_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"updateSkeletonAnimationVertex_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_updateSkeletonAnimationVertex_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::updateSkeletonAnimationVertex();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setSelectionColour_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
				{
					const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setSelectionColour(color);
					}
					else
					{
						pObjectX->setSelectionColour(color);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setSelectionColour_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSelectionColour_CColourValue_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSelectionColour_CColourValue_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setSelectionColour_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
				{
					const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setSelectionColour(color);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getSelectionColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						EarthView::World::Graphic::CColourValue __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getSelectionColour();
						EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::CColourValue __values1 = pObjectX->getSelectionColour();
						EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getSelectionColour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSelectionColour_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSelectionColour_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getSelectionColour_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					EarthView::World::Graphic::CColourValue __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getSelectionColour();
					EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setEnvParam_1CColourValue_1CColourValue_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ambient_j, jlong diffuse_j, jlong specular_j)
				{
					const EarthView::World::Graphic::CColourValue &ambient = *(EarthView::World::Graphic::CColourValue*) ambient_j;
					const EarthView::World::Graphic::CColourValue &diffuse = *(EarthView::World::Graphic::CColourValue*) diffuse_j;
					const EarthView::World::Graphic::CColourValue &specular = *(EarthView::World::Graphic::CColourValue*) specular_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setEnvParam(ambient, diffuse, specular);
					}
					else
					{
						pObjectX->setEnvParam(ambient, diffuse, specular);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setEnvParam_1CColourValue_1CColourValue_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEnvParam_CColourValue_CColourValue_CColourValue_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEnvParam_CColourValue_CColourValue_CColourValue_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setEnvParam_1CColourValue_1CColourValue_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ambient_j, jlong diffuse_j, jlong specular_j)
				{
					const EarthView::World::Graphic::CColourValue &ambient = *(EarthView::World::Graphic::CColourValue*) ambient_j;
					const EarthView::World::Graphic::CColourValue &diffuse = *(EarthView::World::Graphic::CColourValue*) diffuse_j;
					const EarthView::World::Graphic::CColourValue &specular = *(EarthView::World::Graphic::CColourValue*) specular_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setEnvParam(ambient, diffuse, specular);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_isSelectable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::isSelectable();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isSelectable();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1isSelectable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isSelectable_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isSelectable_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_isSelectable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::isSelectable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_isSelected_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::isSelected();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isSelected();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1isSelected_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isSelected_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isSelected_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_isSelected_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::isSelected();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setSelectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setSelectable(flag);
					}
					else
					{
						pObjectX->setSelectable(flag);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setSelectable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSelectable_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSelectable_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setSelectable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setSelectable(flag);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setSelected_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setSelected(flag);
					}
					else
					{
						pObjectX->setSelected(flag);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setSelected_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSelected_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSelected_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setSelected_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setSelected(flag);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setSubEntitySelected_1ev_1uint32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jboolean flag_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setSubEntitySelected(subEntityIndex, flag);
					}
					else
					{
						pObjectX->setSubEntitySelected(subEntityIndex, flag);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setSubEntitySelected_1ev_1uint32_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSubEntitySelected_ev_uint32_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSubEntitySelected_ev_uint32_ev_bool_callback", "(JZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setSubEntitySelected_1ev_1uint32_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jboolean flag_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setSubEntitySelected(subEntityIndex, flag);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setSubEntitySelected_1ev_1uint32_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jint segmentIndex_j, jboolean flag_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					ev_int32 segmentIndex = (ev_int32) segmentIndex_j;
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setSubEntitySelected(subEntityIndex, segmentIndex, flag);
					}
					else
					{
						pObjectX->setSubEntitySelected(subEntityIndex, segmentIndex, flag);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setSubEntitySelected_1ev_1uint32_1ev_1int32_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSubEntitySelected_ev_uint32_ev_int32_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSubEntitySelected_ev_uint32_ev_int32_ev_bool_callback", "(JIZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setSubEntitySelected_1ev_1uint32_1ev_1int32_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jint segmentIndex_j, jboolean flag_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					ev_int32 segmentIndex = (ev_int32) segmentIndex_j;
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setSubEntitySelected(subEntityIndex, segmentIndex, flag);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getSubEntitySelected_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getSubEntitySelected(subEntityIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getSubEntitySelected(subEntityIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getSubEntitySelected_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSubEntitySelected_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSubEntitySelected_ev_uint32_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getSubEntitySelected_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getSubEntitySelected(subEntityIndex);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getSelectedSubEntityIndex_1ev_1uint32_1ev_1uint32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subMeshIndex_j, jlong instanceIndex_j, jlong segmentIndex_j)
				{
					ev_uint32 &subMeshIndex = *(ev_uint32*) subMeshIndex_j;
					ev_uint32 &instanceIndex = *(ev_uint32*) instanceIndex_j;
					ev_int32 &segmentIndex = *(ev_int32*) segmentIndex_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getSelectedSubEntityIndex(subMeshIndex, instanceIndex, segmentIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getSelectedSubEntityIndex(subMeshIndex, instanceIndex, segmentIndex);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getSelectedSubEntityIndex_1ev_1uint32_1ev_1uint32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSelectedSubEntityIndex_ev_uint32_ev_uint32_ev_int32_callback", "(JJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getSelectedSubEntityIndex_1ev_1uint32_1ev_1uint32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subMeshIndex_j, jlong instanceIndex_j, jlong segmentIndex_j)
				{
					ev_uint32 &subMeshIndex = *(ev_uint32*) subMeshIndex_j;
					ev_uint32 &instanceIndex = *(ev_uint32*) instanceIndex_j;
					ev_int32 &segmentIndex = *(ev_int32*) segmentIndex_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getSelectedSubEntityIndex(subMeshIndex, instanceIndex, segmentIndex);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getSubMeshName_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getSubMeshName(subEntityIndex);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getSubMeshName(subEntityIndex);
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getSubMeshName_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSubMeshName_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSubMeshName_ev_uint32_callback", "(J)Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getSubMeshName_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getSubMeshName(subEntityIndex);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getSubMeshMatrix_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getSubMeshMatrix(subEntityIndex);
						EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getSubMeshMatrix(subEntityIndex);
						EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getSubMeshMatrix_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSubMeshMatrix_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSubMeshMatrix_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getSubMeshMatrix_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getSubMeshMatrix(subEntityIndex);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_addNodeListenerForSubMesh_1ev_1uint32_1CNodeListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jlong nodeListener_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					EarthView::World::Graphic::CNode::CNodeListener *nodeListener = (EarthView::World::Graphic::CNode::CNodeListener*) nodeListener_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::addNodeListenerForSubMesh(subEntityIndex, nodeListener);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->addNodeListenerForSubMesh(subEntityIndex, nodeListener);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1addNodeListenerForSubMesh_1ev_1uint32_1CNodeListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addNodeListenerForSubMesh_ev_uint32_CNodeListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addNodeListenerForSubMesh_ev_uint32_CNodeListener_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_addNodeListenerForSubMesh_1ev_1uint32_1CNodeListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jlong nodeListener_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					EarthView::World::Graphic::CNode::CNodeListener *nodeListener = (EarthView::World::Graphic::CNode::CNodeListener*) nodeListener_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::addNodeListenerForSubMesh(subEntityIndex, nodeListener);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_removeNodeListenerForSubMesh_1ev_1uint32_1CNodeListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jlong nodeListener_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					EarthView::World::Graphic::CNode::CNodeListener *nodeListener = (EarthView::World::Graphic::CNode::CNodeListener*) nodeListener_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::removeNodeListenerForSubMesh(subEntityIndex, nodeListener);
					}
					else
					{
						pObjectX->removeNodeListenerForSubMesh(subEntityIndex, nodeListener);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1removeNodeListenerForSubMesh_1ev_1uint32_1CNodeListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeNodeListenerForSubMesh_ev_uint32_CNodeListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeNodeListenerForSubMesh_ev_uint32_CNodeListener_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_removeNodeListenerForSubMesh_1ev_1uint32_1CNodeListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jlong nodeListener_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					EarthView::World::Graphic::CNode::CNodeListener *nodeListener = (EarthView::World::Graphic::CNode::CNodeListener*) nodeListener_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::removeNodeListenerForSubMesh(subEntityIndex, nodeListener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_clearSelection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::clearSelection();
					}
					else
					{
						pObjectX->clearSelection();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1clearSelection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clearSelection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clearSelection_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_clearSelection_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::clearSelection();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setEditable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setEditable(flag);
					}
					else
					{
						pObjectX->setEditable(flag);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setEditable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEditable_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEditable_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setEditable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setEditable(flag);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_endEditing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::endEditing();
					}
					else
					{
						pObjectX->endEditing();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1endEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_endEditing_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"endEditing_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_endEditing_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::endEditing();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setTransparency_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble percent_j)
				{
					ev_real64 percent = (ev_real64) percent_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setTransparency(percent);
					}
					else
					{
						pObjectX->setTransparency(percent);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setTransparency_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setTransparency_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setTransparency_ev_real64_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setTransparency_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble percent_j)
				{
					ev_real64 percent = (ev_real64) percent_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setTransparency(percent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setTransparency_1ev_1uint32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jdouble percent_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					ev_real64 percent = (ev_real64) percent_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setTransparency(subEntityIndex, percent);
					}
					else
					{
						pObjectX->setTransparency(subEntityIndex, percent);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setTransparency_1ev_1uint32_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setTransparency_ev_uint32_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setTransparency_ev_uint32_ev_real64_callback", "(JD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setTransparency_1ev_1uint32_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jdouble percent_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					ev_real64 percent = (ev_real64) percent_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setTransparency(subEntityIndex, percent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setCastShadows_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setCastShadows(flag);
					}
					else
					{
						pObjectX->setCastShadows(flag);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setCastShadows_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCastShadows_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCastShadows_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setCastShadows_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setCastShadows(flag);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setReflectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setReflectable(flag);
					}
					else
					{
						pObjectX->setReflectable(flag);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setReflectable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setReflectable_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setReflectable_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setReflectable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setReflectable(flag);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getReflectable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getReflectable();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getReflectable();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getReflectable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getReflectable_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getReflectable_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getReflectable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getReflectable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setRefractable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setRefractable(flag);
					}
					else
					{
						pObjectX->setRefractable(flag);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setRefractable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setRefractable_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setRefractable_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setRefractable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setRefractable(flag);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getRefractable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getRefractable();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getRefractable();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getRefractable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRefractable_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRefractable_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getRefractable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::getRefractable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setMaterial_1ev_1uint32_1CMaterialPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jlong matPtr_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					EarthView::World::Graphic::CMaterialPtr &matPtr = *(EarthView::World::Graphic::CMaterialPtr*) matPtr_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setMaterial(subEntityIndex, matPtr);
					}
					else
					{
						pObjectX->setMaterial(subEntityIndex, matPtr);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setMaterial_1ev_1uint32_1CMaterialPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMaterial_ev_uint32_CMaterialPtr_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMaterial_ev_uint32_CMaterialPtr_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setMaterial_1ev_1uint32_1CMaterialPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subEntityIndex_j, jlong matPtr_j)
				{
					ev_uint32 subEntityIndex = (ev_uint32) subEntityIndex_j;
					EarthView::World::Graphic::CMaterialPtr &matPtr = *(EarthView::World::Graphic::CMaterialPtr*) matPtr_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setMaterial(subEntityIndex, matPtr);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_initializeAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::initializeAnimation();
					}
					else
					{
						pObjectX->initializeAnimation();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1initializeAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_initializeAnimation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"initializeAnimation_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_initializeAnimation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::initializeAnimation();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_initializeModelAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::initializeModelAnimation();
					}
					else
					{
						pObjectX->initializeModelAnimation();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1initializeModelAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_initializeModelAnimation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"initializeModelAnimation_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_initializeModelAnimation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::initializeModelAnimation();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_initializeNodeAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::initializeNodeAnimation();
					}
					else
					{
						pObjectX->initializeNodeAnimation();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1initializeNodeAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_initializeNodeAnimation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"initializeNodeAnimation_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_initializeNodeAnimation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::initializeNodeAnimation();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_createAnimationScene_1CNodeSerializer_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jlong parent_j)
				{
					const EarthView::World::Graphic::CNodeSerializer &node = *(EarthView::World::Graphic::CNodeSerializer*) node_j;
					EarthView::World::Graphic::CNode *parent = (EarthView::World::Graphic::CNode*) parent_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->createAnimationScene(node, parent);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_destoryCloneEntityAndNodes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->destoryCloneEntityAndNodes();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_applyEnvMap_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
				{
					ev_bool enabled = (ev_bool) enabled_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::applyEnvMap(enabled);
					}
					else
					{
						pObjectX->applyEnvMap(enabled);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1applyEnvMap_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_applyEnvMap_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"applyEnvMap_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_applyEnvMap_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
				{
					ev_bool enabled = (ev_bool) enabled_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::applyEnvMap(enabled);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_isApplyEnvMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::isApplyEnvMap();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isApplyEnvMap();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1isApplyEnvMap_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isApplyEnvMap_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isApplyEnvMap_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_isApplyEnvMap_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::isApplyEnvMap();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_prepareForNodeAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::prepareForNodeAnimation();
					}
					else
					{
						pObjectX->prepareForNodeAnimation();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1prepareForNodeAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_prepareForNodeAnimation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"prepareForNodeAnimation_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_prepareForNodeAnimation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::prepareForNodeAnimation();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_resumeNodeAnimationState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::resumeNodeAnimationState();
					}
					else
					{
						pObjectX->resumeNodeAnimationState();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1resumeNodeAnimationState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_resumeNodeAnimationState_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"resumeNodeAnimationState_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_resumeNodeAnimationState_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::resumeNodeAnimationState();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getComponentBySubEntity_1CSubEntity(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSubEntity_j)
				{
					EarthView::World::Graphic::CSubEntity *pSubEntity = (EarthView::World::Graphic::CSubEntity*) pSubEntity_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					EarthView::World::Spatial3D::CComponent __values1 = pObjectX->getComponentBySubEntity(pSubEntity);
					EarthView::World::Spatial3D::CComponent *returnvalues = new EarthView::World::Spatial3D::CComponent(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_getComponentBySubEntity_1CSubEntity_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSubEntity_j, jint indexBegun_j, jint indexEnd_j)
				{
					EarthView::World::Graphic::CSubEntity *pSubEntity = (EarthView::World::Graphic::CSubEntity*) pSubEntity_j;
					ev_int32 indexBegun = (ev_int32) indexBegun_j;
					ev_int32 indexEnd = (ev_int32) indexEnd_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					EarthView::World::Spatial3D::CComponent __values1 = pObjectX->getComponentBySubEntity(pSubEntity, indexBegun, indexEnd);
					EarthView::World::Spatial3D::CComponent *returnvalues = new EarthView::World::Spatial3D::CComponent(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setComponentVisible_1CComponent_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong component_j, jboolean visible_j)
				{
					const EarthView::World::Spatial3D::CComponent &component = *(EarthView::World::Spatial3D::CComponent*) component_j;
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setComponentVisible(component, visible);
					}
					else
					{
						pObjectX->setComponentVisible(component, visible);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setComponentVisible_1CComponent_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setComponentVisible_CComponent_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setComponentVisible_CComponent_ev_bool_callback", "(JZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setComponentVisible_1CComponent_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong component_j, jboolean visible_j)
				{
					const EarthView::World::Spatial3D::CComponent &component = *(EarthView::World::Spatial3D::CComponent*) component_j;
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setComponentVisible(component, visible);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setComponentHighlight_1CComponent_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong component_j, jboolean highlight_j)
				{
					const EarthView::World::Spatial3D::CComponent &component = *(EarthView::World::Spatial3D::CComponent*) component_j;
					ev_bool highlight = (ev_bool) highlight_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setComponentHighlight(component, highlight);
					}
					else
					{
						pObjectX->setComponentHighlight(component, highlight);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setComponentHighlight_1CComponent_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setComponentHighlight_CComponent_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setComponentHighlight_CComponent_ev_bool_callback", "(JZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setComponentHighlight_1CComponent_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong component_j, jboolean highlight_j)
				{
					const EarthView::World::Spatial3D::CComponent &component = *(EarthView::World::Spatial3D::CComponent*) component_j;
					ev_bool highlight = (ev_bool) highlight_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setComponentHighlight(component, highlight);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setComponentTransparency_1CComponent_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong component_j, jfloat alpha_j)
				{
					const EarthView::World::Spatial3D::CComponent &component = *(EarthView::World::Spatial3D::CComponent*) component_j;
					ev_real32 alpha = (ev_real32) alpha_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCManualModelObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setComponentTransparency(component, alpha);
					}
					else
					{
						pObjectX->setComponentTransparency(component, alpha);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setComponentTransparency_1CComponent_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setComponentTransparency_CComponent_ev_real32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setComponentTransparency_CComponent_ev_real32_callback", "(JF)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_setComponentTransparency_1CComponent_1ev_1real32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong component_j, jfloat alpha_j)
				{
					const EarthView::World::Spatial3D::CComponent &component = *(EarthView::World::Spatial3D::CComponent*) component_j;
					ev_real32 alpha = (ev_real32) alpha_j;
					EarthView::World::Spatial3D::ModelManager::CManualModelObject *pObjectX = (EarthView::World::Spatial3D::ModelManager::CManualModelObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::ModelManager::CManualModelObject::setComponentTransparency(component, alpha);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1load_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_load_IntVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"load_IntVector_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setLocalMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setLocalMatrix_CMatrix4_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setLocalMatrix_CMatrix4_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getLocalMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLocalMatrix_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLocalMatrix_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getModelDBTransform_1CVector3_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getModelDBTransform_CVector3_CVector3_CQuaternion_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getModelDBTransform_CVector3_CVector3_CQuaternion_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getFile_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getFile_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getFile_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1isFileDirAsGroup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isFileDirAsGroup_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isFileDirAsGroup_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getSceneManager_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSceneManager_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSceneManager_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getWorldAABB_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getWorldAABB_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getWorldAABB_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getAliasName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAliasName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAliasName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedState_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedState_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getAllBindedEffect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAllBindedEffect_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAllBindedEffect_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getAllBindedLight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAllBindedLight_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAllBindedLight_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedEffect_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedEffect_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedEffect_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedLight_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedLight_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedLight_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedParticle_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedParticle_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedParticle_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedRibbonTrail_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedRibbonTrail_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedRibbonTrail_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedEffect_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedEffect_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedEffect_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedEffectByNodeName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedEffectByNodeName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedEffectByNodeName_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedParticle_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedParticle_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedParticle_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedRibbonTrail_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedRibbonTrail_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedRibbonTrail_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedRibbonTrailByNodeName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedRibbonTrailByNodeName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedRibbonTrailByNodeName_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getAllBindedModel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAllBindedModel_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAllBindedModel_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedModel_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedModel_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedModel_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedModelByNodeName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedModelByNodeName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedModelByNodeName_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getComponentByName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getComponentByName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getComponentByName_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getComponentBySubEntityIndex_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getComponentBySubEntityIndex_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getComponentBySubEntityIndex_ev_uint32_callback", "(J)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getParentComponentByName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getParentComponentByName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getParentComponentByName_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getRootComponent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRootComponent_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRootComponent_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedModel_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedModel_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedModel_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedParticleByName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedParticleByName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedParticleByName_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedRibbonTrailByName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedRibbonTrailByName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedRibbonTrailByName_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedModelByName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedModelByName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedModelByName_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedLightByName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedLightByName_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedLightByName_EVString_callback", "(Ljava/lang/String;)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1bindEffectAtBone_1CEffect_1EVString_1CMatrix4_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_bindEffectAtBone_CEffect_EVString_CMatrix4_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"bindEffectAtBone_CEffect_EVString_CMatrix4_EVString_callback", "(JLjava/lang/String;JLjava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1bindEffectAtNode_1CEffect_1EVString_1CMatrix4_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_bindEffectAtNode_CEffect_EVString_CMatrix4_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"bindEffectAtNode_CEffect_EVString_CMatrix4_EVString_callback", "(JLjava/lang/String;JLjava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1bindEffectAtSubEntity_1CEffect_1ev_1uint32_1CMatrix4_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"bindEffectAtSubEntity_CEffect_ev_uint32_CMatrix4_EVString_callback", "(JJJLjava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1bindLightAtSubEntity_1CLight_1ev_1uint32_1CMatrix4_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"bindLightAtSubEntity_CLight_ev_uint32_CMatrix4_EVString_callback", "(JJJLjava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1bindModelAtBone_1CModelBaseObject_1EVString_1CMatrix4_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"bindModelAtBone_CModelBaseObject_EVString_CMatrix4_EVString_callback", "(JLjava/lang/String;JLjava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1bindModelAtSubEntity_1CModelBaseObject_1ev_1uint32_1CMatrix4_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"bindModelAtSubEntity_CModelBaseObject_ev_uint32_CMatrix4_EVString_callback", "(JJJLjava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1bindModelAtNode_1CModelBaseObject_1EVString_1CMatrix4_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"bindModelAtNode_CModelBaseObject_EVString_CMatrix4_EVString_callback", "(JLjava/lang/String;JLjava/lang/String;)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1unBindEffect_1CEffect(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_unBindEffect_CEffect_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"unBindEffect_CEffect_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1unBindLight_1CLight(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_unBindLight_CLight_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"unBindLight_CLight_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1unBindModel_1CModelBaseObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_unBindModel_CModelBaseObject_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"unBindModel_CModelBaseObject_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getBindedID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBindedID_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBindedID_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setBindedID_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setBindedID_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setBindedID_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setBindedEffectVisibility_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setBindedEffectVisibility_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setBindedEffectVisibility_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1updateMaterial_1CMaterialPtr_1StringVector_1StringVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_updateMaterial_CMaterialPtr_StringVector_StringVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"updateMaterial_CMaterialPtr_StringVector_StringVector_callback", "(JJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getMeshPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMeshPtr_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMeshPtr_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getTexturePtrs_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTexturePtrs_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTexturePtrs_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getMaterialPtrs_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMaterialPtrs_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMaterialPtrs_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getGpuPtrs_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGpuPtrs_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGpuPtrs_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getMeshFeature_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMeshFeature_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMeshFeature_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getOrigTextureFeatures_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getOrigTextureFeatures_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getOrigTextureFeatures_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getThumbTextureFeatures_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getThumbTextureFeatures_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getThumbTextureFeatures_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getMaterialFeatures_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMaterialFeatures_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMaterialFeatures_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getAnimationFeatures_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAnimationFeatures_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAnimationFeatures_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getGpuFeatures_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getGpuFeatures_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getGpuFeatures_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getProgramFeatures_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getProgramFeatures_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getProgramFeatures_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getResourceFeature_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getResourceFeature_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getResourceFeature_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1startFlash_1CColourValue_1ev_1uint32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startFlash_CColourValue_ev_uint32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startFlash_CColourValue_ev_uint32_ev_uint32_callback", "(JJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1stopFlash_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_stopFlash_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"stopFlash_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getModelState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getModelState_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getModelState_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getTextureState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTextureState_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTextureState_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1needSwitchTexture_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_needSwitchTexture_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"needSwitchTexture_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1switchThumb_1TexturePtrVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_switchThumb_TexturePtrVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"switchThumb_TexturePtrVector_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1attachThumb_1TexturePtrVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_attachThumb_TexturePtrVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"attachThumb_TexturePtrVector_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1switchOrig_1TexturePtrVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_switchOrig_TexturePtrVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"switchOrig_TexturePtrVector_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1attachOrig_1TexturePtrVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_attachOrig_TexturePtrVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"attachOrig_TexturePtrVector_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1clearTmpTextureStream_1TexturePtrVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clearTmpTextureStream_TexturePtrVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clearTmpTextureStream_TexturePtrVector_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setLoadFromLayer_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setLoadFromLayer_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setLoadFromLayer_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getLoadFromLayer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLoadFromLayer_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLoadFromLayer_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1hasFltAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_hasFltAnimation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"hasFltAnimation_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1mergeBoundingBoxForNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_mergeBoundingBoxForNode_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"mergeBoundingBoxForNode_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1startAllNodeAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startAllNodeAnimation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startAllNodeAnimation_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1stopAllNodeAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_stopAllNodeAnimation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"stopAllNodeAnimation_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1startAllAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startAllAnimation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startAllAnimation_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1startRangeAnimation_1EVString_1ev_1int32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startRangeAnimation_EVString_ev_int32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startRangeAnimation_EVString_ev_int32_ev_uint32_callback", "(Ljava/lang/String;IJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1startRangeAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startRangeAnimation_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startRangeAnimation_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1startRangeAnimationIndependently_1EVString_1ev_1int32_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startRangeAnimationIndependently_EVString_ev_int32_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startRangeAnimationIndependently_EVString_ev_int32_ev_uint32_callback", "(Ljava/lang/String;IJ)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1startRangeAnimationIndependently_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startRangeAnimationIndependently_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startRangeAnimationIndependently_EVString_callback", "(Ljava/lang/String;)I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1stopRangeAnimation_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_stopRangeAnimation_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"stopRangeAnimation_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1stopRangeAnimation_1ev_1bool_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_stopRangeAnimation_ev_bool_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"stopRangeAnimation_ev_bool_ev_int32_callback", "(ZI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1stopAllAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_stopAllAnimation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"stopAllAnimation_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1pauseAllAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_pauseAllAnimation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"pauseAllAnimation_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1continueAllAnimation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_continueAllAnimation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"continueAllAnimation_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setAllAnimationLoop_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setAllAnimationLoop_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setAllAnimationLoop_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1startAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startAnimation_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startAnimation_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1stopAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_stopAnimation_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"stopAnimation_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1stopAnimation_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_stopAnimation_EVString_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"stopAnimation_EVString_ev_bool_callback", "(Ljava/lang/String;Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1pauseAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_pauseAnimation_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"pauseAnimation_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1pauseAnimation_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_pauseAnimation_EVString_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"pauseAnimation_EVString_ev_bool_callback", "(Ljava/lang/String;Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1continueAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_continueAnimation_EVString_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"continueAnimation_EVString_callback", "(Ljava/lang/String;)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1continueAnimation_1EVString_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_continueAnimation_EVString_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"continueAnimation_EVString_ev_bool_callback", "(Ljava/lang/String;Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setAnimationLoop_1EVString_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setAnimationLoop_EVString_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setAnimationLoop_EVString_bool_callback", "(Ljava/lang/String;Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setAnimationLoop_1EVString_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setAnimationLoop_EVString_bool_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setAnimationLoop_EVString_bool_ev_bool_callback", "(Ljava/lang/String;ZZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getNode_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getNode_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1isLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isLoaded_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isLoaded_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1isAttached_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isAttached_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isAttached_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1load_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_load_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"load_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1unload_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_unload_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"unload_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1attachToScene_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_attachToScene_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"attachToScene_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1detachFromScene_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_detachFromScene_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"detachFromScene_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setUserData_1CFeatureUserData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setUserData_CFeatureUserData_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setUserData_CFeatureUserData_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getSelectable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSelectable_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSelectable_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1update_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_update_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"update_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getLayer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLayer_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLayer_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDataset_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDataset_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getID_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getID_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setMatrix_CMatrix4_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setMatrix_CMatrix4_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMatrix_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMatrix_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1setPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback", "(DDDJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ManualModelObject_register_1getPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCManualModelObjectProxy *pObjectX = (JCManualModelObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback", "(JJJJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
