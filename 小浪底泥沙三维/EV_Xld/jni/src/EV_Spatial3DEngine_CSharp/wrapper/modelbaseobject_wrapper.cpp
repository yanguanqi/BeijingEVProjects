/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelbaseobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
		namespace Graphic
		{
		}
		namespace Spatial3D
		{
			namespace Atlas
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
			namespace Dataset
			{
			}
			namespace ModelManager
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_IntVector_Callback)(_in const void* subEntityIndexs);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLocalMatrix_void_CMatrix4_Callback)(_in const void* m);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalMatrix_CMatrix4_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback)(_out void* offPosition, _out void* scale, _out void* qua);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getFile_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isFileDirAsGroup_ev_bool_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getType_ModelType_Callback)();
				typedef EarthView::World::Graphic::CSceneManager*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSceneManager_CSceneManager_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getWorldAABB_CAxisAlignedBox_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_Callback)(_in ev_bool flag);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_ev_bool_Callback)(_in ev_bool flag, _in ev_bool bRecursive);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback)(_in ev_uint32 subEntityIndex, _in ev_bool isVisible);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback)(_in ev_uint32 subEntityIndex, _in ev_bool isVisible, _in ev_bool bRecursive);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMaxDistance_void_ev_real64_Callback)(_in ev_real64 dist);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMaxDistance_ev_real64_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMinDistance_void_ev_real64_Callback)(_in ev_real64 dist);
				typedef ev_real64  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMinDistance_ev_real64_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback)(_in ev_uint16 submeshIndex, _in ev_uint32 instanceIndex);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback)(_in ev_uint32 subEntityIndex, _out ev_int16& submeshIndex, _out ev_int32& instanceIndex);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNumSubEntities_ev_int32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAliasName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedState_BindedState_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedEffect_EffectObjectMap_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedLight_LightObjectMap_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLight_LightObjectMap_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_EVString_Callback)(_in char*& boneName);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback)(_in char*& nodeName);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_EVString_Callback)(_in char*& boneName);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback)(_in char*& boneName);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback)(_in char*& nodeName);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedModel_ModelObjectMap_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback)(_in char*& nodeName);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentByName_CComponent_EVString_Callback)(_in char*& name);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getParentComponentByName_CComponent_EVString_Callback)(_in char*& name);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRootComponent_CComponent_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_EVString_Callback)(_in char*& boneName);
				typedef EarthView::World::Spatial3D::EffectManager::CEffect*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticleByName_CEffect_EVString_Callback)(_in char*& aliasName);
				typedef EarthView::World::Graphic::CRibbonTrail*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback)(_in char*& aliasName);
				typedef EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByName_CModelBaseObject_EVString_Callback)(_in char*& aliasName);
				typedef EarthView::World::Graphic::CLight*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLightByName_CLight_EVString_Callback)(_in char*& aliasName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback)(_in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in char*& boneName, _in const void* offMatrix, _in char*& aliasName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback)(_in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in char*& nodeName, _in const void* offMatrix, _in char*& aliasName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback)(_in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in ev_uint32 subEntityIndex, _in const void* offMatrix, _in char*& aliasName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback)(_in EarthView::World::Graphic::CLight* l, _in ev_uint32 subEntityIndex, _in const void* offMatrix, _in char*& aliasName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in char*& boneName, _in const void* offMatrix, _in char*& aliasName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in ev_uint32 subEntityIndex, _in const void* offMatrix, _in char*& aliasName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in char*& nodeName, _in const void* offMatrix, _in char*& aliasName);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindEffect_ev_bool_CEffect_Callback)(_in EarthView::World::Spatial3D::EffectManager::CEffect* pEffect);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindLight_ev_bool_CLight_Callback)(_in EarthView::World::Graphic::CLight* pLight);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindModel_ev_bool_CModelBaseObject_Callback)(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedID_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedID_void_ev_uint32_Callback)(_in ev_uint32 bindedID);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedEffectVisibility_void_ev_bool_Callback)(_in ev_bool isVisible);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback)(_in const void* matPtr, _in const void* replacedTextures, _in const void* newTextureFilesPath);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback)(_in ev_uint32 subEntityIndex, _inout void* matPtr);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshPtr_CMeshPtr_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTexturePtrs_TexturePtrVector_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialPtrs_MaterialPtrVector_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuPtrs_GpuPtrVector_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshFeature_IFeature_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getOrigTextureFeatures_FeatureVector_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getThumbTextureFeatures_FeatureVector_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialFeatures_FeatureVector_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAnimationFeatures_FeatureVector_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuFeatures_FeatureVector_Callback)();
				typedef const void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getProgramFeatures_FeatureVector_Callback)();
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getResourceFeature_FeatureVector_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectionColour_void_CColourValue_Callback)(_in const void* color);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectionColour_CColourValue_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback)(_in const void* color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopFlash_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelectable_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelected_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelected_void_ev_bool_Callback)(_in ev_bool flag);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback)(_in ev_uint32 subEntityIndex, _in ev_bool flag);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool_Callback)(_in ev_uint32 subEntityIndex, _in ev_int32 segmentIndex, _in ev_bool flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntitySelected_ev_bool_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback)(_out ev_uint32& subMeshIndex, _out ev_uint32& instanceIndex, _out ev_int32& segmentIndex);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshName_EVString_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback)(_in ev_uint32 subEntityIndex);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback)(_in ev_uint32 subEntityIndex, _in EarthView::World::Graphic::CNode::CNodeListener* nodeListener);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback)(_in ev_uint32 subEntityIndex, _in EarthView::World::Graphic::CNode::CNodeListener* nodeListener);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearSelection_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEditable_void_ev_bool_Callback)(_in ev_bool flag);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_endEditing_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_real64_Callback)(_in ev_real64 percent);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_uint32_ev_real64_Callback)(_in ev_uint32 subEntityIndex, _in ev_real64 percent);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setCastShadows_void_ev_bool_Callback)(_in ev_bool flag);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback)(_in const void* ambient, _in const void* diffuse, _in const void* specular);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setReflectable_void_ev_bool_Callback)(_in ev_bool flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getReflectable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRefractable_void_ev_bool_Callback)(_in ev_bool flag);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRefractable_ev_bool_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelState_ModelObjectState_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTextureState_TextureState_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_needSwitchTexture_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchThumb_ev_bool_TexturePtrVector_Callback)(_inout void* outTmpTextureVec);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachThumb_void_TexturePtrVector_Callback)(_inout void* tmpTextureVec);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchOrig_ev_bool_TexturePtrVector_Callback)(_inout void* outTmpTextureVec);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachOrig_void_TexturePtrVector_Callback)(_inout void* tmpTextureVec);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearTmpTextureStream_void_TexturePtrVector_Callback)(_inout void* tmpTextureVec);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLoadFromLayer_void_ev_bool_Callback)(_in const ev_bool& fromLayer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLoadFromLayer_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_hasFltAnimation_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_mergeBoundingBoxForNode_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_prepareForNodeAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_resumeNodeAnimationState_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllNodeAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllNodeAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback)(_in char*& keyTimeTagName, _in ev_int32 segmentConut, _in ev_uint32 option);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_Callback)(_in char*& keyTimeTagName);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback)(_in char*& keyTimeTagName, _in ev_int32 segmentConut, _in ev_uint32 option);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_Callback)(_in char*& keyTimeTagName);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_Callback)(_in ev_bool stopAtRangeStart);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback)(_in ev_bool stopAtRangeStart, _in ev_int32 handle);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAllAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAllAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAllAnimationLoop_void_ev_bool_Callback)(_in ev_bool loop);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAnimation_void_EVString_Callback)(_in char*& animationName);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_Callback)(_in char*& animationName);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_ev_bool_Callback)(_in char*& animationName, _in ev_bool processChild);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_Callback)(_in char*& animationName);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_ev_bool_Callback)(_in char*& animationName, _in ev_bool processChild);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_Callback)(_in char*& animationName);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_ev_bool_Callback)(_in char*& animationName, _in ev_bool processChild);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_Callback)(_in char*& animationName, _in bool loop);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_ev_bool_Callback)(_in char*& animationName, _in bool loop, _in ev_bool processChild);
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_Callback)();
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_EVString_Callback)(_in char*& componentName);
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalAxisNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_destroyLocalAxisNode_ev_bool_Callback)();
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBoneNode_CNode_EVString_Callback)(_in char*& boneName);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateSkeletonAnimationVertex_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeModelAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeNodeAnimation_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentVisible_void_CComponent_ev_bool_Callback)(_in const void* component, _in ev_bool visible);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentHighlight_void_CComponent_ev_bool_Callback)(_in const void* component, _in ev_bool highlight);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentTransparency_void_CComponent_ev_real32_Callback)(_in const void* component, _in ev_real32 alpha);
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isLoaded_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isAttached_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unload_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToNode_ev_bool_CNode_Callback)(_in EarthView::World::Graphic::CNode* n);
				typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromNode_CNode_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToScene_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromScene_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setUserData_void_CFeatureUserData_Callback)(_inout void* userData);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectable_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_update_ev_bool_Callback)();
				typedef EarthView::World::Spatial3D::Atlas::IGlobeLayer*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLayer_IGlobeLayer_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getDataset_IDataset_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getID_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMatrix_void_CMatrix4_Callback)(_in const void* m);
				typedef void*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMatrix_CMatrix4_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback)(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua);
				class CModelBaseObjectProxy : public EarthView::World::Spatial3D::ModelManager::CModelBaseObject
				{
				private:
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_IntVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_IntVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLocalMatrix_void_CMatrix4_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLocalMatrix_void_CMatrix4_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalMatrix_CMatrix4_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getFile_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getFile_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isFileDirAsGroup_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isFileDirAsGroup_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getType_ModelType_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getType_ModelType_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSceneManager_CSceneManager_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSceneManager_CSceneManager_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getWorldAABB_CAxisAlignedBox_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getWorldAABB_CAxisAlignedBox_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isVisible_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isVisible_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMaxDistance_void_ev_real64_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMaxDistance_void_ev_real64_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMaxDistance_ev_real64_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMaxDistance_ev_real64_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMinDistance_void_ev_real64_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMinDistance_void_ev_real64_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMinDistance_ev_real64_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMinDistance_ev_real64_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNumSubEntities_ev_int32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNumSubEntities_ev_int32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAliasName_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAliasName_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedState_BindedState_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedState_BindedState_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedEffect_EffectObjectMap_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedEffect_EffectObjectMap_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedLight_LightObjectMap_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedLight_LightObjectMap_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLight_LightObjectMap_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLight_LightObjectMap_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedModel_ModelObjectMap_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedModel_ModelObjectMap_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentByName_CComponent_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentByName_CComponent_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getParentComponentByName_CComponent_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getParentComponentByName_CComponent_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRootComponent_CComponent_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRootComponent_CComponent_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticleByName_CEffect_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticleByName_CEffect_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByName_CModelBaseObject_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByName_CModelBaseObject_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLightByName_CLight_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLightByName_CLight_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindEffect_ev_bool_CEffect_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindEffect_ev_bool_CEffect_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindLight_ev_bool_CLight_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindLight_ev_bool_CLight_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindModel_ev_bool_CModelBaseObject_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindModel_ev_bool_CModelBaseObject_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedID_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedID_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedID_void_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedID_void_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedEffectVisibility_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedEffectVisibility_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshPtr_CMeshPtr_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshPtr_CMeshPtr_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTexturePtrs_TexturePtrVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTexturePtrs_TexturePtrVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialPtrs_MaterialPtrVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialPtrs_MaterialPtrVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuPtrs_GpuPtrVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuPtrs_GpuPtrVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshFeature_IFeature_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshFeature_IFeature_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getOrigTextureFeatures_FeatureVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getOrigTextureFeatures_FeatureVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getThumbTextureFeatures_FeatureVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getThumbTextureFeatures_FeatureVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialFeatures_FeatureVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialFeatures_FeatureVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAnimationFeatures_FeatureVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAnimationFeatures_FeatureVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuFeatures_FeatureVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuFeatures_FeatureVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getProgramFeatures_FeatureVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getProgramFeatures_FeatureVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getResourceFeature_FeatureVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getResourceFeature_FeatureVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectionColour_void_CColourValue_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectionColour_void_CColourValue_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectionColour_CColourValue_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectionColour_CColourValue_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopFlash_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopFlash_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelected_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelected_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelected_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntitySelected_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntitySelected_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshName_EVString_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshName_EVString_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearSelection_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearSelection_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEditable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEditable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_endEditing_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_endEditing_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_real64_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_real64_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_uint32_ev_real64_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_uint32_ev_real64_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setCastShadows_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setCastShadows_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setReflectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setReflectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getReflectable_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getReflectable_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRefractable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRefractable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRefractable_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRefractable_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelState_ModelObjectState_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelState_ModelObjectState_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTextureState_TextureState_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTextureState_TextureState_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_needSwitchTexture_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_needSwitchTexture_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchThumb_ev_bool_TexturePtrVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchThumb_ev_bool_TexturePtrVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachThumb_void_TexturePtrVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachThumb_void_TexturePtrVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchOrig_ev_bool_TexturePtrVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchOrig_ev_bool_TexturePtrVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachOrig_void_TexturePtrVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachOrig_void_TexturePtrVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearTmpTextureStream_void_TexturePtrVector_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearTmpTextureStream_void_TexturePtrVector_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLoadFromLayer_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLoadFromLayer_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLoadFromLayer_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLoadFromLayer_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_hasFltAnimation_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_hasFltAnimation_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_mergeBoundingBoxForNode_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_mergeBoundingBoxForNode_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_prepareForNodeAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_prepareForNodeAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_resumeNodeAnimationState_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_resumeNodeAnimationState_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllNodeAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllNodeAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllNodeAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllNodeAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAllAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAllAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAllAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAllAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAllAnimationLoop_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAllAnimationLoop_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAnimation_void_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAnimation_void_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalAxisNode_CNode_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalAxisNode_CNode_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_destroyLocalAxisNode_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_destroyLocalAxisNode_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBoneNode_CNode_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBoneNode_CNode_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateSkeletonAnimationVertex_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateSkeletonAnimationVertex_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeModelAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeModelAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeNodeAnimation_void_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeNodeAnimation_void_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentVisible_void_CComponent_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentVisible_void_CComponent_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentHighlight_void_CComponent_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentHighlight_void_CComponent_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentTransparency_void_CComponent_ev_real32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentTransparency_void_CComponent_ev_real32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNode_CNode_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNode_CNode_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isLoaded_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isLoaded_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isAttached_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isAttached_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unload_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unload_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToNode_ev_bool_CNode_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToNode_ev_bool_CNode_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromNode_CNode_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromNode_CNode_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToScene_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToScene_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromScene_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromScene_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setUserData_void_CFeatureUserData_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setUserData_void_CFeatureUserData_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectable_void_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectable_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectable_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_update_ev_bool_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_update_ev_bool_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLayer_IGlobeLayer_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLayer_IGlobeLayer_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getDataset_IDataset_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getDataset_IDataset_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getID_ev_uint32_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getID_ev_uint32_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getName_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getName_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMatrix_void_CMatrix4_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMatrix_void_CMatrix4_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMatrix_CMatrix4_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMatrix_CMatrix4_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
					EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback;
				public:
					CModelBaseObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelBaseObject(pList)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_IntVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLocalMatrix_void_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalMatrix_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getFile_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isFileDirAsGroup_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getType_ModelType_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSceneManager_CSceneManager_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getWorldAABB_CAxisAlignedBox_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMaxDistance_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMaxDistance_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMinDistance_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMinDistance_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNumSubEntities_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAliasName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedState_BindedState_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedEffect_EffectObjectMap_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedLight_LightObjectMap_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLight_LightObjectMap_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedModel_ModelObjectMap_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentByName_CComponent_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getParentComponentByName_CComponent_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRootComponent_CComponent_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticleByName_CEffect_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByName_CModelBaseObject_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLightByName_CLight_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindEffect_ev_bool_CEffect_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindLight_ev_bool_CLight_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindModel_ev_bool_CModelBaseObject_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedID_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedEffectVisibility_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshPtr_CMeshPtr_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTexturePtrs_TexturePtrVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialPtrs_MaterialPtrVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuPtrs_GpuPtrVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshFeature_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getOrigTextureFeatures_FeatureVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getThumbTextureFeatures_FeatureVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialFeatures_FeatureVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAnimationFeatures_FeatureVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuFeatures_FeatureVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getProgramFeatures_FeatureVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getResourceFeature_FeatureVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectionColour_void_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectionColour_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopFlash_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelected_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelected_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntitySelected_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshName_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearSelection_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEditable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_endEditing_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_uint32_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setCastShadows_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setReflectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getReflectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRefractable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRefractable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelState_ModelObjectState_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTextureState_TextureState_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_needSwitchTexture_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchThumb_ev_bool_TexturePtrVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachThumb_void_TexturePtrVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchOrig_ev_bool_TexturePtrVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachOrig_void_TexturePtrVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearTmpTextureStream_void_TexturePtrVector_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLoadFromLayer_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLoadFromLayer_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_hasFltAnimation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_mergeBoundingBoxForNode_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_prepareForNodeAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_resumeNodeAnimationState_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllNodeAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllNodeAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAllAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAllAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAllAnimationLoop_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAnimation_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalAxisNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_destroyLocalAxisNode_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBoneNode_CNode_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateSkeletonAnimationVertex_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeModelAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeNodeAnimation_void_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentVisible_void_CComponent_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentHighlight_void_CComponent_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentTransparency_void_CComponent_ev_real32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isLoaded_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isAttached_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unload_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToNode_ev_bool_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromNode_CNode_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToScene_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromScene_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setUserData_void_CFeatureUserData_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_update_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLayer_IGlobeLayer_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getDataset_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMatrix_void_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMatrix_CMatrix4_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_IntVector(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_IntVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_IntVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLocalMatrix_void_CMatrix4(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLocalMatrix_void_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLocalMatrix_void_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalMatrix_CMatrix4(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalMatrix_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalMatrix_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getFile_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getFile_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getFile_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isFileDirAsGroup_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isFileDirAsGroup_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isFileDirAsGroup_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getType_ModelType(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getType_ModelType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getType_ModelType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSceneManager_CSceneManager(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSceneManager_CSceneManager_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSceneManager_CSceneManager_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getWorldAABB_CAxisAlignedBox(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getWorldAABB_CAxisAlignedBox_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getWorldAABB_CAxisAlignedBox_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isVisible_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntityVisibility_ev_bool_ev_uint32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMaxDistance_void_ev_real64(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMaxDistance_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMaxDistance_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMaxDistance_ev_real64(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMaxDistance_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMaxDistance_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMinDistance_void_ev_real64(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMinDistance_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMinDistance_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMinDistance_ev_real64(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMinDistance_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMinDistance_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNumSubEntities_ev_int32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNumSubEntities_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNumSubEntities_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAliasName_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAliasName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAliasName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedState_BindedState(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedState_BindedState_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedState_BindedState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedEffect_EffectObjectMap(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedEffect_EffectObjectMap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedEffect_EffectObjectMap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedLight_LightObjectMap(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedLight_LightObjectMap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedLight_LightObjectMap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_ev_uint32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLight_LightObjectMap_ev_uint32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLight_LightObjectMap_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLight_LightObjectMap_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_ev_uint32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffectByNodeName_EffectObjectMap_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedModel_ModelObjectMap(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedModel_ModelObjectMap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedModel_ModelObjectMap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_ev_uint32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByNodeName_ModelObjectMap_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentByName_CComponent_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentByName_CComponent_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentByName_CComponent_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentBySubEntityIndex_CComponent_ev_uint32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getParentComponentByName_CComponent_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getParentComponentByName_CComponent_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getParentComponentByName_CComponent_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRootComponent_CComponent(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRootComponent_CComponent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRootComponent_CComponent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticleByName_CEffect_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticleByName_CEffect_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticleByName_CEffect_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByName_CRibbonTrail_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByName_CModelBaseObject_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByName_CModelBaseObject_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByName_CModelBaseObject_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLightByName_CLight_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLightByName_CLight_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLightByName_CLight_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindEffect_ev_bool_CEffect(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindEffect_ev_bool_CEffect_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindEffect_ev_bool_CEffect_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindLight_ev_bool_CLight(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindLight_ev_bool_CLight_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindLight_ev_bool_CLight_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindModel_ev_bool_CModelBaseObject(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindModel_ev_bool_CModelBaseObject_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindModel_ev_bool_CModelBaseObject_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedID_ev_uint32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedID_void_ev_uint32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedID_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedID_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedEffectVisibility_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedEffectVisibility_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedEffectVisibility_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMaterial_void_ev_uint32_CMaterialPtr(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshPtr_CMeshPtr(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshPtr_CMeshPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshPtr_CMeshPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTexturePtrs_TexturePtrVector(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTexturePtrs_TexturePtrVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTexturePtrs_TexturePtrVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialPtrs_MaterialPtrVector(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialPtrs_MaterialPtrVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialPtrs_MaterialPtrVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuPtrs_GpuPtrVector(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuPtrs_GpuPtrVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuPtrs_GpuPtrVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshFeature_IFeature(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshFeature_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshFeature_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getOrigTextureFeatures_FeatureVector(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getOrigTextureFeatures_FeatureVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getOrigTextureFeatures_FeatureVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getThumbTextureFeatures_FeatureVector(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getThumbTextureFeatures_FeatureVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getThumbTextureFeatures_FeatureVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialFeatures_FeatureVector(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialFeatures_FeatureVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialFeatures_FeatureVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAnimationFeatures_FeatureVector(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAnimationFeatures_FeatureVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAnimationFeatures_FeatureVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuFeatures_FeatureVector(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuFeatures_FeatureVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuFeatures_FeatureVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getProgramFeatures_FeatureVector(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getProgramFeatures_FeatureVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getProgramFeatures_FeatureVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getResourceFeature_FeatureVector(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getResourceFeature_FeatureVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getResourceFeature_FeatureVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectionColour_void_CColourValue(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectionColour_void_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectionColour_void_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectionColour_CColourValue(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectionColour_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectionColour_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startFlash_void_CColourValue_ev_uint32_ev_uint32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopFlash_void(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopFlash_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopFlash_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelectable_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelected_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelected_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelected_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelected_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelected_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelected_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntitySelected_ev_bool_ev_uint32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntitySelected_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntitySelected_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshName_EVString_ev_uint32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshName_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshName_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshMatrix_CMatrix4_ev_uint32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearSelection_void(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearSelection_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearSelection_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEditable_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEditable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEditable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_endEditing_void(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_endEditing_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_endEditing_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_real64(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_uint32_ev_real64(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_uint32_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_uint32_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setCastShadows_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setCastShadows_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setCastShadows_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEnvParam_void_CColourValue_CColourValue_CColourValue(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setReflectable_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setReflectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setReflectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getReflectable_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getReflectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getReflectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRefractable_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRefractable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRefractable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRefractable_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRefractable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRefractable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelState_ModelObjectState(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelState_ModelObjectState_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelState_ModelObjectState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTextureState_TextureState(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTextureState_TextureState_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTextureState_TextureState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_needSwitchTexture_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_needSwitchTexture_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_needSwitchTexture_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchThumb_ev_bool_TexturePtrVector(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchThumb_ev_bool_TexturePtrVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchThumb_ev_bool_TexturePtrVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachThumb_void_TexturePtrVector(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachThumb_void_TexturePtrVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachThumb_void_TexturePtrVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchOrig_ev_bool_TexturePtrVector(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchOrig_ev_bool_TexturePtrVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchOrig_ev_bool_TexturePtrVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachOrig_void_TexturePtrVector(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachOrig_void_TexturePtrVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachOrig_void_TexturePtrVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearTmpTextureStream_void_TexturePtrVector(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearTmpTextureStream_void_TexturePtrVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearTmpTextureStream_void_TexturePtrVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLoadFromLayer_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLoadFromLayer_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLoadFromLayer_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLoadFromLayer_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLoadFromLayer_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLoadFromLayer_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_hasFltAnimation_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_hasFltAnimation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_hasFltAnimation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_mergeBoundingBoxForNode_void(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_mergeBoundingBoxForNode_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_mergeBoundingBoxForNode_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_prepareForNodeAnimation_void(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_prepareForNodeAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_prepareForNodeAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_resumeNodeAnimationState_void(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_resumeNodeAnimationState_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_resumeNodeAnimationState_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllNodeAnimation_void(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllNodeAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllNodeAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllNodeAnimation_void(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllNodeAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllNodeAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllAnimation_void(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_ev_int32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllAnimation_void(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAllAnimation_void(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAllAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAllAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAllAnimation_void(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAllAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAllAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAllAnimationLoop_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAllAnimationLoop_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAllAnimationLoop_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAnimation_void_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAnimation_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAnimation_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalAxisNode_CNode(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalAxisNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalAxisNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_destroyLocalAxisNode_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_destroyLocalAxisNode_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_destroyLocalAxisNode_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBoneNode_CNode_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBoneNode_CNode_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBoneNode_CNode_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateSkeletonAnimationVertex_void(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateSkeletonAnimationVertex_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateSkeletonAnimationVertex_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeAnimation_void(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeModelAnimation_void(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeModelAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeModelAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeNodeAnimation_void(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeNodeAnimation_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeNodeAnimation_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentVisible_void_CComponent_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentVisible_void_CComponent_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentVisible_void_CComponent_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentHighlight_void_CComponent_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentHighlight_void_CComponent_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentHighlight_void_CComponent_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentTransparency_void_CComponent_ev_real32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentTransparency_void_CComponent_ev_real32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentTransparency_void_CComponent_ev_real32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNode_CNode(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isLoaded_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isLoaded_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isLoaded_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isAttached_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isAttached_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isAttached_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unload_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unload_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unload_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToNode_ev_bool_CNode(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToNode_ev_bool_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToNode_ev_bool_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromNode_CNode(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromNode_CNode_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromNode_CNode_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToScene_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToScene_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToScene_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromScene_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromScene_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromScene_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setUserData_void_CFeatureUserData(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setUserData_void_CFeatureUserData_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setUserData_void_CFeatureUserData_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectable_void_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectable_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_update_ev_bool(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_update_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_update_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLayer_IGlobeLayer(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLayer_IGlobeLayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLayer_IGlobeLayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getDataset_IDataset(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getDataset_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getDataset_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getID_ev_uint32(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getName_EVString(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMatrix_void_CMatrix4(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMatrix_void_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMatrix_void_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMatrix_CMatrix4(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMatrix_CMatrix4_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMatrix_CMatrix4_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback = pCallback;
					}
					virtual ev_bool load()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::load();
					}
					virtual ev_bool load(_in const EarthView::World::Core::IntVector& subEntityIndexs)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_IntVector_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_IntVector_Callback(&subEntityIndexs);
							return returnValue;
						}
						else
							return this->CModelBaseObject::load(subEntityIndexs);
					}
					virtual ev_bool attachToNode(_in EarthView::World::Graphic::CNode* n)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToNode_ev_bool_CNode_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToNode_ev_bool_CNode_Callback(n);
							return returnValue;
						}
						else
							return this->CModelBaseObject::attachToNode(n);
					}
					virtual EarthView::World::Graphic::CNode* detachFromNode()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::detachFromNode();
					}
					virtual ev_bool unload()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unload_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unload_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::unload();
					}
					virtual ev_bool isLoaded()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isLoaded_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::isLoaded();
					}
					virtual ev_bool isAttached()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isAttached_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isAttached_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::isAttached();
					}
					virtual void setMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMatrix_void_CMatrix4_Callback(&m);
						}
						else
							return this->CModelBaseObject::setMatrix(m);
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMatrix_CMatrix4_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getMatrix();
					}
					virtual void setLocalMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLocalMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLocalMatrix_void_CMatrix4_Callback(&m);
						}
						else
							return this->CModelBaseObject::setLocalMatrix(m);
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 getLocalMatrix()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalMatrix_CMatrix4_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getLocalMatrix();
					}
					virtual void setPosition(_in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const EarthView::World::Spatial::Math::CVector3& scale, _in const EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
						}
						else
							return this->CModelBaseObject::setPosition(latitude, longitude, altitude, scale, qua);
					}
					virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback(latitude, longitude, altitude, &scale, &qua);
						}
						else
							return this->CModelBaseObject::getPosition(latitude, longitude, altitude, scale, qua);
					}
					virtual void getModelDBTransform(_out EarthView::World::Spatial::Math::CVector3& offPosition, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback(&offPosition, &scale, &qua);
						}
						else
							return this->CModelBaseObject::getModelDBTransform(offPosition, scale, qua);
					}
					virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLayer_IGlobeLayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Atlas::IGlobeLayer* returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLayer_IGlobeLayer_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getLayer();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getDataset_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getDataset();
					}
					virtual ev_uint32 getID()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getID();
					}
					virtual EVString getName()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getName();
					}
					virtual EVString getFile()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getFile_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getFile_EVString_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getFile();
					}
					virtual ev_bool isFileDirAsGroup()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isFileDirAsGroup_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isFileDirAsGroup_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::isFileDirAsGroup();
					}
					virtual EarthView::World::Spatial3D::ModelType getType()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getType_ModelType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelType returnValue = (EarthView::World::Spatial3D::ModelType)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getType_ModelType_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getType();
					}
					virtual EarthView::World::Graphic::CSceneManager* getSceneManager()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSceneManager_CSceneManager_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CSceneManager* returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSceneManager_CSceneManager_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getSceneManager();
					}
					virtual EarthView::World::Spatial::Math::CAxisAlignedBox getWorldAABB()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getWorldAABB_CAxisAlignedBox_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CAxisAlignedBox returnValue = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getWorldAABB_CAxisAlignedBox_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getWorldAABB();
					}
					virtual ev_bool isVisible()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::isVisible();
					}
					virtual void setVisible(_in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_Callback(flag);
						}
						else
							return this->CModelBaseObject::setVisible(flag);
					}
					virtual void setVisible(_in ev_bool flag, _in ev_bool bRecursive)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_ev_bool_Callback(flag, bRecursive);
						}
						else
							return this->CModelBaseObject::setVisible(flag, bRecursive);
					}
					virtual void setSubEntityVisibility(_in ev_uint32 subEntityIndex, _in ev_bool isVisible)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback(subEntityIndex, isVisible);
						}
						else
							return this->CModelBaseObject::setSubEntityVisibility(subEntityIndex, isVisible);
					}
					virtual void setSubEntityVisibility(_in ev_uint32 subEntityIndex, _in ev_bool isVisible, _in ev_bool bRecursive)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback(subEntityIndex, isVisible, bRecursive);
						}
						else
							return this->CModelBaseObject::setSubEntityVisibility(subEntityIndex, isVisible, bRecursive);
					}
					virtual ev_bool getSubEntityVisibility(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getSubEntityVisibility(subEntityIndex);
					}
					virtual void setRenderingMaxDistance(_in ev_real64 dist)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMaxDistance_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMaxDistance_void_ev_real64_Callback(dist);
						}
						else
							return this->CModelBaseObject::setRenderingMaxDistance(dist);
					}
					virtual ev_real64 getRenderingMaxDistance()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMaxDistance_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMaxDistance_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getRenderingMaxDistance();
					}
					virtual void setRenderingMinDistance(_in ev_real64 dist)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMinDistance_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMinDistance_void_ev_real64_Callback(dist);
						}
						else
							return this->CModelBaseObject::setRenderingMinDistance(dist);
					}
					virtual ev_real64 getRenderingMinDistance()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMinDistance_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMinDistance_ev_real64_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getRenderingMinDistance();
					}
					virtual ev_int32 calculateSubEntityIndex(_in ev_uint16 submeshIndex, _in ev_uint32 instanceIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback(submeshIndex, instanceIndex);
							return returnValue;
						}
						else
							return this->CModelBaseObject::calculateSubEntityIndex(submeshIndex, instanceIndex);
					}
					virtual void calculateInstanceIndex(_in ev_uint32 subEntityIndex, _out ev_int16& submeshIndex, _out ev_int32& instanceIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback(subEntityIndex, submeshIndex, instanceIndex);
						}
						else
							return this->CModelBaseObject::calculateInstanceIndex(subEntityIndex, submeshIndex, instanceIndex);
					}
					virtual ev_int32 getNumSubEntities()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNumSubEntities_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNumSubEntities_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getNumSubEntities();
					}
					virtual EVString getAliasName()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAliasName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAliasName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getAliasName();
					}
					virtual EarthView::World::Spatial3D::BindedState getBindedState()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedState_BindedState_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::BindedState returnValue = (EarthView::World::Spatial3D::BindedState)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedState_BindedState_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedState();
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getAllBindedEffect()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedEffect_EffectObjectMap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedEffect_EffectObjectMap_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getAllBindedEffect();
					}
					virtual EarthView::World::Spatial3D::ModelManager::LightObjectMap getAllBindedLight()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedLight_LightObjectMap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelManager::LightObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::LightObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedLight_LightObjectMap_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getAllBindedLight();
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedEffect(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedEffect(subEntityIndex);
					}
					virtual EarthView::World::Spatial3D::ModelManager::LightObjectMap getBindedLight(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLight_LightObjectMap_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelManager::LightObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::LightObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLight_LightObjectMap_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedLight(subEntityIndex);
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedParticle(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedParticle(subEntityIndex);
					}
					virtual EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap getBindedRibbonTrail(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedRibbonTrail(subEntityIndex);
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedEffect(_in const EVString& boneName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* boneName_Char = boneName.makeBuffer();
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_EVString_Callback(boneName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedEffect(boneName);
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedEffectByNodeName(_in const EVString& nodeName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* nodeName_Char = nodeName.makeBuffer();
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback(nodeName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedEffectByNodeName(nodeName);
					}
					virtual EarthView::World::Spatial3D::ModelManager::EffectObjectMap getBindedParticle(_in const EVString& boneName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* boneName_Char = boneName.makeBuffer();
							EarthView::World::Spatial3D::ModelManager::EffectObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_EVString_Callback(boneName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedParticle(boneName);
					}
					virtual EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap getBindedRibbonTrail(_in const EVString& boneName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* boneName_Char = boneName.makeBuffer();
							EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback(boneName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedRibbonTrail(boneName);
					}
					virtual EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap getBindedRibbonTrailByNodeName(_in const EVString& nodeName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* nodeName_Char = nodeName.makeBuffer();
							EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback(nodeName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedRibbonTrailByNodeName(nodeName);
					}
					virtual EarthView::World::Spatial3D::ModelManager::ModelObjectMap getAllBindedModel()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedModel_ModelObjectMap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelManager::ModelObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::ModelObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedModel_ModelObjectMap_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getAllBindedModel();
					}
					virtual EarthView::World::Spatial3D::ModelManager::ModelObjectMap getBindedModel(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelManager::ModelObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::ModelObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedModel(subEntityIndex);
					}
					virtual EarthView::World::Spatial3D::ModelManager::ModelObjectMap getBindedModelByNodeName(_in const EVString& nodeName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* nodeName_Char = nodeName.makeBuffer();
							EarthView::World::Spatial3D::ModelManager::ModelObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::ModelObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback(nodeName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedModelByNodeName(nodeName);
					}
					virtual EarthView::World::Spatial3D::CComponent getComponentByName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentByName_CComponent_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial3D::CComponent returnValue = *(EarthView::World::Spatial3D::CComponent*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentByName_CComponent_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getComponentByName(name);
					}
					virtual EarthView::World::Spatial3D::CComponent getComponentBySubEntityIndex(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::CComponent returnValue = *(EarthView::World::Spatial3D::CComponent*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getComponentBySubEntityIndex(subEntityIndex);
					}
					virtual EarthView::World::Spatial3D::CComponent getParentComponentByName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getParentComponentByName_CComponent_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial3D::CComponent returnValue = *(EarthView::World::Spatial3D::CComponent*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getParentComponentByName_CComponent_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getParentComponentByName(name);
					}
					virtual EarthView::World::Spatial3D::CComponent getRootComponent()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRootComponent_CComponent_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::CComponent returnValue = *(EarthView::World::Spatial3D::CComponent*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRootComponent_CComponent_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getRootComponent();
					}
					virtual EarthView::World::Spatial3D::ModelManager::ModelObjectMap getBindedModel(_in const EVString& boneName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* boneName_Char = boneName.makeBuffer();
							EarthView::World::Spatial3D::ModelManager::ModelObjectMap returnValue = *(EarthView::World::Spatial3D::ModelManager::ModelObjectMap*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_EVString_Callback(boneName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedModel(boneName);
					}
					virtual EarthView::World::Spatial3D::EffectManager::CEffect* getBindedParticleByName(_in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticleByName_CEffect_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* aliasName_Char = aliasName.makeBuffer();
							EarthView::World::Spatial3D::EffectManager::CEffect* returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticleByName_CEffect_EVString_Callback(aliasName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedParticleByName(aliasName);
					}
					virtual EarthView::World::Graphic::CRibbonTrail* getBindedRibbonTrailByName(_in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* aliasName_Char = aliasName.makeBuffer();
							EarthView::World::Graphic::CRibbonTrail* returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback(aliasName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedRibbonTrailByName(aliasName);
					}
					virtual EarthView::World::Spatial3D::ModelManager::CModelBaseObject* getBindedModelByName(_in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByName_CModelBaseObject_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* aliasName_Char = aliasName.makeBuffer();
							EarthView::World::Spatial3D::ModelManager::CModelBaseObject* returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByName_CModelBaseObject_EVString_Callback(aliasName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedModelByName(aliasName);
					}
					virtual EarthView::World::Graphic::CLight* getBindedLightByName(_in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLightByName_CLight_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* aliasName_Char = aliasName.makeBuffer();
							EarthView::World::Graphic::CLight* returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLightByName_CLight_EVString_Callback(aliasName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedLightByName(aliasName);
					}
					virtual ev_bool bindEffectAtBone(_in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in const EVString& boneName, _in const EarthView::World::Spatial::Math::CMatrix4& offMatrix, _in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* boneName_Char = boneName.makeBuffer();
							char* aliasName_Char = aliasName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback(ref_pEffect, boneName_Char, &offMatrix, aliasName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::bindEffectAtBone(ref_pEffect, boneName, offMatrix, aliasName);
					}
					virtual ev_bool bindEffectAtNode(_in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in const EVString& nodeName, _in const EarthView::World::Spatial::Math::CMatrix4& offMatrix, _in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* nodeName_Char = nodeName.makeBuffer();
							char* aliasName_Char = aliasName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback(ref_pEffect, nodeName_Char, &offMatrix, aliasName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::bindEffectAtNode(ref_pEffect, nodeName, offMatrix, aliasName);
					}
					virtual ev_bool bindEffectAtSubEntity(_in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in ev_uint32 subEntityIndex, _in const EarthView::World::Spatial::Math::CMatrix4& offMatrix, _in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* aliasName_Char = aliasName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback(ref_pEffect, subEntityIndex, &offMatrix, aliasName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::bindEffectAtSubEntity(ref_pEffect, subEntityIndex, offMatrix, aliasName);
					}
					virtual ev_bool bindLightAtSubEntity(_in EarthView::World::Graphic::CLight* l, _in ev_uint32 subEntityIndex, _in const EarthView::World::Spatial::Math::CMatrix4& offMatrix, _in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* aliasName_Char = aliasName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback(l, subEntityIndex, &offMatrix, aliasName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::bindLightAtSubEntity(l, subEntityIndex, offMatrix, aliasName);
					}
					virtual ev_bool bindModelAtBone(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in const EVString& boneName, _in const EarthView::World::Spatial::Math::CMatrix4& offMatrix, _in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* boneName_Char = boneName.makeBuffer();
							char* aliasName_Char = aliasName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback(ref_pModel, boneName_Char, &offMatrix, aliasName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::bindModelAtBone(ref_pModel, boneName, offMatrix, aliasName);
					}
					virtual ev_bool bindModelAtSubEntity(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in ev_uint32 subEntityIndex, _in const EarthView::World::Spatial::Math::CMatrix4& offMatrix, _in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* aliasName_Char = aliasName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback(ref_pModel, subEntityIndex, &offMatrix, aliasName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::bindModelAtSubEntity(ref_pModel, subEntityIndex, offMatrix, aliasName);
					}
					virtual ev_bool bindModelAtNode(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in const EVString& nodeName, _in const EarthView::World::Spatial::Math::CMatrix4& offMatrix, _in const EVString& aliasName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* nodeName_Char = nodeName.makeBuffer();
							char* aliasName_Char = aliasName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback(ref_pModel, nodeName_Char, &offMatrix, aliasName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::bindModelAtNode(ref_pModel, nodeName, offMatrix, aliasName);
					}
					virtual ev_bool unBindEffect(_in EarthView::World::Spatial3D::EffectManager::CEffect* pEffect)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindEffect_ev_bool_CEffect_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindEffect_ev_bool_CEffect_Callback(pEffect);
							return returnValue;
						}
						else
							return this->CModelBaseObject::unBindEffect(pEffect);
					}
					virtual ev_bool unBindLight(_in EarthView::World::Graphic::CLight* pLight)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindLight_ev_bool_CLight_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindLight_ev_bool_CLight_Callback(pLight);
							return returnValue;
						}
						else
							return this->CModelBaseObject::unBindLight(pLight);
					}
					virtual ev_bool unBindModel(_in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindModel_ev_bool_CModelBaseObject_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindModel_ev_bool_CModelBaseObject_Callback(pModel);
							return returnValue;
						}
						else
							return this->CModelBaseObject::unBindModel(pModel);
					}
					virtual ev_uint32 getBindedID()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBindedID();
					}
					virtual void setBindedID(_in ev_uint32 bindedID)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedID_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedID_void_ev_uint32_Callback(bindedID);
						}
						else
							return this->CModelBaseObject::setBindedID(bindedID);
					}
					virtual void setBindedEffectVisibility(_in ev_bool isVisible)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedEffectVisibility_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedEffectVisibility_void_ev_bool_Callback(isVisible);
						}
						else
							return this->CModelBaseObject::setBindedEffectVisibility(isVisible);
					}
					virtual ev_bool updateMaterial(_in const EarthView::World::Graphic::CMaterialPtr& matPtr, _in const EarthView::World::Core::StringVector& replacedTextures, _in const EarthView::World::Core::StringVector& newTextureFilesPath)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback(&matPtr, &replacedTextures, &newTextureFilesPath);
							return returnValue;
						}
						else
							return this->CModelBaseObject::updateMaterial(matPtr, replacedTextures, newTextureFilesPath);
					}
					virtual void setMaterial(_in ev_uint32 subEntityIndex, _inout EarthView::World::Graphic::CMaterialPtr& matPtr)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback(subEntityIndex, &matPtr);
						}
						else
							return this->CModelBaseObject::setMaterial(subEntityIndex, matPtr);
					}
					virtual EarthView::World::Graphic::CMeshPtr getMeshPtr()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshPtr_CMeshPtr_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CMeshPtr returnValue = *(EarthView::World::Graphic::CMeshPtr*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshPtr_CMeshPtr_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getMeshPtr();
					}
					virtual EarthView::World::Spatial3D::TexturePtrVector getTexturePtrs()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTexturePtrs_TexturePtrVector_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::TexturePtrVector returnValue = *(EarthView::World::Spatial3D::TexturePtrVector*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTexturePtrs_TexturePtrVector_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getTexturePtrs();
					}
					virtual EarthView::World::Spatial3D::MaterialPtrVector getMaterialPtrs()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialPtrs_MaterialPtrVector_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::MaterialPtrVector returnValue = *(EarthView::World::Spatial3D::MaterialPtrVector*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialPtrs_MaterialPtrVector_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getMaterialPtrs();
					}
					virtual EarthView::World::Spatial3D::GpuPtrVector getGpuPtrs()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuPtrs_GpuPtrVector_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::GpuPtrVector returnValue = *(EarthView::World::Spatial3D::GpuPtrVector*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuPtrs_GpuPtrVector_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getGpuPtrs();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getMeshFeature()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshFeature_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshFeature_IFeature_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getMeshFeature();
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getOrigTextureFeatures()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getOrigTextureFeatures_FeatureVector_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Dataset::FeatureVector& returnValue = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getOrigTextureFeatures_FeatureVector_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getOrigTextureFeatures();
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getThumbTextureFeatures()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getThumbTextureFeatures_FeatureVector_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Dataset::FeatureVector& returnValue = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getThumbTextureFeatures_FeatureVector_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getThumbTextureFeatures();
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getMaterialFeatures()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialFeatures_FeatureVector_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Dataset::FeatureVector& returnValue = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialFeatures_FeatureVector_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getMaterialFeatures();
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getAnimationFeatures()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAnimationFeatures_FeatureVector_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Dataset::FeatureVector& returnValue = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAnimationFeatures_FeatureVector_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getAnimationFeatures();
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getGpuFeatures()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuFeatures_FeatureVector_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Dataset::FeatureVector& returnValue = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuFeatures_FeatureVector_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getGpuFeatures();
					}
					virtual const EarthView::World::Spatial3D::Dataset::FeatureVector& getProgramFeatures()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getProgramFeatures_FeatureVector_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial3D::Dataset::FeatureVector& returnValue = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getProgramFeatures_FeatureVector_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getProgramFeatures();
					}
					virtual EarthView::World::Spatial3D::Dataset::FeatureVector getResourceFeature()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getResourceFeature_FeatureVector_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::Dataset::FeatureVector returnValue = *(EarthView::World::Spatial3D::Dataset::FeatureVector*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getResourceFeature_FeatureVector_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getResourceFeature();
					}
					virtual void setSelectionColour(_in const EarthView::World::Graphic::CColourValue& color)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectionColour_void_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectionColour_void_CColourValue_Callback(&color);
						}
						else
							return this->CModelBaseObject::setSelectionColour(color);
					}
					virtual EarthView::World::Graphic::CColourValue getSelectionColour()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectionColour_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CColourValue returnValue = *(EarthView::World::Graphic::CColourValue*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectionColour_CColourValue_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getSelectionColour();
					}
					virtual void startFlash(_in const EarthView::World::Graphic::CColourValue& color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback(&color, hightLight_ms, normally_ms);
						}
						else
							return this->CModelBaseObject::startFlash(color, hightLight_ms, normally_ms);
					}
					virtual void stopFlash()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopFlash_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopFlash_void_Callback();
						}
						else
							return this->CModelBaseObject::stopFlash();
					}
					virtual ev_bool isSelectable()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::isSelectable();
					}
					virtual ev_bool isSelected()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelected_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::isSelected();
					}
					virtual void setSelectable(_in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectable_void_ev_bool_Callback(flag);
						}
						else
							return this->CModelBaseObject::setSelectable(flag);
					}
					virtual void setSelected(_in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelected_void_ev_bool_Callback(flag);
						}
						else
							return this->CModelBaseObject::setSelected(flag);
					}
					virtual void setSubEntitySelected(_in ev_uint32 subEntityIndex, _in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback(subEntityIndex, flag);
						}
						else
							return this->CModelBaseObject::setSubEntitySelected(subEntityIndex, flag);
					}
					virtual void setSubEntitySelected(_in ev_uint32 subEntityIndex, _in ev_int32 segmentIndex, _in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool_Callback(subEntityIndex, segmentIndex, flag);
						}
						else
							return this->CModelBaseObject::setSubEntitySelected(subEntityIndex, segmentIndex, flag);
					}
					virtual ev_bool getSubEntitySelected(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntitySelected_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntitySelected_ev_bool_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getSubEntitySelected(subEntityIndex);
					}
					virtual ev_bool getSelectedSubEntityIndex(_out ev_uint32& subMeshIndex, _out ev_uint32& instanceIndex, _out ev_int32& segmentIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback(subMeshIndex, instanceIndex, segmentIndex);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getSelectedSubEntityIndex(subMeshIndex, instanceIndex, segmentIndex);
					}
					virtual EVString getSubMeshName(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshName_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshName_EVString_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getSubMeshName(subEntityIndex);
					}
					virtual EarthView::World::Spatial::Math::CMatrix4 getSubMeshMatrix(_in ev_uint32 subEntityIndex)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Math::CMatrix4 returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback(subEntityIndex);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getSubMeshMatrix(subEntityIndex);
					}
					virtual ev_bool addNodeListenerForSubMesh(_in ev_uint32 subEntityIndex, _in EarthView::World::Graphic::CNode::CNodeListener* nodeListener)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback(subEntityIndex, nodeListener);
							return returnValue;
						}
						else
							return this->CModelBaseObject::addNodeListenerForSubMesh(subEntityIndex, nodeListener);
					}
					virtual void removeNodeListenerForSubMesh(_in ev_uint32 subEntityIndex, _in EarthView::World::Graphic::CNode::CNodeListener* nodeListener)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback(subEntityIndex, nodeListener);
						}
						else
							return this->CModelBaseObject::removeNodeListenerForSubMesh(subEntityIndex, nodeListener);
					}
					virtual void clearSelection()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearSelection_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearSelection_void_Callback();
						}
						else
							return this->CModelBaseObject::clearSelection();
					}
					virtual void setEditable(_in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEditable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEditable_void_ev_bool_Callback(flag);
						}
						else
							return this->CModelBaseObject::setEditable(flag);
					}
					virtual void endEditing()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_endEditing_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_endEditing_void_Callback();
						}
						else
							return this->CModelBaseObject::endEditing();
					}
					virtual void setTransparency(_in ev_real64 percent)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_real64_Callback(percent);
						}
						else
							return this->CModelBaseObject::setTransparency(percent);
					}
					virtual void setTransparency(_in ev_uint32 subEntityIndex, _in ev_real64 percent)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_uint32_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_uint32_ev_real64_Callback(subEntityIndex, percent);
						}
						else
							return this->CModelBaseObject::setTransparency(subEntityIndex, percent);
					}
					virtual void setCastShadows(_in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setCastShadows_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setCastShadows_void_ev_bool_Callback(flag);
						}
						else
							return this->CModelBaseObject::setCastShadows(flag);
					}
					virtual void setEnvParam(_in const EarthView::World::Graphic::CColourValue& ambient, _in const EarthView::World::Graphic::CColourValue& diffuse, _in const EarthView::World::Graphic::CColourValue& specular)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback(&ambient, &diffuse, &specular);
						}
						else
							return this->CModelBaseObject::setEnvParam(ambient, diffuse, specular);
					}
					virtual void setReflectable(_in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setReflectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setReflectable_void_ev_bool_Callback(flag);
						}
						else
							return this->CModelBaseObject::setReflectable(flag);
					}
					virtual ev_bool getReflectable()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getReflectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getReflectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getReflectable();
					}
					virtual void setRefractable(_in ev_bool flag)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRefractable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRefractable_void_ev_bool_Callback(flag);
						}
						else
							return this->CModelBaseObject::setRefractable(flag);
					}
					virtual ev_bool getRefractable()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRefractable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRefractable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getRefractable();
					}
					virtual EarthView::World::Spatial3D::ModelObjectState getModelState()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelState_ModelObjectState_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::ModelObjectState returnValue = (EarthView::World::Spatial3D::ModelObjectState)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelState_ModelObjectState_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getModelState();
					}
					virtual EarthView::World::Spatial3D::TextureState getTextureState()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTextureState_TextureState_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial3D::TextureState returnValue = (EarthView::World::Spatial3D::TextureState)m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTextureState_TextureState_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getTextureState();
					}
					virtual ev_bool needSwitchTexture()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_needSwitchTexture_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_needSwitchTexture_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::needSwitchTexture();
					}
					virtual ev_bool switchThumb(_inout EarthView::World::Spatial3D::TexturePtrVector& outTmpTextureVec)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchThumb_ev_bool_TexturePtrVector_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchThumb_ev_bool_TexturePtrVector_Callback(&outTmpTextureVec);
							return returnValue;
						}
						else
							return this->CModelBaseObject::switchThumb(outTmpTextureVec);
					}
					virtual void attachThumb(_inout EarthView::World::Spatial3D::TexturePtrVector& tmpTextureVec)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachThumb_void_TexturePtrVector_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachThumb_void_TexturePtrVector_Callback(&tmpTextureVec);
						}
						else
							return this->CModelBaseObject::attachThumb(tmpTextureVec);
					}
					virtual ev_bool switchOrig(_inout EarthView::World::Spatial3D::TexturePtrVector& outTmpTextureVec)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchOrig_ev_bool_TexturePtrVector_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchOrig_ev_bool_TexturePtrVector_Callback(&outTmpTextureVec);
							return returnValue;
						}
						else
							return this->CModelBaseObject::switchOrig(outTmpTextureVec);
					}
					virtual void attachOrig(_inout EarthView::World::Spatial3D::TexturePtrVector& tmpTextureVec)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachOrig_void_TexturePtrVector_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachOrig_void_TexturePtrVector_Callback(&tmpTextureVec);
						}
						else
							return this->CModelBaseObject::attachOrig(tmpTextureVec);
					}
					virtual void clearTmpTextureStream(_inout EarthView::World::Spatial3D::TexturePtrVector& tmpTextureVec)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearTmpTextureStream_void_TexturePtrVector_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearTmpTextureStream_void_TexturePtrVector_Callback(&tmpTextureVec);
						}
						else
							return this->CModelBaseObject::clearTmpTextureStream(tmpTextureVec);
					}
					virtual void setLoadFromLayer(_in const ev_bool& fromLayer)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLoadFromLayer_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLoadFromLayer_void_ev_bool_Callback(fromLayer);
						}
						else
							return this->CModelBaseObject::setLoadFromLayer(fromLayer);
					}
					virtual ev_bool getLoadFromLayer()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLoadFromLayer_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLoadFromLayer_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getLoadFromLayer();
					}
					virtual ev_bool hasFltAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_hasFltAnimation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_hasFltAnimation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::hasFltAnimation();
					}
					virtual void mergeBoundingBoxForNode()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_mergeBoundingBoxForNode_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_mergeBoundingBoxForNode_void_Callback();
						}
						else
							return this->CModelBaseObject::mergeBoundingBoxForNode();
					}
					virtual void prepareForNodeAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_prepareForNodeAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_prepareForNodeAnimation_void_Callback();
						}
						else
							return this->CModelBaseObject::prepareForNodeAnimation();
					}
					virtual void resumeNodeAnimationState()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_resumeNodeAnimationState_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_resumeNodeAnimationState_void_Callback();
						}
						else
							return this->CModelBaseObject::resumeNodeAnimationState();
					}
					virtual void startAllNodeAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllNodeAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllNodeAnimation_void_Callback();
						}
						else
							return this->CModelBaseObject::startAllNodeAnimation();
					}
					virtual void stopAllNodeAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllNodeAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllNodeAnimation_void_Callback();
						}
						else
							return this->CModelBaseObject::stopAllNodeAnimation();
					}
					virtual void startAllAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllAnimation_void_Callback();
						}
						else
							return this->CModelBaseObject::startAllAnimation();
					}
					virtual void startRangeAnimation(_in const EVString& keyTimeTagName, _in ev_int32 segmentConut, _in ev_uint32 option)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							char* keyTimeTagName_Char = keyTimeTagName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback(keyTimeTagName_Char, segmentConut, option);
						}
						else
							return this->CModelBaseObject::startRangeAnimation(keyTimeTagName, segmentConut, option);
					}
					virtual void startRangeAnimation(_in const EVString& keyTimeTagName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* keyTimeTagName_Char = keyTimeTagName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_Callback(keyTimeTagName_Char);
						}
						else
							return this->CModelBaseObject::startRangeAnimation(keyTimeTagName);
					}
					virtual ev_int32 startRangeAnimationIndependently(_in const EVString& keyTimeTagName, _in ev_int32 segmentConut, _in ev_uint32 option)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							char* keyTimeTagName_Char = keyTimeTagName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback(keyTimeTagName_Char, segmentConut, option);
							return returnValue;
						}
						else
							return this->CModelBaseObject::startRangeAnimationIndependently(keyTimeTagName, segmentConut, option);
					}
					virtual ev_int32 startRangeAnimationIndependently(_in const EVString& keyTimeTagName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* keyTimeTagName_Char = keyTimeTagName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_Callback(keyTimeTagName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::startRangeAnimationIndependently(keyTimeTagName);
					}
					virtual void stopRangeAnimation(_in ev_bool stopAtRangeStart)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_Callback(stopAtRangeStart);
						}
						else
							return this->CModelBaseObject::stopRangeAnimation(stopAtRangeStart);
					}
					virtual void stopRangeAnimation(_in ev_bool stopAtRangeStart, _in ev_int32 handle)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback(stopAtRangeStart, handle);
						}
						else
							return this->CModelBaseObject::stopRangeAnimation(stopAtRangeStart, handle);
					}
					virtual void stopAllAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllAnimation_void_Callback();
						}
						else
							return this->CModelBaseObject::stopAllAnimation();
					}
					virtual void pauseAllAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAllAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAllAnimation_void_Callback();
						}
						else
							return this->CModelBaseObject::pauseAllAnimation();
					}
					virtual void continueAllAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAllAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAllAnimation_void_Callback();
						}
						else
							return this->CModelBaseObject::continueAllAnimation();
					}
					virtual void setAllAnimationLoop(_in ev_bool loop)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAllAnimationLoop_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAllAnimationLoop_void_ev_bool_Callback(loop);
						}
						else
							return this->CModelBaseObject::setAllAnimationLoop(loop);
					}
					virtual void startAnimation(_in const EVString& animationName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* animationName_Char = animationName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAnimation_void_EVString_Callback(animationName_Char);
						}
						else
							return this->CModelBaseObject::startAnimation(animationName);
					}
					virtual void stopAnimation(_in const EVString& animationName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* animationName_Char = animationName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_Callback(animationName_Char);
						}
						else
							return this->CModelBaseObject::stopAnimation(animationName);
					}
					virtual void stopAnimation(_in const EVString& animationName, _in ev_bool processChild)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* animationName_Char = animationName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_ev_bool_Callback(animationName_Char, processChild);
						}
						else
							return this->CModelBaseObject::stopAnimation(animationName, processChild);
					}
					virtual void pauseAnimation(_in const EVString& animationName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* animationName_Char = animationName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_Callback(animationName_Char);
						}
						else
							return this->CModelBaseObject::pauseAnimation(animationName);
					}
					virtual void pauseAnimation(_in const EVString& animationName, _in ev_bool processChild)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* animationName_Char = animationName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_ev_bool_Callback(animationName_Char, processChild);
						}
						else
							return this->CModelBaseObject::pauseAnimation(animationName, processChild);
					}
					virtual void continueAnimation(_in const EVString& animationName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* animationName_Char = animationName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_Callback(animationName_Char);
						}
						else
							return this->CModelBaseObject::continueAnimation(animationName);
					}
					virtual void continueAnimation(_in const EVString& animationName, _in ev_bool processChild)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* animationName_Char = animationName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_ev_bool_Callback(animationName_Char, processChild);
						}
						else
							return this->CModelBaseObject::continueAnimation(animationName, processChild);
					}
					virtual void setAnimationLoop(_in const EVString& animationName, _in bool loop)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_Callback != NULL && this->isCustomExtend())
						{
							char* animationName_Char = animationName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_Callback(animationName_Char, loop);
						}
						else
							return this->CModelBaseObject::setAnimationLoop(animationName, loop);
					}
					virtual void setAnimationLoop(_in const EVString& animationName, _in bool loop, _in ev_bool processChild)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* animationName_Char = animationName.makeBuffer();
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_ev_bool_Callback(animationName_Char, loop, processChild);
						}
						else
							return this->CModelBaseObject::setAnimationLoop(animationName, loop, processChild);
					}
					virtual EarthView::World::Graphic::CNode* createLocalAxisNode()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::createLocalAxisNode();
					}
					virtual EarthView::World::Graphic::CNode* createLocalAxisNode(_in const EVString& componentName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* componentName_Char = componentName.makeBuffer();
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_EVString_Callback(componentName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::createLocalAxisNode(componentName);
					}
					virtual EarthView::World::Graphic::CNode* getLocalAxisNode()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalAxisNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalAxisNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getLocalAxisNode();
					}
					virtual ev_bool destroyLocalAxisNode()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_destroyLocalAxisNode_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_destroyLocalAxisNode_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::destroyLocalAxisNode();
					}
					virtual EarthView::World::Graphic::CNode* getBoneNode(_in const EVString& boneName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBoneNode_CNode_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* boneName_Char = boneName.makeBuffer();
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBoneNode_CNode_EVString_Callback(boneName_Char);
							return returnValue;
						}
						else
							return this->CModelBaseObject::getBoneNode(boneName);
					}
					virtual void updateSkeletonAnimationVertex()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateSkeletonAnimationVertex_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateSkeletonAnimationVertex_void_Callback();
						}
						else
							return this->CModelBaseObject::updateSkeletonAnimationVertex();
					}
					virtual void initializeAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeAnimation_void_Callback();
						}
						else
							return this->CModelBaseObject::initializeAnimation();
					}
					virtual void initializeModelAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeModelAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeModelAnimation_void_Callback();
						}
						else
							return this->CModelBaseObject::initializeModelAnimation();
					}
					virtual void initializeNodeAnimation()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeNodeAnimation_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeNodeAnimation_void_Callback();
						}
						else
							return this->CModelBaseObject::initializeNodeAnimation();
					}
					virtual void setComponentVisible(_in const EarthView::World::Spatial3D::CComponent& component, _in ev_bool visible)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentVisible_void_CComponent_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentVisible_void_CComponent_ev_bool_Callback(&component, visible);
						}
						else
							return this->CModelBaseObject::setComponentVisible(component, visible);
					}
					virtual void setComponentHighlight(_in const EarthView::World::Spatial3D::CComponent& component, _in ev_bool highlight)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentHighlight_void_CComponent_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentHighlight_void_CComponent_ev_bool_Callback(&component, highlight);
						}
						else
							return this->CModelBaseObject::setComponentHighlight(component, highlight);
					}
					virtual void setComponentTransparency(_in const EarthView::World::Spatial3D::CComponent& component, _in ev_real32 alpha)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentTransparency_void_CComponent_ev_real32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentTransparency_void_CComponent_ev_real32_Callback(&component, alpha);
						}
						else
							return this->CModelBaseObject::setComponentTransparency(component, alpha);
					}
					virtual EarthView::World::Graphic::CNode* getNode()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNode_CNode_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNode_CNode_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getNode();
					}
					virtual ev_bool attachToScene()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToScene_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToScene_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::attachToScene();
					}
					virtual ev_bool detachFromScene()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromScene_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromScene_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::detachFromScene();
					}
					virtual void setUserData(_inout EarthView::World::Spatial3D::CFeatureUserData& userData)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setUserData_void_CFeatureUserData_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setUserData_void_CFeatureUserData_Callback(&userData);
						}
						else
							return this->CModelBaseObject::setUserData(userData);
					}
					virtual ev_bool getSelectable()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::getSelectable();
					}
					virtual ev_bool update()
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_update_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_update_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelBaseObject::update();
					}
				};
				REGISTER_FACTORY_CLASS(CModelBaseObjectProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::load();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->load();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::load();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_IntVector(void *pObjectXXXX, _in const void* subEntityIndexs )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::load(*(EarthView::World::Core::IntVector*)subEntityIndexs);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->load(*(EarthView::World::Core::IntVector*)subEntityIndexs);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_IntVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_IntVector_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_IntVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_load_ev_bool_IntVector_NoVirtual(void *pObjectXXXX, _in const void* subEntityIndexs )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::load(*(EarthView::World::Core::IntVector*)subEntityIndexs);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToNode_ev_bool_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::attachToNode(n);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->attachToNode(n);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToNode_ev_bool_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToNode_ev_bool_CNode_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToNode_ev_bool_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToNode_ev_bool_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* n )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::attachToNode(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromNode_CNode(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::detachFromNode();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->detachFromNode();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromNode_CNode_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromNode_CNode_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::detachFromNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unload_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::unload();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->unload();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unload_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unload_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unload_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unload_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::unload();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isLoaded_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::isLoaded();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isLoaded();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isLoaded_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isLoaded_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isLoaded_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::isLoaded();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isAttached_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::isAttached();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isAttached();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isAttached_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isAttached_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isAttached_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isAttached_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::isAttached();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMatrix_void_CMatrix4(void *pObjectXXXX, _in const void* m )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
					else
						ptrNativeObject->setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMatrix_void_CMatrix4_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMatrix_void_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMatrix_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in const void* m )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMatrix_CMatrix4(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getMatrix();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMatrix_CMatrix4_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMatrix_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMatrix_CMatrix4_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLocalMatrix_void_CMatrix4(void *pObjectXXXX, _in const void* m )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setLocalMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
					else
						ptrNativeObject->setLocalMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLocalMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLocalMatrix_void_CMatrix4_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLocalMatrix_void_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLocalMatrix_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in const void* m )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setLocalMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalMatrix_CMatrix4(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getLocalMatrix();
						EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->getLocalMatrix();
						EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalMatrix_CMatrix4_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalMatrix_CMatrix4(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalMatrix_CMatrix4_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getLocalMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
					else
						ptrNativeObject->setPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(void *pObjectXXXX, _in ev_real64 latitude, _in ev_real64 longitude, _in ev_real64 altitude, _in const void* scale, _in const void* qua )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(void *pObjectXXXX, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
					else
						ptrNativeObject->getPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getPosition_void_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_NoVirtual(void *pObjectXXXX, _out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out void* scale, _out void* qua )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getPosition(latitude, longitude, altitude, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion(void *pObjectXXXX, _out void* offPosition, _out void* scale, _out void* qua )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getModelDBTransform(*(EarthView::World::Spatial::Math::CVector3*)offPosition, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
					else
						ptrNativeObject->getModelDBTransform(*(EarthView::World::Spatial::Math::CVector3*)offPosition, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelDBTransform_void_CVector3_CVector3_CQuaternion_NoVirtual(void *pObjectXXXX, _out void* offPosition, _out void* scale, _out void* qua )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getModelDBTransform(*(EarthView::World::Spatial::Math::CVector3*)offPosition, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CQuaternion*)qua);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::IGlobeLayer*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLayer_IGlobeLayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getLayer();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->getLayer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLayer_IGlobeLayer( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLayer_IGlobeLayer_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLayer_IGlobeLayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::IGlobeLayer*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLayer_IGlobeLayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getDataset_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getDataset();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getDataset_IDataset_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getDataset_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getDataset_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getID();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getID_ev_uint32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getID_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getName_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getFile_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getFile();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getFile();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getFile_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getFile_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getFile_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getFile_EVString_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getFile();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isFileDirAsGroup_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::isFileDirAsGroup();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isFileDirAsGroup();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isFileDirAsGroup_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isFileDirAsGroup_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isFileDirAsGroup_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isFileDirAsGroup_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::isFileDirAsGroup();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getType_ModelType(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getType_ModelType( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getType_ModelType_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getType_ModelType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getType_ModelType_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSceneManager_CSceneManager(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getSceneManager();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->getSceneManager();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSceneManager_CSceneManager( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSceneManager_CSceneManager_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSceneManager_CSceneManager(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSceneManager_CSceneManager_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getSceneManager();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getWorldAABB_CAxisAlignedBox(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getWorldAABB();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getWorldAABB_CAxisAlignedBox( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getWorldAABB_CAxisAlignedBox_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getWorldAABB_CAxisAlignedBox(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getWorldAABB_CAxisAlignedBox_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getWorldAABB();
					EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRootMeshNode_MeshNodePtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Graphic::CMesh::MeshNodePtr objXXXX = ptrNativeObject->getRootMeshNode();
					EarthView::World::Graphic::CMesh::MeshNodePtr *pXXXX = new EarthView::World::Graphic::CMesh::MeshNodePtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isVisible_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isVisible_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setVisible(flag);
					else
						ptrNativeObject->setVisible(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setVisible(flag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool flag, _in ev_bool bRecursive )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setVisible(flag, bRecursive);
					else
						ptrNativeObject->setVisible(flag, bRecursive);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setVisible_void_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag, _in ev_bool bRecursive )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setVisible(flag, bRecursive);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_bool isVisible )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setSubEntityVisibility(subEntityIndex, isVisible);
					else
						ptrNativeObject->setSubEntityVisibility(subEntityIndex, isVisible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_bool isVisible )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setSubEntityVisibility(subEntityIndex, isVisible);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_bool isVisible, _in ev_bool bRecursive )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setSubEntityVisibility(subEntityIndex, isVisible, bRecursive);
					else
						ptrNativeObject->setSubEntityVisibility(subEntityIndex, isVisible, bRecursive);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntityVisibility_void_ev_uint32_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_bool isVisible, _in ev_bool bRecursive )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setSubEntityVisibility(subEntityIndex, isVisible, bRecursive);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntityVisibility_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getSubEntityVisibility(subEntityIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getSubEntityVisibility(subEntityIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntityVisibility_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntityVisibility_ev_bool_ev_uint32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntityVisibility_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntityVisibility_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getSubEntityVisibility(subEntityIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMaxDistance_void_ev_real64(void *pObjectXXXX, _in ev_real64 dist )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setRenderingMaxDistance(dist);
					else
						ptrNativeObject->setRenderingMaxDistance(dist);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMaxDistance_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMaxDistance_void_ev_real64_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMaxDistance_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMaxDistance_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dist )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setRenderingMaxDistance(dist);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMaxDistance_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getRenderingMaxDistance();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getRenderingMaxDistance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMaxDistance_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMaxDistance_ev_real64_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMaxDistance_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMaxDistance_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getRenderingMaxDistance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMinDistance_void_ev_real64(void *pObjectXXXX, _in ev_real64 dist )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setRenderingMinDistance(dist);
					else
						ptrNativeObject->setRenderingMinDistance(dist);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMinDistance_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMinDistance_void_ev_real64_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMinDistance_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRenderingMinDistance_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 dist )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setRenderingMinDistance(dist);
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMinDistance_ev_real64(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getRenderingMinDistance();
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->getRenderingMinDistance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMinDistance_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMinDistance_ev_real64_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMinDistance_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRenderingMinDistance_ev_real64_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getRenderingMinDistance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32(void *pObjectXXXX, _in ev_uint16 submeshIndex, _in ev_uint32 instanceIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::calculateSubEntityIndex(submeshIndex, instanceIndex);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->calculateSubEntityIndex(submeshIndex, instanceIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateSubEntityIndex_ev_int32_ev_uint16_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint16 submeshIndex, _in ev_uint32 instanceIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::calculateSubEntityIndex(submeshIndex, instanceIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _out ev_int16& submeshIndex, _out ev_int32& instanceIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::calculateInstanceIndex(subEntityIndex, submeshIndex, instanceIndex);
					else
						ptrNativeObject->calculateInstanceIndex(subEntityIndex, submeshIndex, instanceIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _out ev_int16& submeshIndex, _out ev_int32& instanceIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::calculateInstanceIndex(subEntityIndex, submeshIndex, instanceIndex);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNumSubEntities_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getNumSubEntities();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getNumSubEntities();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNumSubEntities_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNumSubEntities_ev_int32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNumSubEntities_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNumSubEntities_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getNumSubEntities();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAliasName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getAliasName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getAliasName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAliasName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAliasName_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAliasName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAliasName_EVString_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getAliasName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedState_BindedState(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::BindedState objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedState();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::BindedState objXXXX = ptrNativeObject->getBindedState();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedState_BindedState( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedState_BindedState_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedState_BindedState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedState_BindedState_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::BindedState objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedState();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedEffect_EffectObjectMap(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getAllBindedEffect();
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->getAllBindedEffect();
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedEffect_EffectObjectMap( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedEffect_EffectObjectMap_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedEffect_EffectObjectMap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedEffect_EffectObjectMap_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getAllBindedEffect();
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedLight_LightObjectMap(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelManager::LightObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getAllBindedLight();
						EarthView::World::Spatial3D::ModelManager::LightObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::LightObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelManager::LightObjectMap objXXXX = ptrNativeObject->getAllBindedLight();
						EarthView::World::Spatial3D::ModelManager::LightObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::LightObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedLight_LightObjectMap( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedLight_LightObjectMap_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedLight_LightObjectMap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedLight_LightObjectMap_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::LightObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getAllBindedLight();
					EarthView::World::Spatial3D::ModelManager::LightObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::LightObjectMap(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_ev_uint32(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedEffect(subEntityIndex);
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->getBindedEffect(subEntityIndex);
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_ev_uint32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedEffect(subEntityIndex);
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLight_LightObjectMap_ev_uint32(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelManager::LightObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedLight(subEntityIndex);
						EarthView::World::Spatial3D::ModelManager::LightObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::LightObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelManager::LightObjectMap objXXXX = ptrNativeObject->getBindedLight(subEntityIndex);
						EarthView::World::Spatial3D::ModelManager::LightObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::LightObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLight_LightObjectMap_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLight_LightObjectMap_ev_uint32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLight_LightObjectMap_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLight_LightObjectMap_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::LightObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedLight(subEntityIndex);
					EarthView::World::Spatial3D::ModelManager::LightObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::LightObjectMap(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_ev_uint32(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedParticle(subEntityIndex);
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->getBindedParticle(subEntityIndex);
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_ev_uint32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedParticle(subEntityIndex);
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedRibbonTrail(subEntityIndex);
						EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap objXXXX = ptrNativeObject->getBindedRibbonTrail(subEntityIndex);
						EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedRibbonTrail(subEntityIndex);
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_EVString(void *pObjectXXXX, _in const char* boneName )
				{
					EarthView::World::Core::ev_string boneName1 = boneName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedEffect(boneName1);
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->getBindedEffect(boneName1);
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffect_EffectObjectMap_EVString_NoVirtual(void *pObjectXXXX, _in const char* boneName )
				{
					EarthView::World::Core::ev_string boneName1 = boneName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedEffect(boneName1);
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffectByNodeName_EffectObjectMap_EVString(void *pObjectXXXX, _in const char* nodeName )
				{
					EarthView::World::Core::ev_string nodeName1 = nodeName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedEffectByNodeName(nodeName1);
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->getBindedEffectByNodeName(nodeName1);
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffectByNodeName_EffectObjectMap_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffectByNodeName_EffectObjectMap_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffectByNodeName_EffectObjectMap_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedEffectByNodeName_EffectObjectMap_EVString_NoVirtual(void *pObjectXXXX, _in const char* nodeName )
				{
					EarthView::World::Core::ev_string nodeName1 = nodeName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedEffectByNodeName(nodeName1);
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_EVString(void *pObjectXXXX, _in const char* boneName )
				{
					EarthView::World::Core::ev_string boneName1 = boneName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedParticle(boneName1);
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->getBindedParticle(boneName1);
						EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticle_EffectObjectMap_EVString_NoVirtual(void *pObjectXXXX, _in const char* boneName )
				{
					EarthView::World::Core::ev_string boneName1 = boneName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedParticle(boneName1);
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString(void *pObjectXXXX, _in const char* boneName )
				{
					EarthView::World::Core::ev_string boneName1 = boneName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedRibbonTrail(boneName1);
						EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap objXXXX = ptrNativeObject->getBindedRibbonTrail(boneName1);
						EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrail_RibbonTrailObjectMap_EVString_NoVirtual(void *pObjectXXXX, _in const char* boneName )
				{
					EarthView::World::Core::ev_string boneName1 = boneName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedRibbonTrail(boneName1);
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString(void *pObjectXXXX, _in const char* nodeName )
				{
					EarthView::World::Core::ev_string nodeName1 = nodeName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedRibbonTrailByNodeName(nodeName1);
						EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap objXXXX = ptrNativeObject->getBindedRibbonTrailByNodeName(nodeName1);
						EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByNodeName_RibbonTrailObjectMap_EVString_NoVirtual(void *pObjectXXXX, _in const char* nodeName )
				{
					EarthView::World::Core::ev_string nodeName1 = nodeName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedRibbonTrailByNodeName(nodeName1);
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedModel_ModelObjectMap(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelManager::ModelObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getAllBindedModel();
						EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::ModelObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelManager::ModelObjectMap objXXXX = ptrNativeObject->getAllBindedModel();
						EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::ModelObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedModel_ModelObjectMap( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedModel_ModelObjectMap_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedModel_ModelObjectMap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAllBindedModel_ModelObjectMap_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getAllBindedModel();
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::ModelObjectMap(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_ev_uint32(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelManager::ModelObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedModel(subEntityIndex);
						EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::ModelObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelManager::ModelObjectMap objXXXX = ptrNativeObject->getBindedModel(subEntityIndex);
						EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::ModelObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_ev_uint32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedModel(subEntityIndex);
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::ModelObjectMap(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByNodeName_ModelObjectMap_EVString(void *pObjectXXXX, _in const char* nodeName )
				{
					EarthView::World::Core::ev_string nodeName1 = nodeName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelManager::ModelObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedModelByNodeName(nodeName1);
						EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::ModelObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelManager::ModelObjectMap objXXXX = ptrNativeObject->getBindedModelByNodeName(nodeName1);
						EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::ModelObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByNodeName_ModelObjectMap_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByNodeName_ModelObjectMap_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByNodeName_ModelObjectMap_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByNodeName_ModelObjectMap_EVString_NoVirtual(void *pObjectXXXX, _in const char* nodeName )
				{
					EarthView::World::Core::ev_string nodeName1 = nodeName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedModelByNodeName(nodeName1);
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::ModelObjectMap(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentByName_CComponent_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::CComponent objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getComponentByName(name1);
						EarthView::World::Spatial3D::CComponent *pXXXX = new EarthView::World::Spatial3D::CComponent(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::CComponent objXXXX = ptrNativeObject->getComponentByName(name1);
						EarthView::World::Spatial3D::CComponent *pXXXX = new EarthView::World::Spatial3D::CComponent(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentByName_CComponent_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentByName_CComponent_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentByName_CComponent_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentByName_CComponent_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::CComponent objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getComponentByName(name1);
					EarthView::World::Spatial3D::CComponent *pXXXX = new EarthView::World::Spatial3D::CComponent(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentBySubEntityIndex_CComponent_ev_uint32(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::CComponent objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getComponentBySubEntityIndex(subEntityIndex);
						EarthView::World::Spatial3D::CComponent *pXXXX = new EarthView::World::Spatial3D::CComponent(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::CComponent objXXXX = ptrNativeObject->getComponentBySubEntityIndex(subEntityIndex);
						EarthView::World::Spatial3D::CComponent *pXXXX = new EarthView::World::Spatial3D::CComponent(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentBySubEntityIndex_CComponent_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentBySubEntityIndex_CComponent_ev_uint32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentBySubEntityIndex_CComponent_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getComponentBySubEntityIndex_CComponent_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::CComponent objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getComponentBySubEntityIndex(subEntityIndex);
					EarthView::World::Spatial3D::CComponent *pXXXX = new EarthView::World::Spatial3D::CComponent(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getParentComponentByName_CComponent_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::CComponent objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getParentComponentByName(name1);
						EarthView::World::Spatial3D::CComponent *pXXXX = new EarthView::World::Spatial3D::CComponent(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::CComponent objXXXX = ptrNativeObject->getParentComponentByName(name1);
						EarthView::World::Spatial3D::CComponent *pXXXX = new EarthView::World::Spatial3D::CComponent(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getParentComponentByName_CComponent_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getParentComponentByName_CComponent_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getParentComponentByName_CComponent_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getParentComponentByName_CComponent_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::CComponent objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getParentComponentByName(name1);
					EarthView::World::Spatial3D::CComponent *pXXXX = new EarthView::World::Spatial3D::CComponent(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRootComponent_CComponent(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::CComponent objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getRootComponent();
						EarthView::World::Spatial3D::CComponent *pXXXX = new EarthView::World::Spatial3D::CComponent(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::CComponent objXXXX = ptrNativeObject->getRootComponent();
						EarthView::World::Spatial3D::CComponent *pXXXX = new EarthView::World::Spatial3D::CComponent(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRootComponent_CComponent( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRootComponent_CComponent_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRootComponent_CComponent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRootComponent_CComponent_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::CComponent objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getRootComponent();
					EarthView::World::Spatial3D::CComponent *pXXXX = new EarthView::World::Spatial3D::CComponent(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_EVString(void *pObjectXXXX, _in const char* boneName )
				{
					EarthView::World::Core::ev_string boneName1 = boneName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelManager::ModelObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedModel(boneName1);
						EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::ModelObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelManager::ModelObjectMap objXXXX = ptrNativeObject->getBindedModel(boneName1);
						EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::ModelObjectMap(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModel_ModelObjectMap_EVString_NoVirtual(void *pObjectXXXX, _in const char* boneName )
				{
					EarthView::World::Core::ev_string boneName1 = boneName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedModel(boneName1);
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::ModelObjectMap(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffect*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticleByName_CEffect_EVString(void *pObjectXXXX, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::EffectManager::CEffect* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedParticleByName(aliasName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::EffectManager::CEffect* objXXXX = ptrNativeObject->getBindedParticleByName(aliasName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticleByName_CEffect_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticleByName_CEffect_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticleByName_CEffect_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffect*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedParticleByName_CEffect_EVString_NoVirtual(void *pObjectXXXX, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::EffectManager::CEffect* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedParticleByName(aliasName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRibbonTrail*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByName_CRibbonTrail_EVString(void *pObjectXXXX, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CRibbonTrail* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedRibbonTrailByName(aliasName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CRibbonTrail* objXXXX = ptrNativeObject->getBindedRibbonTrailByName(aliasName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByName_CRibbonTrail_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByName_CRibbonTrail_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRibbonTrail*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedRibbonTrailByName_CRibbonTrail_EVString_NoVirtual(void *pObjectXXXX, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Graphic::CRibbonTrail* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedRibbonTrailByName(aliasName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByName_CModelBaseObject_EVString(void *pObjectXXXX, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelManager::CModelBaseObject* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedModelByName(aliasName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelManager::CModelBaseObject* objXXXX = ptrNativeObject->getBindedModelByName(aliasName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByName_CModelBaseObject_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByName_CModelBaseObject_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByName_CModelBaseObject_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedModelByName_CModelBaseObject_EVString_NoVirtual(void *pObjectXXXX, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedModelByName(aliasName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CLight*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLightByName_CLight_EVString(void *pObjectXXXX, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CLight* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedLightByName(aliasName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CLight* objXXXX = ptrNativeObject->getBindedLightByName(aliasName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLightByName_CLight_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLightByName_CLight_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLightByName_CLight_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CLight*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedLightByName_CLight_EVString_NoVirtual(void *pObjectXXXX, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Graphic::CLight* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedLightByName(aliasName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in const char* boneName, _in const void* offMatrix, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string boneName1 = boneName;
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::bindEffectAtBone(ref_pEffect, boneName1, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->bindEffectAtBone(ref_pEffect, boneName1, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtBone_ev_bool_CEffect_EVString_CMatrix4_EVString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in const char* boneName, _in const void* offMatrix, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string boneName1 = boneName;
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::bindEffectAtBone(ref_pEffect, boneName1, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in const char* nodeName, _in const void* offMatrix, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string nodeName1 = nodeName;
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::bindEffectAtNode(ref_pEffect, nodeName1, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->bindEffectAtNode(ref_pEffect, nodeName1, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtNode_ev_bool_CEffect_EVString_CMatrix4_EVString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in const char* nodeName, _in const void* offMatrix, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string nodeName1 = nodeName;
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::bindEffectAtNode(ref_pEffect, nodeName1, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in ev_uint32 subEntityIndex, _in const void* offMatrix, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::bindEffectAtSubEntity(ref_pEffect, subEntityIndex, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->bindEffectAtSubEntity(ref_pEffect, subEntityIndex, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindEffectAtSubEntity_ev_bool_CEffect_ev_uint32_CMatrix4_EVString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::EffectManager::CEffect* ref_pEffect, _in ev_uint32 subEntityIndex, _in const void* offMatrix, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::bindEffectAtSubEntity(ref_pEffect, subEntityIndex, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString(void *pObjectXXXX, _in EarthView::World::Graphic::CLight* l, _in ev_uint32 subEntityIndex, _in const void* offMatrix, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::bindLightAtSubEntity(l, subEntityIndex, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->bindLightAtSubEntity(l, subEntityIndex, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindLightAtSubEntity_ev_bool_CLight_ev_uint32_CMatrix4_EVString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CLight* l, _in ev_uint32 subEntityIndex, _in const void* offMatrix, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::bindLightAtSubEntity(l, subEntityIndex, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in const char* boneName, _in const void* offMatrix, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string boneName1 = boneName;
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::bindModelAtBone(ref_pModel, boneName1, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->bindModelAtBone(ref_pModel, boneName1, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtBone_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in const char* boneName, _in const void* offMatrix, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string boneName1 = boneName;
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::bindModelAtBone(ref_pModel, boneName1, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in ev_uint32 subEntityIndex, _in const void* offMatrix, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::bindModelAtSubEntity(ref_pModel, subEntityIndex, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->bindModelAtSubEntity(ref_pModel, subEntityIndex, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtSubEntity_ev_bool_CModelBaseObject_ev_uint32_CMatrix4_EVString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in ev_uint32 subEntityIndex, _in const void* offMatrix, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::bindModelAtSubEntity(ref_pModel, subEntityIndex, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in const char* nodeName, _in const void* offMatrix, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string nodeName1 = nodeName;
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::bindModelAtNode(ref_pModel, nodeName1, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->bindModelAtNode(ref_pModel, nodeName1, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_bindModelAtNode_ev_bool_CModelBaseObject_EVString_CMatrix4_EVString_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_pModel, _in const char* nodeName, _in const void* offMatrix, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string nodeName1 = nodeName;
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::bindModelAtNode(ref_pModel, nodeName1, *(EarthView::World::Spatial::Math::CMatrix4*)offMatrix, aliasName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindEffect_ev_bool_CEffect(void *pObjectXXXX, _in EarthView::World::Spatial3D::EffectManager::CEffect* pEffect )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::unBindEffect(pEffect);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->unBindEffect(pEffect);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindEffect_ev_bool_CEffect( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindEffect_ev_bool_CEffect_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindEffect_ev_bool_CEffect(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindEffect_ev_bool_CEffect_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::EffectManager::CEffect* pEffect )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::unBindEffect(pEffect);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindLight_ev_bool_CLight(void *pObjectXXXX, _in EarthView::World::Graphic::CLight* pLight )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::unBindLight(pLight);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->unBindLight(pLight);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindLight_ev_bool_CLight( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindLight_ev_bool_CLight_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindLight_ev_bool_CLight(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindLight_ev_bool_CLight_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CLight* pLight )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::unBindLight(pLight);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindModel_ev_bool_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::unBindModel(pModel);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->unBindModel(pModel);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindModel_ev_bool_CModelBaseObject( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindModel_ev_bool_CModelBaseObject_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindModel_ev_bool_CModelBaseObject(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_unBindModel_ev_bool_CModelBaseObject_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::unBindModel(pModel);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedID();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getBindedID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedID_ev_uint32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBindedID_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBindedID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 bindedID )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setBindedID(bindedID);
					else
						ptrNativeObject->setBindedID(bindedID);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedID_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedID_void_ev_uint32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedID_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedID_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 bindedID )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setBindedID(bindedID);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedEffectVisibility_void_ev_bool(void *pObjectXXXX, _in ev_bool isVisible )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setBindedEffectVisibility(isVisible);
					else
						ptrNativeObject->setBindedEffectVisibility(isVisible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedEffectVisibility_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedEffectVisibility_void_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedEffectVisibility_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setBindedEffectVisibility_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isVisible )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setBindedEffectVisibility(isVisible);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector(void *pObjectXXXX, _in const void* matPtr, _in const void* replacedTextures, _in const void* newTextureFilesPath )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::updateMaterial(*(EarthView::World::Graphic::CMaterialPtr*)matPtr, *(EarthView::World::Core::StringVector*)replacedTextures, *(EarthView::World::Core::StringVector*)newTextureFilesPath);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->updateMaterial(*(EarthView::World::Graphic::CMaterialPtr*)matPtr, *(EarthView::World::Core::StringVector*)replacedTextures, *(EarthView::World::Core::StringVector*)newTextureFilesPath);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateMaterial_ev_bool_CMaterialPtr_StringVector_StringVector_NoVirtual(void *pObjectXXXX, _in const void* matPtr, _in const void* replacedTextures, _in const void* newTextureFilesPath )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::updateMaterial(*(EarthView::World::Graphic::CMaterialPtr*)matPtr, *(EarthView::World::Core::StringVector*)replacedTextures, *(EarthView::World::Core::StringVector*)newTextureFilesPath);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMaterial_void_ev_uint32_CMaterialPtr(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _inout void* matPtr )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setMaterial(subEntityIndex, *(EarthView::World::Graphic::CMaterialPtr*)matPtr);
					else
						ptrNativeObject->setMaterial(subEntityIndex, *(EarthView::World::Graphic::CMaterialPtr*)matPtr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMaterial_void_ev_uint32_CMaterialPtr( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMaterial_void_ev_uint32_CMaterialPtr_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMaterial_void_ev_uint32_CMaterialPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setMaterial_void_ev_uint32_CMaterialPtr_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _inout void* matPtr )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setMaterial(subEntityIndex, *(EarthView::World::Graphic::CMaterialPtr*)matPtr);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshPtr_CMeshPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CMeshPtr objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getMeshPtr();
						EarthView::World::Graphic::CMeshPtr *pXXXX = new EarthView::World::Graphic::CMeshPtr(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Graphic::CMeshPtr objXXXX = ptrNativeObject->getMeshPtr();
						EarthView::World::Graphic::CMeshPtr *pXXXX = new EarthView::World::Graphic::CMeshPtr(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshPtr_CMeshPtr( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshPtr_CMeshPtr_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshPtr_CMeshPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshPtr_CMeshPtr_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Graphic::CMeshPtr objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getMeshPtr();
					EarthView::World::Graphic::CMeshPtr *pXXXX = new EarthView::World::Graphic::CMeshPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTexturePtrs_TexturePtrVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::TexturePtrVector objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getTexturePtrs();
						EarthView::World::Spatial3D::TexturePtrVector *pXXXX = new EarthView::World::Spatial3D::TexturePtrVector(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::TexturePtrVector objXXXX = ptrNativeObject->getTexturePtrs();
						EarthView::World::Spatial3D::TexturePtrVector *pXXXX = new EarthView::World::Spatial3D::TexturePtrVector(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTexturePtrs_TexturePtrVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTexturePtrs_TexturePtrVector_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTexturePtrs_TexturePtrVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTexturePtrs_TexturePtrVector_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::TexturePtrVector objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getTexturePtrs();
					EarthView::World::Spatial3D::TexturePtrVector *pXXXX = new EarthView::World::Spatial3D::TexturePtrVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialPtrs_MaterialPtrVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::MaterialPtrVector objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getMaterialPtrs();
						EarthView::World::Spatial3D::MaterialPtrVector *pXXXX = new EarthView::World::Spatial3D::MaterialPtrVector(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::MaterialPtrVector objXXXX = ptrNativeObject->getMaterialPtrs();
						EarthView::World::Spatial3D::MaterialPtrVector *pXXXX = new EarthView::World::Spatial3D::MaterialPtrVector(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialPtrs_MaterialPtrVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialPtrs_MaterialPtrVector_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialPtrs_MaterialPtrVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialPtrs_MaterialPtrVector_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::MaterialPtrVector objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getMaterialPtrs();
					EarthView::World::Spatial3D::MaterialPtrVector *pXXXX = new EarthView::World::Spatial3D::MaterialPtrVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuPtrs_GpuPtrVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::GpuPtrVector objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getGpuPtrs();
						EarthView::World::Spatial3D::GpuPtrVector *pXXXX = new EarthView::World::Spatial3D::GpuPtrVector(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::GpuPtrVector objXXXX = ptrNativeObject->getGpuPtrs();
						EarthView::World::Spatial3D::GpuPtrVector *pXXXX = new EarthView::World::Spatial3D::GpuPtrVector(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuPtrs_GpuPtrVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuPtrs_GpuPtrVector_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuPtrs_GpuPtrVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuPtrs_GpuPtrVector_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::GpuPtrVector objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getGpuPtrs();
					EarthView::World::Spatial3D::GpuPtrVector *pXXXX = new EarthView::World::Spatial3D::GpuPtrVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshFeature_IFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getMeshFeature();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->getMeshFeature();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshFeature_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshFeature_IFeature_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshFeature_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMeshFeature_IFeature_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getMeshFeature();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getOrigTextureFeatures_FeatureVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getOrigTextureFeatures();
						const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->getOrigTextureFeatures();
						const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getOrigTextureFeatures_FeatureVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getOrigTextureFeatures_FeatureVector_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getOrigTextureFeatures_FeatureVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getOrigTextureFeatures_FeatureVector_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getOrigTextureFeatures();
					const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getThumbTextureFeatures_FeatureVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getThumbTextureFeatures();
						const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->getThumbTextureFeatures();
						const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getThumbTextureFeatures_FeatureVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getThumbTextureFeatures_FeatureVector_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getThumbTextureFeatures_FeatureVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getThumbTextureFeatures_FeatureVector_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getThumbTextureFeatures();
					const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialFeatures_FeatureVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getMaterialFeatures();
						const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->getMaterialFeatures();
						const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialFeatures_FeatureVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialFeatures_FeatureVector_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialFeatures_FeatureVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getMaterialFeatures_FeatureVector_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getMaterialFeatures();
					const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAnimationFeatures_FeatureVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getAnimationFeatures();
						const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->getAnimationFeatures();
						const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAnimationFeatures_FeatureVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAnimationFeatures_FeatureVector_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAnimationFeatures_FeatureVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAnimationFeatures_FeatureVector_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getAnimationFeatures();
					const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuFeatures_FeatureVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getGpuFeatures();
						const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->getGpuFeatures();
						const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuFeatures_FeatureVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuFeatures_FeatureVector_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuFeatures_FeatureVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getGpuFeatures_FeatureVector_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getGpuFeatures();
					const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getProgramFeatures_FeatureVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getProgramFeatures();
						const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->getProgramFeatures();
						const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getProgramFeatures_FeatureVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getProgramFeatures_FeatureVector_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getProgramFeatures_FeatureVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getProgramFeatures_FeatureVector_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					const EarthView::World::Spatial3D::Dataset::FeatureVector& objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getProgramFeatures();
					const EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getResourceFeature_FeatureVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::Dataset::FeatureVector objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getResourceFeature();
						EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = new EarthView::World::Spatial3D::Dataset::FeatureVector(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::Dataset::FeatureVector objXXXX = ptrNativeObject->getResourceFeature();
						EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = new EarthView::World::Spatial3D::Dataset::FeatureVector(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getResourceFeature_FeatureVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getResourceFeature_FeatureVector_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getResourceFeature_FeatureVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getResourceFeature_FeatureVector_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::FeatureVector objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getResourceFeature();
					EarthView::World::Spatial3D::Dataset::FeatureVector *pXXXX = new EarthView::World::Spatial3D::Dataset::FeatureVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectionColour_void_CColourValue(void *pObjectXXXX, _in const void* color )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setSelectionColour(*(EarthView::World::Graphic::CColourValue*)color);
					else
						ptrNativeObject->setSelectionColour(*(EarthView::World::Graphic::CColourValue*)color);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectionColour_void_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectionColour_void_CColourValue_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectionColour_void_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectionColour_void_CColourValue_NoVirtual(void *pObjectXXXX, _in const void* color )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setSelectionColour(*(EarthView::World::Graphic::CColourValue*)color);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectionColour_CColourValue(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getSelectionColour();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectionColour_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectionColour_CColourValue_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectionColour_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectionColour_CColourValue_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getSelectionColour();
					EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startFlash_void_CColourValue_ev_uint32_ev_uint32(void *pObjectXXXX, _in const void* color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::startFlash(*(EarthView::World::Graphic::CColourValue*)color, hightLight_ms, normally_ms);
					else
						ptrNativeObject->startFlash(*(EarthView::World::Graphic::CColourValue*)color, hightLight_ms, normally_ms);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startFlash_void_CColourValue_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startFlash_void_CColourValue_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startFlash_void_CColourValue_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* color, _in ev_uint32 hightLight_ms, _in ev_uint32 normally_ms )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::startFlash(*(EarthView::World::Graphic::CColourValue*)color, hightLight_ms, normally_ms);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopFlash_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::stopFlash();
					else
						ptrNativeObject->stopFlash();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopFlash_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopFlash_void_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopFlash_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopFlash_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::stopFlash();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelectable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::isSelectable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelectable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelectable_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelectable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::isSelectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelected_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::isSelected();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSelected();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelected_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelected_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_isSelected_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::isSelected();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectable_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setSelectable(flag);
					else
						ptrNativeObject->setSelectable(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectable_void_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setSelectable(flag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setSelected(flag);
					else
						ptrNativeObject->setSelected(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelected_void_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelected_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSelected_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setSelected(flag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_bool(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setSubEntitySelected(subEntityIndex, flag);
					else
						ptrNativeObject->setSubEntitySelected(subEntityIndex, flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setSubEntitySelected(subEntityIndex, flag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_int32 segmentIndex, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setSubEntitySelected(subEntityIndex, segmentIndex, flag);
					else
						ptrNativeObject->setSubEntitySelected(subEntityIndex, segmentIndex, flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setSubEntitySelected_void_ev_uint32_ev_int32_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_int32 segmentIndex, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setSubEntitySelected(subEntityIndex, segmentIndex, flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntitySelected_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getSubEntitySelected(subEntityIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getSubEntitySelected(subEntityIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntitySelected_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntitySelected_ev_bool_ev_uint32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntitySelected_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubEntitySelected_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getSubEntitySelected(subEntityIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32(void *pObjectXXXX, _out ev_uint32& subMeshIndex, _out ev_uint32& instanceIndex, _out ev_int32& segmentIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getSelectedSubEntityIndex(subMeshIndex, instanceIndex, segmentIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getSelectedSubEntityIndex(subMeshIndex, instanceIndex, segmentIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectedSubEntityIndex_ev_bool_ev_uint32_ev_uint32_ev_int32_NoVirtual(void *pObjectXXXX, _out ev_uint32& subMeshIndex, _out ev_uint32& instanceIndex, _out ev_int32& segmentIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getSelectedSubEntityIndex(subMeshIndex, instanceIndex, segmentIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshName_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getSubMeshName(subEntityIndex);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getSubMeshName(subEntityIndex);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshName_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshName_EVString_ev_uint32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshName_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshName_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getSubMeshName(subEntityIndex);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshMatrix_CMatrix4_ev_uint32(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getSubMeshMatrix(subEntityIndex);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshMatrix_CMatrix4_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshMatrix_CMatrix4_ev_uint32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshMatrix_CMatrix4_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSubMeshMatrix_CMatrix4_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getSubMeshMatrix(subEntityIndex);
					EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in EarthView::World::Graphic::CNode::CNodeListener* nodeListener )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::addNodeListenerForSubMesh(subEntityIndex, nodeListener);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->addNodeListenerForSubMesh(subEntityIndex, nodeListener);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_addNodeListenerForSubMesh_ev_bool_ev_uint32_CNodeListener_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in EarthView::World::Graphic::CNode::CNodeListener* nodeListener )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::addNodeListenerForSubMesh(subEntityIndex, nodeListener);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in EarthView::World::Graphic::CNode::CNodeListener* nodeListener )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::removeNodeListenerForSubMesh(subEntityIndex, nodeListener);
					else
						ptrNativeObject->removeNodeListenerForSubMesh(subEntityIndex, nodeListener);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_removeNodeListenerForSubMesh_void_ev_uint32_CNodeListener_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in EarthView::World::Graphic::CNode::CNodeListener* nodeListener )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::removeNodeListenerForSubMesh(subEntityIndex, nodeListener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearSelection_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::clearSelection();
					else
						ptrNativeObject->clearSelection();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearSelection_void_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearSelection_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearSelection_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::clearSelection();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEditable_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setEditable(flag);
					else
						ptrNativeObject->setEditable(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEditable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEditable_void_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEditable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEditable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setEditable(flag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_endEditing_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::endEditing();
					else
						ptrNativeObject->endEditing();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_endEditing_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_endEditing_void_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_endEditing_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_endEditing_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::endEditing();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_real64(void *pObjectXXXX, _in ev_real64 percent )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setTransparency(percent);
					else
						ptrNativeObject->setTransparency(percent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_real64_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 percent )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setTransparency(percent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_uint32_ev_real64(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_real64 percent )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setTransparency(subEntityIndex, percent);
					else
						ptrNativeObject->setTransparency(subEntityIndex, percent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_uint32_ev_real64( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_uint32_ev_real64_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_uint32_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setTransparency_void_ev_uint32_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_uint32 subEntityIndex, _in ev_real64 percent )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setTransparency(subEntityIndex, percent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setCastShadows_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setCastShadows(flag);
					else
						ptrNativeObject->setCastShadows(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setCastShadows_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setCastShadows_void_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setCastShadows_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setCastShadows_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setCastShadows(flag);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEnvParam_void_CColourValue_CColourValue_CColourValue(void *pObjectXXXX, _in const void* ambient, _in const void* diffuse, _in const void* specular )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
					else
						ptrNativeObject->setEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEnvParam_void_CColourValue_CColourValue_CColourValue( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEnvParam_void_CColourValue_CColourValue_CColourValue(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setEnvParam_void_CColourValue_CColourValue_CColourValue_NoVirtual(void *pObjectXXXX, _in const void* ambient, _in const void* diffuse, _in const void* specular )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setEnvParam(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setReflectable_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setReflectable(flag);
					else
						ptrNativeObject->setReflectable(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setReflectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setReflectable_void_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setReflectable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setReflectable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setReflectable(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getReflectable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getReflectable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getReflectable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getReflectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getReflectable_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getReflectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getReflectable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getReflectable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRefractable_void_ev_bool(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setRefractable(flag);
					else
						ptrNativeObject->setRefractable(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRefractable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRefractable_void_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRefractable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setRefractable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool flag )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setRefractable(flag);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRefractable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getRefractable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getRefractable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRefractable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRefractable_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRefractable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getRefractable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getRefractable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelState_ModelObjectState(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::ModelObjectState objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getModelState();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::ModelObjectState objXXXX = ptrNativeObject->getModelState();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelState_ModelObjectState( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelState_ModelObjectState_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelState_ModelObjectState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelState_ModelObjectState_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelObjectState objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getModelState();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTextureState_TextureState(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial3D::TextureState objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getTextureState();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial3D::TextureState objXXXX = ptrNativeObject->getTextureState();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTextureState_TextureState( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTextureState_TextureState_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTextureState_TextureState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getTextureState_TextureState_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::TextureState objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getTextureState();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_needSwitchTexture_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::needSwitchTexture();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->needSwitchTexture();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_needSwitchTexture_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_needSwitchTexture_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_needSwitchTexture_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_needSwitchTexture_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::needSwitchTexture();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchThumb_ev_bool_TexturePtrVector(void *pObjectXXXX, _inout void* outTmpTextureVec )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::switchThumb(*(EarthView::World::Spatial3D::TexturePtrVector*)outTmpTextureVec);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->switchThumb(*(EarthView::World::Spatial3D::TexturePtrVector*)outTmpTextureVec);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchThumb_ev_bool_TexturePtrVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchThumb_ev_bool_TexturePtrVector_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchThumb_ev_bool_TexturePtrVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchThumb_ev_bool_TexturePtrVector_NoVirtual(void *pObjectXXXX, _inout void* outTmpTextureVec )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::switchThumb(*(EarthView::World::Spatial3D::TexturePtrVector*)outTmpTextureVec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachThumb_void_TexturePtrVector(void *pObjectXXXX, _inout void* tmpTextureVec )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::attachThumb(*(EarthView::World::Spatial3D::TexturePtrVector*)tmpTextureVec);
					else
						ptrNativeObject->attachThumb(*(EarthView::World::Spatial3D::TexturePtrVector*)tmpTextureVec);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachThumb_void_TexturePtrVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachThumb_void_TexturePtrVector_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachThumb_void_TexturePtrVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachThumb_void_TexturePtrVector_NoVirtual(void *pObjectXXXX, _inout void* tmpTextureVec )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::attachThumb(*(EarthView::World::Spatial3D::TexturePtrVector*)tmpTextureVec);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchOrig_ev_bool_TexturePtrVector(void *pObjectXXXX, _inout void* outTmpTextureVec )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::switchOrig(*(EarthView::World::Spatial3D::TexturePtrVector*)outTmpTextureVec);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->switchOrig(*(EarthView::World::Spatial3D::TexturePtrVector*)outTmpTextureVec);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchOrig_ev_bool_TexturePtrVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchOrig_ev_bool_TexturePtrVector_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchOrig_ev_bool_TexturePtrVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_switchOrig_ev_bool_TexturePtrVector_NoVirtual(void *pObjectXXXX, _inout void* outTmpTextureVec )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::switchOrig(*(EarthView::World::Spatial3D::TexturePtrVector*)outTmpTextureVec);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachOrig_void_TexturePtrVector(void *pObjectXXXX, _inout void* tmpTextureVec )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::attachOrig(*(EarthView::World::Spatial3D::TexturePtrVector*)tmpTextureVec);
					else
						ptrNativeObject->attachOrig(*(EarthView::World::Spatial3D::TexturePtrVector*)tmpTextureVec);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachOrig_void_TexturePtrVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachOrig_void_TexturePtrVector_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachOrig_void_TexturePtrVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachOrig_void_TexturePtrVector_NoVirtual(void *pObjectXXXX, _inout void* tmpTextureVec )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::attachOrig(*(EarthView::World::Spatial3D::TexturePtrVector*)tmpTextureVec);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearTmpTextureStream_void_TexturePtrVector(void *pObjectXXXX, _inout void* tmpTextureVec )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::clearTmpTextureStream(*(EarthView::World::Spatial3D::TexturePtrVector*)tmpTextureVec);
					else
						ptrNativeObject->clearTmpTextureStream(*(EarthView::World::Spatial3D::TexturePtrVector*)tmpTextureVec);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearTmpTextureStream_void_TexturePtrVector( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearTmpTextureStream_void_TexturePtrVector_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearTmpTextureStream_void_TexturePtrVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_clearTmpTextureStream_void_TexturePtrVector_NoVirtual(void *pObjectXXXX, _inout void* tmpTextureVec )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::clearTmpTextureStream(*(EarthView::World::Spatial3D::TexturePtrVector*)tmpTextureVec);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelAnimation*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelAnimation_CModelAnimation(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelAnimation* objXXXX = ptrNativeObject->getModelAnimation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_destroyModelAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->destroyModelAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setCullingMode_void_CullingMode(void *pObjectXXXX, _in int mode )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->setCullingMode((EarthView::World::Graphic::CullingMode)mode);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLoadFromLayer_void_ev_bool(void *pObjectXXXX, _in const ev_bool& fromLayer )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setLoadFromLayer(fromLayer);
					else
						ptrNativeObject->setLoadFromLayer(fromLayer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLoadFromLayer_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLoadFromLayer_void_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLoadFromLayer_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setLoadFromLayer_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& fromLayer )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setLoadFromLayer(fromLayer);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLoadFromLayer_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getLoadFromLayer();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getLoadFromLayer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLoadFromLayer_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLoadFromLayer_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLoadFromLayer_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLoadFromLayer_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getLoadFromLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNodeByName_CNode_EVString(void *pObjectXXXX, _in char* nodeName )
				{
					EarthView::World::Core::ev_string nodeName1 = nodeName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getNodeByName(nodeName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_hasMergeNodeBoundingBox_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->hasMergeNodeBoundingBox();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_hasFltAnimation_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::hasFltAnimation();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->hasFltAnimation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_hasFltAnimation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_hasFltAnimation_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_hasFltAnimation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_hasFltAnimation_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::hasFltAnimation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_addNodeForMesh_MemoryDataStreamPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->addNodeForMesh();
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_addNodeAndBoundingBoxForMesh_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->addNodeAndBoundingBoxForMesh();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_mergeBoundingBoxForNode_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::mergeBoundingBoxForNode();
					else
						ptrNativeObject->mergeBoundingBoxForNode();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_mergeBoundingBoxForNode_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_mergeBoundingBoxForNode_void_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_mergeBoundingBoxForNode_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_mergeBoundingBoxForNode_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::mergeBoundingBoxForNode();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_prepareForNodeAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::prepareForNodeAnimation();
					else
						ptrNativeObject->prepareForNodeAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_prepareForNodeAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_prepareForNodeAnimation_void_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_prepareForNodeAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_prepareForNodeAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::prepareForNodeAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_resumeNodeAnimationState_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::resumeNodeAnimationState();
					else
						ptrNativeObject->resumeNodeAnimationState();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_resumeNodeAnimationState_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_resumeNodeAnimationState_void_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_resumeNodeAnimationState_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_resumeNodeAnimationState_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::resumeNodeAnimationState();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllNodeAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::startAllNodeAnimation();
					else
						ptrNativeObject->startAllNodeAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllNodeAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllNodeAnimation_void_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllNodeAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllNodeAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::startAllNodeAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllNodeAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::stopAllNodeAnimation();
					else
						ptrNativeObject->stopAllNodeAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllNodeAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllNodeAnimation_void_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllNodeAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllNodeAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::stopAllNodeAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::startAllAnimation();
					else
						ptrNativeObject->startAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllAnimation_void_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAllAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::startAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32(void *pObjectXXXX, _in const char* keyTimeTagName, _in ev_int32 segmentConut, _in ev_uint32 option )
				{
					EarthView::World::Core::ev_string keyTimeTagName1 = keyTimeTagName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::startRangeAnimation(keyTimeTagName1, segmentConut, option);
					else
						ptrNativeObject->startRangeAnimation(keyTimeTagName1, segmentConut, option);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_ev_int32_ev_uint32_NoVirtual(void *pObjectXXXX, _in const char* keyTimeTagName, _in ev_int32 segmentConut, _in ev_uint32 option )
				{
					EarthView::World::Core::ev_string keyTimeTagName1 = keyTimeTagName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::startRangeAnimation(keyTimeTagName1, segmentConut, option);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString(void *pObjectXXXX, _in const char* keyTimeTagName )
				{
					EarthView::World::Core::ev_string keyTimeTagName1 = keyTimeTagName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::startRangeAnimation(keyTimeTagName1);
					else
						ptrNativeObject->startRangeAnimation(keyTimeTagName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimation_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* keyTimeTagName )
				{
					EarthView::World::Core::ev_string keyTimeTagName1 = keyTimeTagName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::startRangeAnimation(keyTimeTagName1);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32(void *pObjectXXXX, _in const char* keyTimeTagName, _in ev_int32 segmentConut, _in ev_uint32 option )
				{
					EarthView::World::Core::ev_string keyTimeTagName1 = keyTimeTagName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::startRangeAnimationIndependently(keyTimeTagName1, segmentConut, option);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->startRangeAnimationIndependently(keyTimeTagName1, segmentConut, option);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_ev_int32_ev_uint32_NoVirtual(void *pObjectXXXX, _in const char* keyTimeTagName, _in ev_int32 segmentConut, _in ev_uint32 option )
				{
					EarthView::World::Core::ev_string keyTimeTagName1 = keyTimeTagName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::startRangeAnimationIndependently(keyTimeTagName1, segmentConut, option);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString(void *pObjectXXXX, _in const char* keyTimeTagName )
				{
					EarthView::World::Core::ev_string keyTimeTagName1 = keyTimeTagName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::startRangeAnimationIndependently(keyTimeTagName1);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->startRangeAnimationIndependently(keyTimeTagName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startRangeAnimationIndependently_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in const char* keyTimeTagName )
				{
					EarthView::World::Core::ev_string keyTimeTagName1 = keyTimeTagName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::startRangeAnimationIndependently(keyTimeTagName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool(void *pObjectXXXX, _in ev_bool stopAtRangeStart )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::stopRangeAnimation(stopAtRangeStart);
					else
						ptrNativeObject->stopRangeAnimation(stopAtRangeStart);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool stopAtRangeStart )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::stopRangeAnimation(stopAtRangeStart);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_ev_int32(void *pObjectXXXX, _in ev_bool stopAtRangeStart, _in ev_int32 handle )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::stopRangeAnimation(stopAtRangeStart, handle);
					else
						ptrNativeObject->stopRangeAnimation(stopAtRangeStart, handle);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_ev_int32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopRangeAnimation_void_ev_bool_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_bool stopAtRangeStart, _in ev_int32 handle )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::stopRangeAnimation(stopAtRangeStart, handle);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::stopAllAnimation();
					else
						ptrNativeObject->stopAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllAnimation_void_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAllAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::stopAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAllAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::pauseAllAnimation();
					else
						ptrNativeObject->pauseAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAllAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAllAnimation_void_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAllAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAllAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::pauseAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAllAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::continueAllAnimation();
					else
						ptrNativeObject->continueAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAllAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAllAnimation_void_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAllAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAllAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::continueAllAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAllAnimationLoop_void_ev_bool(void *pObjectXXXX, _in ev_bool loop )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setAllAnimationLoop(loop);
					else
						ptrNativeObject->setAllAnimationLoop(loop);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAllAnimationLoop_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAllAnimationLoop_void_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAllAnimationLoop_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAllAnimationLoop_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool loop )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setAllAnimationLoop(loop);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAnimation_void_EVString(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::startAnimation(animationName1);
					else
						ptrNativeObject->startAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAnimation_void_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAnimation_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAnimation_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::startAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_startAnimation_void_EVString_ev_bool(void *pObjectXXXX, _in const char* animationName, _in ev_bool processChild )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->startAnimation(animationName1, processChild);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::stopAnimation(animationName1);
					else
						ptrNativeObject->stopAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::stopAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_ev_bool(void *pObjectXXXX, _in const char* animationName, _in ev_bool processChild )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::stopAnimation(animationName1, processChild);
					else
						ptrNativeObject->stopAnimation(animationName1, processChild);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_stopAnimation_void_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* animationName, _in ev_bool processChild )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::stopAnimation(animationName1, processChild);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::pauseAnimation(animationName1);
					else
						ptrNativeObject->pauseAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::pauseAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_ev_bool(void *pObjectXXXX, _in const char* animationName, _in ev_bool processChild )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::pauseAnimation(animationName1, processChild);
					else
						ptrNativeObject->pauseAnimation(animationName1, processChild);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_pauseAnimation_void_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* animationName, _in ev_bool processChild )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::pauseAnimation(animationName1, processChild);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::continueAnimation(animationName1);
					else
						ptrNativeObject->continueAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* animationName )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::continueAnimation(animationName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_ev_bool(void *pObjectXXXX, _in const char* animationName, _in ev_bool processChild )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::continueAnimation(animationName1, processChild);
					else
						ptrNativeObject->continueAnimation(animationName1, processChild);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_continueAnimation_void_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* animationName, _in ev_bool processChild )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::continueAnimation(animationName1, processChild);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool(void *pObjectXXXX, _in const char* animationName, _in bool loop )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setAnimationLoop(animationName1, loop);
					else
						ptrNativeObject->setAnimationLoop(animationName1, loop);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_NoVirtual(void *pObjectXXXX, _in const char* animationName, _in bool loop )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setAnimationLoop(animationName1, loop);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_ev_bool(void *pObjectXXXX, _in const char* animationName, _in bool loop, _in ev_bool processChild )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setAnimationLoop(animationName1, loop, processChild);
					else
						ptrNativeObject->setAnimationLoop(animationName1, loop, processChild);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setAnimationLoop_void_EVString_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* animationName, _in bool loop, _in ev_bool processChild )
				{
					EarthView::World::Core::ev_string animationName1 = animationName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setAnimationLoop(animationName1, loop, processChild);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::createLocalAxisNode();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->createLocalAxisNode();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::createLocalAxisNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_EVString(void *pObjectXXXX, _in const char* componentName )
				{
					EarthView::World::Core::ev_string componentName1 = componentName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::createLocalAxisNode(componentName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->createLocalAxisNode(componentName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_createLocalAxisNode_CNode_EVString_NoVirtual(void *pObjectXXXX, _in const char* componentName )
				{
					EarthView::World::Core::ev_string componentName1 = componentName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::createLocalAxisNode(componentName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalAxisNode_CNode(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getLocalAxisNode();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getLocalAxisNode();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalAxisNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalAxisNode_CNode_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalAxisNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getLocalAxisNode_CNode_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getLocalAxisNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_destroyLocalAxisNode_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::destroyLocalAxisNode();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyLocalAxisNode();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_destroyLocalAxisNode_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_destroyLocalAxisNode_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_destroyLocalAxisNode_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_destroyLocalAxisNode_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::destroyLocalAxisNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBoneNode_CNode_EVString(void *pObjectXXXX, _in const char* boneName )
				{
					EarthView::World::Core::ev_string boneName1 = boneName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBoneNode(boneName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getBoneNode(boneName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBoneNode_CNode_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBoneNode_CNode_EVString_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBoneNode_CNode_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getBoneNode_CNode_EVString_NoVirtual(void *pObjectXXXX, _in const char* boneName )
				{
					EarthView::World::Core::ev_string boneName1 = boneName;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::getBoneNode(boneName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateSkeletonAnimationVertex_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::updateSkeletonAnimationVertex();
					else
						ptrNativeObject->updateSkeletonAnimationVertex();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateSkeletonAnimationVertex_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateSkeletonAnimationVertex_void_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateSkeletonAnimationVertex_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_updateSkeletonAnimationVertex_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::updateSkeletonAnimationVertex();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getIsClone_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getIsClone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setIsClone_void_ev_bool(void *pObjectXXXX, _in ev_bool isClone )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->setIsClone(isClone);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::initializeAnimation();
					else
						ptrNativeObject->initializeAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeAnimation_void_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::initializeAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeModelAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::initializeModelAnimation();
					else
						ptrNativeObject->initializeModelAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeModelAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeModelAnimation_void_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeModelAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeModelAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::initializeModelAnimation();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeNodeAnimation_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::initializeNodeAnimation();
					else
						ptrNativeObject->initializeNodeAnimation();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeNodeAnimation_void( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeNodeAnimation_void_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeNodeAnimation_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_initializeNodeAnimation_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::initializeNodeAnimation();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getModelAnimationInformationMap_CModelAnimationInformationMap(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap objXXXX = ptrNativeObject->getModelAnimationInformationMap();
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getFrameTagList_CFrameTagList(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Graphic::CFrameTagList objXXXX = ptrNativeObject->getFrameTagList();
					EarthView::World::Graphic::CFrameTagList *pXXXX = new EarthView::World::Graphic::CFrameTagList(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentVisible_void_CComponent_ev_bool(void *pObjectXXXX, _in const void* component, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setComponentVisible(*(EarthView::World::Spatial3D::CComponent*)component, visible);
					else
						ptrNativeObject->setComponentVisible(*(EarthView::World::Spatial3D::CComponent*)component, visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentVisible_void_CComponent_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentVisible_void_CComponent_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentVisible_void_CComponent_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentVisible_void_CComponent_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* component, _in ev_bool visible )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setComponentVisible(*(EarthView::World::Spatial3D::CComponent*)component, visible);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentHighlight_void_CComponent_ev_bool(void *pObjectXXXX, _in const void* component, _in ev_bool highlight )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setComponentHighlight(*(EarthView::World::Spatial3D::CComponent*)component, highlight);
					else
						ptrNativeObject->setComponentHighlight(*(EarthView::World::Spatial3D::CComponent*)component, highlight);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentHighlight_void_CComponent_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentHighlight_void_CComponent_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentHighlight_void_CComponent_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentHighlight_void_CComponent_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* component, _in ev_bool highlight )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setComponentHighlight(*(EarthView::World::Spatial3D::CComponent*)component, highlight);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentTransparency_void_CComponent_ev_real32(void *pObjectXXXX, _in const void* component, _in ev_real32 alpha )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					if (dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setComponentTransparency(*(EarthView::World::Spatial3D::CComponent*)component, alpha);
					else
						ptrNativeObject->setComponentTransparency(*(EarthView::World::Spatial3D::CComponent*)component, alpha);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentTransparency_void_CComponent_ev_real32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentTransparency_void_CComponent_ev_real32_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentTransparency_void_CComponent_ev_real32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setComponentTransparency_void_CComponent_ev_real32_NoVirtual(void *pObjectXXXX, _in const void* component, _in ev_real32 alpha )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CModelBaseObject::setComponentTransparency(*(EarthView::World::Spatial3D::CComponent*)component, alpha);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getAnimationRootNode_CNode(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX;
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getAnimationRootNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNode_CNode( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNode_CNode_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getNode_CNode(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToScene_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToScene_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_attachToScene_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromScene_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromScene_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_detachFromScene_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setUserData_void_CFeatureUserData( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setUserData_void_CFeatureUserData_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_setUserData_void_CFeatureUserData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectable_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_getSelectable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_update_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CModelBaseObject_update_ev_bool_Callback* pCallback )
				{
					CModelBaseObjectProxy* ptr = dynamic_cast<CModelBaseObjectProxy*>((EarthView::World::Spatial3D::ModelManager::CModelBaseObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CModelBaseObject_update_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
