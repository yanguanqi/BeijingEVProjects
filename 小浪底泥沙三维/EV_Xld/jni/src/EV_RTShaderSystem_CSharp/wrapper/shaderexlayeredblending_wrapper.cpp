/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderexlayeredblending.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* textureUnitParams, _in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in const void* texel, _in int groupOrder, _inout int& internalCounter);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in void* arg, _in void* texel, _in int samplerIndex, _in int blendSrc, _in const void* colourValue, _in Real alphaValue, _in bool isAlphaArgument, _in const int groupOrder, _inout int& internalCounter);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in void* arg1, _in void* arg2, _in void* texel, _in int samplerIndex, _in const void* blendMode, _in const int groupOrder, _inout int& internalCounter, _in int targetChannels);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_isProcessingNeeded_bool_CTextureUnitState_Callback)(_in EarthView::World::Graphic::CTextureUnitState* texUnitState);
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getExecutionOrder_int_Callback)();
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState_Callback)(_in const void* rhs);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_createCpuSubPrograms_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback)(_in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addFunctionInvocations_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				class CLayeredBlendingProxy : public EarthView::World::Graphic::RTShaderSystem::CLayeredBlending
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback* m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback;
					EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback* m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback;
					EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback* m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback;
					EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_isProcessingNeeded_bool_CTextureUnitState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_isProcessingNeeded_bool_CTextureUnitState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString_Callback;
					EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getExecutionOrder_int_Callback* m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getExecutionOrder_int_Callback;
					EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_createCpuSubPrograms_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_createCpuSubPrograms_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback;
					EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback;
					EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addFunctionInvocations_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addFunctionInvocations_bool_CProgramSet_Callback;
				public:
					CLayeredBlendingProxy(EarthView::World::Core::CNameValuePairList *pList) : CLayeredBlending(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_isProcessingNeeded_bool_CTextureUnitState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getExecutionOrder_int_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_createCpuSubPrograms_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addFunctionInvocations_bool_CProgramSet_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int(EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int(EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_isProcessingNeeded_bool_CTextureUnitState(EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_isProcessingNeeded_bool_CTextureUnitState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_isProcessingNeeded_bool_CTextureUnitState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString(EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getExecutionOrder_int(EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getExecutionOrder_int_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getExecutionOrder_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_createCpuSubPrograms_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_createCpuSubPrograms_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_createCpuSubPrograms_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_preAddToRenderState_bool_CRenderState_CPass_CPass(EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addFunctionInvocations_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addFunctionInvocations_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addFunctionInvocations_bool_CProgramSet_Callback = pCallback;
					}
					virtual EVString getType() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CLayeredBlending::getType();
					}
					virtual void copyFrom(_in const EarthView::World::Graphic::RTShaderSystem::CSubRenderState& rhs)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState_Callback(&rhs);
						}
						else
							return this->CLayeredBlending::copyFrom(rhs);
					}
					virtual bool resolveParameters(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CLayeredBlending::resolveParameters(programSet);
					}
					virtual bool resolveDependencies(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CLayeredBlending::resolveDependencies(programSet);
					}
					virtual void addPSBlendInvocations(_in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg1, _in EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg2, _in EarthView::World::Graphic::RTShaderSystem::ParameterPtr texel, _in int samplerIndex, _in const EarthView::World::Graphic::CLayerBlendModeEx& blendMode, _in const int groupOrder, _inout int& internalCounter, _in int targetChannels)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback(psMain, &arg1, &arg2, &texel, samplerIndex, &blendMode, groupOrder, internalCounter, targetChannels);
						}
						else
							return this->CLayeredBlending::addPSBlendInvocations(psMain, arg1, arg2, texel, samplerIndex, blendMode, groupOrder, internalCounter, targetChannels);
					}
					virtual int getExecutionOrder() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getExecutionOrder_int_Callback != NULL && this->isCustomExtend())
						{
							int returnValue = m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getExecutionOrder_int_Callback();
							return returnValue;
						}
						else
							return this->CLayeredBlending::getExecutionOrder();
					}
					virtual void updateGpuProgramsParams(_in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback(rend, pass, source, pLightList);
						}
						else
							return this->CLayeredBlending::updateGpuProgramsParams(rend, pass, source, pLightList);
					}
					virtual bool preAddToRenderState(_in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback(renderState, srcPass, dstPass);
							return returnValue;
						}
						else
							return this->CLayeredBlending::preAddToRenderState(renderState, srcPass, dstPass);
					}
					virtual bool addFunctionInvocations(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addFunctionInvocations_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addFunctionInvocations_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CLayeredBlending::addFunctionInvocations(programSet);
					}
					virtual void addPSSampleTexelInvocation(_in EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* textureUnitParams, _in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in const EarthView::World::Graphic::RTShaderSystem::ParameterPtr& texel, _in int groupOrder, _inout int& internalCounter)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback(textureUnitParams, psMain, &texel, groupOrder, internalCounter);
						}
						else
							return this->CLayeredBlending::addPSSampleTexelInvocation(textureUnitParams, psMain, texel, groupOrder, internalCounter);
					}
					virtual void addPSArgumentInvocations(_in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg, _in EarthView::World::Graphic::RTShaderSystem::ParameterPtr texel, _in int samplerIndex, _in EarthView::World::Graphic::LayerBlendSource blendSrc, _in const EarthView::World::Graphic::CColourValue& colourValue, _in Real alphaValue, _in bool isAlphaArgument, _in const int groupOrder, _inout int& internalCounter)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback(psMain, &arg, &texel, samplerIndex, (int)blendSrc, &colourValue, alphaValue, isAlphaArgument, groupOrder, internalCounter);
						}
						else
							return this->CLayeredBlending::addPSArgumentInvocations(psMain, arg, texel, samplerIndex, blendSrc, colourValue, alphaValue, isAlphaArgument, groupOrder, internalCounter);
					}
					virtual bool isProcessingNeeded(_in EarthView::World::Graphic::CTextureUnitState* texUnitState)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_isProcessingNeeded_bool_CTextureUnitState_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_isProcessingNeeded_bool_CTextureUnitState_Callback(texUnitState);
							return returnValue;
						}
						else
							return this->CLayeredBlending::isProcessingNeeded(texUnitState);
					}
					virtual bool createCpuSubPrograms(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_createCpuSubPrograms_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_createCpuSubPrograms_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CLayeredBlending::createCpuSubPrograms(programSet);
					}
				};
				REGISTER_FACTORY_CLASS(CLayeredBlendingProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_blendMode( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::BlendMode objXXXX = ptrNativeObject->blendMode;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_blendMode( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend*)pObjectXXXX)->blendMode = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::BlendMode)value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_sourceModifier( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::SourceModifier objXXXX = ptrNativeObject->sourceModifier;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_sourceModifier( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend*)pObjectXXXX)->sourceModifier = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::SourceModifier)value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_customNum( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend*) pObjectXXXX;
					int objXXXX = ptrNativeObject->customNum;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_customNum( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend*)pObjectXXXX)->customNum = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_modControlParam( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr &objXXXX = ptrNativeObject->modControlParam;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_TextureBlend_modControlParam( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::TextureBlend*)pObjectXXXX)->modControlParam = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CLayeredBlending* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX;
					if (dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::getType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString_Callback* pCallback )
				{
					CLayeredBlendingProxy* ptr = dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getType_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CLayeredBlending* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::getType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_setBlendMode_void_ev_uint16_BlendMode(void *pObjectXXXX, _in ev_uint16 index, _in int mode )
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX;
					ptrNativeObject->setBlendMode(index, (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::BlendMode)mode);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getBlendMode_BlendMode_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
				{
					const EarthView::World::Graphic::RTShaderSystem::CLayeredBlending* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::BlendMode objXXXX = ptrNativeObject->getBlendMode(index);
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_setSourceModifier_void_ev_uint16_SourceModifier_int(void *pObjectXXXX, _in ev_uint16 index, _in int modType, _in int customNum )
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX;
					ptrNativeObject->setSourceModifier(index, (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::SourceModifier)modType, customNum);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getSourceModifier_bool_ev_uint16_SourceModifier_int(void *pObjectXXXX, _in ev_uint16 index, _inout int& modType, _inout int& customNum )
				{
					const EarthView::World::Graphic::RTShaderSystem::CLayeredBlending* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->getSourceModifier(index, (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::SourceModifier&)modType, customNum);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX;
					if (dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
					else
						ptrNativeObject->copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState_Callback* pCallback )
				{
					CLayeredBlendingProxy* ptr = dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_copyFrom_void_CSubRenderState_NoVirtual(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_Type()
				{
					EVString objXXXX = EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::Type;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_Type( char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::Type = value1;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX;
					if (dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::resolveParameters(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveParameters(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet_Callback* pCallback )
				{
					CLayeredBlendingProxy* ptr = dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveParameters_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::resolveParameters(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX;
					if (dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::resolveDependencies(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveDependencies(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet_Callback* pCallback )
				{
					CLayeredBlendingProxy* ptr = dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_resolveDependencies_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::resolveDependencies(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in void* arg1, _in void* arg2, _in void* texel, _in int samplerIndex, _in const void* blendMode, _in const int groupOrder, _inout int& internalCounter, _in int targetChannels )
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX;
					if (dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::addPSBlendInvocations(psMain, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)arg1, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)arg2, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)texel, samplerIndex, *(EarthView::World::Graphic::CLayerBlendModeEx*)blendMode, groupOrder, internalCounter, targetChannels);
					else
						ptrNativeObject->addPSBlendInvocations(psMain, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)arg1, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)arg2, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)texel, samplerIndex, *(EarthView::World::Graphic::CLayerBlendModeEx*)blendMode, groupOrder, internalCounter, targetChannels);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback* pCallback )
				{
					CLayeredBlendingProxy* ptr = dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in void* arg1, _in void* arg2, _in void* texel, _in int samplerIndex, _in const void* blendMode, _in const int groupOrder, _inout int& internalCounter, _in int targetChannels )
				{
					EarthView::World::Graphic::RTShaderSystem::CLayeredBlending* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CLayeredBlending::addPSBlendInvocations(psMain, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)arg1, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)arg2, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)texel, samplerIndex, *(EarthView::World::Graphic::CLayerBlendModeEx*)blendMode, groupOrder, internalCounter, targetChannels);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback* pCallback )
				{
					CLayeredBlendingProxy* ptr = dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback* pCallback )
				{
					CLayeredBlendingProxy* ptr = dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_isProcessingNeeded_bool_CTextureUnitState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_isProcessingNeeded_bool_CTextureUnitState_Callback* pCallback )
				{
					CLayeredBlendingProxy* ptr = dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_isProcessingNeeded_bool_CTextureUnitState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getExecutionOrder_int( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getExecutionOrder_int_Callback* pCallback )
				{
					CLayeredBlendingProxy* ptr = dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_getExecutionOrder_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_createCpuSubPrograms_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_createCpuSubPrograms_bool_CProgramSet_Callback* pCallback )
				{
					CLayeredBlendingProxy* ptr = dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_createCpuSubPrograms_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* pCallback )
				{
					CLayeredBlendingProxy* ptr = dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_preAddToRenderState_bool_CRenderState_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* pCallback )
				{
					CLayeredBlendingProxy* ptr = dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_preAddToRenderState_bool_CRenderState_CPass_CPass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addFunctionInvocations_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addFunctionInvocations_bool_CProgramSet_Callback* pCallback )
				{
					CLayeredBlendingProxy* ptr = dynamic_cast<CLayeredBlendingProxy*>((EarthView::World::Graphic::RTShaderSystem::CLayeredBlending*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CLayeredBlending_addFunctionInvocations_bool_CProgramSet(pCallback);
					}
				}
			}
		}
	}
}
