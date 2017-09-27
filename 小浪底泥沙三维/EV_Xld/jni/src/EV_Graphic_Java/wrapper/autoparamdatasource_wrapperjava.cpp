/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/autoparamdatasource.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
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
			class JCAutoParamDataSourceProxy : public EarthView::World::Graphic::CAutoParamDataSource
			{
			 private:
				EarthView::World::Core::ev_string m_setCurrentRenderable_CRenderable_callback;
				EarthView::World::Core::ev_string m_setWorldMatrices_CMatrix4_ev_size_t_callback;
				EarthView::World::Core::ev_string m_setCurrentCamera_CCamera_ev_bool_callback;
				EarthView::World::Core::ev_string m_setCurrentLightList_LightList_callback;
				EarthView::World::Core::ev_string m_setTextureProjector_CFrustum_ev_size_t_callback;
				EarthView::World::Core::ev_string m_setCurrentRenderTarget_CRenderTarget_callback;
				EarthView::World::Core::ev_string m_setCurrentViewport_CViewport_callback;
				EarthView::World::Core::ev_string m_setShadowDirLightExtrusionDistance_Real_callback;
				EarthView::World::Core::ev_string m_setMainCamBoundsInfo_VisibleObjectsBoundsInfo_callback;
				EarthView::World::Core::ev_string m_setCurrentSceneManager_CSceneManager_callback;
				EarthView::World::Core::ev_string m_setCurrentPass_CPass_callback;
				EarthView::World::Core::ev_string m_getWorldMatrix_void_callback;
				EarthView::World::Core::ev_string m_getWorldMatrixArray_void_callback;
				EarthView::World::Core::ev_string m_getWorldMatrixCount_void_callback;
				EarthView::World::Core::ev_string m_getViewMatrix_void_callback;
				EarthView::World::Core::ev_string m_getViewProjectionMatrix_void_callback;
				EarthView::World::Core::ev_string m_getProjectionMatrix_void_callback;
				EarthView::World::Core::ev_string m_getWorldViewProjMatrix_void_callback;
				EarthView::World::Core::ev_string m_getWorldViewMatrix_void_callback;
				EarthView::World::Core::ev_string m_getInverseWorldMatrix_void_callback;
				EarthView::World::Core::ev_string m_getInverseWorldViewMatrix_void_callback;
				EarthView::World::Core::ev_string m_getInverseViewMatrix_void_callback;
				EarthView::World::Core::ev_string m_getInverseTransposeWorldMatrix_void_callback;
				EarthView::World::Core::ev_string m_getInverseTransposeWorldViewMatrix_void_callback;
				EarthView::World::Core::ev_string m_getCameraPosition_void_callback;
				EarthView::World::Core::ev_string m_getCameraRelativePosition_void_callback;
				EarthView::World::Core::ev_string m_getCameraPositionObjectSpace_void_callback;
				EarthView::World::Core::ev_string m_getLodCameraPosition_void_callback;
				EarthView::World::Core::ev_string m_getLodCameraPositionObjectSpace_void_callback;
				EarthView::World::Core::ev_string m_hasLightList_void_callback;
				EarthView::World::Core::ev_string m_getLightNumber_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getLightCount_void_callback;
				EarthView::World::Core::ev_string m_getLightingEnabled_void_callback;
				EarthView::World::Core::ev_string m_getLightCastsShadows_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getLightDiffuseColour_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getLightSpecularColour_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getLightDiffuseColourWithPower_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getLightSpecularColourWithPower_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getLightPosition_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getLightAs4DVector_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getLightDirection_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getLightPowerScale_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getLightAttenuation_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getSpotlightParams_ev_size_t_callback;
				EarthView::World::Core::ev_string m_setAmbientLightColour_CColourValue_callback;
				EarthView::World::Core::ev_string m_getAmbientLightColour_void_callback;
				EarthView::World::Core::ev_string m_getSurfaceAmbientColour_void_callback;
				EarthView::World::Core::ev_string m_getSurfaceDiffuseColour_void_callback;
				EarthView::World::Core::ev_string m_getSurfaceSpecularColour_void_callback;
				EarthView::World::Core::ev_string m_getSurfaceEmissiveColour_void_callback;
				EarthView::World::Core::ev_string m_getSurfaceShininess_void_callback;
				EarthView::World::Core::ev_string m_getVertexColourTracking_void_callback;
				EarthView::World::Core::ev_string m_getDerivedAmbientLightColour_void_callback;
				EarthView::World::Core::ev_string m_getDerivedSceneColour_void_callback;
				EarthView::World::Core::ev_string m_setFog_FogMode_CColourValue_Real_Real_Real_callback;
				EarthView::World::Core::ev_string m_getFogColour_void_callback;
				EarthView::World::Core::ev_string m_getFogParams_void_callback;
				EarthView::World::Core::ev_string m_getTextureViewProjMatrix_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getSoftShadowTextureViewProjMatrix_ev_size_t_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getSoftShadowViewProjMatrix_ev_size_t_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getTextureViewMatrix_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getTextureWorldViewProjMatrix_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getSpotlightViewProjMatrix_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getSpotlightWorldViewProjMatrix_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getTextureTransformMatrix_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getCurrentRenderTarget_void_callback;
				EarthView::World::Core::ev_string m_getCurrentRenderable_void_callback;
				EarthView::World::Core::ev_string m_getCurrentPass_void_callback;
				EarthView::World::Core::ev_string m_getTextureSize_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getInverseTextureSize_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getPackedTextureSize_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getShadowExtrusionDistance_void_callback;
				EarthView::World::Core::ev_string m_getSceneDepthRange_void_callback;
				EarthView::World::Core::ev_string m_getShadowSceneDepthRange_ev_size_t_callback;
				EarthView::World::Core::ev_string m_getShadowColour_void_callback;
				EarthView::World::Core::ev_string m_getShadowColorRRatio_void_callback;
				EarthView::World::Core::ev_string m_getShadowColorGRatio_void_callback;
				EarthView::World::Core::ev_string m_getShadowColorBRatio_void_callback;
				EarthView::World::Core::ev_string m_getInverseViewProjMatrix_void_callback;
				EarthView::World::Core::ev_string m_getInverseTransposeViewProjMatrix_void_callback;
				EarthView::World::Core::ev_string m_getTransposeViewProjMatrix_void_callback;
				EarthView::World::Core::ev_string m_getTransposeViewMatrix_void_callback;
				EarthView::World::Core::ev_string m_getInverseTransposeViewMatrix_void_callback;
				EarthView::World::Core::ev_string m_getTransposeProjectionMatrix_void_callback;
				EarthView::World::Core::ev_string m_getInverseProjectionMatrix_void_callback;
				EarthView::World::Core::ev_string m_getInverseTransposeProjectionMatrix_void_callback;
				EarthView::World::Core::ev_string m_getTransposeWorldViewProjMatrix_void_callback;
				EarthView::World::Core::ev_string m_getInverseWorldViewProjMatrix_void_callback;
				EarthView::World::Core::ev_string m_getInverseTransposeWorldViewProjMatrix_void_callback;
				EarthView::World::Core::ev_string m_getTransposeWorldViewMatrix_void_callback;
				EarthView::World::Core::ev_string m_getTransposeWorldMatrix_void_callback;
				EarthView::World::Core::ev_string m_getTime_void_callback;
				EarthView::World::Core::ev_string m_getTime_0_X_Real_callback;
				EarthView::World::Core::ev_string m_getCosTime_0_X_Real_callback;
				EarthView::World::Core::ev_string m_getSinTime_0_X_Real_callback;
				EarthView::World::Core::ev_string m_getTanTime_0_X_Real_callback;
				EarthView::World::Core::ev_string m_getTime_0_X_packed_Real_callback;
				EarthView::World::Core::ev_string m_getTime_0_1_Real_callback;
				EarthView::World::Core::ev_string m_getCosTime_0_1_Real_callback;
				EarthView::World::Core::ev_string m_getSinTime_0_1_Real_callback;
				EarthView::World::Core::ev_string m_getTanTime_0_1_Real_callback;
				EarthView::World::Core::ev_string m_getTime_0_1_packed_Real_callback;
				EarthView::World::Core::ev_string m_getTime_0_2Pi_Real_callback;
				EarthView::World::Core::ev_string m_getCosTime_0_2Pi_Real_callback;
				EarthView::World::Core::ev_string m_getSinTime_0_2Pi_Real_callback;
				EarthView::World::Core::ev_string m_getTanTime_0_2Pi_Real_callback;
				EarthView::World::Core::ev_string m_getTime_0_2Pi_packed_Real_callback;
				EarthView::World::Core::ev_string m_getFrameTime_void_callback;
				EarthView::World::Core::ev_string m_getFPS_void_callback;
				EarthView::World::Core::ev_string m_getViewportWidth_void_callback;
				EarthView::World::Core::ev_string m_getViewportHeight_void_callback;
				EarthView::World::Core::ev_string m_getInverseViewportWidth_void_callback;
				EarthView::World::Core::ev_string m_getInverseViewportHeight_void_callback;
				EarthView::World::Core::ev_string m_getViewDirection_void_callback;
				EarthView::World::Core::ev_string m_getViewSideVector_void_callback;
				EarthView::World::Core::ev_string m_getViewUpVector_void_callback;
				EarthView::World::Core::ev_string m_getFOV_void_callback;
				EarthView::World::Core::ev_string m_getNearClipDistance_void_callback;
				EarthView::World::Core::ev_string m_getFarClipDistance_void_callback;
				EarthView::World::Core::ev_string m_getPassNumber_void_callback;
				EarthView::World::Core::ev_string m_setPassNumber_ev_int32_callback;
				EarthView::World::Core::ev_string m_incPassNumber_void_callback;
				EarthView::World::Core::ev_string m_updateLightCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback;
				EarthView::World::Core::ev_string m_getIsSoftShadowOpen_void_callback;
				EarthView::World::Core::ev_string m_getSoftShadowNearCilp_void_callback;
				EarthView::World::Core::ev_string m_getSoftShadowFarCilp_void_callback;
				EarthView::World::Core::ev_string m_getSoftShadowNearCilp_ev_uint8_callback;
				EarthView::World::Core::ev_string m_getSoftShadowFarCilp_ev_uint8_callback;
				EarthView::World::Core::ev_string m_getCascadeEyeSpaceDepth_void_callback;
				EarthView::World::Core::ev_string m_getSoftShadowLightBleedPower_void_callback;
				EarthView::World::Core::ev_string m_getSoftShadowDepthOffset_void_callback;
				EarthView::World::Core::ev_string m_getSoftShadowNormalFactor_void_callback;
			public:
				JCAutoParamDataSourceProxy(EarthView::World::Core::CNameValuePairList *pList) : CAutoParamDataSource(pList)
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
				void register_setCurrentRenderable_CRenderable_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCurrentRenderable_CRenderable_callback = __method;
				}
				void register_setWorldMatrices_CMatrix4_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setWorldMatrices_CMatrix4_ev_size_t_callback = __method;
				}
				void register_setCurrentCamera_CCamera_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCurrentCamera_CCamera_ev_bool_callback = __method;
				}
				void register_setCurrentLightList_LightList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCurrentLightList_LightList_callback = __method;
				}
				void register_setTextureProjector_CFrustum_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setTextureProjector_CFrustum_ev_size_t_callback = __method;
				}
				void register_setCurrentRenderTarget_CRenderTarget_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCurrentRenderTarget_CRenderTarget_callback = __method;
				}
				void register_setCurrentViewport_CViewport_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCurrentViewport_CViewport_callback = __method;
				}
				void register_setShadowDirLightExtrusionDistance_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setShadowDirLightExtrusionDistance_Real_callback = __method;
				}
				void register_setMainCamBoundsInfo_VisibleObjectsBoundsInfo_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMainCamBoundsInfo_VisibleObjectsBoundsInfo_callback = __method;
				}
				void register_setCurrentSceneManager_CSceneManager_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCurrentSceneManager_CSceneManager_callback = __method;
				}
				void register_setCurrentPass_CPass_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCurrentPass_CPass_callback = __method;
				}
				void register_getWorldMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldMatrix_void_callback = __method;
				}
				void register_getWorldMatrixArray_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldMatrixArray_void_callback = __method;
				}
				void register_getWorldMatrixCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldMatrixCount_void_callback = __method;
				}
				void register_getViewMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getViewMatrix_void_callback = __method;
				}
				void register_getViewProjectionMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getViewProjectionMatrix_void_callback = __method;
				}
				void register_getProjectionMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getProjectionMatrix_void_callback = __method;
				}
				void register_getWorldViewProjMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldViewProjMatrix_void_callback = __method;
				}
				void register_getWorldViewMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWorldViewMatrix_void_callback = __method;
				}
				void register_getInverseWorldMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInverseWorldMatrix_void_callback = __method;
				}
				void register_getInverseWorldViewMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInverseWorldViewMatrix_void_callback = __method;
				}
				void register_getInverseViewMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInverseViewMatrix_void_callback = __method;
				}
				void register_getInverseTransposeWorldMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInverseTransposeWorldMatrix_void_callback = __method;
				}
				void register_getInverseTransposeWorldViewMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInverseTransposeWorldViewMatrix_void_callback = __method;
				}
				void register_getCameraPosition_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCameraPosition_void_callback = __method;
				}
				void register_getCameraRelativePosition_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCameraRelativePosition_void_callback = __method;
				}
				void register_getCameraPositionObjectSpace_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCameraPositionObjectSpace_void_callback = __method;
				}
				void register_getLodCameraPosition_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLodCameraPosition_void_callback = __method;
				}
				void register_getLodCameraPositionObjectSpace_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLodCameraPositionObjectSpace_void_callback = __method;
				}
				void register_hasLightList_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasLightList_void_callback = __method;
				}
				void register_getLightNumber_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLightNumber_ev_size_t_callback = __method;
				}
				void register_getLightCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLightCount_void_callback = __method;
				}
				void register_getLightingEnabled_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLightingEnabled_void_callback = __method;
				}
				void register_getLightCastsShadows_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLightCastsShadows_ev_size_t_callback = __method;
				}
				void register_getLightDiffuseColour_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLightDiffuseColour_ev_size_t_callback = __method;
				}
				void register_getLightSpecularColour_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLightSpecularColour_ev_size_t_callback = __method;
				}
				void register_getLightDiffuseColourWithPower_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLightDiffuseColourWithPower_ev_size_t_callback = __method;
				}
				void register_getLightSpecularColourWithPower_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLightSpecularColourWithPower_ev_size_t_callback = __method;
				}
				void register_getLightPosition_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLightPosition_ev_size_t_callback = __method;
				}
				void register_getLightAs4DVector_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLightAs4DVector_ev_size_t_callback = __method;
				}
				void register_getLightDirection_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLightDirection_ev_size_t_callback = __method;
				}
				void register_getLightPowerScale_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLightPowerScale_ev_size_t_callback = __method;
				}
				void register_getLightAttenuation_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLightAttenuation_ev_size_t_callback = __method;
				}
				void register_getSpotlightParams_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSpotlightParams_ev_size_t_callback = __method;
				}
				void register_setAmbientLightColour_CColourValue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAmbientLightColour_CColourValue_callback = __method;
				}
				void register_getAmbientLightColour_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAmbientLightColour_void_callback = __method;
				}
				void register_getSurfaceAmbientColour_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSurfaceAmbientColour_void_callback = __method;
				}
				void register_getSurfaceDiffuseColour_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSurfaceDiffuseColour_void_callback = __method;
				}
				void register_getSurfaceSpecularColour_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSurfaceSpecularColour_void_callback = __method;
				}
				void register_getSurfaceEmissiveColour_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSurfaceEmissiveColour_void_callback = __method;
				}
				void register_getSurfaceShininess_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSurfaceShininess_void_callback = __method;
				}
				void register_getVertexColourTracking_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getVertexColourTracking_void_callback = __method;
				}
				void register_getDerivedAmbientLightColour_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDerivedAmbientLightColour_void_callback = __method;
				}
				void register_getDerivedSceneColour_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDerivedSceneColour_void_callback = __method;
				}
				void register_setFog_FogMode_CColourValue_Real_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setFog_FogMode_CColourValue_Real_Real_Real_callback = __method;
				}
				void register_getFogColour_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFogColour_void_callback = __method;
				}
				void register_getFogParams_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFogParams_void_callback = __method;
				}
				void register_getTextureViewProjMatrix_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTextureViewProjMatrix_ev_size_t_callback = __method;
				}
				void register_getSoftShadowTextureViewProjMatrix_ev_size_t_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSoftShadowTextureViewProjMatrix_ev_size_t_ev_uint16_callback = __method;
				}
				void register_getSoftShadowViewProjMatrix_ev_size_t_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSoftShadowViewProjMatrix_ev_size_t_ev_uint16_callback = __method;
				}
				void register_getTextureViewMatrix_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTextureViewMatrix_ev_size_t_callback = __method;
				}
				void register_getTextureWorldViewProjMatrix_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTextureWorldViewProjMatrix_ev_size_t_callback = __method;
				}
				void register_getSpotlightViewProjMatrix_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSpotlightViewProjMatrix_ev_size_t_callback = __method;
				}
				void register_getSpotlightWorldViewProjMatrix_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSpotlightWorldViewProjMatrix_ev_size_t_callback = __method;
				}
				void register_getTextureTransformMatrix_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTextureTransformMatrix_ev_size_t_callback = __method;
				}
				void register_getCurrentRenderTarget_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCurrentRenderTarget_void_callback = __method;
				}
				void register_getCurrentRenderable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCurrentRenderable_void_callback = __method;
				}
				void register_getCurrentPass_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCurrentPass_void_callback = __method;
				}
				void register_getTextureSize_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTextureSize_ev_size_t_callback = __method;
				}
				void register_getInverseTextureSize_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInverseTextureSize_ev_size_t_callback = __method;
				}
				void register_getPackedTextureSize_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPackedTextureSize_ev_size_t_callback = __method;
				}
				void register_getShadowExtrusionDistance_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getShadowExtrusionDistance_void_callback = __method;
				}
				void register_getSceneDepthRange_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSceneDepthRange_void_callback = __method;
				}
				void register_getShadowSceneDepthRange_ev_size_t_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getShadowSceneDepthRange_ev_size_t_callback = __method;
				}
				void register_getShadowColour_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getShadowColour_void_callback = __method;
				}
				void register_getShadowColorRRatio_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getShadowColorRRatio_void_callback = __method;
				}
				void register_getShadowColorGRatio_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getShadowColorGRatio_void_callback = __method;
				}
				void register_getShadowColorBRatio_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getShadowColorBRatio_void_callback = __method;
				}
				void register_getInverseViewProjMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInverseViewProjMatrix_void_callback = __method;
				}
				void register_getInverseTransposeViewProjMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInverseTransposeViewProjMatrix_void_callback = __method;
				}
				void register_getTransposeViewProjMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTransposeViewProjMatrix_void_callback = __method;
				}
				void register_getTransposeViewMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTransposeViewMatrix_void_callback = __method;
				}
				void register_getInverseTransposeViewMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInverseTransposeViewMatrix_void_callback = __method;
				}
				void register_getTransposeProjectionMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTransposeProjectionMatrix_void_callback = __method;
				}
				void register_getInverseProjectionMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInverseProjectionMatrix_void_callback = __method;
				}
				void register_getInverseTransposeProjectionMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInverseTransposeProjectionMatrix_void_callback = __method;
				}
				void register_getTransposeWorldViewProjMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTransposeWorldViewProjMatrix_void_callback = __method;
				}
				void register_getInverseWorldViewProjMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInverseWorldViewProjMatrix_void_callback = __method;
				}
				void register_getInverseTransposeWorldViewProjMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInverseTransposeWorldViewProjMatrix_void_callback = __method;
				}
				void register_getTransposeWorldViewMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTransposeWorldViewMatrix_void_callback = __method;
				}
				void register_getTransposeWorldMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTransposeWorldMatrix_void_callback = __method;
				}
				void register_getTime_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTime_void_callback = __method;
				}
				void register_getTime_0_X_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTime_0_X_Real_callback = __method;
				}
				void register_getCosTime_0_X_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCosTime_0_X_Real_callback = __method;
				}
				void register_getSinTime_0_X_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSinTime_0_X_Real_callback = __method;
				}
				void register_getTanTime_0_X_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTanTime_0_X_Real_callback = __method;
				}
				void register_getTime_0_X_packed_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTime_0_X_packed_Real_callback = __method;
				}
				void register_getTime_0_1_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTime_0_1_Real_callback = __method;
				}
				void register_getCosTime_0_1_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCosTime_0_1_Real_callback = __method;
				}
				void register_getSinTime_0_1_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSinTime_0_1_Real_callback = __method;
				}
				void register_getTanTime_0_1_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTanTime_0_1_Real_callback = __method;
				}
				void register_getTime_0_1_packed_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTime_0_1_packed_Real_callback = __method;
				}
				void register_getTime_0_2Pi_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTime_0_2Pi_Real_callback = __method;
				}
				void register_getCosTime_0_2Pi_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCosTime_0_2Pi_Real_callback = __method;
				}
				void register_getSinTime_0_2Pi_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSinTime_0_2Pi_Real_callback = __method;
				}
				void register_getTanTime_0_2Pi_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTanTime_0_2Pi_Real_callback = __method;
				}
				void register_getTime_0_2Pi_packed_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTime_0_2Pi_packed_Real_callback = __method;
				}
				void register_getFrameTime_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFrameTime_void_callback = __method;
				}
				void register_getFPS_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFPS_void_callback = __method;
				}
				void register_getViewportWidth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getViewportWidth_void_callback = __method;
				}
				void register_getViewportHeight_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getViewportHeight_void_callback = __method;
				}
				void register_getInverseViewportWidth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInverseViewportWidth_void_callback = __method;
				}
				void register_getInverseViewportHeight_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInverseViewportHeight_void_callback = __method;
				}
				void register_getViewDirection_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getViewDirection_void_callback = __method;
				}
				void register_getViewSideVector_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getViewSideVector_void_callback = __method;
				}
				void register_getViewUpVector_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getViewUpVector_void_callback = __method;
				}
				void register_getFOV_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFOV_void_callback = __method;
				}
				void register_getNearClipDistance_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNearClipDistance_void_callback = __method;
				}
				void register_getFarClipDistance_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getFarClipDistance_void_callback = __method;
				}
				void register_getPassNumber_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPassNumber_void_callback = __method;
				}
				void register_setPassNumber_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPassNumber_ev_int32_callback = __method;
				}
				void register_incPassNumber_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_incPassNumber_void_callback = __method;
				}
				void register_updateLightCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_updateLightCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback = __method;
				}
				void register_getIsSoftShadowOpen_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getIsSoftShadowOpen_void_callback = __method;
				}
				void register_getSoftShadowNearCilp_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSoftShadowNearCilp_void_callback = __method;
				}
				void register_getSoftShadowFarCilp_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSoftShadowFarCilp_void_callback = __method;
				}
				void register_getSoftShadowNearCilp_ev_uint8_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSoftShadowNearCilp_ev_uint8_callback = __method;
				}
				void register_getSoftShadowFarCilp_ev_uint8_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSoftShadowFarCilp_ev_uint8_callback = __method;
				}
				void register_getCascadeEyeSpaceDepth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCascadeEyeSpaceDepth_void_callback = __method;
				}
				void register_getSoftShadowLightBleedPower_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSoftShadowLightBleedPower_void_callback = __method;
				}
				void register_getSoftShadowDepthOffset_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSoftShadowDepthOffset_void_callback = __method;
				}
				void register_getSoftShadowNormalFactor_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSoftShadowNormalFactor_void_callback = __method;
				}
				virtual void setCurrentRenderable(const EarthView::World::Graphic::CRenderable* ref_rend)
				{
					if (this->_gRef != NULL && this->m_setCurrentRenderable_CRenderable_callback != "" && this->isCustomExtend())
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
						jlong ref_rend_j = (jlong) ref_rend;
						jmethodID __method = __gr->getMethod("setCurrentRenderable_CRenderable_callback");
						__env->CallVoidMethod(__obj, __method , ref_rend_j);
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
						return this->CAutoParamDataSource::setCurrentRenderable(ref_rend);
					}
				}
				virtual void setWorldMatrices(const EarthView::World::Spatial::Math::CMatrix4* ref_m, ev_size_t count)
				{
					if (this->_gRef != NULL && this->m_setWorldMatrices_CMatrix4_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong ref_m_j = (jlong) ref_m;
						jlong count_j = (jlong) count;
						jmethodID __method = __gr->getMethod("setWorldMatrices_CMatrix4_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , ref_m_j, count_j);
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
						return this->CAutoParamDataSource::setWorldMatrices(ref_m, count);
					}
				}
				virtual void setCurrentCamera(const EarthView::World::Graphic::CCamera* ref_cam, ev_bool useCameraRelative)
				{
					if (this->_gRef != NULL && this->m_setCurrentCamera_CCamera_ev_bool_callback != "" && this->isCustomExtend())
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
						jlong ref_cam_j = (jlong) ref_cam;
						jboolean useCameraRelative_j = (jboolean) useCameraRelative;
						jmethodID __method = __gr->getMethod("setCurrentCamera_CCamera_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , ref_cam_j, useCameraRelative_j);
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
						return this->CAutoParamDataSource::setCurrentCamera(ref_cam, useCameraRelative);
					}
				}
				virtual void setCurrentLightList(const EarthView::World::Graphic::LightList* ref_ll)
				{
					if (this->_gRef != NULL && this->m_setCurrentLightList_LightList_callback != "" && this->isCustomExtend())
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
						jlong ref_ll_j = (jlong) ref_ll;
						jmethodID __method = __gr->getMethod("setCurrentLightList_LightList_callback");
						__env->CallVoidMethod(__obj, __method , ref_ll_j);
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
						return this->CAutoParamDataSource::setCurrentLightList(ref_ll);
					}
				}
				virtual void setTextureProjector(const EarthView::World::Graphic::CFrustum* ref_frust, ev_size_t index)
				{
					if (this->_gRef != NULL && this->m_setTextureProjector_CFrustum_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong ref_frust_j = (jlong) ref_frust;
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("setTextureProjector_CFrustum_ev_size_t_callback");
						__env->CallVoidMethod(__obj, __method , ref_frust_j, index_j);
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
						return this->CAutoParamDataSource::setTextureProjector(ref_frust, index);
					}
				}
				virtual void setCurrentRenderTarget(const EarthView::World::Graphic::CRenderTarget* ref_target)
				{
					if (this->_gRef != NULL && this->m_setCurrentRenderTarget_CRenderTarget_callback != "" && this->isCustomExtend())
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
						jlong ref_target_j = (jlong) ref_target;
						jmethodID __method = __gr->getMethod("setCurrentRenderTarget_CRenderTarget_callback");
						__env->CallVoidMethod(__obj, __method , ref_target_j);
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
						return this->CAutoParamDataSource::setCurrentRenderTarget(ref_target);
					}
				}
				virtual void setCurrentViewport(const EarthView::World::Graphic::CViewport* ref_viewport)
				{
					if (this->_gRef != NULL && this->m_setCurrentViewport_CViewport_callback != "" && this->isCustomExtend())
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
						jlong ref_viewport_j = (jlong) ref_viewport;
						jmethodID __method = __gr->getMethod("setCurrentViewport_CViewport_callback");
						__env->CallVoidMethod(__obj, __method , ref_viewport_j);
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
						return this->CAutoParamDataSource::setCurrentViewport(ref_viewport);
					}
				}
				virtual void setShadowDirLightExtrusionDistance(Real dist)
				{
					if (this->_gRef != NULL && this->m_setShadowDirLightExtrusionDistance_Real_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setShadowDirLightExtrusionDistance_Real_callback");
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
						return this->CAutoParamDataSource::setShadowDirLightExtrusionDistance(dist);
					}
				}
				virtual void setMainCamBoundsInfo(EarthView::World::Graphic::VisibleObjectsBoundsInfo* ref_info)
				{
					if (this->_gRef != NULL && this->m_setMainCamBoundsInfo_VisibleObjectsBoundsInfo_callback != "" && this->isCustomExtend())
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
						jlong ref_info_j = (jlong) ref_info;
						jmethodID __method = __gr->getMethod("setMainCamBoundsInfo_VisibleObjectsBoundsInfo_callback");
						__env->CallVoidMethod(__obj, __method , ref_info_j);
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
						return this->CAutoParamDataSource::setMainCamBoundsInfo(ref_info);
					}
				}
				virtual void setCurrentSceneManager(const EarthView::World::Graphic::CSceneManager* ref_sm)
				{
					if (this->_gRef != NULL && this->m_setCurrentSceneManager_CSceneManager_callback != "" && this->isCustomExtend())
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
						jlong ref_sm_j = (jlong) ref_sm;
						jmethodID __method = __gr->getMethod("setCurrentSceneManager_CSceneManager_callback");
						__env->CallVoidMethod(__obj, __method , ref_sm_j);
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
						return this->CAutoParamDataSource::setCurrentSceneManager(ref_sm);
					}
				}
				virtual void setCurrentPass(const EarthView::World::Graphic::CPass* ref_pass)
				{
					if (this->_gRef != NULL && this->m_setCurrentPass_CPass_callback != "" && this->isCustomExtend())
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
						jlong ref_pass_j = (jlong) ref_pass;
						jmethodID __method = __gr->getMethod("setCurrentPass_CPass_callback");
						__env->CallVoidMethod(__obj, __method , ref_pass_j);
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
						return this->CAutoParamDataSource::setCurrentPass(ref_pass);
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getWorldMatrix() const
				{
					if (this->_gRef != NULL && this->m_getWorldMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorldMatrix_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getWorldMatrix();
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4* getWorldMatrixArray() const
				{
					if (this->_gRef != NULL && this->m_getWorldMatrixArray_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorldMatrixArray_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 *__values1 = (const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getWorldMatrixArray();
					}
				}
				virtual ev_size_t getWorldMatrixCount() const
				{
					if (this->_gRef != NULL && this->m_getWorldMatrixCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorldMatrixCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getWorldMatrixCount();
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getViewMatrix() const
				{
					if (this->_gRef != NULL && this->m_getViewMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getViewMatrix_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getViewMatrix();
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getViewProjectionMatrix() const
				{
					if (this->_gRef != NULL && this->m_getViewProjectionMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getViewProjectionMatrix_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getViewProjectionMatrix();
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getProjectionMatrix() const
				{
					if (this->_gRef != NULL && this->m_getProjectionMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getProjectionMatrix_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getProjectionMatrix();
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getWorldViewProjMatrix() const
				{
					if (this->_gRef != NULL && this->m_getWorldViewProjMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorldViewProjMatrix_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getWorldViewProjMatrix();
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getWorldViewMatrix() const
				{
					if (this->_gRef != NULL && this->m_getWorldViewMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getWorldViewMatrix_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getWorldViewMatrix();
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getInverseWorldMatrix() const
				{
					if (this->_gRef != NULL && this->m_getInverseWorldMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getInverseWorldMatrix_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getInverseWorldMatrix();
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getInverseWorldViewMatrix() const
				{
					if (this->_gRef != NULL && this->m_getInverseWorldViewMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getInverseWorldViewMatrix_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getInverseWorldViewMatrix();
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getInverseViewMatrix() const
				{
					if (this->_gRef != NULL && this->m_getInverseViewMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getInverseViewMatrix_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getInverseViewMatrix();
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getInverseTransposeWorldMatrix() const
				{
					if (this->_gRef != NULL && this->m_getInverseTransposeWorldMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getInverseTransposeWorldMatrix_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getInverseTransposeWorldMatrix();
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getInverseTransposeWorldViewMatrix() const
				{
					if (this->_gRef != NULL && this->m_getInverseTransposeWorldViewMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getInverseTransposeWorldViewMatrix_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getInverseTransposeWorldViewMatrix();
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector4& getCameraPosition() const
				{
					if (this->_gRef != NULL && this->m_getCameraPosition_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCameraPosition_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector4 &__values1 = *(const EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getCameraPosition();
					}
				}
				virtual EarthView::World::Spatial::Math::CVector4 getCameraRelativePosition() const
				{
					if (this->_gRef != NULL && this->m_getCameraRelativePosition_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCameraRelativePosition_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector4 __values1 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getCameraRelativePosition();
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector4& getCameraPositionObjectSpace() const
				{
					if (this->_gRef != NULL && this->m_getCameraPositionObjectSpace_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCameraPositionObjectSpace_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector4 &__values1 = *(const EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getCameraPositionObjectSpace();
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector4& getLodCameraPosition() const
				{
					if (this->_gRef != NULL && this->m_getLodCameraPosition_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLodCameraPosition_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector4 &__values1 = *(const EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getLodCameraPosition();
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector4& getLodCameraPositionObjectSpace() const
				{
					if (this->_gRef != NULL && this->m_getLodCameraPositionObjectSpace_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLodCameraPositionObjectSpace_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector4 &__values1 = *(const EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getLodCameraPositionObjectSpace();
					}
				}
				virtual ev_bool hasLightList() const
				{
					if (this->_gRef != NULL && this->m_hasLightList_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("hasLightList_void_callback");
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
						return this->CAutoParamDataSource::hasLightList();
					}
				}
				virtual ev_real32 getLightNumber(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getLightNumber_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getLightNumber_ev_size_t_callback");
						jfloat __values1_j = (jfloat)__env->CallFloatMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_real32 __values1 = (ev_real32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getLightNumber(index);
					}
				}
				virtual ev_real32 getLightCount() const
				{
					if (this->_gRef != NULL && this->m_getLightCount_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLightCount_void_callback");
						jfloat __values1_j = (jfloat)__env->CallFloatMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_real32 __values1 = (ev_real32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getLightCount();
					}
				}
				virtual ev_real32 getLightingEnabled() const
				{
					if (this->_gRef != NULL && this->m_getLightingEnabled_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getLightingEnabled_void_callback");
						jfloat __values1_j = (jfloat)__env->CallFloatMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_real32 __values1 = (ev_real32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getLightingEnabled();
					}
				}
				virtual ev_real32 getLightCastsShadows(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getLightCastsShadows_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getLightCastsShadows_ev_size_t_callback");
						jfloat __values1_j = (jfloat)__env->CallFloatMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_real32 __values1 = (ev_real32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getLightCastsShadows(index);
					}
				}
				virtual const EarthView::World::Graphic::CColourValue& getLightDiffuseColour(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getLightDiffuseColour_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getLightDiffuseColour_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CColourValue &__values1 = *(const EarthView::World::Graphic::CColourValue*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getLightDiffuseColour(index);
					}
				}
				virtual const EarthView::World::Graphic::CColourValue& getLightSpecularColour(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getLightSpecularColour_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getLightSpecularColour_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CColourValue &__values1 = *(const EarthView::World::Graphic::CColourValue*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getLightSpecularColour(index);
					}
				}
				virtual const EarthView::World::Graphic::CColourValue getLightDiffuseColourWithPower(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getLightDiffuseColourWithPower_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getLightDiffuseColourWithPower_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CColourValue __values1 = *(EarthView::World::Graphic::CColourValue*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getLightDiffuseColourWithPower(index);
					}
				}
				virtual const EarthView::World::Graphic::CColourValue getLightSpecularColourWithPower(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getLightSpecularColourWithPower_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getLightSpecularColourWithPower_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CColourValue __values1 = *(EarthView::World::Graphic::CColourValue*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getLightSpecularColourWithPower(index);
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getLightPosition(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getLightPosition_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getLightPosition_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector3 &__values1 = *(const EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getLightPosition(index);
					}
				}
				virtual EarthView::World::Spatial::Math::CVector4 getLightAs4DVector(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getLightAs4DVector_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getLightAs4DVector_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector4 __values1 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getLightAs4DVector(index);
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getLightDirection(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getLightDirection_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getLightDirection_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector3 &__values1 = *(const EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getLightDirection(index);
					}
				}
				virtual Real getLightPowerScale(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getLightPowerScale_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getLightPowerScale_ev_size_t_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getLightPowerScale(index);
					}
				}
				virtual EarthView::World::Spatial::Math::CVector4 getLightAttenuation(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getLightAttenuation_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getLightAttenuation_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector4 __values1 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getLightAttenuation(index);
					}
				}
				virtual EarthView::World::Spatial::Math::CVector4 getSpotlightParams(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getSpotlightParams_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getSpotlightParams_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector4 __values1 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSpotlightParams(index);
					}
				}
				virtual void setAmbientLightColour(const EarthView::World::Graphic::CColourValue& ambient)
				{
					if (this->_gRef != NULL && this->m_setAmbientLightColour_CColourValue_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setAmbientLightColour_CColourValue_callback");
						__env->CallVoidMethod(__obj, __method , ambient_j);
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
						return this->CAutoParamDataSource::setAmbientLightColour(ambient);
					}
				}
				virtual const EarthView::World::Graphic::CColourValue& getAmbientLightColour() const
				{
					if (this->_gRef != NULL && this->m_getAmbientLightColour_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getAmbientLightColour_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CColourValue &__values1 = *(const EarthView::World::Graphic::CColourValue*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getAmbientLightColour();
					}
				}
				virtual const EarthView::World::Graphic::CColourValue& getSurfaceAmbientColour() const
				{
					if (this->_gRef != NULL && this->m_getSurfaceAmbientColour_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSurfaceAmbientColour_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CColourValue &__values1 = *(const EarthView::World::Graphic::CColourValue*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSurfaceAmbientColour();
					}
				}
				virtual const EarthView::World::Graphic::CColourValue& getSurfaceDiffuseColour() const
				{
					if (this->_gRef != NULL && this->m_getSurfaceDiffuseColour_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSurfaceDiffuseColour_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CColourValue &__values1 = *(const EarthView::World::Graphic::CColourValue*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSurfaceDiffuseColour();
					}
				}
				virtual const EarthView::World::Graphic::CColourValue& getSurfaceSpecularColour() const
				{
					if (this->_gRef != NULL && this->m_getSurfaceSpecularColour_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSurfaceSpecularColour_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CColourValue &__values1 = *(const EarthView::World::Graphic::CColourValue*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSurfaceSpecularColour();
					}
				}
				virtual const EarthView::World::Graphic::CColourValue& getSurfaceEmissiveColour() const
				{
					if (this->_gRef != NULL && this->m_getSurfaceEmissiveColour_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSurfaceEmissiveColour_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CColourValue &__values1 = *(const EarthView::World::Graphic::CColourValue*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSurfaceEmissiveColour();
					}
				}
				virtual Real getSurfaceShininess() const
				{
					if (this->_gRef != NULL && this->m_getSurfaceShininess_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSurfaceShininess_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSurfaceShininess();
					}
				}
				virtual ev_real32 getVertexColourTracking() const
				{
					if (this->_gRef != NULL && this->m_getVertexColourTracking_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getVertexColourTracking_void_callback");
						jfloat __values1_j = (jfloat)__env->CallFloatMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_real32 __values1 = (ev_real32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getVertexColourTracking();
					}
				}
				virtual EarthView::World::Graphic::CColourValue getDerivedAmbientLightColour() const
				{
					if (this->_gRef != NULL && this->m_getDerivedAmbientLightColour_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDerivedAmbientLightColour_void_callback");
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
						return this->CAutoParamDataSource::getDerivedAmbientLightColour();
					}
				}
				virtual EarthView::World::Graphic::CColourValue getDerivedSceneColour() const
				{
					if (this->_gRef != NULL && this->m_getDerivedSceneColour_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getDerivedSceneColour_void_callback");
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
						return this->CAutoParamDataSource::getDerivedSceneColour();
					}
				}
				virtual void setFog(EarthView::World::Graphic::FogMode mode, const EarthView::World::Graphic::CColourValue& colour, Real expDensity, Real linearStart, Real linearEnd)
				{
					if (this->_gRef != NULL && this->m_setFog_FogMode_CColourValue_Real_Real_Real_callback != "" && this->isCustomExtend())
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
						jint mode_j = (jint) mode;
						jlong colour_j = (jlong) &colour;
						jdouble expDensity_j = (jdouble) expDensity;
						jdouble linearStart_j = (jdouble) linearStart;
						jdouble linearEnd_j = (jdouble) linearEnd;
						jmethodID __method = __gr->getMethod("setFog_FogMode_CColourValue_Real_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , mode_j, colour_j, expDensity_j, linearStart_j, linearEnd_j);
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
						return this->CAutoParamDataSource::setFog(mode, colour, expDensity, linearStart, linearEnd);
					}
				}
				virtual const EarthView::World::Graphic::CColourValue& getFogColour() const
				{
					if (this->_gRef != NULL && this->m_getFogColour_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFogColour_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CColourValue &__values1 = *(const EarthView::World::Graphic::CColourValue*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getFogColour();
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector4& getFogParams() const
				{
					if (this->_gRef != NULL && this->m_getFogParams_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFogParams_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector4 &__values1 = *(const EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getFogParams();
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getTextureViewProjMatrix(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getTextureViewProjMatrix_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getTextureViewProjMatrix_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getTextureViewProjMatrix(index);
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getSoftShadowTextureViewProjMatrix(ev_size_t index, ev_uint16 projIndex) const
				{
					if (this->_gRef != NULL && this->m_getSoftShadowTextureViewProjMatrix_ev_size_t_ev_uint16_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jint projIndex_j = (jint) projIndex;
						jmethodID __method = __gr->getMethod("getSoftShadowTextureViewProjMatrix_ev_size_t_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j, projIndex_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSoftShadowTextureViewProjMatrix(index, projIndex);
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getSoftShadowViewProjMatrix(ev_size_t index, ev_uint16 projIndex) const
				{
					if (this->_gRef != NULL && this->m_getSoftShadowViewProjMatrix_ev_size_t_ev_uint16_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jint projIndex_j = (jint) projIndex;
						jmethodID __method = __gr->getMethod("getSoftShadowViewProjMatrix_ev_size_t_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j, projIndex_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSoftShadowViewProjMatrix(index, projIndex);
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getTextureViewMatrix(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getTextureViewMatrix_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getTextureViewMatrix_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getTextureViewMatrix(index);
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getTextureWorldViewProjMatrix(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getTextureWorldViewProjMatrix_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getTextureWorldViewProjMatrix_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getTextureWorldViewProjMatrix(index);
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getSpotlightViewProjMatrix(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getSpotlightViewProjMatrix_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getSpotlightViewProjMatrix_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSpotlightViewProjMatrix(index);
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getSpotlightWorldViewProjMatrix(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getSpotlightWorldViewProjMatrix_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getSpotlightWorldViewProjMatrix_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSpotlightWorldViewProjMatrix(index);
					}
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& getTextureTransformMatrix(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getTextureTransformMatrix_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getTextureTransformMatrix_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CMatrix4 &__values1 = *(const EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getTextureTransformMatrix(index);
					}
				}
				virtual const EarthView::World::Graphic::CRenderTarget* getCurrentRenderTarget() const
				{
					if (this->_gRef != NULL && this->m_getCurrentRenderTarget_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCurrentRenderTarget_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CRenderTarget *__values1 = (const EarthView::World::Graphic::CRenderTarget*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getCurrentRenderTarget();
					}
				}
				virtual const EarthView::World::Graphic::CRenderable* getCurrentRenderable() const
				{
					if (this->_gRef != NULL && this->m_getCurrentRenderable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCurrentRenderable_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CRenderable *__values1 = (const EarthView::World::Graphic::CRenderable*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getCurrentRenderable();
					}
				}
				virtual const EarthView::World::Graphic::CPass* getCurrentPass() const
				{
					if (this->_gRef != NULL && this->m_getCurrentPass_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCurrentPass_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CPass *__values1 = (const EarthView::World::Graphic::CPass*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getCurrentPass();
					}
				}
				virtual EarthView::World::Spatial::Math::CVector4 getTextureSize(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getTextureSize_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getTextureSize_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector4 __values1 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getTextureSize(index);
					}
				}
				virtual EarthView::World::Spatial::Math::CVector4 getInverseTextureSize(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getInverseTextureSize_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getInverseTextureSize_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector4 __values1 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getInverseTextureSize(index);
					}
				}
				virtual EarthView::World::Spatial::Math::CVector4 getPackedTextureSize(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getPackedTextureSize_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getPackedTextureSize_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector4 __values1 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getPackedTextureSize(index);
					}
				}
				virtual Real getShadowExtrusionDistance() const
				{
					if (this->_gRef != NULL && this->m_getShadowExtrusionDistance_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getShadowExtrusionDistance_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getShadowExtrusionDistance();
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector4& getSceneDepthRange() const
				{
					if (this->_gRef != NULL && this->m_getSceneDepthRange_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSceneDepthRange_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector4 &__values1 = *(const EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSceneDepthRange();
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector4& getShadowSceneDepthRange(ev_size_t index) const
				{
					if (this->_gRef != NULL && this->m_getShadowSceneDepthRange_ev_size_t_callback != "" && this->isCustomExtend())
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
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getShadowSceneDepthRange_ev_size_t_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector4 &__values1 = *(const EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getShadowSceneDepthRange(index);
					}
				}
				virtual const EarthView::World::Graphic::CColourValue& getShadowColour() const
				{
					if (this->_gRef != NULL && this->m_getShadowColour_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getShadowColour_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::CColourValue &__values1 = *(const EarthView::World::Graphic::CColourValue*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getShadowColour();
					}
				}
				virtual const Real getShadowColorRRatio() const
				{
					if (this->_gRef != NULL && this->m_getShadowColorRRatio_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getShadowColorRRatio_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getShadowColorRRatio();
					}
				}
				virtual const Real getShadowColorGRatio() const
				{
					if (this->_gRef != NULL && this->m_getShadowColorGRatio_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getShadowColorGRatio_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getShadowColorGRatio();
					}
				}
				virtual const Real getShadowColorBRatio() const
				{
					if (this->_gRef != NULL && this->m_getShadowColorBRatio_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getShadowColorBRatio_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getShadowColorBRatio();
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getInverseViewProjMatrix() const
				{
					if (this->_gRef != NULL && this->m_getInverseViewProjMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getInverseViewProjMatrix_void_callback");
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
						return this->CAutoParamDataSource::getInverseViewProjMatrix();
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getInverseTransposeViewProjMatrix() const
				{
					if (this->_gRef != NULL && this->m_getInverseTransposeViewProjMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getInverseTransposeViewProjMatrix_void_callback");
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
						return this->CAutoParamDataSource::getInverseTransposeViewProjMatrix();
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getTransposeViewProjMatrix() const
				{
					if (this->_gRef != NULL && this->m_getTransposeViewProjMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTransposeViewProjMatrix_void_callback");
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
						return this->CAutoParamDataSource::getTransposeViewProjMatrix();
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getTransposeViewMatrix() const
				{
					if (this->_gRef != NULL && this->m_getTransposeViewMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTransposeViewMatrix_void_callback");
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
						return this->CAutoParamDataSource::getTransposeViewMatrix();
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getInverseTransposeViewMatrix() const
				{
					if (this->_gRef != NULL && this->m_getInverseTransposeViewMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getInverseTransposeViewMatrix_void_callback");
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
						return this->CAutoParamDataSource::getInverseTransposeViewMatrix();
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getTransposeProjectionMatrix() const
				{
					if (this->_gRef != NULL && this->m_getTransposeProjectionMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTransposeProjectionMatrix_void_callback");
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
						return this->CAutoParamDataSource::getTransposeProjectionMatrix();
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getInverseProjectionMatrix() const
				{
					if (this->_gRef != NULL && this->m_getInverseProjectionMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getInverseProjectionMatrix_void_callback");
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
						return this->CAutoParamDataSource::getInverseProjectionMatrix();
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getInverseTransposeProjectionMatrix() const
				{
					if (this->_gRef != NULL && this->m_getInverseTransposeProjectionMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getInverseTransposeProjectionMatrix_void_callback");
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
						return this->CAutoParamDataSource::getInverseTransposeProjectionMatrix();
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getTransposeWorldViewProjMatrix() const
				{
					if (this->_gRef != NULL && this->m_getTransposeWorldViewProjMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTransposeWorldViewProjMatrix_void_callback");
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
						return this->CAutoParamDataSource::getTransposeWorldViewProjMatrix();
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getInverseWorldViewProjMatrix() const
				{
					if (this->_gRef != NULL && this->m_getInverseWorldViewProjMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getInverseWorldViewProjMatrix_void_callback");
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
						return this->CAutoParamDataSource::getInverseWorldViewProjMatrix();
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getInverseTransposeWorldViewProjMatrix() const
				{
					if (this->_gRef != NULL && this->m_getInverseTransposeWorldViewProjMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getInverseTransposeWorldViewProjMatrix_void_callback");
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
						return this->CAutoParamDataSource::getInverseTransposeWorldViewProjMatrix();
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getTransposeWorldViewMatrix() const
				{
					if (this->_gRef != NULL && this->m_getTransposeWorldViewMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTransposeWorldViewMatrix_void_callback");
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
						return this->CAutoParamDataSource::getTransposeWorldViewMatrix();
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getTransposeWorldMatrix() const
				{
					if (this->_gRef != NULL && this->m_getTransposeWorldMatrix_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTransposeWorldMatrix_void_callback");
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
						return this->CAutoParamDataSource::getTransposeWorldMatrix();
					}
				}
				virtual Real getTime() const
				{
					if (this->_gRef != NULL && this->m_getTime_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getTime_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getTime();
					}
				}
				virtual Real getTime_0_X(Real x) const
				{
					if (this->_gRef != NULL && this->m_getTime_0_X_Real_callback != "" && this->isCustomExtend())
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
						jdouble x_j = (jdouble) x;
						jmethodID __method = __gr->getMethod("getTime_0_X_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , x_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getTime_0_X(x);
					}
				}
				virtual Real getCosTime_0_X(Real x) const
				{
					if (this->_gRef != NULL && this->m_getCosTime_0_X_Real_callback != "" && this->isCustomExtend())
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
						jdouble x_j = (jdouble) x;
						jmethodID __method = __gr->getMethod("getCosTime_0_X_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , x_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getCosTime_0_X(x);
					}
				}
				virtual Real getSinTime_0_X(Real x) const
				{
					if (this->_gRef != NULL && this->m_getSinTime_0_X_Real_callback != "" && this->isCustomExtend())
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
						jdouble x_j = (jdouble) x;
						jmethodID __method = __gr->getMethod("getSinTime_0_X_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , x_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSinTime_0_X(x);
					}
				}
				virtual Real getTanTime_0_X(Real x) const
				{
					if (this->_gRef != NULL && this->m_getTanTime_0_X_Real_callback != "" && this->isCustomExtend())
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
						jdouble x_j = (jdouble) x;
						jmethodID __method = __gr->getMethod("getTanTime_0_X_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , x_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getTanTime_0_X(x);
					}
				}
				virtual EarthView::World::Spatial::Math::CVector4 getTime_0_X_packed(Real x) const
				{
					if (this->_gRef != NULL && this->m_getTime_0_X_packed_Real_callback != "" && this->isCustomExtend())
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
						jdouble x_j = (jdouble) x;
						jmethodID __method = __gr->getMethod("getTime_0_X_packed_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , x_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector4 __values1 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getTime_0_X_packed(x);
					}
				}
				virtual Real getTime_0_1(Real x) const
				{
					if (this->_gRef != NULL && this->m_getTime_0_1_Real_callback != "" && this->isCustomExtend())
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
						jdouble x_j = (jdouble) x;
						jmethodID __method = __gr->getMethod("getTime_0_1_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , x_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getTime_0_1(x);
					}
				}
				virtual Real getCosTime_0_1(Real x) const
				{
					if (this->_gRef != NULL && this->m_getCosTime_0_1_Real_callback != "" && this->isCustomExtend())
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
						jdouble x_j = (jdouble) x;
						jmethodID __method = __gr->getMethod("getCosTime_0_1_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , x_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getCosTime_0_1(x);
					}
				}
				virtual Real getSinTime_0_1(Real x) const
				{
					if (this->_gRef != NULL && this->m_getSinTime_0_1_Real_callback != "" && this->isCustomExtend())
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
						jdouble x_j = (jdouble) x;
						jmethodID __method = __gr->getMethod("getSinTime_0_1_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , x_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSinTime_0_1(x);
					}
				}
				virtual Real getTanTime_0_1(Real x) const
				{
					if (this->_gRef != NULL && this->m_getTanTime_0_1_Real_callback != "" && this->isCustomExtend())
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
						jdouble x_j = (jdouble) x;
						jmethodID __method = __gr->getMethod("getTanTime_0_1_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , x_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getTanTime_0_1(x);
					}
				}
				virtual EarthView::World::Spatial::Math::CVector4 getTime_0_1_packed(Real x) const
				{
					if (this->_gRef != NULL && this->m_getTime_0_1_packed_Real_callback != "" && this->isCustomExtend())
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
						jdouble x_j = (jdouble) x;
						jmethodID __method = __gr->getMethod("getTime_0_1_packed_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , x_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector4 __values1 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getTime_0_1_packed(x);
					}
				}
				virtual Real getTime_0_2Pi(Real x) const
				{
					if (this->_gRef != NULL && this->m_getTime_0_2Pi_Real_callback != "" && this->isCustomExtend())
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
						jdouble x_j = (jdouble) x;
						jmethodID __method = __gr->getMethod("getTime_0_2Pi_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , x_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getTime_0_2Pi(x);
					}
				}
				virtual Real getCosTime_0_2Pi(Real x) const
				{
					if (this->_gRef != NULL && this->m_getCosTime_0_2Pi_Real_callback != "" && this->isCustomExtend())
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
						jdouble x_j = (jdouble) x;
						jmethodID __method = __gr->getMethod("getCosTime_0_2Pi_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , x_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getCosTime_0_2Pi(x);
					}
				}
				virtual Real getSinTime_0_2Pi(Real x) const
				{
					if (this->_gRef != NULL && this->m_getSinTime_0_2Pi_Real_callback != "" && this->isCustomExtend())
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
						jdouble x_j = (jdouble) x;
						jmethodID __method = __gr->getMethod("getSinTime_0_2Pi_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , x_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSinTime_0_2Pi(x);
					}
				}
				virtual Real getTanTime_0_2Pi(Real x) const
				{
					if (this->_gRef != NULL && this->m_getTanTime_0_2Pi_Real_callback != "" && this->isCustomExtend())
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
						jdouble x_j = (jdouble) x;
						jmethodID __method = __gr->getMethod("getTanTime_0_2Pi_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , x_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getTanTime_0_2Pi(x);
					}
				}
				virtual EarthView::World::Spatial::Math::CVector4 getTime_0_2Pi_packed(Real x) const
				{
					if (this->_gRef != NULL && this->m_getTime_0_2Pi_packed_Real_callback != "" && this->isCustomExtend())
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
						jdouble x_j = (jdouble) x;
						jmethodID __method = __gr->getMethod("getTime_0_2Pi_packed_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , x_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector4 __values1 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getTime_0_2Pi_packed(x);
					}
				}
				virtual Real getFrameTime() const
				{
					if (this->_gRef != NULL && this->m_getFrameTime_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFrameTime_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getFrameTime();
					}
				}
				virtual Real getFPS() const
				{
					if (this->_gRef != NULL && this->m_getFPS_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFPS_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getFPS();
					}
				}
				virtual Real getViewportWidth() const
				{
					if (this->_gRef != NULL && this->m_getViewportWidth_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getViewportWidth_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getViewportWidth();
					}
				}
				virtual Real getViewportHeight() const
				{
					if (this->_gRef != NULL && this->m_getViewportHeight_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getViewportHeight_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getViewportHeight();
					}
				}
				virtual Real getInverseViewportWidth() const
				{
					if (this->_gRef != NULL && this->m_getInverseViewportWidth_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getInverseViewportWidth_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getInverseViewportWidth();
					}
				}
				virtual Real getInverseViewportHeight() const
				{
					if (this->_gRef != NULL && this->m_getInverseViewportHeight_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getInverseViewportHeight_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getInverseViewportHeight();
					}
				}
				virtual EarthView::World::Spatial::Math::CVector3 getViewDirection() const
				{
					if (this->_gRef != NULL && this->m_getViewDirection_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getViewDirection_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector3 __values1 = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getViewDirection();
					}
				}
				virtual EarthView::World::Spatial::Math::CVector3 getViewSideVector() const
				{
					if (this->_gRef != NULL && this->m_getViewSideVector_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getViewSideVector_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector3 __values1 = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getViewSideVector();
					}
				}
				virtual EarthView::World::Spatial::Math::CVector3 getViewUpVector() const
				{
					if (this->_gRef != NULL && this->m_getViewUpVector_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getViewUpVector_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector3 __values1 = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getViewUpVector();
					}
				}
				virtual Real getFOV() const
				{
					if (this->_gRef != NULL && this->m_getFOV_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFOV_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getFOV();
					}
				}
				virtual Real getNearClipDistance() const
				{
					if (this->_gRef != NULL && this->m_getNearClipDistance_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNearClipDistance_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getNearClipDistance();
					}
				}
				virtual Real getFarClipDistance() const
				{
					if (this->_gRef != NULL && this->m_getFarClipDistance_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getFarClipDistance_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getFarClipDistance();
					}
				}
				virtual ev_int32 getPassNumber() const
				{
					if (this->_gRef != NULL && this->m_getPassNumber_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getPassNumber_void_callback");
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
						return this->CAutoParamDataSource::getPassNumber();
					}
				}
				virtual void setPassNumber(const ev_int32 passNumber)
				{
					if (this->_gRef != NULL && this->m_setPassNumber_ev_int32_callback != "" && this->isCustomExtend())
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
						jint passNumber_j = (jint) passNumber;
						jmethodID __method = __gr->getMethod("setPassNumber_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , passNumber_j);
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
						return this->CAutoParamDataSource::setPassNumber(passNumber);
					}
				}
				virtual void incPassNumber()
				{
					if (this->_gRef != NULL && this->m_incPassNumber_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("incPassNumber_void_callback");
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
						return this->CAutoParamDataSource::incPassNumber();
					}
				}
				virtual void updateLightCustomGpuParameter(const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry& constantEntry, EarthView::World::Graphic::CGpuProgramParameters* params) const
				{
					if (this->_gRef != NULL && this->m_updateLightCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback != "" && this->isCustomExtend())
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
						jlong constantEntry_j = (jlong) &constantEntry;
						jlong params_j = (jlong) params;
						jmethodID __method = __gr->getMethod("updateLightCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback");
						__env->CallVoidMethod(__obj, __method , constantEntry_j, params_j);
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
						return this->CAutoParamDataSource::updateLightCustomGpuParameter(constantEntry, params);
					}
				}
				virtual Real getIsSoftShadowOpen() const
				{
					if (this->_gRef != NULL && this->m_getIsSoftShadowOpen_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getIsSoftShadowOpen_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getIsSoftShadowOpen();
					}
				}
				virtual Real getSoftShadowNearCilp() const
				{
					if (this->_gRef != NULL && this->m_getSoftShadowNearCilp_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSoftShadowNearCilp_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSoftShadowNearCilp();
					}
				}
				virtual Real getSoftShadowFarCilp() const
				{
					if (this->_gRef != NULL && this->m_getSoftShadowFarCilp_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSoftShadowFarCilp_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSoftShadowFarCilp();
					}
				}
				virtual Real getSoftShadowNearCilp(ev_uint8 index) const
				{
					if (this->_gRef != NULL && this->m_getSoftShadowNearCilp_ev_uint8_callback != "" && this->isCustomExtend())
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
						jshort index_j = (jshort) index;
						jmethodID __method = __gr->getMethod("getSoftShadowNearCilp_ev_uint8_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSoftShadowNearCilp(index);
					}
				}
				virtual Real getSoftShadowFarCilp(ev_uint8 index) const
				{
					if (this->_gRef != NULL && this->m_getSoftShadowFarCilp_ev_uint8_callback != "" && this->isCustomExtend())
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
						jshort index_j = (jshort) index;
						jmethodID __method = __gr->getMethod("getSoftShadowFarCilp_ev_uint8_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSoftShadowFarCilp(index);
					}
				}
				virtual EarthView::World::Spatial::Math::CVector4 getCascadeEyeSpaceDepth() const
				{
					if (this->_gRef != NULL && this->m_getCascadeEyeSpaceDepth_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getCascadeEyeSpaceDepth_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CVector4 __values1 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getCascadeEyeSpaceDepth();
					}
				}
				virtual Real getSoftShadowLightBleedPower() const
				{
					if (this->_gRef != NULL && this->m_getSoftShadowLightBleedPower_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSoftShadowLightBleedPower_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSoftShadowLightBleedPower();
					}
				}
				virtual Real getSoftShadowDepthOffset() const
				{
					if (this->_gRef != NULL && this->m_getSoftShadowDepthOffset_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSoftShadowDepthOffset_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSoftShadowDepthOffset();
					}
				}
				virtual Real getSoftShadowNormalFactor() const
				{
					if (this->_gRef != NULL && this->m_getSoftShadowNormalFactor_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getSoftShadowNormalFactor_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAutoParamDataSource::getSoftShadowNormalFactor();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCAutoParamDataSourceProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setCurrentRenderable_1CRenderable(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_rend_j)
			{
				const EarthView::World::Graphic::CRenderable *ref_rend = (const EarthView::World::Graphic::CRenderable*) ref_rend_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setCurrentRenderable(ref_rend);
				}
				else
				{
					pObjectX->setCurrentRenderable(ref_rend);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1setCurrentRenderable_1CRenderable(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCurrentRenderable_CRenderable_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCurrentRenderable_CRenderable_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setCurrentRenderable_1CRenderable_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_rend_j)
			{
				const EarthView::World::Graphic::CRenderable *ref_rend = (const EarthView::World::Graphic::CRenderable*) ref_rend_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setCurrentRenderable(ref_rend);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setWorldMatrices_1CMatrix4_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_m_j, jlong count_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 *ref_m = (const EarthView::World::Spatial::Math::CMatrix4*) ref_m_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setWorldMatrices(ref_m, count);
				}
				else
				{
					pObjectX->setWorldMatrices(ref_m, count);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1setWorldMatrices_1CMatrix4_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setWorldMatrices_CMatrix4_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setWorldMatrices_CMatrix4_ev_size_t_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setWorldMatrices_1CMatrix4_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_m_j, jlong count_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 *ref_m = (const EarthView::World::Spatial::Math::CMatrix4*) ref_m_j;
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setWorldMatrices(ref_m, count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setCurrentCamera_1CCamera_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cam_j, jboolean useCameraRelative_j)
			{
				const EarthView::World::Graphic::CCamera *ref_cam = (const EarthView::World::Graphic::CCamera*) ref_cam_j;
				ev_bool useCameraRelative = (ev_bool) useCameraRelative_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setCurrentCamera(ref_cam, useCameraRelative);
				}
				else
				{
					pObjectX->setCurrentCamera(ref_cam, useCameraRelative);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1setCurrentCamera_1CCamera_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCurrentCamera_CCamera_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCurrentCamera_CCamera_ev_bool_callback", "(JZ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setCurrentCamera_1CCamera_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cam_j, jboolean useCameraRelative_j)
			{
				const EarthView::World::Graphic::CCamera *ref_cam = (const EarthView::World::Graphic::CCamera*) ref_cam_j;
				ev_bool useCameraRelative = (ev_bool) useCameraRelative_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setCurrentCamera(ref_cam, useCameraRelative);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setCurrentLightList_1LightList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_ll_j)
			{
				const EarthView::World::Graphic::LightList *ref_ll = (const EarthView::World::Graphic::LightList*) ref_ll_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setCurrentLightList(ref_ll);
				}
				else
				{
					pObjectX->setCurrentLightList(ref_ll);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1setCurrentLightList_1LightList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCurrentLightList_LightList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCurrentLightList_LightList_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setCurrentLightList_1LightList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_ll_j)
			{
				const EarthView::World::Graphic::LightList *ref_ll = (const EarthView::World::Graphic::LightList*) ref_ll_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setCurrentLightList(ref_ll);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setTextureProjector_1CFrustum_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_frust_j, jlong index_j)
			{
				const EarthView::World::Graphic::CFrustum *ref_frust = (const EarthView::World::Graphic::CFrustum*) ref_frust_j;
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setTextureProjector(ref_frust, index);
				}
				else
				{
					pObjectX->setTextureProjector(ref_frust, index);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1setTextureProjector_1CFrustum_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setTextureProjector_CFrustum_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setTextureProjector_CFrustum_ev_size_t_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setTextureProjector_1CFrustum_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_frust_j, jlong index_j)
			{
				const EarthView::World::Graphic::CFrustum *ref_frust = (const EarthView::World::Graphic::CFrustum*) ref_frust_j;
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setTextureProjector(ref_frust, index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setCurrentRenderTarget_1CRenderTarget(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_target_j)
			{
				const EarthView::World::Graphic::CRenderTarget *ref_target = (const EarthView::World::Graphic::CRenderTarget*) ref_target_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setCurrentRenderTarget(ref_target);
				}
				else
				{
					pObjectX->setCurrentRenderTarget(ref_target);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1setCurrentRenderTarget_1CRenderTarget(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCurrentRenderTarget_CRenderTarget_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCurrentRenderTarget_CRenderTarget_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setCurrentRenderTarget_1CRenderTarget_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_target_j)
			{
				const EarthView::World::Graphic::CRenderTarget *ref_target = (const EarthView::World::Graphic::CRenderTarget*) ref_target_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setCurrentRenderTarget(ref_target);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setCurrentViewport_1CViewport(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_viewport_j)
			{
				const EarthView::World::Graphic::CViewport *ref_viewport = (const EarthView::World::Graphic::CViewport*) ref_viewport_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setCurrentViewport(ref_viewport);
				}
				else
				{
					pObjectX->setCurrentViewport(ref_viewport);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1setCurrentViewport_1CViewport(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCurrentViewport_CViewport_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCurrentViewport_CViewport_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setCurrentViewport_1CViewport_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_viewport_j)
			{
				const EarthView::World::Graphic::CViewport *ref_viewport = (const EarthView::World::Graphic::CViewport*) ref_viewport_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setCurrentViewport(ref_viewport);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setShadowDirLightExtrusionDistance_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dist_j)
			{
				Real dist = (Real) dist_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setShadowDirLightExtrusionDistance(dist);
				}
				else
				{
					pObjectX->setShadowDirLightExtrusionDistance(dist);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1setShadowDirLightExtrusionDistance_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setShadowDirLightExtrusionDistance_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setShadowDirLightExtrusionDistance_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setShadowDirLightExtrusionDistance_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dist_j)
			{
				Real dist = (Real) dist_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setShadowDirLightExtrusionDistance(dist);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setMainCamBoundsInfo_1VisibleObjectsBoundsInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_info_j)
			{
				EarthView::World::Graphic::VisibleObjectsBoundsInfo *ref_info = (EarthView::World::Graphic::VisibleObjectsBoundsInfo*) ref_info_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setMainCamBoundsInfo(ref_info);
				}
				else
				{
					pObjectX->setMainCamBoundsInfo(ref_info);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1setMainCamBoundsInfo_1VisibleObjectsBoundsInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMainCamBoundsInfo_VisibleObjectsBoundsInfo_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMainCamBoundsInfo_VisibleObjectsBoundsInfo_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setMainCamBoundsInfo_1VisibleObjectsBoundsInfo_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_info_j)
			{
				EarthView::World::Graphic::VisibleObjectsBoundsInfo *ref_info = (EarthView::World::Graphic::VisibleObjectsBoundsInfo*) ref_info_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setMainCamBoundsInfo(ref_info);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setCurrentSceneManager_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_sm_j)
			{
				const EarthView::World::Graphic::CSceneManager *ref_sm = (const EarthView::World::Graphic::CSceneManager*) ref_sm_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setCurrentSceneManager(ref_sm);
				}
				else
				{
					pObjectX->setCurrentSceneManager(ref_sm);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1setCurrentSceneManager_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCurrentSceneManager_CSceneManager_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCurrentSceneManager_CSceneManager_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setCurrentSceneManager_1CSceneManager_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_sm_j)
			{
				const EarthView::World::Graphic::CSceneManager *ref_sm = (const EarthView::World::Graphic::CSceneManager*) ref_sm_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setCurrentSceneManager(ref_sm);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setCurrentPass_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pass_j)
			{
				const EarthView::World::Graphic::CPass *ref_pass = (const EarthView::World::Graphic::CPass*) ref_pass_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setCurrentPass(ref_pass);
				}
				else
				{
					pObjectX->setCurrentPass(ref_pass);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1setCurrentPass_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCurrentPass_CPass_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCurrentPass_CPass_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setCurrentPass_1CPass_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pass_j)
			{
				const EarthView::World::Graphic::CPass *ref_pass = (const EarthView::World::Graphic::CPass*) ref_pass_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setCurrentPass(ref_pass);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getWorldMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getWorldMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getWorldMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getWorldMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getWorldMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getWorldMatrix();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getWorldMatrixArray_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4* __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getWorldMatrixArray();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4* __values1 = pObjectX->getWorldMatrixArray();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getWorldMatrixArray_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldMatrixArray_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldMatrixArray_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getWorldMatrixArray_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4* __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getWorldMatrixArray();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getWorldMatrixCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getWorldMatrixCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->getWorldMatrixCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getWorldMatrixCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldMatrixCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldMatrixCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getWorldMatrixCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getWorldMatrixCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getViewMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getViewMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getViewMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getViewMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getViewMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getViewMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getViewMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getViewMatrix();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getViewProjectionMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getViewProjectionMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getViewProjectionMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getViewProjectionMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getViewProjectionMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getViewProjectionMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getViewProjectionMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getViewProjectionMatrix();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getProjectionMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getProjectionMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getProjectionMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getProjectionMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getProjectionMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getProjectionMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getProjectionMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getProjectionMatrix();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getWorldViewProjMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getWorldViewProjMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getWorldViewProjMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getWorldViewProjMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldViewProjMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldViewProjMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getWorldViewProjMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getWorldViewProjMatrix();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getWorldViewMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getWorldViewMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getWorldViewMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getWorldViewMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWorldViewMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWorldViewMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getWorldViewMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getWorldViewMatrix();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseWorldMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseWorldMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getInverseWorldMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getInverseWorldMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInverseWorldMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInverseWorldMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseWorldMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseWorldMatrix();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseWorldViewMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseWorldViewMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getInverseWorldViewMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getInverseWorldViewMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInverseWorldViewMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInverseWorldViewMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseWorldViewMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseWorldViewMatrix();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseViewMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseViewMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getInverseViewMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getInverseViewMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInverseViewMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInverseViewMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseViewMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseViewMatrix();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseTransposeWorldMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseTransposeWorldMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getInverseTransposeWorldMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getInverseTransposeWorldMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInverseTransposeWorldMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInverseTransposeWorldMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseTransposeWorldMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseTransposeWorldMatrix();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseTransposeWorldViewMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseTransposeWorldViewMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getInverseTransposeWorldViewMatrix();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getInverseTransposeWorldViewMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInverseTransposeWorldViewMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInverseTransposeWorldViewMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseTransposeWorldViewMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseTransposeWorldViewMatrix();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCameraPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCameraPosition();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->getCameraPosition();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getCameraPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCameraPosition_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCameraPosition_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCameraPosition_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCameraPosition();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCameraRelativePosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCameraRelativePosition();
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->getCameraRelativePosition();
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getCameraRelativePosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCameraRelativePosition_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCameraRelativePosition_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCameraRelativePosition_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCameraRelativePosition();
				EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCameraPositionObjectSpace_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCameraPositionObjectSpace();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->getCameraPositionObjectSpace();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getCameraPositionObjectSpace_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCameraPositionObjectSpace_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCameraPositionObjectSpace_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCameraPositionObjectSpace_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCameraPositionObjectSpace();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLodCameraPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLodCameraPosition();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->getLodCameraPosition();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getLodCameraPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLodCameraPosition_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLodCameraPosition_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLodCameraPosition_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLodCameraPosition();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLodCameraPositionObjectSpace_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLodCameraPositionObjectSpace();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->getLodCameraPositionObjectSpace();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getLodCameraPositionObjectSpace_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLodCameraPositionObjectSpace_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLodCameraPositionObjectSpace_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLodCameraPositionObjectSpace_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLodCameraPositionObjectSpace();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_hasLightList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::hasLightList();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasLightList();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1hasLightList_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasLightList_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasLightList_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_hasLightList_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::hasLightList();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightNumber_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightNumber(index);
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				else
				{
					ev_real32 __values1 = pObjectX->getLightNumber(index);
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getLightNumber_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLightNumber_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLightNumber_ev_size_t_callback", "(J)F");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightNumber_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightNumber(index);
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightCount();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				else
				{
					ev_real32 __values1 = pObjectX->getLightCount();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getLightCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLightCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLightCount_void_callback", "()F");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightCount();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightingEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightingEnabled();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				else
				{
					ev_real32 __values1 = pObjectX->getLightingEnabled();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getLightingEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLightingEnabled_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLightingEnabled_void_callback", "()F");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightingEnabled_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightingEnabled();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightCastsShadows_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightCastsShadows(index);
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				else
				{
					ev_real32 __values1 = pObjectX->getLightCastsShadows(index);
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getLightCastsShadows_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLightCastsShadows_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLightCastsShadows_ev_size_t_callback", "(J)F");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightCastsShadows_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightCastsShadows(index);
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightDiffuseColour_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightDiffuseColour(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getLightDiffuseColour(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getLightDiffuseColour_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLightDiffuseColour_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLightDiffuseColour_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightDiffuseColour_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightDiffuseColour(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightSpecularColour_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightSpecularColour(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getLightSpecularColour(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getLightSpecularColour_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLightSpecularColour_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLightSpecularColour_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightSpecularColour_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightSpecularColour(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightDiffuseColourWithPower_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Graphic::CColourValue __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightDiffuseColourWithPower(index);
					EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CColourValue __values1 = pObjectX->getLightDiffuseColourWithPower(index);
					EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getLightDiffuseColourWithPower_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLightDiffuseColourWithPower_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLightDiffuseColourWithPower_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightDiffuseColourWithPower_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightDiffuseColourWithPower(index);
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightSpecularColourWithPower_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Graphic::CColourValue __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightSpecularColourWithPower(index);
					EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CColourValue __values1 = pObjectX->getLightSpecularColourWithPower(index);
					EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getLightSpecularColourWithPower_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLightSpecularColourWithPower_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLightSpecularColourWithPower_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightSpecularColourWithPower_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightSpecularColourWithPower(index);
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightPosition_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightPosition(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getLightPosition(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getLightPosition_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLightPosition_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLightPosition_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightPosition_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightPosition(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightAs4DVector_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightAs4DVector(index);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->getLightAs4DVector(index);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getLightAs4DVector_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLightAs4DVector_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLightAs4DVector_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightAs4DVector_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightAs4DVector(index);
				EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightDirection_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightDirection(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getLightDirection(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getLightDirection_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLightDirection_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLightDirection_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightDirection_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightDirection(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightPowerScale_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightPowerScale(index);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getLightPowerScale(index);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getLightPowerScale_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLightPowerScale_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLightPowerScale_ev_size_t_callback", "(J)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightPowerScale_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightPowerScale(index);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightAttenuation_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightAttenuation(index);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->getLightAttenuation(index);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getLightAttenuation_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLightAttenuation_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLightAttenuation_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getLightAttenuation_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getLightAttenuation(index);
				EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSpotlightParams_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSpotlightParams(index);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->getSpotlightParams(index);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSpotlightParams_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSpotlightParams_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSpotlightParams_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSpotlightParams_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSpotlightParams(index);
				EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setAmbientLightColour_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ambient_j)
			{
				const EarthView::World::Graphic::CColourValue &ambient = *(EarthView::World::Graphic::CColourValue*) ambient_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setAmbientLightColour(ambient);
				}
				else
				{
					pObjectX->setAmbientLightColour(ambient);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1setAmbientLightColour_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAmbientLightColour_CColourValue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAmbientLightColour_CColourValue_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setAmbientLightColour_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ambient_j)
			{
				const EarthView::World::Graphic::CColourValue &ambient = *(EarthView::World::Graphic::CColourValue*) ambient_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setAmbientLightColour(ambient);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getAmbientLightColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getAmbientLightColour();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getAmbientLightColour();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getAmbientLightColour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAmbientLightColour_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAmbientLightColour_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getAmbientLightColour_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getAmbientLightColour();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSurfaceAmbientColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSurfaceAmbientColour();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getSurfaceAmbientColour();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSurfaceAmbientColour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSurfaceAmbientColour_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSurfaceAmbientColour_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSurfaceAmbientColour_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSurfaceAmbientColour();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSurfaceDiffuseColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSurfaceDiffuseColour();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getSurfaceDiffuseColour();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSurfaceDiffuseColour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSurfaceDiffuseColour_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSurfaceDiffuseColour_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSurfaceDiffuseColour_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSurfaceDiffuseColour();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSurfaceSpecularColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSurfaceSpecularColour();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getSurfaceSpecularColour();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSurfaceSpecularColour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSurfaceSpecularColour_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSurfaceSpecularColour_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSurfaceSpecularColour_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSurfaceSpecularColour();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSurfaceEmissiveColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSurfaceEmissiveColour();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getSurfaceEmissiveColour();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSurfaceEmissiveColour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSurfaceEmissiveColour_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSurfaceEmissiveColour_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSurfaceEmissiveColour_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSurfaceEmissiveColour();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSurfaceShininess_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSurfaceShininess();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getSurfaceShininess();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSurfaceShininess_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSurfaceShininess_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSurfaceShininess_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSurfaceShininess_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSurfaceShininess();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getVertexColourTracking_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getVertexColourTracking();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				else
				{
					ev_real32 __values1 = pObjectX->getVertexColourTracking();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getVertexColourTracking_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getVertexColourTracking_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getVertexColourTracking_void_callback", "()F");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getVertexColourTracking_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				ev_real32 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getVertexColourTracking();
				jfloat __values1_j = (jfloat)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getDerivedAmbientLightColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Graphic::CColourValue __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getDerivedAmbientLightColour();
					EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CColourValue __values1 = pObjectX->getDerivedAmbientLightColour();
					EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getDerivedAmbientLightColour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDerivedAmbientLightColour_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDerivedAmbientLightColour_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getDerivedAmbientLightColour_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getDerivedAmbientLightColour();
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getDerivedSceneColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Graphic::CColourValue __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getDerivedSceneColour();
					EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CColourValue __values1 = pObjectX->getDerivedSceneColour();
					EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getDerivedSceneColour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDerivedSceneColour_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDerivedSceneColour_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getDerivedSceneColour_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Graphic::CColourValue __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getDerivedSceneColour();
				EarthView::World::Graphic::CColourValue *returnvalues = new EarthView::World::Graphic::CColourValue(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setFog_1FogMode_1CColourValue_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j, jlong colour_j, jdouble expDensity_j, jdouble linearStart_j, jdouble linearEnd_j)
			{
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real expDensity = (Real) expDensity_j;
				Real linearStart = (Real) linearStart_j;
				Real linearEnd = (Real) linearEnd_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setFog(mode, colour, expDensity, linearStart, linearEnd);
				}
				else
				{
					pObjectX->setFog(mode, colour, expDensity, linearStart, linearEnd);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1setFog_1FogMode_1CColourValue_1Real_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setFog_FogMode_CColourValue_Real_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setFog_FogMode_CColourValue_Real_Real_Real_callback", "(IJDDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setFog_1FogMode_1CColourValue_1Real_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j, jlong colour_j, jdouble expDensity_j, jdouble linearStart_j, jdouble linearEnd_j)
			{
				EarthView::World::Graphic::FogMode mode = (EarthView::World::Graphic::FogMode) mode_j;
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				Real expDensity = (Real) expDensity_j;
				Real linearStart = (Real) linearStart_j;
				Real linearEnd = (Real) linearEnd_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setFog(mode, colour, expDensity, linearStart, linearEnd);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getFogColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getFogColour();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getFogColour();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getFogColour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFogColour_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFogColour_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getFogColour_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getFogColour();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getFogParams_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getFogParams();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->getFogParams();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getFogParams_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFogParams_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFogParams_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getFogParams_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getFogParams();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTextureViewProjMatrix_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTextureViewProjMatrix(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getTextureViewProjMatrix(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTextureViewProjMatrix_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTextureViewProjMatrix_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTextureViewProjMatrix_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTextureViewProjMatrix_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTextureViewProjMatrix(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowTextureViewProjMatrix_1ev_1size_1t_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jint projIndex_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				ev_uint16 projIndex = (ev_uint16) projIndex_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowTextureViewProjMatrix(index, projIndex);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getSoftShadowTextureViewProjMatrix(index, projIndex);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSoftShadowTextureViewProjMatrix_1ev_1size_1t_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSoftShadowTextureViewProjMatrix_ev_size_t_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSoftShadowTextureViewProjMatrix_ev_size_t_ev_uint16_callback", "(JI)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowTextureViewProjMatrix_1ev_1size_1t_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jint projIndex_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				ev_uint16 projIndex = (ev_uint16) projIndex_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowTextureViewProjMatrix(index, projIndex);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowViewProjMatrix_1ev_1size_1t_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jint projIndex_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				ev_uint16 projIndex = (ev_uint16) projIndex_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowViewProjMatrix(index, projIndex);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getSoftShadowViewProjMatrix(index, projIndex);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSoftShadowViewProjMatrix_1ev_1size_1t_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSoftShadowViewProjMatrix_ev_size_t_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSoftShadowViewProjMatrix_ev_size_t_ev_uint16_callback", "(JI)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowViewProjMatrix_1ev_1size_1t_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jint projIndex_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				ev_uint16 projIndex = (ev_uint16) projIndex_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowViewProjMatrix(index, projIndex);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTextureViewMatrix_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTextureViewMatrix(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getTextureViewMatrix(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTextureViewMatrix_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTextureViewMatrix_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTextureViewMatrix_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTextureViewMatrix_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTextureViewMatrix(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTextureWorldViewProjMatrix_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTextureWorldViewProjMatrix(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getTextureWorldViewProjMatrix(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTextureWorldViewProjMatrix_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTextureWorldViewProjMatrix_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTextureWorldViewProjMatrix_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTextureWorldViewProjMatrix_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTextureWorldViewProjMatrix(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSpotlightViewProjMatrix_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSpotlightViewProjMatrix(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getSpotlightViewProjMatrix(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSpotlightViewProjMatrix_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSpotlightViewProjMatrix_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSpotlightViewProjMatrix_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSpotlightViewProjMatrix_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSpotlightViewProjMatrix(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSpotlightWorldViewProjMatrix_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSpotlightWorldViewProjMatrix(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getSpotlightWorldViewProjMatrix(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSpotlightWorldViewProjMatrix_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSpotlightWorldViewProjMatrix_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSpotlightWorldViewProjMatrix_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSpotlightWorldViewProjMatrix_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSpotlightWorldViewProjMatrix(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTextureTransformMatrix_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTextureTransformMatrix(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->getTextureTransformMatrix(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTextureTransformMatrix_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTextureTransformMatrix_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTextureTransformMatrix_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTextureTransformMatrix_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTextureTransformMatrix(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCurrentRenderTarget_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Graphic::CRenderTarget* __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCurrentRenderTarget();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CRenderTarget* __values1 = pObjectX->getCurrentRenderTarget();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getCurrentRenderTarget_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCurrentRenderTarget_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCurrentRenderTarget_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCurrentRenderTarget_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Graphic::CRenderTarget* __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCurrentRenderTarget();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCurrentRenderable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Graphic::CRenderable* __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCurrentRenderable();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CRenderable* __values1 = pObjectX->getCurrentRenderable();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getCurrentRenderable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCurrentRenderable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCurrentRenderable_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCurrentRenderable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Graphic::CRenderable* __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCurrentRenderable();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCurrentPass_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Graphic::CPass* __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCurrentPass();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CPass* __values1 = pObjectX->getCurrentPass();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getCurrentPass_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCurrentPass_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCurrentPass_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCurrentPass_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Graphic::CPass* __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCurrentPass();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTextureSize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTextureSize(index);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->getTextureSize(index);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTextureSize_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTextureSize_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTextureSize_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTextureSize_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTextureSize(index);
				EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseTextureSize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseTextureSize(index);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->getInverseTextureSize(index);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getInverseTextureSize_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInverseTextureSize_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInverseTextureSize_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseTextureSize_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseTextureSize(index);
				EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getPackedTextureSize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getPackedTextureSize(index);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->getPackedTextureSize(index);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getPackedTextureSize_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPackedTextureSize_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPackedTextureSize_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getPackedTextureSize_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getPackedTextureSize(index);
				EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getShadowExtrusionDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getShadowExtrusionDistance();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getShadowExtrusionDistance();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getShadowExtrusionDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getShadowExtrusionDistance_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getShadowExtrusionDistance_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getShadowExtrusionDistance_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getShadowExtrusionDistance();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSceneDepthRange_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSceneDepthRange();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->getSceneDepthRange();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSceneDepthRange_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSceneDepthRange_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSceneDepthRange_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSceneDepthRange_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSceneDepthRange();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getShadowSceneDepthRange_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getShadowSceneDepthRange(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->getShadowSceneDepthRange(index);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getShadowSceneDepthRange_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getShadowSceneDepthRange_ev_size_t_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getShadowSceneDepthRange_ev_size_t_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getShadowSceneDepthRange_1ev_1size_1t_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getShadowSceneDepthRange(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getShadowColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getShadowColour();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getShadowColour();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getShadowColour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getShadowColour_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getShadowColour_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getShadowColour_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getShadowColour();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getShadowColorRRatio_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getShadowColorRRatio();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					const Real __values1 = pObjectX->getShadowColorRRatio();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getShadowColorRRatio_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getShadowColorRRatio_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getShadowColorRRatio_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getShadowColorRRatio_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getShadowColorRRatio();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getShadowColorGRatio_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getShadowColorGRatio();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					const Real __values1 = pObjectX->getShadowColorGRatio();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getShadowColorGRatio_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getShadowColorGRatio_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getShadowColorGRatio_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getShadowColorGRatio_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getShadowColorGRatio();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getShadowColorBRatio_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					const Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getShadowColorBRatio();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					const Real __values1 = pObjectX->getShadowColorBRatio();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getShadowColorBRatio_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getShadowColorBRatio_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getShadowColorBRatio_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getShadowColorBRatio_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				const Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getShadowColorBRatio();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseViewProjMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseViewProjMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getInverseViewProjMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getInverseViewProjMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInverseViewProjMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInverseViewProjMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseViewProjMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseViewProjMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseTransposeViewProjMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseTransposeViewProjMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getInverseTransposeViewProjMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getInverseTransposeViewProjMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInverseTransposeViewProjMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInverseTransposeViewProjMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseTransposeViewProjMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseTransposeViewProjMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTransposeViewProjMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTransposeViewProjMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getTransposeViewProjMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTransposeViewProjMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTransposeViewProjMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTransposeViewProjMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTransposeViewProjMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTransposeViewProjMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTransposeViewMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTransposeViewMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getTransposeViewMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTransposeViewMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTransposeViewMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTransposeViewMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTransposeViewMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTransposeViewMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseTransposeViewMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseTransposeViewMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getInverseTransposeViewMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getInverseTransposeViewMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInverseTransposeViewMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInverseTransposeViewMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseTransposeViewMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseTransposeViewMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTransposeProjectionMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTransposeProjectionMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getTransposeProjectionMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTransposeProjectionMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTransposeProjectionMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTransposeProjectionMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTransposeProjectionMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTransposeProjectionMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseProjectionMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseProjectionMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getInverseProjectionMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getInverseProjectionMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInverseProjectionMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInverseProjectionMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseProjectionMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseProjectionMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseTransposeProjectionMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseTransposeProjectionMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getInverseTransposeProjectionMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getInverseTransposeProjectionMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInverseTransposeProjectionMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInverseTransposeProjectionMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseTransposeProjectionMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseTransposeProjectionMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTransposeWorldViewProjMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTransposeWorldViewProjMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getTransposeWorldViewProjMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTransposeWorldViewProjMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTransposeWorldViewProjMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTransposeWorldViewProjMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTransposeWorldViewProjMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTransposeWorldViewProjMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseWorldViewProjMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseWorldViewProjMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getInverseWorldViewProjMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getInverseWorldViewProjMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInverseWorldViewProjMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInverseWorldViewProjMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseWorldViewProjMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseWorldViewProjMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseTransposeWorldViewProjMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseTransposeWorldViewProjMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getInverseTransposeWorldViewProjMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getInverseTransposeWorldViewProjMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInverseTransposeWorldViewProjMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInverseTransposeWorldViewProjMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseTransposeWorldViewProjMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseTransposeWorldViewProjMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTransposeWorldViewMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTransposeWorldViewMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getTransposeWorldViewMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTransposeWorldViewMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTransposeWorldViewMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTransposeWorldViewMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTransposeWorldViewMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTransposeWorldViewMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTransposeWorldMatrix_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTransposeWorldMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->getTransposeWorldMatrix();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTransposeWorldMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTransposeWorldMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTransposeWorldMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTransposeWorldMatrix_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTransposeWorldMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTime();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getTime();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTime_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTime_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTime_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTime();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTime_10_1X_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTime_0_X(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getTime_0_X(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTime_10_1X_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTime_0_X_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTime_0_X_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTime_10_1X_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTime_0_X(x);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCosTime_10_1X_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCosTime_0_X(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getCosTime_0_X(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getCosTime_10_1X_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCosTime_0_X_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCosTime_0_X_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCosTime_10_1X_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCosTime_0_X(x);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSinTime_10_1X_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSinTime_0_X(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getSinTime_0_X(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSinTime_10_1X_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSinTime_0_X_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSinTime_0_X_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSinTime_10_1X_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSinTime_0_X(x);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTanTime_10_1X_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTanTime_0_X(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getTanTime_0_X(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTanTime_10_1X_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTanTime_0_X_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTanTime_0_X_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTanTime_10_1X_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTanTime_0_X(x);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTime_10_1X_1packed_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTime_0_X_packed(x);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->getTime_0_X_packed(x);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTime_10_1X_1packed_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTime_0_X_packed_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTime_0_X_packed_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTime_10_1X_1packed_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTime_0_X_packed(x);
				EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTime_10_11_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTime_0_1(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getTime_0_1(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTime_10_11_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTime_0_1_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTime_0_1_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTime_10_11_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTime_0_1(x);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCosTime_10_11_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCosTime_0_1(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getCosTime_0_1(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getCosTime_10_11_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCosTime_0_1_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCosTime_0_1_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCosTime_10_11_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCosTime_0_1(x);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSinTime_10_11_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSinTime_0_1(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getSinTime_0_1(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSinTime_10_11_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSinTime_0_1_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSinTime_0_1_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSinTime_10_11_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSinTime_0_1(x);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTanTime_10_11_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTanTime_0_1(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getTanTime_0_1(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTanTime_10_11_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTanTime_0_1_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTanTime_0_1_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTanTime_10_11_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTanTime_0_1(x);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTime_10_11_1packed_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTime_0_1_packed(x);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->getTime_0_1_packed(x);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTime_10_11_1packed_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTime_0_1_packed_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTime_0_1_packed_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTime_10_11_1packed_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTime_0_1_packed(x);
				EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTime_10_12Pi_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTime_0_2Pi(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getTime_0_2Pi(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTime_10_12Pi_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTime_0_2Pi_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTime_0_2Pi_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTime_10_12Pi_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTime_0_2Pi(x);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCosTime_10_12Pi_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCosTime_0_2Pi(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getCosTime_0_2Pi(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getCosTime_10_12Pi_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCosTime_0_2Pi_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCosTime_0_2Pi_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCosTime_10_12Pi_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCosTime_0_2Pi(x);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSinTime_10_12Pi_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSinTime_0_2Pi(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getSinTime_0_2Pi(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSinTime_10_12Pi_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSinTime_0_2Pi_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSinTime_0_2Pi_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSinTime_10_12Pi_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSinTime_0_2Pi(x);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTanTime_10_12Pi_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTanTime_0_2Pi(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getTanTime_0_2Pi(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTanTime_10_12Pi_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTanTime_0_2Pi_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTanTime_0_2Pi_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTanTime_10_12Pi_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTanTime_0_2Pi(x);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTime_10_12Pi_1packed_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTime_0_2Pi_packed(x);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->getTime_0_2Pi_packed(x);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getTime_10_12Pi_1packed_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTime_0_2Pi_packed_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTime_0_2Pi_packed_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getTime_10_12Pi_1packed_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
			{
				Real x = (Real) x_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getTime_0_2Pi_packed(x);
				EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getFrameTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getFrameTime();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getFrameTime();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getFrameTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFrameTime_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFrameTime_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getFrameTime_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getFrameTime();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getFPS_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getFPS();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getFPS();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getFPS_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFPS_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFPS_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getFPS_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getFPS();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getViewportWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getViewportWidth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getViewportWidth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getViewportWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getViewportWidth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getViewportWidth_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getViewportWidth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getViewportWidth();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getViewportHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getViewportHeight();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getViewportHeight();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getViewportHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getViewportHeight_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getViewportHeight_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getViewportHeight_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getViewportHeight();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseViewportWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseViewportWidth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getInverseViewportWidth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getInverseViewportWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInverseViewportWidth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInverseViewportWidth_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseViewportWidth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseViewportWidth();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseViewportHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseViewportHeight();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getInverseViewportHeight();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getInverseViewportHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInverseViewportHeight_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInverseViewportHeight_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getInverseViewportHeight_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getInverseViewportHeight();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getViewDirection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getViewDirection();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getViewDirection();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getViewDirection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getViewDirection_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getViewDirection_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getViewDirection_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getViewDirection();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getViewSideVector_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getViewSideVector();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getViewSideVector();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getViewSideVector_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getViewSideVector_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getViewSideVector_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getViewSideVector_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getViewSideVector();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getViewUpVector_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getViewUpVector();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getViewUpVector();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getViewUpVector_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getViewUpVector_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getViewUpVector_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getViewUpVector_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getViewUpVector();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getFOV_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getFOV();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getFOV();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getFOV_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFOV_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFOV_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getFOV_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getFOV();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getNearClipDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getNearClipDistance();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getNearClipDistance();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getNearClipDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNearClipDistance_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNearClipDistance_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getNearClipDistance_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getNearClipDistance();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getFarClipDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getFarClipDistance();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getFarClipDistance();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getFarClipDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getFarClipDistance_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getFarClipDistance_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getFarClipDistance_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getFarClipDistance();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getPassNumber_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getPassNumber();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getPassNumber();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getPassNumber_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPassNumber_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPassNumber_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getPassNumber_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getPassNumber();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setPassNumber_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint passNumber_j)
			{
				const ev_int32 passNumber = (ev_int32) passNumber_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setPassNumber(passNumber);
				}
				else
				{
					pObjectX->setPassNumber(passNumber);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1setPassNumber_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPassNumber_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPassNumber_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_setPassNumber_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint passNumber_j)
			{
				const ev_int32 passNumber = (ev_int32) passNumber_j;
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAutoParamDataSource::setPassNumber(passNumber);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_incPassNumber_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CAutoParamDataSource::incPassNumber();
				}
				else
				{
					pObjectX->incPassNumber();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1incPassNumber_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_incPassNumber_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"incPassNumber_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_incPassNumber_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAutoParamDataSource::incPassNumber();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_updateLightCustomGpuParameter_1CAutoConstantEntry_1CGpuProgramParameters(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong constantEntry_j, jlong params_j)
			{
				const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry &constantEntry = *(EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*) constantEntry_j;
				EarthView::World::Graphic::CGpuProgramParameters *params = (EarthView::World::Graphic::CGpuProgramParameters*) params_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					pObjectX->EarthView::World::Graphic::CAutoParamDataSource::updateLightCustomGpuParameter(constantEntry, params);
				}
				else
				{
					pObjectX->updateLightCustomGpuParameter(constantEntry, params);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1updateLightCustomGpuParameter_1CAutoConstantEntry_1CGpuProgramParameters(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_updateLightCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"updateLightCustomGpuParameter_CAutoConstantEntry_CGpuProgramParameters_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_updateLightCustomGpuParameter_1CAutoConstantEntry_1CGpuProgramParameters_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong constantEntry_j, jlong params_j)
			{
				const EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry &constantEntry = *(EarthView::World::Graphic::CGpuProgramParameters::CAutoConstantEntry*) constantEntry_j;
				EarthView::World::Graphic::CGpuProgramParameters *params = (EarthView::World::Graphic::CGpuProgramParameters*) params_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAutoParamDataSource::updateLightCustomGpuParameter(constantEntry, params);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getIsSoftShadowOpen_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getIsSoftShadowOpen();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getIsSoftShadowOpen();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getIsSoftShadowOpen_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getIsSoftShadowOpen_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getIsSoftShadowOpen_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getIsSoftShadowOpen_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getIsSoftShadowOpen();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowNearCilp_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowNearCilp();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getSoftShadowNearCilp();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSoftShadowNearCilp_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSoftShadowNearCilp_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSoftShadowNearCilp_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowNearCilp_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowNearCilp();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowFarCilp_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowFarCilp();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getSoftShadowFarCilp();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSoftShadowFarCilp_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSoftShadowFarCilp_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSoftShadowFarCilp_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowFarCilp_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowFarCilp();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowNearCilp_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort index_j)
			{
				ev_uint8 index = (ev_uint8) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowNearCilp(index);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getSoftShadowNearCilp(index);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSoftShadowNearCilp_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSoftShadowNearCilp_ev_uint8_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSoftShadowNearCilp_ev_uint8_callback", "(S)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowNearCilp_1ev_1uint8_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort index_j)
			{
				ev_uint8 index = (ev_uint8) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowNearCilp(index);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowFarCilp_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort index_j)
			{
				ev_uint8 index = (ev_uint8) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowFarCilp(index);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getSoftShadowFarCilp(index);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSoftShadowFarCilp_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSoftShadowFarCilp_ev_uint8_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSoftShadowFarCilp_ev_uint8_callback", "(S)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowFarCilp_1ev_1uint8_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort index_j)
			{
				ev_uint8 index = (ev_uint8) index_j;
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowFarCilp(index);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCascadeEyeSpaceDepth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCascadeEyeSpaceDepth();
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->getCascadeEyeSpaceDepth();
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getCascadeEyeSpaceDepth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCascadeEyeSpaceDepth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCascadeEyeSpaceDepth_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getCascadeEyeSpaceDepth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getCascadeEyeSpaceDepth();
				EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowLightBleedPower_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowLightBleedPower();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getSoftShadowLightBleedPower();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSoftShadowLightBleedPower_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSoftShadowLightBleedPower_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSoftShadowLightBleedPower_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowLightBleedPower_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowLightBleedPower();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowDepthOffset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowDepthOffset();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getSoftShadowDepthOffset();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSoftShadowDepthOffset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSoftShadowDepthOffset_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSoftShadowDepthOffset_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowDepthOffset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowDepthOffset();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowNormalFactor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAutoParamDataSourceProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowNormalFactor();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getSoftShadowNormalFactor();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_register_1getSoftShadowNormalFactor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAutoParamDataSourceProxy *pObjectX = (JCAutoParamDataSourceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSoftShadowNormalFactor_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSoftShadowNormalFactor_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AutoParamDataSource_getSoftShadowNormalFactor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAutoParamDataSource *pObjectX = (EarthView::World::Graphic::CAutoParamDataSource*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAutoParamDataSource::getSoftShadowNormalFactor();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
		}
	}
}
