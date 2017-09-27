/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/manualinstanceobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getInstanceEntityVector_InstancedEntityVector_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumInstancePerBatch_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setNumInstancePerBatch_void_ev_uint32_Callback)(_in ev_uint32 numPerBatch);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_IntVector_Callback)(_in const void* subEntityIndexs);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLocalMatrix_void_CMatrix4_Callback)(_in const void* m);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalMatrix_CMatrix4_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback)(_out void* offPosition, _out void* scale, _out void* qua);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getFile_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isFileDirAsGroup_ev_bool_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getType_ModelType_Callback)();
				typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSceneManager_CSceneManager_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getWorldAABB_CAxisAlignedBox_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_Callback)(_in ev_bool flag);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_ev_bool_Callback)(_in ev_bool flag, _in ev_bool bRecursive);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback)(_in ev_uint32 subEntityIndex, _in ev_bool isVisible);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback)(_in ev_uint32 subEntityIndex, _in ev_bool isVisible, _in ev_bool bRecursive);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMaxDistance_void_ev_real64_Callback)(_in ev_real64 dist);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMaxDistance_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMinDistance_void_ev_real64_Callback)(_in ev_real64 dist);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMinDistance_ev_real64_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback)(_in ev_uint16 submeshIndex, _in ev_uint32 instanceIndex);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback)(_in ev_uint32 subEntityIndex, _out ev_int16& submeshIndex, _out ev_int32& instanceIndex);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumSubEntities_ev_int32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAliasName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedState_BindedState_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedEffect_EffectObjectMap_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedLight_LightObjectMap_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLight_LightObjectMap_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_EVString_Callback)(_in char*& boneName);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback)(_in char*& nodeName);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_EVString_Callback)(_in char*& boneName);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback)(_in char*& boneName);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback)(_in char*& nodeName);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedModel_ModelObjectMap_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback)(_in char*& nodeName);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentByName_CComponent_EVString_Callback)(_in char*& name);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getParentComponentByName_CComponent_EVString_Callback)(_in char*& name);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRootComponent_CComponent_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_EVString_Callback)(_in char*& boneName);
				typedef EarthView::World::Spatial3D::EffectManager::CEffect*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticleByName_CEffect_EVString_Callback)(_in char*& aliasName);
				typedef EarthView::World::Graphic::CRibbonTrail*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback)(_in char*& aliasName);
				typedef EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByName_CModelBaseObject_EVString_Callback)(_in char*& aliasName);
				typedef EarthView::World::Graphic::CLight*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLightByName_CLight_EVString_Callback)(_in char*& aliasName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback)(_in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in char*& boneName, _in const void* offMatrix, _in char*& aliasName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback)(_in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in char*& nodeName, _in const void* offMatrix, _in char*& aliasName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback)(_in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in ev_uint32 subEntityIndex, _in const void* offMatrix, _in char*& aliasName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback)(_in EarthView::World::Graphic::CLight* l, _in ev_uint32 subEntityIndex, _in const void* offMatrix, _in char*& aliasName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in char*& boneName, _in const void* offMatrix, _in char*& aliasName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in ev_uint32 subEntityIndex, _in const void* offMatrix, _in char*& aliasName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in char*& nodeName, _in const void* offMatrix, _in char*& aliasName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindEffect_ev_bool_CEffect_Callback)(_in EarthView::World::Spatial3D::EffectManager::CEffect* pEffect);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindLight_ev_bool_CLight_Callback)(_in EarthView::World::Graphic::CLight* pLight);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindModel_ev_bool_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedID_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedID_void_ev_uint32_Callback)(_in ev_uint32 bindedID);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedEffectVisibility_void_ev_bool_Callback)(_in ev_bool isVisible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback)(_in const void* matPtr, _in const void* replacedTextures, _in const void* newTextureFilesPath);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback)(_in ev_uint32 subEntityIndex, _inout void* matPtr);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshPtr_CMeshPtr_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTexturePtrs_TexturePtrVector_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialPtrs_MaterialPtrVector_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuPtrs_GpuPtrVector_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshFeature_IFeature_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getOrigTextureFeatures_FeatureVector_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getThumbTextureFeatures_FeatureVector_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialFeatures_FeatureVector_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAnimationFeatures_FeatureVector_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuFeatures_FeatureVector_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getProgramFeatures_FeatureVector_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getResourceFeature_FeatureVector_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectionColour_void_CColourValue_Callback)(_in const void* color);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectionColour_CColourValue_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback)(_in const void* color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopFlash_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelectable_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelected_void_ev_bool_Callback)(_in ev_bool flag);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback)(_in ev_uint32 subEntityIndex, _in ev_bool flag);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool_Callback)(_in ev_uint32 subEntityIndex, _in ev_int32 segmentIndex, _in ev_bool flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntitySelected_ev_bool_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback)(_out ev_uint32& subMeshIndex, _out ev_uint32& instanceIndex, _out ev_int32& segmentIndex);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshName_EVString_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback)(_in ev_uint32 subEntityIndex, _in EarthView::World::Graphic::CNode::CNodeListener* nodeListener);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback)(_in ev_uint32 subEntityIndex, _in EarthView::World::Graphic::CNode::CNodeListener* nodeListener);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEditable_void_ev_bool_Callback)(_in ev_bool flag);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_endEditing_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_real64_Callback)(_in ev_real64 percent);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_uint32_ev_real64_Callback)(_in ev_uint32 subEntityIndex, _in ev_real64 percent);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setCastShadows_void_ev_bool_Callback)(_in ev_bool flag);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback)(_in const void* ambient, _in const void* diffuse, _in const void* specular);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setReflectable_void_ev_bool_Callback)(_in ev_bool flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getReflectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRefractable_void_ev_bool_Callback)(_in ev_bool flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRefractable_ev_bool_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelState_ModelObjectState_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTextureState_TextureState_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_needSwitchTexture_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchThumb_ev_bool_TexturePtrVector_Callback)(_inout void* outTmpTextureVec);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachThumb_void_TexturePtrVector_Callback)(_inout void* tmpTextureVec);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchOrig_ev_bool_TexturePtrVector_Callback)(_inout void* outTmpTextureVec);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachOrig_void_TexturePtrVector_Callback)(_inout void* tmpTextureVec);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearTmpTextureStream_void_TexturePtrVector_Callback)(_inout void* tmpTextureVec);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLoadFromLayer_void_ev_bool_Callback)(_in const ev_bool& fromLayer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLoadFromLayer_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_hasFltAnimation_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_mergeBoundingBoxForNode_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_prepareForNodeAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_resumeNodeAnimationState_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllNodeAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllNodeAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback)(_in char*& keyTimeTagName, _in ev_int32 segmentConut, _in ev_uint32 option);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_Callback)(_in char*& keyTimeTagName);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback)(_in char*& keyTimeTagName, _in ev_int32 segmentConut, _in ev_uint32 option);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_Callback)(_in char*& keyTimeTagName);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_Callback)(_in ev_bool stopAtRangeStart);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback)(_in ev_bool stopAtRangeStart, _in ev_int32 handle);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAllAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAllAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAllAnimationLoop_void_ev_bool_Callback)(_in ev_bool loop);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAnimation_void_EVString_Callback)(_in char*& animationName);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_Callback)(_in char*& animationName);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_ev_bool_Callback)(_in char*& animationName, _in ev_bool processChild);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_Callback)(_in char*& animationName);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_ev_bool_Callback)(_in char*& animationName, _in ev_bool processChild);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_Callback)(_in char*& animationName);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_ev_bool_Callback)(_in char*& animationName, _in ev_bool processChild);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_Callback)(_in char*& animationName, _in bool loop);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_ev_bool_Callback)(_in char*& animationName, _in bool loop, _in ev_bool processChild);
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_Callback)();
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_EVString_Callback)(_in char*& componentName);
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalAxisNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_destroyLocalAxisNode_ev_bool_Callback)();
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBoneNode_CNode_EVString_Callback)(_in char*& boneName);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateSkeletonAnimationVertex_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeModelAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeNodeAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentVisible_void_CComponent_ev_bool_Callback)(_in const void* component, _in ev_bool visible);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentHighlight_void_CComponent_ev_bool_Callback)(_in const void* component, _in ev_bool highlight);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentTransparency_void_CComponent_ev_real32_Callback)(_in const void* component, _in ev_real32 alpha);
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isLoaded_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isAttached_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unload_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToScene_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromScene_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setUserData_void_CFeatureUserData_Callback)(_inout void* userData);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectable_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_update_ev_bool_Callback)();
				typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLayer_IGlobeLayer_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getDataset_IDataset_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getID_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMatrix_void_CMatrix4_Callback)(_in const void* m);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMatrix_CMatrix4_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua);
				class CManualInstanceObjectProxy : public EarthView::World::Spatial3D::ModelManager::CManualInstanceObject
				{
				private:
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getInstanceEntityVector_InstancedEntityVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getInstanceEntityVector_InstancedEntityVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumInstancePerBatch_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumInstancePerBatch_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setNumInstancePerBatch_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setNumInstancePerBatch_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_IntVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_IntVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLocalMatrix_void_CMatrix4_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLocalMatrix_void_CMatrix4_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalMatrix_CMatrix4_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getFile_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getFile_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isFileDirAsGroup_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isFileDirAsGroup_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getType_ModelType_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getType_ModelType_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSceneManager_CSceneManager_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSceneManager_CSceneManager_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getWorldAABB_CAxisAlignedBox_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getWorldAABB_CAxisAlignedBox_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isVisible_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMaxDistance_void_ev_real64_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMaxDistance_void_ev_real64_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMaxDistance_ev_real64_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMaxDistance_ev_real64_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMinDistance_void_ev_real64_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMinDistance_void_ev_real64_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMinDistance_ev_real64_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMinDistance_ev_real64_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumSubEntities_ev_int32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumSubEntities_ev_int32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAliasName_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAliasName_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedState_BindedState_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedState_BindedState_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedEffect_EffectObjectMap_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedEffect_EffectObjectMap_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedLight_LightObjectMap_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedLight_LightObjectMap_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLight_LightObjectMap_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLight_LightObjectMap_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedModel_ModelObjectMap_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedModel_ModelObjectMap_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentByName_CComponent_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentByName_CComponent_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getParentComponentByName_CComponent_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getParentComponentByName_CComponent_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRootComponent_CComponent_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRootComponent_CComponent_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticleByName_CEffect_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticleByName_CEffect_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByName_CModelBaseObject_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByName_CModelBaseObject_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLightByName_CLight_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLightByName_CLight_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindEffect_ev_bool_CEffect_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindEffect_ev_bool_CEffect_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindLight_ev_bool_CLight_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindLight_ev_bool_CLight_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindModel_ev_bool_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindModel_ev_bool_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedID_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedID_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedID_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedID_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedEffectVisibility_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedEffectVisibility_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshPtr_CMeshPtr_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshPtr_CMeshPtr_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTexturePtrs_TexturePtrVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTexturePtrs_TexturePtrVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialPtrs_MaterialPtrVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialPtrs_MaterialPtrVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuPtrs_GpuPtrVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuPtrs_GpuPtrVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshFeature_IFeature_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshFeature_IFeature_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getOrigTextureFeatures_FeatureVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getOrigTextureFeatures_FeatureVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getThumbTextureFeatures_FeatureVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getThumbTextureFeatures_FeatureVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialFeatures_FeatureVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialFeatures_FeatureVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAnimationFeatures_FeatureVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAnimationFeatures_FeatureVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuFeatures_FeatureVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuFeatures_FeatureVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getProgramFeatures_FeatureVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getProgramFeatures_FeatureVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getResourceFeature_FeatureVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getResourceFeature_FeatureVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectionColour_void_CColourValue_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectionColour_void_CColourValue_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectionColour_CColourValue_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectionColour_CColourValue_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopFlash_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopFlash_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelected_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelected_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntitySelected_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntitySelected_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshName_EVString_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshName_EVString_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearSelection_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearSelection_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEditable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEditable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_endEditing_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_endEditing_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_real64_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_real64_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_uint32_ev_real64_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_uint32_ev_real64_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setCastShadows_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setCastShadows_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setReflectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setReflectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getReflectable_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getReflectable_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRefractable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRefractable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRefractable_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRefractable_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelState_ModelObjectState_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelState_ModelObjectState_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTextureState_TextureState_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTextureState_TextureState_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_needSwitchTexture_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_needSwitchTexture_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchThumb_ev_bool_TexturePtrVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchThumb_ev_bool_TexturePtrVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachThumb_void_TexturePtrVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachThumb_void_TexturePtrVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchOrig_ev_bool_TexturePtrVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchOrig_ev_bool_TexturePtrVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachOrig_void_TexturePtrVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachOrig_void_TexturePtrVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearTmpTextureStream_void_TexturePtrVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearTmpTextureStream_void_TexturePtrVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLoadFromLayer_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLoadFromLayer_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLoadFromLayer_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLoadFromLayer_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_hasFltAnimation_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_hasFltAnimation_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_mergeBoundingBoxForNode_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_mergeBoundingBoxForNode_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_prepareForNodeAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_prepareForNodeAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_resumeNodeAnimationState_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_resumeNodeAnimationState_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllNodeAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllNodeAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllNodeAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllNodeAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAllAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAllAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAllAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAllAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAllAnimationLoop_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAllAnimationLoop_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAnimation_void_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAnimation_void_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalAxisNode_CNode_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalAxisNode_CNode_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_destroyLocalAxisNode_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_destroyLocalAxisNode_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBoneNode_CNode_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBoneNode_CNode_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateSkeletonAnimationVertex_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateSkeletonAnimationVertex_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeModelAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeModelAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeNodeAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeNodeAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentVisible_void_CComponent_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentVisible_void_CComponent_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentHighlight_void_CComponent_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentHighlight_void_CComponent_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentTransparency_void_CComponent_ev_real32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentTransparency_void_CComponent_ev_real32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNode_CNode_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNode_CNode_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isLoaded_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isLoaded_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isAttached_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isAttached_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unload_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unload_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToNode_ev_bool_CNode_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromNode_CNode_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromNode_CNode_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToScene_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToScene_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromScene_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromScene_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setUserData_void_CFeatureUserData_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setUserData_void_CFeatureUserData_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_update_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_update_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLayer_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLayer_IGlobeLayer_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getID_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getID_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getName_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getName_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMatrix_void_CMatrix4_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMatrix_CMatrix4_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
					EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				public:
					CManualInstanceObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CManualInstanceObject(pList)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getInstanceEntityVector_InstancedEntityVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumInstancePerBatch_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setNumInstancePerBatch_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_IntVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLocalMatrix_void_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalMatrix_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getFile_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isFileDirAsGroup_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getType_ModelType_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSceneManager_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getWorldAABB_CAxisAlignedBox_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMaxDistance_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMaxDistance_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMinDistance_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMinDistance_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumSubEntities_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAliasName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedState_BindedState_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedEffect_EffectObjectMap_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedLight_LightObjectMap_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLight_LightObjectMap_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedModel_ModelObjectMap_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentByName_CComponent_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getParentComponentByName_CComponent_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRootComponent_CComponent_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticleByName_CEffect_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByName_CModelBaseObject_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLightByName_CLight_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindEffect_ev_bool_CEffect_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindLight_ev_bool_CLight_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindModel_ev_bool_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedID_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedEffectVisibility_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshPtr_CMeshPtr_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTexturePtrs_TexturePtrVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialPtrs_MaterialPtrVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuPtrs_GpuPtrVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshFeature_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getOrigTextureFeatures_FeatureVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getThumbTextureFeatures_FeatureVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialFeatures_FeatureVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAnimationFeatures_FeatureVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuFeatures_FeatureVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getProgramFeatures_FeatureVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getResourceFeature_FeatureVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectionColour_void_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectionColour_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopFlash_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntitySelected_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshName_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEditable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_endEditing_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_uint32_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setCastShadows_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setReflectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getReflectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRefractable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRefractable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelState_ModelObjectState_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTextureState_TextureState_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_needSwitchTexture_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchThumb_ev_bool_TexturePtrVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachThumb_void_TexturePtrVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchOrig_ev_bool_TexturePtrVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachOrig_void_TexturePtrVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearTmpTextureStream_void_TexturePtrVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLoadFromLayer_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLoadFromLayer_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_hasFltAnimation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_mergeBoundingBoxForNode_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_prepareForNodeAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_resumeNodeAnimationState_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllNodeAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllNodeAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAllAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAllAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAllAnimationLoop_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAnimation_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalAxisNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_destroyLocalAxisNode_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBoneNode_CNode_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateSkeletonAnimationVertex_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeModelAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeNodeAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentVisible_void_CComponent_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentHighlight_void_CComponent_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentTransparency_void_CComponent_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isLoaded_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isAttached_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unload_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToNode_ev_bool_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToScene_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromScene_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setUserData_void_CFeatureUserData_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_update_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLayer_IGlobeLayer_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMatrix_void_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMatrix_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getInstanceEntityVector_InstancedEntityVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getInstanceEntityVector_InstancedEntityVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getInstanceEntityVector_InstancedEntityVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumInstancePerBatch_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumInstancePerBatch_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumInstancePerBatch_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setNumInstancePerBatch_void_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setNumInstancePerBatch_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setNumInstancePerBatch_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_IntVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_IntVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_IntVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLocalMatrix_void_CMatrix4(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLocalMatrix_void_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLocalMatrix_void_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalMatrix_CMatrix4(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalMatrix_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalMatrix_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getFile_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getFile_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getFile_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isFileDirAsGroup_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isFileDirAsGroup_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isFileDirAsGroup_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getType_ModelType(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getType_ModelType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getType_ModelType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSceneManager_CSceneManager(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSceneManager_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSceneManager_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getWorldAABB_CAxisAlignedBox(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getWorldAABB_CAxisAlignedBox_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getWorldAABB_CAxisAlignedBox_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isVisible_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntityVisibility_ev_bool_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMaxDistance_void_ev_real64(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMaxDistance_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMaxDistance_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMaxDistance_ev_real64(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMaxDistance_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMaxDistance_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMinDistance_void_ev_real64(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMinDistance_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMinDistance_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMinDistance_ev_real64(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMinDistance_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMinDistance_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumSubEntities_ev_int32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumSubEntities_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumSubEntities_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAliasName_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAliasName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAliasName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedState_BindedState(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedState_BindedState_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedState_BindedState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedEffect_EffectObjectMap(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedEffect_EffectObjectMap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedEffect_EffectObjectMap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedLight_LightObjectMap(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedLight_LightObjectMap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedLight_LightObjectMap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLight_LightObjectMap_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLight_LightObjectMap_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLight_LightObjectMap_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffectByNodeName_EffectObjectMap_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedModel_ModelObjectMap(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedModel_ModelObjectMap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedModel_ModelObjectMap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByNodeName_ModelObjectMap_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentByName_CComponent_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentByName_CComponent_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentByName_CComponent_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentBySubEntityIndex_CComponent_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getParentComponentByName_CComponent_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getParentComponentByName_CComponent_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getParentComponentByName_CComponent_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRootComponent_CComponent(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRootComponent_CComponent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRootComponent_CComponent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticleByName_CEffect_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticleByName_CEffect_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticleByName_CEffect_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByName_CRibbonTrail_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByName_CModelBaseObject_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByName_CModelBaseObject_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByName_CModelBaseObject_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLightByName_CLight_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLightByName_CLight_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLightByName_CLight_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindEffect_ev_bool_CEffect(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindEffect_ev_bool_CEffect_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindEffect_ev_bool_CEffect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindLight_ev_bool_CLight(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindLight_ev_bool_CLight_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindLight_ev_bool_CLight_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindModel_ev_bool_CModelBaseObject(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindModel_ev_bool_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindModel_ev_bool_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedID_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedID_void_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedID_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedID_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedEffectVisibility_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedEffectVisibility_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedEffectVisibility_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMaterial_void_ev_uint32_CMaterialPtr(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshPtr_CMeshPtr(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshPtr_CMeshPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshPtr_CMeshPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTexturePtrs_TexturePtrVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTexturePtrs_TexturePtrVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTexturePtrs_TexturePtrVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialPtrs_MaterialPtrVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialPtrs_MaterialPtrVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialPtrs_MaterialPtrVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuPtrs_GpuPtrVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuPtrs_GpuPtrVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuPtrs_GpuPtrVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshFeature_IFeature(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshFeature_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshFeature_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getOrigTextureFeatures_FeatureVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getOrigTextureFeatures_FeatureVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getOrigTextureFeatures_FeatureVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getThumbTextureFeatures_FeatureVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getThumbTextureFeatures_FeatureVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getThumbTextureFeatures_FeatureVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialFeatures_FeatureVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialFeatures_FeatureVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialFeatures_FeatureVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAnimationFeatures_FeatureVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAnimationFeatures_FeatureVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAnimationFeatures_FeatureVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuFeatures_FeatureVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuFeatures_FeatureVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuFeatures_FeatureVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getProgramFeatures_FeatureVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getProgramFeatures_FeatureVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getProgramFeatures_FeatureVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getResourceFeature_FeatureVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getResourceFeature_FeatureVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getResourceFeature_FeatureVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectionColour_void_CColourValue(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectionColour_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectionColour_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectionColour_CColourValue(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectionColour_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectionColour_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startFlash_void_CColourValue_ev_uint32_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopFlash_void(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopFlash_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopFlash_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelectable_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelected_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelected_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntitySelected_ev_bool_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntitySelected_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntitySelected_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshName_EVString_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshName_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshName_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshMatrix_CMatrix4_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearSelection_void(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEditable_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEditable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEditable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_endEditing_void(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_endEditing_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_endEditing_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_real64(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_uint32_ev_real64(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_uint32_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_uint32_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setCastShadows_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setCastShadows_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setCastShadows_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEnvParam_void_CColourValue_CColourValue_CColourValue(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setReflectable_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setReflectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setReflectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getReflectable_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getReflectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getReflectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRefractable_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRefractable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRefractable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRefractable_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRefractable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRefractable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelState_ModelObjectState(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelState_ModelObjectState_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelState_ModelObjectState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTextureState_TextureState(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTextureState_TextureState_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTextureState_TextureState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_needSwitchTexture_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_needSwitchTexture_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_needSwitchTexture_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchThumb_ev_bool_TexturePtrVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchThumb_ev_bool_TexturePtrVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchThumb_ev_bool_TexturePtrVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachThumb_void_TexturePtrVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachThumb_void_TexturePtrVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachThumb_void_TexturePtrVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchOrig_ev_bool_TexturePtrVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchOrig_ev_bool_TexturePtrVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchOrig_ev_bool_TexturePtrVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachOrig_void_TexturePtrVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachOrig_void_TexturePtrVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachOrig_void_TexturePtrVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearTmpTextureStream_void_TexturePtrVector(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearTmpTextureStream_void_TexturePtrVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearTmpTextureStream_void_TexturePtrVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLoadFromLayer_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLoadFromLayer_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLoadFromLayer_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLoadFromLayer_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLoadFromLayer_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLoadFromLayer_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_hasFltAnimation_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_hasFltAnimation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_hasFltAnimation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_mergeBoundingBoxForNode_void(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_mergeBoundingBoxForNode_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_mergeBoundingBoxForNode_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_prepareForNodeAnimation_void(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_prepareForNodeAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_prepareForNodeAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_resumeNodeAnimationState_void(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_resumeNodeAnimationState_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_resumeNodeAnimationState_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllNodeAnimation_void(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllNodeAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllNodeAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllNodeAnimation_void(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllNodeAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllNodeAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllAnimation_void(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_ev_int32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllAnimation_void(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAllAnimation_void(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAllAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAllAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAllAnimation_void(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAllAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAllAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAllAnimationLoop_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAllAnimationLoop_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAllAnimationLoop_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAnimation_void_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAnimation_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAnimation_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalAxisNode_CNode(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalAxisNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalAxisNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_destroyLocalAxisNode_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_destroyLocalAxisNode_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_destroyLocalAxisNode_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBoneNode_CNode_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBoneNode_CNode_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBoneNode_CNode_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateSkeletonAnimationVertex_void(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateSkeletonAnimationVertex_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateSkeletonAnimationVertex_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeAnimation_void(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeModelAnimation_void(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeModelAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeModelAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeNodeAnimation_void(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeNodeAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeNodeAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentVisible_void_CComponent_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentVisible_void_CComponent_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentVisible_void_CComponent_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentHighlight_void_CComponent_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentHighlight_void_CComponent_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentHighlight_void_CComponent_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentTransparency_void_CComponent_ev_real32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentTransparency_void_CComponent_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentTransparency_void_CComponent_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNode_CNode(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isLoaded_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isLoaded_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isLoaded_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isAttached_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isAttached_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isAttached_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unload_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unload_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unload_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToNode_ev_bool_CNode(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToNode_ev_bool_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToNode_ev_bool_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromNode_CNode(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToScene_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToScene_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToScene_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromScene_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromScene_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromScene_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setUserData_void_CFeatureUserData(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setUserData_void_CFeatureUserData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setUserData_void_CFeatureUserData_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectable_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectable_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_update_ev_bool(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_update_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_update_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLayer_IGlobeLayer(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLayer_IGlobeLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLayer_IGlobeLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getDataset_IDataset(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getID_ev_uint32(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getName_EVString(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMatrix_void_CMatrix4(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMatrix_void_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMatrix_void_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMatrix_CMatrix4(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMatrix_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMatrix_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					virtual ev_bool load()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::load();
					}
					virtual ev_bool load(_in const EarthView::World::Core::IntVector& subEntityIndexs)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_IntVector_Callback(&subEntityIndexs);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::load(subEntityIndexs);
					}
					virtual ev_bool unload()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unload_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unload_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::unload();
					}
					virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToNode_ev_bool_CNode_Callback(n);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::attachToNode(n);
					}
					virtual EarthView::World::Graphic::CNode* detachFromNode()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::detachFromNode();
					}
					virtual ev_bool attachToScene()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToScene_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToScene_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::attachToScene();
					}
					virtual ev_bool detachFromScene()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromScene_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromScene_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::detachFromScene();
					}
					virtual ev_bool isVisible()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::isVisible();
					}
					virtual void setVisible(_in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_Callback(flag);
						}
						else
							return this->CManualInstanceObject::setVisible(flag);
					}
					virtual void setVisible(_in ev_bool flag, _in ev_bool bRecursive)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_ev_bool_Callback(flag, bRecursive);
						}
						else
							return this->CManualInstanceObject::setVisible(flag, bRecursive);
					}
					virtual void setSubEntityVisibility(_in ev_uint32 subEntityIndex, _in ev_bool isVisible)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback(subEntityIndex, isVisible);
						}
						else
							return this->CManualInstanceObject::setSubEntityVisibility(subEntityIndex, isVisible);
					}
					virtual void setSubEntityVisibility(_in ev_uint32 subEntityIndex, _in ev_bool isVisible, _in ev_bool bRecursive)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback(subEntityIndex, isVisible, bRecursive);
						}
						else
							return this->CManualInstanceObject::setSubEntityVisibility(subEntityIndex, isVisible, bRecursive);
					}
					virtual ev_bool getSubEntityVisibility(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getSubEntityVisibility(subEntityIndex);
					}
					virtual EarthView::World::Spatial3D::ModelType getType()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getType_ModelType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelType returnValue = (EarthView::World::Spatial3D::ModelType)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getType_ModelType_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getType();
					}
					virtual const EarthView::World::Spatial3D::InstancedEntityVector& getInstanceEntityVector()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getInstanceEntityVector_InstancedEntityVector_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::InstancedEntityVector& returnValue = *(EarthView::World::Spatial3D::InstancedEntityVector*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getInstanceEntityVector_InstancedEntityVector_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getInstanceEntityVector();
					}
					virtual ev_uint32 getNumInstancePerBatch()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumInstancePerBatch_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumInstancePerBatch_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getNumInstancePerBatch();
					}
					virtual void setNumInstancePerBatch(_in ev_uint32 numPerBatch)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setNumInstancePerBatch_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setNumInstancePerBatch_void_ev_uint32_Callback(numPerBatch);
						}
						else
							return this->CManualInstanceObject::setNumInstancePerBatch(numPerBatch);
					}
					virtual void setRenderingMaxDistance(_in ev_real64 dist)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMaxDistance_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMaxDistance_void_ev_real64_Callback(dist);
						}
						else
							return this->CManualInstanceObject::setRenderingMaxDistance(dist);
					}
					virtual ev_real64 getRenderingMaxDistance()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMaxDistance_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMaxDistance_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getRenderingMaxDistance();
					}
					virtual void setRenderingMinDistance(_in ev_real64 dist)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMinDistance_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMinDistance_void_ev_real64_Callback(dist);
						}
						else
							return this->CManualInstanceObject::setRenderingMinDistance(dist);
					}
					virtual ev_real64 getRenderingMinDistance()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMinDistance_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMinDistance_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getRenderingMinDistance();
					}
					virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMatrix_void_CMatrix4_Callback(&m);
						}
						else
							return this->CManualInstanceObject::setMatrix(m);
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMatrix_CMatrix4_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getMatrix();
					}
					virtual EarthView::World::Spatial::Math::CAxisAlignedBox getWorldAABB()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getWorldAABB_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getWorldAABB_CAxisAlignedBox_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getWorldAABB();
					}
					virtual EarthView::World::Graphic::CNode* createLocalAxisNode()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::createLocalAxisNode();
					}
					virtual EarthView::World::Graphic::CNode* createLocalAxisNode(_in const EVString& componentName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* componentName_Char = componentName.makeBuffer();
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_EVString_Callback(componentName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::createLocalAxisNode(componentName);
					}
					virtual EarthView::World::Graphic::CNode* getLocalAxisNode()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalAxisNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalAxisNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getLocalAxisNode();
					}
					virtual ev_bool destroyLocalAxisNode()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_destroyLocalAxisNode_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_destroyLocalAxisNode_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::destroyLocalAxisNode();
					}
					virtual void setSelectionColour(_in const EarthView::World::Graphic::CColourValue& color)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectionColour_void_CColourValue_Callback(&color);
						}
						else
							return this->CManualInstanceObject::setSelectionColour(color);
					}
					virtual EarthView::World::Graphic::CColourValue getSelectionColour()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectionColour_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CColourValue returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectionColour_CColourValue_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getSelectionColour();
					}
					virtual void setEnvParam(_in const EarthView::World::Graphic::CColourValue& ambient, _in const EarthView::World::Graphic::CColourValue& diffuse, _in const EarthView::World::Graphic::CColourValue& specular)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback(&ambient, &diffuse, &specular);
						}
						else
							return this->CManualInstanceObject::setEnvParam(ambient, diffuse, specular);
					}
					virtual ev_bool isSelectable()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::isSelectable();
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::isSelected();
					}
					virtual void setSelectable(_in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectable_void_ev_bool_Callback(flag);
						}
						else
							return this->CManualInstanceObject::setSelectable(flag);
					}
					virtual void setSelected(_in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelected_void_ev_bool_Callback(flag);
						}
						else
							return this->CManualInstanceObject::setSelected(flag);
					}
					virtual void setSubEntitySelected(_in ev_uint32 subEntityIndex, _in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback(subEntityIndex, flag);
						}
						else
							return this->CManualInstanceObject::setSubEntitySelected(subEntityIndex, flag);
					}
					virtual ev_bool getSubEntitySelected(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntitySelected_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntitySelected_ev_bool_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getSubEntitySelected(subEntityIndex);
					}
					virtual ev_bool getSelectedSubEntityIndex(_out ev_uint32& subMeshIndex, _out ev_uint32& instanceIndex, _out ev_int32& segmentIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback(subMeshIndex, instanceIndex, segmentIndex);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getSelectedSubEntityIndex(subMeshIndex, instanceIndex, segmentIndex);
					}
					virtual EVString getSubMeshName(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshName_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshName_EVString_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getSubMeshName(subEntityIndex);
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 getSubMeshMatrix(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getSubMeshMatrix(subEntityIndex);
					}
					virtual ev_bool addNodeListenerForSubMesh(_in ev_uint32 subEntityIndex, _in EarthView::World::Graphic::CNode::CNodeListener* nodeListener)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback(subEntityIndex, nodeListener);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::addNodeListenerForSubMesh(subEntityIndex, nodeListener);
					}
					virtual void removeNodeListenerForSubMesh(_in ev_uint32 subEntityIndex, _in EarthView::World::Graphic::CNode::CNodeListener* nodeListener)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback(subEntityIndex, nodeListener);
						}
						else
							return this->CManualInstanceObject::removeNodeListenerForSubMesh(subEntityIndex, nodeListener);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearSelection_void_Callback();
						}
						else
							return this->CManualInstanceObject::clearSelection();
					}
					virtual void setEditable(_in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEditable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEditable_void_ev_bool_Callback(flag);
						}
						else
							return this->CManualInstanceObject::setEditable(flag);
					}
					virtual void endEditing()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_endEditing_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_endEditing_void_Callback();
						}
						else
							return this->CManualInstanceObject::endEditing();
					}
					virtual void setTransparency(_in ev_real64 percent)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_real64_Callback(percent);
						}
						else
							return this->CManualInstanceObject::setTransparency(percent);
					}
					virtual void setTransparency(_in ev_uint32 subEntityIndex, _in ev_real64 percent)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_uint32_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_uint32_ev_real64_Callback(subEntityIndex, percent);
						}
						else
							return this->CManualInstanceObject::setTransparency(subEntityIndex, percent);
					}
					virtual void setCastShadows(_in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setCastShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setCastShadows_void_ev_bool_Callback(flag);
						}
						else
							return this->CManualInstanceObject::setCastShadows(flag);
					}
					virtual void setReflectable(_in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setReflectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setReflectable_void_ev_bool_Callback(flag);
						}
						else
							return this->CManualInstanceObject::setReflectable(flag);
					}
					virtual ev_bool getReflectable()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getReflectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getReflectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getReflectable();
					}
					virtual void setRefractable(_in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRefractable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRefractable_void_ev_bool_Callback(flag);
						}
						else
							return this->CManualInstanceObject::setRefractable(flag);
					}
					virtual ev_bool getRefractable()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRefractable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRefractable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getRefractable();
					}
					virtual void setMaterial(_in ev_uint32 subEntityIndex, _inout EarthView::World::Graphic::CMaterialPtr& matPtr)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback(subEntityIndex, &matPtr);
						}
						else
							return this->CManualInstanceObject::setMaterial(subEntityIndex, matPtr);
					}
					virtual void initializeAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeAnimation_void_Callback();
						}
						else
							return this->CManualInstanceObject::initializeAnimation();
					}
					virtual void initializeModelAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeModelAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeModelAnimation_void_Callback();
						}
						else
							return this->CManualInstanceObject::initializeModelAnimation();
					}
					virtual void initializeNodeAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeNodeAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeNodeAnimation_void_Callback();
						}
						else
							return this->CManualInstanceObject::initializeNodeAnimation();
					}
					virtual void startAllAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllAnimation_void_Callback();
						}
						else
							return this->CManualInstanceObject::startAllAnimation();
					}
					virtual void stopAllAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllAnimation_void_Callback();
						}
						else
							return this->CManualInstanceObject::stopAllAnimation();
					}
					virtual void pauseAllAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAllAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAllAnimation_void_Callback();
						}
						else
							return this->CManualInstanceObject::pauseAllAnimation();
					}
					virtual void continueAllAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAllAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAllAnimation_void_Callback();
						}
						else
							return this->CManualInstanceObject::continueAllAnimation();
					}
					virtual void setAllAnimationLoop(_in ev_bool loop)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAllAnimationLoop_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAllAnimationLoop_void_ev_bool_Callback(loop);
						}
						else
							return this->CManualInstanceObject::setAllAnimationLoop(loop);
					}
					virtual void startAnimation(_in const EVString& animationName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* animationName_Char = animationName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAnimation_void_EVString_Callback(animationName_Char);
						}
						else
							return this->CManualInstanceObject::startAnimation(animationName);
					}
					virtual void stopAnimation(_in const EVString& animationName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* animationName_Char = animationName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_Callback(animationName_Char);
						}
						else
							return this->CManualInstanceObject::stopAnimation(animationName);
					}
					virtual void pauseAnimation(_in const EVString& animationName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* animationName_Char = animationName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_Callback(animationName_Char);
						}
						else
							return this->CManualInstanceObject::pauseAnimation(animationName);
					}
					virtual void continueAnimation(_in const EVString& animationName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* animationName_Char = animationName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_Callback(animationName_Char);
						}
						else
							return this->CManualInstanceObject::continueAnimation(animationName);
					}
					virtual void setAnimationLoop(_in const EVString& animationName, _in bool loop)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_Callback != NULL && this->isCustomExtend())
						{
							char* animationName_Char = animationName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_Callback(animationName_Char, loop);
						}
						else
							return this->CManualInstanceObject::setAnimationLoop(animationName, loop);
					}
					virtual void prepareForNodeAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_prepareForNodeAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_prepareForNodeAnimation_void_Callback();
						}
						else
							return this->CManualInstanceObject::prepareForNodeAnimation();
					}
					virtual void resumeNodeAnimationState()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_resumeNodeAnimationState_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_resumeNodeAnimationState_void_Callback();
						}
						else
							return this->CManualInstanceObject::resumeNodeAnimationState();
					}
					virtual ev_int32 calculateSubEntityIndex(_in ev_uint16 submeshIndex, _in ev_uint32 instanceIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback(submeshIndex, instanceIndex);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::calculateSubEntityIndex(submeshIndex, instanceIndex);
					}
					virtual void calculateInstanceIndex(_in ev_uint32 subEntityIndex, _out ev_int16& submeshIndex, _out ev_int32& instanceIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback(subEntityIndex, submeshIndex, instanceIndex);
						}
						else
							return this->CManualInstanceObject::calculateInstanceIndex(subEntityIndex, submeshIndex, instanceIndex);
					}
					virtual ev_int32 getNumSubEntities()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumSubEntities_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumSubEntities_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getNumSubEntities();
					}
					virtual void setComponentVisible(_in const EarthView::World::Spatial3D::CComponent& component, _in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentVisible_void_CComponent_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentVisible_void_CComponent_ev_bool_Callback(&component, visible);
						}
						else
							return this->CManualInstanceObject::setComponentVisible(component, visible);
					}
					virtual void setComponentHighlight(_in const EarthView::World::Spatial3D::CComponent& component, _in ev_bool highlight)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentHighlight_void_CComponent_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentHighlight_void_CComponent_ev_bool_Callback(&component, highlight);
						}
						else
							return this->CManualInstanceObject::setComponentHighlight(component, highlight);
					}
					virtual void setComponentTransparency(_in const EarthView::World::Spatial3D::CComponent& component, _in ev_real32 alpha)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentTransparency_void_CComponent_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentTransparency_void_CComponent_ev_real32_Callback(&component, alpha);
						}
						else
							return this->CManualInstanceObject::setComponentTransparency(component, alpha);
					}
					virtual ev_bool isLoaded()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isLoaded_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::isLoaded();
					}
					virtual ev_bool isAttached()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isAttached_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::isAttached();
					}
					virtual void setLocalMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLocalMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLocalMatrix_void_CMatrix4_Callback(&m);
						}
						else
							return this->CManualInstanceObject::setLocalMatrix(m);
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 getLocalMatrix()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalMatrix_CMatrix4_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getLocalMatrix();
					}
					virtual void setPosition(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const EarthView::World::Spatial::Math::CVector3& scale, _in const EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
						}
						else
							return this->CManualInstanceObject::setPosition(latitude, longitude, altitude, scale, qua);
					}
					virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
						}
						else
							return this->CManualInstanceObject::getPosition(latitude, longitude, altitude, scale, qua);
					}
					virtual void getModelDBTransform(_out EarthView::World::Spatial::Math::CVector3& offPosition, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback(&offPosition, &scale, &qua);
						}
						else
							return this->CManualInstanceObject::getModelDBTransform(offPosition, scale, qua);
					}
					virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLayer_IGlobeLayer_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getLayer();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getDataset();
					}
					virtual ev_uint32 getID()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getID();
					}
					virtual EVString getName()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getName();
					}
					virtual EVString getFile()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getFile_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getFile_EVString_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getFile();
					}
					virtual ev_bool isFileDirAsGroup()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isFileDirAsGroup_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isFileDirAsGroup_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::isFileDirAsGroup();
					}
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSceneManager_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSceneManager_CSceneManager_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getSceneManager();
					}
					virtual EVString getAliasName()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAliasName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAliasName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getAliasName();
					}
					virtual EarthView::World::Spatial3D::BindedState getBindedState()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedState_BindedState_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::BindedState returnValue = (EarthView::World::Spatial3D::BindedState)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedState_BindedState_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedState();
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getAllBindedEffect()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedEffect_EffectObjectMap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedEffect_EffectObjectMap_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getAllBindedEffect();
					}
					virtual EarthView::World::Spatial3D::ModelManager::LightObjectMap getAllBindedLight()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedLight_LightObjectMap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelManager::LightObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::LightObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedLight_LightObjectMap_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getAllBindedLight();
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedEffect(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedEffect(subEntityIndex);
					}
					virtual EarthView::World::Spatial3D::ModelManager::LightObjectMap getBindedLight(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLight_LightObjectMap_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelManager::LightObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::LightObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLight_LightObjectMap_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedLight(subEntityIndex);
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedParticle(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedParticle(subEntityIndex);
					}
					virtual EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap getBindedRibbonTrail(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedRibbonTrail(subEntityIndex);
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedEffect(_in const EVString& boneName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* boneName_Char = boneName.makeBuffer();
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_EVString_Callback(boneName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedEffect(boneName);
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedEffectByNodeName(_in const EVString& nodeName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* nodeName_Char = nodeName.makeBuffer();
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback(nodeName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedEffectByNodeName(nodeName);
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedParticle(_in const EVString& boneName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* boneName_Char = boneName.makeBuffer();
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_EVString_Callback(boneName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedParticle(boneName);
					}
					virtual EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap getBindedRibbonTrail(_in const EVString& boneName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* boneName_Char = boneName.makeBuffer();
							EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback(boneName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedRibbonTrail(boneName);
					}
					virtual EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap getBindedRibbonTrailByNodeName(_in const EVString& nodeName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* nodeName_Char = nodeName.makeBuffer();
							EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback(nodeName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedRibbonTrailByNodeName(nodeName);
					}
					virtual EarthView::World::Spatial3D::ModelManager::ModelObjectMap getAllBindedModel()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedModel_ModelObjectMap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelManager::ModelObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::ModelObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedModel_ModelObjectMap_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getAllBindedModel();
					}
					virtual EarthView::World::Spatial3D::ModelManager::ModelObjectMap getBindedModel(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelManager::ModelObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::ModelObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedModel(subEntityIndex);
					}
					virtual EarthView::World::Spatial3D::ModelManager::ModelObjectMap getBindedModelByNodeName(_in const EVString& nodeName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* nodeName_Char = nodeName.makeBuffer();
							EarthView::World::Spatial3D::ModelManager::ModelObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::ModelObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback(nodeName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedModelByNodeName(nodeName);
					}
					virtual EarthView::World::Spatial3D::CComponent getComponentByName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentByName_CComponent_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial3D::CComponent returnValue = *(EarthView::World::Spatial3D::CComponent*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentByName_CComponent_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getComponentByName(name);
					}
					virtual EarthView::World::Spatial3D::CComponent getComponentBySubEntityIndex(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::CComponent returnValue = *(EarthView::World::Spatial3D::CComponent*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getComponentBySubEntityIndex(subEntityIndex);
					}
					virtual EarthView::World::Spatial3D::CComponent getParentComponentByName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getParentComponentByName_CComponent_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial3D::CComponent returnValue = *(EarthView::World::Spatial3D::CComponent*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getParentComponentByName_CComponent_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getParentComponentByName(name);
					}
					virtual EarthView::World::Spatial3D::CComponent getRootComponent()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRootComponent_CComponent_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::CComponent returnValue = *(EarthView::World::Spatial3D::CComponent*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRootComponent_CComponent_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getRootComponent();
					}
					virtual EarthView::World::Spatial3D::ModelManager::ModelObjectMap getBindedModel(_in const EVString& boneName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* boneName_Char = boneName.makeBuffer();
							EarthView::World::Spatial3D::ModelManager::ModelObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::ModelObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_EVString_Callback(boneName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedModel(boneName);
					}
					virtual EarthView::World::Spatial3D::EffectManager::CEffect* getBindedParticleByName(_in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticleByName_CEffect_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* aliasName_Char = aliasName.makeBuffer();
							EarthView::World::Spatial3D::EffectManager::CEffect* returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticleByName_CEffect_EVString_Callback(aliasName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedParticleByName(aliasName);
					}
					virtual EarthView::World::Graphic::CRibbonTrail* getBindedRibbonTrailByName(_in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* aliasName_Char = aliasName.makeBuffer();
							EarthView::World::Graphic::CRibbonTrail* returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback(aliasName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedRibbonTrailByName(aliasName);
					}
					virtual EarthView::World::Spatial3D::ModelManager::CModelBaseObject* getBindedModelByName(_in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByName_CModelBaseObject_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* aliasName_Char = aliasName.makeBuffer();
							EarthView::World::Spatial3D::ModelManager::CModelBaseObject* returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByName_CModelBaseObject_EVString_Callback(aliasName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedModelByName(aliasName);
					}
					virtual EarthView::World::Graphic::CLight* getBindedLightByName(_in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLightByName_CLight_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* aliasName_Char = aliasName.makeBuffer();
							EarthView::World::Graphic::CLight* returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLightByName_CLight_EVString_Callback(aliasName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedLightByName(aliasName);
					}
					virtual ev_bool bindEffectAtBone(_in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in const EVString& boneName, _in const EarthView::World::Spatial::Math::CMatrix4& offMatrix, _in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* boneName_Char = boneName.makeBuffer();
							char* aliasName_Char = aliasName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback(ref_pEffect, boneName_Char, &offMatrix, aliasName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::bindEffectAtBone(ref_pEffect, boneName, offMatrix, aliasName);
					}
					virtual ev_bool bindEffectAtNode(_in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in const EVString& nodeName, _in const EarthView::World::Spatial::Math::CMatrix4& offMatrix, _in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* nodeName_Char = nodeName.makeBuffer();
							char* aliasName_Char = aliasName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback(ref_pEffect, nodeName_Char, &offMatrix, aliasName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::bindEffectAtNode(ref_pEffect, nodeName, offMatrix, aliasName);
					}
					virtual ev_bool bindEffectAtSubEntity(_in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in ev_uint32 subEntityIndex, _in const EarthView::World::Spatial::Math::CMatrix4& offMatrix, _in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* aliasName_Char = aliasName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback(ref_pEffect, subEntityIndex, &offMatrix, aliasName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::bindEffectAtSubEntity(ref_pEffect, subEntityIndex, offMatrix, aliasName);
					}
					virtual ev_bool bindLightAtSubEntity(_in EarthView::World::Graphic::CLight* l, _in ev_uint32 subEntityIndex, _in const EarthView::World::Spatial::Math::CMatrix4& offMatrix, _in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* aliasName_Char = aliasName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback(l, subEntityIndex, &offMatrix, aliasName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::bindLightAtSubEntity(l, subEntityIndex, offMatrix, aliasName);
					}
					virtual ev_bool bindModelAtBone(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in const EVString& boneName, _in const EarthView::World::Spatial::Math::CMatrix4& offMatrix, _in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* boneName_Char = boneName.makeBuffer();
							char* aliasName_Char = aliasName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback(ref_pModel, boneName_Char, &offMatrix, aliasName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::bindModelAtBone(ref_pModel, boneName, offMatrix, aliasName);
					}
					virtual ev_bool bindModelAtSubEntity(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in ev_uint32 subEntityIndex, _in const EarthView::World::Spatial::Math::CMatrix4& offMatrix, _in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* aliasName_Char = aliasName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback(ref_pModel, subEntityIndex, &offMatrix, aliasName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::bindModelAtSubEntity(ref_pModel, subEntityIndex, offMatrix, aliasName);
					}
					virtual ev_bool bindModelAtNode(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in const EVString& nodeName, _in const EarthView::World::Spatial::Math::CMatrix4& offMatrix, _in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* nodeName_Char = nodeName.makeBuffer();
							char* aliasName_Char = aliasName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback(ref_pModel, nodeName_Char, &offMatrix, aliasName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::bindModelAtNode(ref_pModel, nodeName, offMatrix, aliasName);
					}
					virtual ev_bool unBindEffect(_in EarthView::World::Spatial3D::EffectManager::CEffect* pEffect)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindEffect_ev_bool_CEffect_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindEffect_ev_bool_CEffect_Callback(pEffect);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::unBindEffect(pEffect);
					}
					virtual ev_bool unBindLight(_in EarthView::World::Graphic::CLight* pLight)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindLight_ev_bool_CLight_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindLight_ev_bool_CLight_Callback(pLight);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::unBindLight(pLight);
					}
					virtual ev_bool unBindModel(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindModel_ev_bool_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindModel_ev_bool_CModelBaseObject_Callback(pModel);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::unBindModel(pModel);
					}
					virtual ev_uint32 getBindedID()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBindedID();
					}
					virtual void setBindedID(_in ev_uint32 bindedID)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedID_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedID_void_ev_uint32_Callback(bindedID);
						}
						else
							return this->CManualInstanceObject::setBindedID(bindedID);
					}
					virtual void setBindedEffectVisibility(_in ev_bool isVisible)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedEffectVisibility_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedEffectVisibility_void_ev_bool_Callback(isVisible);
						}
						else
							return this->CManualInstanceObject::setBindedEffectVisibility(isVisible);
					}
					virtual ev_bool updateMaterial(_in const EarthView::World::Graphic::CMaterialPtr& matPtr, _in const EarthView::World::Core::StringVector& replacedTextures, _in const EarthView::World::Core::StringVector& newTextureFilesPath)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback(&matPtr, &replacedTextures, &newTextureFilesPath);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::updateMaterial(matPtr, replacedTextures, newTextureFilesPath);
					}
					virtual EarthView::World::Graphic::CMeshPtr getMeshPtr()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshPtr_CMeshPtr_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CMeshPtr returnValue = *(EarthView::World::Graphic::CMeshPtr*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshPtr_CMeshPtr_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getMeshPtr();
					}
					virtual EarthView::World::Spatial3D::TexturePtrVector getTexturePtrs()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTexturePtrs_TexturePtrVector_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::TexturePtrVector returnValue = *(EarthView::World::Spatial3D::TexturePtrVector*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTexturePtrs_TexturePtrVector_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getTexturePtrs();
					}
					virtual EarthView::World::Spatial3D::MaterialPtrVector getMaterialPtrs()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialPtrs_MaterialPtrVector_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::MaterialPtrVector returnValue = *(EarthView::World::Spatial3D::MaterialPtrVector*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialPtrs_MaterialPtrVector_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getMaterialPtrs();
					}
					virtual EarthView::World::Spatial3D::GpuPtrVector getGpuPtrs()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuPtrs_GpuPtrVector_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::GpuPtrVector returnValue = *(EarthView::World::Spatial3D::GpuPtrVector*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuPtrs_GpuPtrVector_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getGpuPtrs();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getMeshFeature()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshFeature_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshFeature_IFeature_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getMeshFeature();
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getOrigTextureFeatures()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getOrigTextureFeatures_FeatureVector_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Dataset::FeatureVector& returnValue = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getOrigTextureFeatures_FeatureVector_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getOrigTextureFeatures();
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getThumbTextureFeatures()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getThumbTextureFeatures_FeatureVector_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Dataset::FeatureVector& returnValue = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getThumbTextureFeatures_FeatureVector_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getThumbTextureFeatures();
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getMaterialFeatures()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialFeatures_FeatureVector_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Dataset::FeatureVector& returnValue = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialFeatures_FeatureVector_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getMaterialFeatures();
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getAnimationFeatures()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAnimationFeatures_FeatureVector_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Dataset::FeatureVector& returnValue = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAnimationFeatures_FeatureVector_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getAnimationFeatures();
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getGpuFeatures()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuFeatures_FeatureVector_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Dataset::FeatureVector& returnValue = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuFeatures_FeatureVector_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getGpuFeatures();
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getProgramFeatures()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getProgramFeatures_FeatureVector_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Dataset::FeatureVector& returnValue = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getProgramFeatures_FeatureVector_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getProgramFeatures();
					}
					virtual EarthView::World::Spatial3D::Dataset::FeatureVector getResourceFeature()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getResourceFeature_FeatureVector_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Dataset::FeatureVector returnValue = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getResourceFeature_FeatureVector_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getResourceFeature();
					}
					virtual void startFlash(_in const EarthView::World::Graphic::CColourValue& color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback(&color, hightLight_ms, normally_ms);
						}
						else
							return this->CManualInstanceObject::startFlash(color, hightLight_ms, normally_ms);
					}
					virtual void stopFlash()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopFlash_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopFlash_void_Callback();
						}
						else
							return this->CManualInstanceObject::stopFlash();
					}
					virtual EarthView::World::Spatial3D::ModelObjectState getModelState()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelState_ModelObjectState_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelObjectState returnValue = (EarthView::World::Spatial3D::ModelObjectState)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelState_ModelObjectState_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getModelState();
					}
					virtual EarthView::World::Spatial3D::TextureState getTextureState()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTextureState_TextureState_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::TextureState returnValue = (EarthView::World::Spatial3D::TextureState)m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTextureState_TextureState_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getTextureState();
					}
					virtual ev_bool needSwitchTexture()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_needSwitchTexture_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_needSwitchTexture_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::needSwitchTexture();
					}
					virtual ev_bool switchThumb(_inout EarthView::World::Spatial3D::TexturePtrVector& outTmpTextureVec)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchThumb_ev_bool_TexturePtrVector_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchThumb_ev_bool_TexturePtrVector_Callback(&outTmpTextureVec);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::switchThumb(outTmpTextureVec);
					}
					virtual void attachThumb(_inout EarthView::World::Spatial3D::TexturePtrVector& tmpTextureVec)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachThumb_void_TexturePtrVector_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachThumb_void_TexturePtrVector_Callback(&tmpTextureVec);
						}
						else
							return this->CManualInstanceObject::attachThumb(tmpTextureVec);
					}
					virtual ev_bool switchOrig(_inout EarthView::World::Spatial3D::TexturePtrVector& outTmpTextureVec)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchOrig_ev_bool_TexturePtrVector_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchOrig_ev_bool_TexturePtrVector_Callback(&outTmpTextureVec);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::switchOrig(outTmpTextureVec);
					}
					virtual void attachOrig(_inout EarthView::World::Spatial3D::TexturePtrVector& tmpTextureVec)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachOrig_void_TexturePtrVector_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachOrig_void_TexturePtrVector_Callback(&tmpTextureVec);
						}
						else
							return this->CManualInstanceObject::attachOrig(tmpTextureVec);
					}
					virtual void clearTmpTextureStream(_inout EarthView::World::Spatial3D::TexturePtrVector& tmpTextureVec)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearTmpTextureStream_void_TexturePtrVector_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearTmpTextureStream_void_TexturePtrVector_Callback(&tmpTextureVec);
						}
						else
							return this->CManualInstanceObject::clearTmpTextureStream(tmpTextureVec);
					}
					virtual void setLoadFromLayer(_in const ev_bool& fromLayer)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLoadFromLayer_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLoadFromLayer_void_ev_bool_Callback(fromLayer);
						}
						else
							return this->CManualInstanceObject::setLoadFromLayer(fromLayer);
					}
					virtual ev_bool getLoadFromLayer()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLoadFromLayer_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLoadFromLayer_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getLoadFromLayer();
					}
					virtual ev_bool hasFltAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_hasFltAnimation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_hasFltAnimation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::hasFltAnimation();
					}
					virtual void mergeBoundingBoxForNode()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_mergeBoundingBoxForNode_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_mergeBoundingBoxForNode_void_Callback();
						}
						else
							return this->CManualInstanceObject::mergeBoundingBoxForNode();
					}
					virtual void startAllNodeAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllNodeAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllNodeAnimation_void_Callback();
						}
						else
							return this->CManualInstanceObject::startAllNodeAnimation();
					}
					virtual void stopAllNodeAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllNodeAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllNodeAnimation_void_Callback();
						}
						else
							return this->CManualInstanceObject::stopAllNodeAnimation();
					}
					virtual void startRangeAnimation(_in const EVString& keyTimeTagName, _in ev_int32 segmentConut, _in ev_uint32 option)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							char* keyTimeTagName_Char = keyTimeTagName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback(keyTimeTagName_Char, segmentConut, option);
						}
						else
							return this->CManualInstanceObject::startRangeAnimation(keyTimeTagName, segmentConut, option);
					}
					virtual void startRangeAnimation(_in const EVString& keyTimeTagName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* keyTimeTagName_Char = keyTimeTagName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_Callback(keyTimeTagName_Char);
						}
						else
							return this->CManualInstanceObject::startRangeAnimation(keyTimeTagName);
					}
					virtual ev_int32 startRangeAnimationIndependently(_in const EVString& keyTimeTagName, _in ev_int32 segmentConut, _in ev_uint32 option)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							char* keyTimeTagName_Char = keyTimeTagName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback(keyTimeTagName_Char, segmentConut, option);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::startRangeAnimationIndependently(keyTimeTagName, segmentConut, option);
					}
					virtual ev_int32 startRangeAnimationIndependently(_in const EVString& keyTimeTagName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* keyTimeTagName_Char = keyTimeTagName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_Callback(keyTimeTagName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::startRangeAnimationIndependently(keyTimeTagName);
					}
					virtual void stopRangeAnimation(_in ev_bool stopAtRangeStart)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_Callback(stopAtRangeStart);
						}
						else
							return this->CManualInstanceObject::stopRangeAnimation(stopAtRangeStart);
					}
					virtual void stopRangeAnimation(_in ev_bool stopAtRangeStart, _in ev_int32 handle)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback(stopAtRangeStart, handle);
						}
						else
							return this->CManualInstanceObject::stopRangeAnimation(stopAtRangeStart, handle);
					}
					virtual EarthView::World::Graphic::CNode* getBoneNode(_in const EVString& boneName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBoneNode_CNode_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* boneName_Char = boneName.makeBuffer();
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBoneNode_CNode_EVString_Callback(boneName_Char);
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getBoneNode(boneName);
					}
					virtual void updateSkeletonAnimationVertex()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateSkeletonAnimationVertex_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateSkeletonAnimationVertex_void_Callback();
						}
						else
							return this->CManualInstanceObject::updateSkeletonAnimationVertex();
					}
					virtual EarthView::World::Graphic::CNode* getNode()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getNode();
					}
					virtual void setUserData(_inout EarthView::World::Spatial3D::CFeatureUserData& userData)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setUserData_void_CFeatureUserData_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setUserData_void_CFeatureUserData_Callback(&userData);
						}
						else
							return this->CManualInstanceObject::setUserData(userData);
					}
					virtual ev_bool getSelectable()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::getSelectable();
					}
					virtual ev_bool update()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_update_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_update_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CManualInstanceObject::update();
					}
				};
				REGISTER_FACTORY_CLASS(CManualInstanceObjectProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::load();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->load();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::load();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_IntVector(void *pObjectXXXX, _in const void* subEntityIndexs )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::load(*(EarthView::World::Core::IntVector*)subEntityIndexs);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->load(*(EarthView::World::Core::IntVector*)subEntityIndexs);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_IntVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_IntVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_load_ev_bool_IntVector_NoVirtual(void *pObjectXXXX, _in const void* subEntityIndexs )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::load(*(EarthView::World::Core::IntVector*)subEntityIndexs);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unload_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::unload();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->unload();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unload_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unload_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unload_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unload_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::unload();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToNode_ev_bool_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::attachToNode(n);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->attachToNode(n);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToNode_ev_bool_CNode_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToNode_ev_bool_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToNode_ev_bool_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::attachToNode(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromNode_CNode(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::detachFromNode();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->detachFromNode();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromNode_CNode_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromNode_CNode_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::detachFromNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToScene_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::attachToScene();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->attachToScene();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToScene_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToScene_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToScene_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachToScene_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::attachToScene();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromScene_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::detachFromScene();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->detachFromScene();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromScene_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromScene_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromScene_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_detachFromScene_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::detachFromScene();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isVisible_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isVisible_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setVisible(flag);
					else
						ptrNativeObject->setVisible(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setVisible(flag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool flag, _in ev_bool bRecursive )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setVisible(flag, bRecursive);
					else
						ptrNativeObject->setVisible(flag, bRecursive);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setVisible_void_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag, _in ev_bool bRecursive )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setVisible(flag, bRecursive);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_bool isVisible )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setSubEntityVisibility(subEntityIndex, isVisible);
					else
						ptrNativeObject->setSubEntityVisibility(subEntityIndex, isVisible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_bool isVisible )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setSubEntityVisibility(subEntityIndex, isVisible);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_bool isVisible, _in ev_bool bRecursive )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setSubEntityVisibility(subEntityIndex, isVisible, bRecursive);
					else
						ptrNativeObject->setSubEntityVisibility(subEntityIndex, isVisible, bRecursive);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_bool isVisible, _in ev_bool bRecursive )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setSubEntityVisibility(subEntityIndex, isVisible, bRecursive);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntityVisibility_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getSubEntityVisibility(subEntityIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getSubEntityVisibility(subEntityIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntityVisibility_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntityVisibility_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntityVisibility_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getSubEntityVisibility(subEntityIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getType_ModelType(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getType_ModelType( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getType_ModelType_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getType_ModelType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getType_ModelType_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getInstanceEntityVector_InstancedEntityVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial3D::InstancedEntityVector& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getInstanceEntityVector();
						const EarthView::World::Spatial3D::InstancedEntityVector *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::Spatial3D::InstancedEntityVector& objXXXX = ptrNativeObject->getInstanceEntityVector();
						const EarthView::World::Spatial3D::InstancedEntityVector *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getInstanceEntityVector_InstancedEntityVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getInstanceEntityVector_InstancedEntityVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getInstanceEntityVector_InstancedEntityVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getInstanceEntityVector_InstancedEntityVector_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					const EarthView::World::Spatial3D::InstancedEntityVector& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getInstanceEntityVector();
					const EarthView::World::Spatial3D::InstancedEntityVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumInstancePerBatch_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getNumInstancePerBatch();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getNumInstancePerBatch();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumInstancePerBatch_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumInstancePerBatch_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumInstancePerBatch_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumInstancePerBatch_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getNumInstancePerBatch();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setNumInstancePerBatch_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 numPerBatch )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setNumInstancePerBatch(numPerBatch);
					else
						ptrNativeObject->setNumInstancePerBatch(numPerBatch);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setNumInstancePerBatch_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setNumInstancePerBatch_void_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setNumInstancePerBatch_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setNumInstancePerBatch_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 numPerBatch )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setNumInstancePerBatch(numPerBatch);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMaxDistance_void_ev_real64(void *pObjectXXXX, _in ev_real64 dist )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setRenderingMaxDistance(dist);
					else
						ptrNativeObject->setRenderingMaxDistance(dist);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMaxDistance_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMaxDistance_void_ev_real64_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMaxDistance_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMaxDistance_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dist )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setRenderingMaxDistance(dist);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMaxDistance_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getRenderingMaxDistance();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getRenderingMaxDistance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMaxDistance_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMaxDistance_ev_real64_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMaxDistance_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMaxDistance_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getRenderingMaxDistance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMinDistance_void_ev_real64(void *pObjectXXXX, _in ev_real64 dist )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setRenderingMinDistance(dist);
					else
						ptrNativeObject->setRenderingMinDistance(dist);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMinDistance_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMinDistance_void_ev_real64_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMinDistance_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRenderingMinDistance_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dist )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setRenderingMinDistance(dist);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMinDistance_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getRenderingMinDistance();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getRenderingMinDistance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMinDistance_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMinDistance_ev_real64_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMinDistance_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRenderingMinDistance_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getRenderingMinDistance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMatrix_void_CMatrix4(void *pObjectXXXX, _in const void* m )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
					else
						ptrNativeObject->setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMatrix_void_CMatrix4_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMatrix_void_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMatrix_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in const void* m )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMatrix_CMatrix4(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getMatrix();
						EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->getMatrix();
						EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMatrix_CMatrix4_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMatrix_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMatrix_CMatrix4_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getWorldAABB_CAxisAlignedBox(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getWorldAABB();
						EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->getWorldAABB();
						EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getWorldAABB_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getWorldAABB_CAxisAlignedBox_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getWorldAABB_CAxisAlignedBox(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getWorldAABB_CAxisAlignedBox_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getWorldAABB();
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::createLocalAxisNode();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->createLocalAxisNode();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::createLocalAxisNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_EVString(void *pObjectXXXX, _in const char* componentName )
				{
					EarthView::World::Core::ev_string componentName1 = componentName;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::createLocalAxisNode(componentName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->createLocalAxisNode(componentName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createLocalAxisNode_CNode_EVString_NoVirtual(void *pObjectXXXX, _in const char* componentName )
				{
					EarthView::World::Core::ev_string componentName1 = componentName;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::createLocalAxisNode(componentName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalAxisNode_CNode(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getLocalAxisNode();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getLocalAxisNode();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalAxisNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalAxisNode_CNode_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalAxisNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalAxisNode_CNode_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getLocalAxisNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_destroyLocalAxisNode_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::destroyLocalAxisNode();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyLocalAxisNode();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_destroyLocalAxisNode_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_destroyLocalAxisNode_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_destroyLocalAxisNode_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_destroyLocalAxisNode_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::destroyLocalAxisNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectionColour_void_CColourValue(void *pObjectXXXX, _in const void* color )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setSelectionColour(*(EarthView::World::Graphic::CColourValue*)color);
					else
						ptrNativeObject->setSelectionColour(*(EarthView::World::Graphic::CColourValue*)color);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectionColour_void_CColourValue_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectionColour_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectionColour_void_CColourValue_NoVirtual(void *pObjectXXXX, _in const void* color )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setSelectionColour(*(EarthView::World::Graphic::CColourValue*)color);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectionColour_CColourValue(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getSelectionColour();
						EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getSelectionColour();
						EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectionColour_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectionColour_CColourValue_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectionColour_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectionColour_CColourValue_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getSelectionColour();
					EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEnvParam_void_CColourValue_CColourValue_CColourValue(void *pObjectXXXX, _in const void* ambient, _in const void* diffuse, _in const void* specular )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
					else
						ptrNativeObject->setEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEnvParam_void_CColourValue_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEnvParam_void_CColourValue_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_NoVirtual(void *pObjectXXXX, _in const void* ambient, _in const void* diffuse, _in const void* specular )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelectable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::isSelectable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelectable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelectable_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelectable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::isSelectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelected_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setSelectable(flag);
					else
						ptrNativeObject->setSelectable(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setSelectable(flag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setSelected(flag);
					else
						ptrNativeObject->setSelected(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelected_void_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setSelected(flag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_bool(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setSubEntitySelected(subEntityIndex, flag);
					else
						ptrNativeObject->setSubEntitySelected(subEntityIndex, flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setSubEntitySelected(subEntityIndex, flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntitySelected_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getSubEntitySelected(subEntityIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getSubEntitySelected(subEntityIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntitySelected_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntitySelected_ev_bool_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntitySelected_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubEntitySelected_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getSubEntitySelected(subEntityIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32(void *pObjectXXXX, _out ev_uint32& subMeshIndex, _out ev_uint32& instanceIndex, _out ev_int32& segmentIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getSelectedSubEntityIndex(subMeshIndex, instanceIndex, segmentIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getSelectedSubEntityIndex(subMeshIndex, instanceIndex, segmentIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_NoVirtual(void *pObjectXXXX, _out ev_uint32& subMeshIndex, _out ev_uint32& instanceIndex, _out ev_int32& segmentIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getSelectedSubEntityIndex(subMeshIndex, instanceIndex, segmentIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshName_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getSubMeshName(subEntityIndex);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getSubMeshName(subEntityIndex);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshName_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshName_EVString_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshName_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshName_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getSubMeshName(subEntityIndex);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshMatrix_CMatrix4_ev_uint32(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getSubMeshMatrix(subEntityIndex);
						EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->getSubMeshMatrix(subEntityIndex);
						EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshMatrix_CMatrix4_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshMatrix_CMatrix4_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSubMeshMatrix_CMatrix4_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getSubMeshMatrix(subEntityIndex);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in EarthView::World::Graphic::CNode::CNodeListener* nodeListener )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::addNodeListenerForSubMesh(subEntityIndex, nodeListener);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->addNodeListenerForSubMesh(subEntityIndex, nodeListener);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in EarthView::World::Graphic::CNode::CNodeListener* nodeListener )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::addNodeListenerForSubMesh(subEntityIndex, nodeListener);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in EarthView::World::Graphic::CNode::CNodeListener* nodeListener )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::removeNodeListenerForSubMesh(subEntityIndex, nodeListener);
					else
						ptrNativeObject->removeNodeListenerForSubMesh(subEntityIndex, nodeListener);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in EarthView::World::Graphic::CNode::CNodeListener* nodeListener )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::removeNodeListenerForSubMesh(subEntityIndex, nodeListener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::clearSelection();
					else
						ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearSelection_void_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::clearSelection();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEditable_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setEditable(flag);
					else
						ptrNativeObject->setEditable(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEditable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEditable_void_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEditable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setEditable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setEditable(flag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_endEditing_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::endEditing();
					else
						ptrNativeObject->endEditing();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_endEditing_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_endEditing_void_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_endEditing_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_endEditing_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::endEditing();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_real64(void *pObjectXXXX, _in ev_real64 percent )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setTransparency(percent);
					else
						ptrNativeObject->setTransparency(percent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_real64_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 percent )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setTransparency(percent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_linkEntity_void_CEntity(void *pObjectXXXX, _in EarthView::World::Graphic::CEntity* pEntity )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->linkEntity(pEntity);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_uint32_ev_real64(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_real64 percent )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setTransparency(subEntityIndex, percent);
					else
						ptrNativeObject->setTransparency(subEntityIndex, percent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_uint32_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_uint32_ev_real64_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_uint32_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setTransparency_void_ev_uint32_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_real64 percent )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setTransparency(subEntityIndex, percent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setCastShadows_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setCastShadows(flag);
					else
						ptrNativeObject->setCastShadows(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setCastShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setCastShadows_void_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setCastShadows_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setCastShadows_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setCastShadows(flag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setReflectable_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setReflectable(flag);
					else
						ptrNativeObject->setReflectable(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setReflectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setReflectable_void_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setReflectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setReflectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setReflectable(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getReflectable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getReflectable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getReflectable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getReflectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getReflectable_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getReflectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getReflectable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getReflectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRefractable_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setRefractable(flag);
					else
						ptrNativeObject->setRefractable(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRefractable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRefractable_void_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRefractable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setRefractable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setRefractable(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRefractable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getRefractable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getRefractable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRefractable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRefractable_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRefractable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRefractable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getRefractable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMaterial_void_ev_uint32_CMaterialPtr(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _inout void* matPtr )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setMaterial(subEntityIndex, *(EarthView::World::Graphic::CMaterialPtr*)matPtr);
					else
						ptrNativeObject->setMaterial(subEntityIndex, *(EarthView::World::Graphic::CMaterialPtr*)matPtr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMaterial_void_ev_uint32_CMaterialPtr( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMaterial_void_ev_uint32_CMaterialPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setMaterial_void_ev_uint32_CMaterialPtr_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _inout void* matPtr )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setMaterial(subEntityIndex, *(EarthView::World::Graphic::CMaterialPtr*)matPtr);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::initializeAnimation();
					else
						ptrNativeObject->initializeAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeAnimation_void_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::initializeAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeModelAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::initializeModelAnimation();
					else
						ptrNativeObject->initializeModelAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeModelAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeModelAnimation_void_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeModelAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeModelAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::initializeModelAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeNodeAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::initializeNodeAnimation();
					else
						ptrNativeObject->initializeNodeAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeNodeAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeNodeAnimation_void_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeNodeAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_initializeNodeAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::initializeNodeAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::startAllAnimation();
					else
						ptrNativeObject->startAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllAnimation_void_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::startAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::stopAllAnimation();
					else
						ptrNativeObject->stopAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllAnimation_void_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::stopAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAllAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::pauseAllAnimation();
					else
						ptrNativeObject->pauseAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAllAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAllAnimation_void_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAllAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAllAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::pauseAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAllAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::continueAllAnimation();
					else
						ptrNativeObject->continueAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAllAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAllAnimation_void_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAllAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAllAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::continueAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAllAnimationLoop_void_ev_bool(void *pObjectXXXX, _in ev_bool loop )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setAllAnimationLoop(loop);
					else
						ptrNativeObject->setAllAnimationLoop(loop);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAllAnimationLoop_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAllAnimationLoop_void_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAllAnimationLoop_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAllAnimationLoop_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool loop )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setAllAnimationLoop(loop);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAnimation_void_EVString(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::startAnimation(animationName1);
					else
						ptrNativeObject->startAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAnimation_void_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAnimation_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAnimation_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::startAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::stopAnimation(animationName1);
					else
						ptrNativeObject->stopAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::stopAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::pauseAnimation(animationName1);
					else
						ptrNativeObject->pauseAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::pauseAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::continueAnimation(animationName1);
					else
						ptrNativeObject->continueAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::continueAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool(void *pObjectXXXX, _in const char* animationName, _in bool loop )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setAnimationLoop(animationName1, loop);
					else
						ptrNativeObject->setAnimationLoop(animationName1, loop);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_NoVirtual(void *pObjectXXXX, _in const char* animationName, _in bool loop )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setAnimationLoop(animationName1, loop);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_createAnimationScene_void_CNodeSerializer_CNode(void *pObjectXXXX, _in const void* node, _in EarthView::World::Graphic::CNode* parent )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->createAnimationScene(*(EarthView::World::Graphic::CNodeSerializer*)node, parent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_prepareForNodeAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::prepareForNodeAnimation();
					else
						ptrNativeObject->prepareForNodeAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_prepareForNodeAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_prepareForNodeAnimation_void_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_prepareForNodeAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_prepareForNodeAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::prepareForNodeAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_resumeNodeAnimationState_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::resumeNodeAnimationState();
					else
						ptrNativeObject->resumeNodeAnimationState();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_resumeNodeAnimationState_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_resumeNodeAnimationState_void_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_resumeNodeAnimationState_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_resumeNodeAnimationState_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::resumeNodeAnimationState();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_destoryAnimationSceneNodes_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->destoryAnimationSceneNodes();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32(void *pObjectXXXX, _in ev_uint16 submeshIndex, _in ev_uint32 instanceIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::calculateSubEntityIndex(submeshIndex, instanceIndex);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->calculateSubEntityIndex(submeshIndex, instanceIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint16 submeshIndex, _in ev_uint32 instanceIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::calculateSubEntityIndex(submeshIndex, instanceIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _out ev_int16& submeshIndex, _out ev_int32& instanceIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::calculateInstanceIndex(subEntityIndex, submeshIndex, instanceIndex);
					else
						ptrNativeObject->calculateInstanceIndex(subEntityIndex, submeshIndex, instanceIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _out ev_int16& submeshIndex, _out ev_int32& instanceIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::calculateInstanceIndex(subEntityIndex, submeshIndex, instanceIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumSubEntities_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getNumSubEntities();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getNumSubEntities();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumSubEntities_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumSubEntities_ev_int32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumSubEntities_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNumSubEntities_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::getNumSubEntities();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentByInstancedEntity_CComponent_CInstancedEntity(void *pObjectXXXX, _in EarthView::World::Graphic::CInstancedEntity* instancedEntity )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					EarthView::World::Spatial3D::CComponent objXXXX = ptrNativeObject->getComponentByInstancedEntity(instancedEntity);
					EarthView::World::Spatial3D::CComponent *pXXXX = new EarthView::World::Spatial3D::CComponent(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentVisible_void_CComponent_ev_bool(void *pObjectXXXX, _in const void* component, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setComponentVisible(*(EarthView::World::Spatial3D::CComponent*)component, visible);
					else
						ptrNativeObject->setComponentVisible(*(EarthView::World::Spatial3D::CComponent*)component, visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentVisible_void_CComponent_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentVisible_void_CComponent_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentVisible_void_CComponent_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentVisible_void_CComponent_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* component, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setComponentVisible(*(EarthView::World::Spatial3D::CComponent*)component, visible);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentHighlight_void_CComponent_ev_bool(void *pObjectXXXX, _in const void* component, _in ev_bool highlight )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setComponentHighlight(*(EarthView::World::Spatial3D::CComponent*)component, highlight);
					else
						ptrNativeObject->setComponentHighlight(*(EarthView::World::Spatial3D::CComponent*)component, highlight);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentHighlight_void_CComponent_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentHighlight_void_CComponent_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentHighlight_void_CComponent_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentHighlight_void_CComponent_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* component, _in ev_bool highlight )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setComponentHighlight(*(EarthView::World::Spatial3D::CComponent*)component, highlight);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentTransparency_void_CComponent_ev_real32(void *pObjectXXXX, _in const void* component, _in ev_real32 alpha )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					if (dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setComponentTransparency(*(EarthView::World::Spatial3D::CComponent*)component, alpha);
					else
						ptrNativeObject->setComponentTransparency(*(EarthView::World::Spatial3D::CComponent*)component, alpha);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentTransparency_void_CComponent_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentTransparency_void_CComponent_ev_real32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentTransparency_void_CComponent_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setComponentTransparency_void_CComponent_ev_real32_NoVirtual(void *pObjectXXXX, _in const void* component, _in ev_real32 alpha )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CManualInstanceObject::setComponentTransparency(*(EarthView::World::Spatial3D::CComponent*)component, alpha);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setInstanceInUse_void_ev_bool(void *pObjectXXXX, _in ev_bool bInUse )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->setInstanceInUse(bInUse);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAsyncUpdateBuffer_void_ev_bool(void *pObjectXXXX, _in ev_bool asyncUpdate )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ptrNativeObject->setAsyncUpdateBuffer(asyncUpdate);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAsyncUpdateBuffer_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CManualInstanceObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getAsyncUpdateBuffer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLocalMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLocalMatrix_void_CMatrix4_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLocalMatrix_void_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalMatrix_CMatrix4_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLocalMatrix_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getFile_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getFile_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getFile_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isFileDirAsGroup_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isFileDirAsGroup_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isFileDirAsGroup_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSceneManager_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSceneManager_CSceneManager_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSceneManager_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAliasName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAliasName_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAliasName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedState_BindedState( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedState_BindedState_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedState_BindedState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedEffect_EffectObjectMap( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedEffect_EffectObjectMap_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedEffect_EffectObjectMap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedLight_LightObjectMap( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedLight_LightObjectMap_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedLight_LightObjectMap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLight_LightObjectMap_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLight_LightObjectMap_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLight_LightObjectMap_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffect_EffectObjectMap_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffectByNodeName_EffectObjectMap_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedEffectByNodeName_EffectObjectMap_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticle_EffectObjectMap_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedModel_ModelObjectMap( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedModel_ModelObjectMap_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAllBindedModel_ModelObjectMap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByNodeName_ModelObjectMap_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByNodeName_ModelObjectMap_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentByName_CComponent_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentByName_CComponent_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentByName_CComponent_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentBySubEntityIndex_CComponent_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getComponentBySubEntityIndex_CComponent_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getParentComponentByName_CComponent_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getParentComponentByName_CComponent_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getParentComponentByName_CComponent_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRootComponent_CComponent( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRootComponent_CComponent_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getRootComponent_CComponent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModel_ModelObjectMap_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticleByName_CEffect_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticleByName_CEffect_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedParticleByName_CEffect_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByName_CRibbonTrail_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedRibbonTrailByName_CRibbonTrail_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByName_CModelBaseObject_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByName_CModelBaseObject_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedModelByName_CModelBaseObject_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLightByName_CLight_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLightByName_CLight_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedLightByName_CLight_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindEffect_ev_bool_CEffect( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindEffect_ev_bool_CEffect_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindEffect_ev_bool_CEffect(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindLight_ev_bool_CLight( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindLight_ev_bool_CLight_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindLight_ev_bool_CLight(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindModel_ev_bool_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindModel_ev_bool_CModelBaseObject_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_unBindModel_ev_bool_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedID_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBindedID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedID_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedID_void_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedID_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedEffectVisibility_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedEffectVisibility_void_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setBindedEffectVisibility_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshPtr_CMeshPtr( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshPtr_CMeshPtr_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshPtr_CMeshPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTexturePtrs_TexturePtrVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTexturePtrs_TexturePtrVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTexturePtrs_TexturePtrVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialPtrs_MaterialPtrVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialPtrs_MaterialPtrVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialPtrs_MaterialPtrVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuPtrs_GpuPtrVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuPtrs_GpuPtrVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuPtrs_GpuPtrVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshFeature_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshFeature_IFeature_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMeshFeature_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getOrigTextureFeatures_FeatureVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getOrigTextureFeatures_FeatureVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getOrigTextureFeatures_FeatureVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getThumbTextureFeatures_FeatureVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getThumbTextureFeatures_FeatureVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getThumbTextureFeatures_FeatureVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialFeatures_FeatureVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialFeatures_FeatureVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getMaterialFeatures_FeatureVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAnimationFeatures_FeatureVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAnimationFeatures_FeatureVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getAnimationFeatures_FeatureVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuFeatures_FeatureVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuFeatures_FeatureVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getGpuFeatures_FeatureVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getProgramFeatures_FeatureVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getProgramFeatures_FeatureVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getProgramFeatures_FeatureVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getResourceFeature_FeatureVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getResourceFeature_FeatureVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getResourceFeature_FeatureVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startFlash_void_CColourValue_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startFlash_void_CColourValue_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopFlash_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopFlash_void_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopFlash_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelState_ModelObjectState( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelState_ModelObjectState_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getModelState_ModelObjectState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTextureState_TextureState( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTextureState_TextureState_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getTextureState_TextureState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_needSwitchTexture_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_needSwitchTexture_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_needSwitchTexture_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchThumb_ev_bool_TexturePtrVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchThumb_ev_bool_TexturePtrVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchThumb_ev_bool_TexturePtrVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachThumb_void_TexturePtrVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachThumb_void_TexturePtrVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachThumb_void_TexturePtrVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchOrig_ev_bool_TexturePtrVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchOrig_ev_bool_TexturePtrVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_switchOrig_ev_bool_TexturePtrVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachOrig_void_TexturePtrVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachOrig_void_TexturePtrVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_attachOrig_void_TexturePtrVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearTmpTextureStream_void_TexturePtrVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearTmpTextureStream_void_TexturePtrVector_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_clearTmpTextureStream_void_TexturePtrVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLoadFromLayer_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLoadFromLayer_void_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setLoadFromLayer_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLoadFromLayer_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLoadFromLayer_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLoadFromLayer_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_hasFltAnimation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_hasFltAnimation_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_hasFltAnimation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_mergeBoundingBoxForNode_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_mergeBoundingBoxForNode_void_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_mergeBoundingBoxForNode_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllNodeAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllNodeAnimation_void_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startAllNodeAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllNodeAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllNodeAnimation_void_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAllNodeAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimation_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_startRangeAnimationIndependently_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopRangeAnimation_void_ev_bool_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_stopAnimation_void_EVString_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_pauseAnimation_void_EVString_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_continueAnimation_void_EVString_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setAnimationLoop_void_EVString_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBoneNode_CNode_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBoneNode_CNode_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getBoneNode_CNode_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateSkeletonAnimationVertex_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateSkeletonAnimationVertex_void_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_updateSkeletonAnimationVertex_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNode_CNode_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isLoaded_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isLoaded_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isAttached_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_isAttached_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setUserData_void_CFeatureUserData( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setUserData_void_CFeatureUserData_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setUserData_void_CFeatureUserData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectable_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_update_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_update_ev_bool_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_update_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLayer_IGlobeLayer_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getLayer_IGlobeLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getDataset_IDataset_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getID_ev_uint32_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getName_EVString_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CManualInstanceObjectProxy* ptr = dynamic_cast<CManualInstanceObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CManualInstanceObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CManualInstanceObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
			}
		}
	}
}
