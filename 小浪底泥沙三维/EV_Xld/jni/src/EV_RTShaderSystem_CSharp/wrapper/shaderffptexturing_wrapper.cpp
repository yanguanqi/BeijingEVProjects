/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderffptexturing.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* textureUnitParams, _in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in const void* texel, _in int groupOrder, _inout int& internalCounter);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in void* arg, _in void* texel, _in int samplerIndex, _in int blendSrc, _in const void* colourValue, _in Real alphaValue, _in bool isAlphaArgument, _in const int groupOrder, _inout int& internalCounter);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in void* arg1, _in void* arg2, _in void* texel, _in int samplerIndex, _in const void* blendMode, _in const int groupOrder, _inout int& internalCounter, _in int targetChannels);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState_Callback)(_in EarthView::World::Graphic::CTextureUnitState* texUnitState);
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int_Callback)();
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState_Callback)(_in const void* rhs);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_createCpuSubPrograms_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback)(_in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				class CFFPTexturingProxy : public EarthView::World::Graphic::RTShaderSystem::CFFPTexturing
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_createCpuSubPrograms_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_createCpuSubPrograms_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet_Callback;
				public:
					CFFPTexturingProxy(EarthView::World::Core::CNameValuePairList *pList) : CFFPTexturing(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_createCpuSubPrograms_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int(EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int(EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState(EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString(EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int(EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_createCpuSubPrograms_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_createCpuSubPrograms_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_createCpuSubPrograms_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass(EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet_Callback = pCallback;
					}
					virtual EVString getType() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CFFPTexturing::getType();
					}
					virtual int getExecutionOrder() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int_Callback != NULL && this->isCustomExtend())
						{
							int returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int_Callback();
							return returnValue;
						}
						else
							return this->CFFPTexturing::getExecutionOrder();
					}
					virtual void updateGpuProgramsParams(_in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback(rend, pass, source, pLightList);
						}
						else
							return this->CFFPTexturing::updateGpuProgramsParams(rend, pass, source, pLightList);
					}
					virtual void copyFrom(_in const EarthView::World::Graphic::RTShaderSystem::CSubRenderState& rhs)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState_Callback(&rhs);
						}
						else
							return this->CFFPTexturing::copyFrom(rhs);
					}
					virtual bool preAddToRenderState(_in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback(renderState, srcPass, dstPass);
							return returnValue;
						}
						else
							return this->CFFPTexturing::preAddToRenderState(renderState, srcPass, dstPass);
					}
					virtual bool resolveParameters(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CFFPTexturing::resolveParameters(programSet);
					}
					virtual bool resolveDependencies(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CFFPTexturing::resolveDependencies(programSet);
					}
					virtual bool addFunctionInvocations(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CFFPTexturing::addFunctionInvocations(programSet);
					}
					virtual void addPSSampleTexelInvocation(_in EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* textureUnitParams, _in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in const EarthView::World::Graphic::RTShaderSystem::ParameterPtr& texel, _in int groupOrder, _inout int& internalCounter)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback(textureUnitParams, psMain, &texel, groupOrder, internalCounter);
						}
						else
							return this->CFFPTexturing::addPSSampleTexelInvocation(textureUnitParams, psMain, texel, groupOrder, internalCounter);
					}
					virtual void addPSArgumentInvocations(_in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg, _in EarthView::World::Graphic::RTShaderSystem::ParameterPtr texel, _in int samplerIndex, _in EarthView::World::Graphic::LayerBlendSource blendSrc, _in const EarthView::World::Graphic::CColourValue& colourValue, _in Real alphaValue, _in bool isAlphaArgument, _in const int groupOrder, _inout int& internalCounter)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback(psMain, &arg, &texel, samplerIndex, (int)blendSrc, &colourValue, alphaValue, isAlphaArgument, groupOrder, internalCounter);
						}
						else
							return this->CFFPTexturing::addPSArgumentInvocations(psMain, arg, texel, samplerIndex, blendSrc, colourValue, alphaValue, isAlphaArgument, groupOrder, internalCounter);
					}
					virtual void addPSBlendInvocations(_in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg1, _in EarthView::World::Graphic::RTShaderSystem::ParameterPtr arg2, _in EarthView::World::Graphic::RTShaderSystem::ParameterPtr texel, _in int samplerIndex, _in const EarthView::World::Graphic::CLayerBlendModeEx& blendMode, _in const int groupOrder, _inout int& internalCounter, _in int targetChannels)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback(psMain, &arg1, &arg2, &texel, samplerIndex, &blendMode, groupOrder, internalCounter, targetChannels);
						}
						else
							return this->CFFPTexturing::addPSBlendInvocations(psMain, arg1, arg2, texel, samplerIndex, blendMode, groupOrder, internalCounter, targetChannels);
					}
					virtual bool isProcessingNeeded(_in EarthView::World::Graphic::CTextureUnitState* texUnitState)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState_Callback(texUnitState);
							return returnValue;
						}
						else
							return this->CFFPTexturing::isProcessingNeeded(texUnitState);
					}
					virtual bool createCpuSubPrograms(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_createCpuSubPrograms_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_createCpuSubPrograms_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CFFPTexturing::createCpuSubPrograms(programSet);
					}
				};
				REGISTER_FACTORY_CLASS(CFFPTexturingProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					if (dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::getType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString_Callback* pCallback )
				{
					CFFPTexturingProxy* ptr = dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getType_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::getType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					if (dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*)ptrNativeObject) != NULL)
					{
						int objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::getExecutionOrder();
						return objXXXX;
					}
					else
					{
						int objXXXX = ptrNativeObject->getExecutionOrder();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int_Callback* pCallback )
				{
					CFFPTexturingProxy* ptr = dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_getExecutionOrder_int_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					int objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::getExecutionOrder();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					if (dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::updateGpuProgramsParams(rend, pass, source, pLightList);
					else
						ptrNativeObject->updateGpuProgramsParams(rend, pass, source, pLightList);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* pCallback )
				{
					CFFPTexturingProxy* ptr = dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::updateGpuProgramsParams(rend, pass, source, pLightList);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					if (dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
					else
						ptrNativeObject->copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState_Callback* pCallback )
				{
					CFFPTexturingProxy* ptr = dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_copyFrom_void_CSubRenderState_NoVirtual(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass(void *pObjectXXXX, _in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					if (dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::preAddToRenderState(renderState, srcPass, dstPass);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->preAddToRenderState(renderState, srcPass, dstPass);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* pCallback )
				{
					CFFPTexturingProxy* ptr = dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_preAddToRenderState_bool_CRenderState_CPass_CPass_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::preAddToRenderState(renderState, srcPass, dstPass);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_Type()
				{
					EVString objXXXX = EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::Type;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_Type( char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::Type = value1;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureUnitState( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*) pObjectXXXX;
					EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->mTextureUnitState;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureUnitState( void *pObjectXXXX, EarthView::World::Graphic::CTextureUnitState*  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjectXXXX)->mTextureUnitState = value;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CFrustum*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureProjector( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*) pObjectXXXX;
					const EarthView::World::Graphic::CFrustum* objXXXX = ptrNativeObject->mTextureProjector;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureProjector( void *pObjectXXXX, const EarthView::World::Graphic::CFrustum*  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjectXXXX)->mTextureProjector = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSamplerIndex( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->mTextureSamplerIndex;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSamplerIndex( void *pObjectXXXX, ev_uint16  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjectXXXX)->mTextureSamplerIndex = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSamplerType( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*) pObjectXXXX;
					EarthView::World::Graphic::GpuConstantType objXXXX = ptrNativeObject->mTextureSamplerType;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSamplerType( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjectXXXX)->mTextureSamplerType = (EarthView::World::Graphic::GpuConstantType)value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSInTextureCoordinateType( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*) pObjectXXXX;
					EarthView::World::Graphic::GpuConstantType objXXXX = ptrNativeObject->mVSInTextureCoordinateType;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSInTextureCoordinateType( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjectXXXX)->mVSInTextureCoordinateType = (EarthView::World::Graphic::GpuConstantType)value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSOutTextureCoordinateType( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*) pObjectXXXX;
					EarthView::World::Graphic::GpuConstantType objXXXX = ptrNativeObject->mVSOutTextureCoordinateType;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSOutTextureCoordinateType( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjectXXXX)->mVSOutTextureCoordinateType = (EarthView::World::Graphic::GpuConstantType)value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTexCoordCalcMethod( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*) pObjectXXXX;
					TexCoordCalcMethod objXXXX = ptrNativeObject->mTexCoordCalcMethod;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTexCoordCalcMethod( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjectXXXX)->mTexCoordCalcMethod = (TexCoordCalcMethod)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureMatrix( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr &objXXXX = ptrNativeObject->mTextureMatrix;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureMatrix( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjectXXXX)->mTextureMatrix = *(EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureViewProjImageMatrix( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr &objXXXX = ptrNativeObject->mTextureViewProjImageMatrix;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureViewProjImageMatrix( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjectXXXX)->mTextureViewProjImageMatrix = *(EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSampler( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr &objXXXX = ptrNativeObject->mTextureSampler;
					EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mTextureSampler( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjectXXXX)->mTextureSampler = *(EarthView::World::Graphic::RTShaderSystem::UniformParameterPtr*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSInputTexCoord( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr &objXXXX = ptrNativeObject->mVSInputTexCoord;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSInputTexCoord( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjectXXXX)->mVSInputTexCoord = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSOutputTexCoord( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr &objXXXX = ptrNativeObject->mVSOutputTexCoord;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mVSOutputTexCoord( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjectXXXX)->mVSOutputTexCoord = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mPSInputTexCoord( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr &objXXXX = ptrNativeObject->mPSInputTexCoord;
					EarthView::World::Graphic::RTShaderSystem::ParameterPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_TextureUnitParams_mPSInputTexCoord( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams*)pObjectXXXX)->mPSInputTexCoord = *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)value;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					if (dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::resolveParameters(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveParameters(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet_Callback* pCallback )
				{
					CFFPTexturingProxy* ptr = dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveParameters_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::resolveParameters(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					if (dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::resolveDependencies(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveDependencies(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet_Callback* pCallback )
				{
					CFFPTexturingProxy* ptr = dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_resolveDependencies_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::resolveDependencies(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					if (dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::addFunctionInvocations(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->addFunctionInvocations(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet_Callback* pCallback )
				{
					CFFPTexturingProxy* ptr = dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addFunctionInvocations_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::addFunctionInvocations(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* textureUnitParams, _in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in const void* texel, _in int groupOrder, _inout int& internalCounter )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					if (dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::addPSSampleTexelInvocation(textureUnitParams, psMain, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)texel, groupOrder, internalCounter);
					else
						ptrNativeObject->addPSSampleTexelInvocation(textureUnitParams, psMain, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)texel, groupOrder, internalCounter);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_Callback* pCallback )
				{
					CFFPTexturingProxy* ptr = dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSSampleTexelInvocation_void_TextureUnitParams_CFunction_ParameterPtr_int_int_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::TextureUnitParams* textureUnitParams, _in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in const void* texel, _in int groupOrder, _inout int& internalCounter )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::addPSSampleTexelInvocation(textureUnitParams, psMain, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)texel, groupOrder, internalCounter);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in void* arg, _in void* texel, _in int samplerIndex, _in int blendSrc, _in const void* colourValue, _in Real alphaValue, _in bool isAlphaArgument, _in const int groupOrder, _inout int& internalCounter )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					if (dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::addPSArgumentInvocations(psMain, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)arg, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)texel, samplerIndex, (EarthView::World::Graphic::LayerBlendSource)blendSrc, *(EarthView::World::Graphic::CColourValue*)colourValue, alphaValue, isAlphaArgument, groupOrder, internalCounter);
					else
						ptrNativeObject->addPSArgumentInvocations(psMain, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)arg, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)texel, samplerIndex, (EarthView::World::Graphic::LayerBlendSource)blendSrc, *(EarthView::World::Graphic::CColourValue*)colourValue, alphaValue, isAlphaArgument, groupOrder, internalCounter);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_Callback* pCallback )
				{
					CFFPTexturingProxy* ptr = dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSArgumentInvocations_void_CFunction_ParameterPtr_ParameterPtr_int_LayerBlendSource_CColourValue_Real_bool_int_int_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in void* arg, _in void* texel, _in int samplerIndex, _in int blendSrc, _in const void* colourValue, _in Real alphaValue, _in bool isAlphaArgument, _in const int groupOrder, _inout int& internalCounter )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::addPSArgumentInvocations(psMain, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)arg, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)texel, samplerIndex, (EarthView::World::Graphic::LayerBlendSource)blendSrc, *(EarthView::World::Graphic::CColourValue*)colourValue, alphaValue, isAlphaArgument, groupOrder, internalCounter);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in void* arg1, _in void* arg2, _in void* texel, _in int samplerIndex, _in const void* blendMode, _in const int groupOrder, _inout int& internalCounter, _in int targetChannels )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					if (dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::addPSBlendInvocations(psMain, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)arg1, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)arg2, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)texel, samplerIndex, *(EarthView::World::Graphic::CLayerBlendModeEx*)blendMode, groupOrder, internalCounter, targetChannels);
					else
						ptrNativeObject->addPSBlendInvocations(psMain, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)arg1, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)arg2, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)texel, samplerIndex, *(EarthView::World::Graphic::CLayerBlendModeEx*)blendMode, groupOrder, internalCounter, targetChannels);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_Callback* pCallback )
				{
					CFFPTexturingProxy* ptr = dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_addPSBlendInvocations_void_CFunction_ParameterPtr_ParameterPtr_ParameterPtr_int_CLayerBlendModeEx_int_int_int_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CFunction* psMain, _in void* arg1, _in void* arg2, _in void* texel, _in int samplerIndex, _in const void* blendMode, _in const int groupOrder, _inout int& internalCounter, _in int targetChannels )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::addPSBlendInvocations(psMain, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)arg1, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)arg2, *(EarthView::World::Graphic::RTShaderSystem::ParameterPtr*)texel, samplerIndex, *(EarthView::World::Graphic::CLayerBlendModeEx*)blendMode, groupOrder, internalCounter, targetChannels);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureUnitState* texUnitState )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					if (dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::isProcessingNeeded(texUnitState);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->isProcessingNeeded(texUnitState);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState_Callback* pCallback )
				{
					CFFPTexturingProxy* ptr = dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_isProcessingNeeded_bool_CTextureUnitState_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureUnitState* texUnitState )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturing* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturing::isProcessingNeeded(texUnitState);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_createCpuSubPrograms_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_createCpuSubPrograms_bool_CProgramSet_Callback* pCallback )
				{
					CFFPTexturingProxy* ptr = dynamic_cast<CFFPTexturingProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturing*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturing_createCpuSubPrograms_bool_CProgramSet(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString_Callback)();
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_Callback)();
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CTextureUnitState* texState, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyInstance_void_CSubRenderState_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyAllInstances_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in const EarthView::World::Graphic::CTextureUnitState* srcTextureUnit, _in const EarthView::World::Graphic::CTextureUnitState* dstTextureUnit);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState_Callback)();
				class CFFPTexturingFactoryProxy : public EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyInstance_void_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyInstance_void_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyAllInstances_void_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyAllInstances_void_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState_Callback;
				public:
					CFFPTexturingFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CFFPTexturingFactory(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyInstance_void_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyAllInstances_void_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString(EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyInstance_void_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyInstance_void_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyInstance_void_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyAllInstances_void(EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyAllInstances_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyAllInstances_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState_Callback = pCallback;
					}
					virtual EVString getType() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CFFPTexturingFactory::getType();
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstance(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback(compiler, prop, pass, translator);
							return returnValue;
						}
						else
							return this->CFFPTexturingFactory::createInstance(compiler, prop, pass, translator);
					}
					virtual void writeInstance(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback(ser, subRenderState, srcPass, dstPass);
						}
						else
							return this->CFFPTexturingFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstanceImpl()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState_Callback();
							return returnValue;
						}
						else
							return this->CFFPTexturingFactory::createInstanceImpl();
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createOrRetrieveInstance(_in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback(translator);
							return returnValue;
						}
						else
							return this->CFFPTexturingFactory::createOrRetrieveInstance(translator);
					}
					virtual void destroyInstance(_in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyInstance_void_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyInstance_void_CSubRenderState_Callback(subRenderState);
						}
						else
							return this->CFFPTexturingFactory::destroyInstance(subRenderState);
					}
					virtual void destroyAllInstances()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyAllInstances_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyAllInstances_void_Callback();
						}
						else
							return this->CFFPTexturingFactory::destroyAllInstances();
					}
				};
				REGISTER_FACTORY_CLASS(CFFPTexturingFactoryProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX;
					if (dynamic_cast<CFFPTexturingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory::getType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString_Callback* pCallback )
				{
					CFFPTexturingFactoryProxy* ptr = dynamic_cast<CFFPTexturingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_getType_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory::getType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX;
					if (dynamic_cast<CFFPTexturingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory::createInstance(compiler, prop, pass, translator);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->createInstance(compiler, prop, pass, translator);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* pCallback )
				{
					CFFPTexturingFactoryProxy* ptr = dynamic_cast<CFFPTexturingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory::createInstance(compiler, prop, pass, translator);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX;
					if (dynamic_cast<CFFPTexturingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
					else
						ptrNativeObject->writeInstance(ser, subRenderState, srcPass, dstPass);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* pCallback )
				{
					CFFPTexturingFactoryProxy* ptr = dynamic_cast<CFFPTexturingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX;
					if (dynamic_cast<CFFPTexturingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory::createInstanceImpl();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->createInstanceImpl();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState_Callback* pCallback )
				{
					CFFPTexturingFactoryProxy* ptr = dynamic_cast<CFFPTexturingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstanceImpl_CSubRenderState_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory::createInstanceImpl();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_Callback* pCallback )
				{
					CFFPTexturingFactoryProxy* ptr = dynamic_cast<CFFPTexturingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* pCallback )
				{
					CFFPTexturingFactoryProxy* ptr = dynamic_cast<CFFPTexturingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* pCallback )
				{
					CFFPTexturingFactoryProxy* ptr = dynamic_cast<CFFPTexturingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyInstance_void_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyInstance_void_CSubRenderState_Callback* pCallback )
				{
					CFFPTexturingFactoryProxy* ptr = dynamic_cast<CFFPTexturingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyInstance_void_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyAllInstances_void( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyAllInstances_void_Callback* pCallback )
				{
					CFFPTexturingFactoryProxy* ptr = dynamic_cast<CFFPTexturingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_destroyAllInstances_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* pCallback )
				{
					CFFPTexturingFactoryProxy* ptr = dynamic_cast<CFFPTexturingFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CFFPTexturingFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CFFPTexturingFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(pCallback);
					}
				}
			}
		}
	}
}
