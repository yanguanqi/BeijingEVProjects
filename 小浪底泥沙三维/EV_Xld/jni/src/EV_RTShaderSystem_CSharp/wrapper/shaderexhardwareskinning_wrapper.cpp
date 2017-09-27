/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderexhardwareskinning.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getType_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getExecutionOrder_int_Callback)();
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_copyFrom_void_CSubRenderState_Callback)(_in const void* rhs);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_createCpuSubPrograms_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback)(_in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveParameters_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveDependencies_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_addFunctionInvocations_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				class CHardwareSkinningProxy : public EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getType_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getType_EVString_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getExecutionOrder_int_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getExecutionOrder_int_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_copyFrom_void_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_copyFrom_void_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_createCpuSubPrograms_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_createCpuSubPrograms_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveParameters_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveParameters_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveDependencies_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveDependencies_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_addFunctionInvocations_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_addFunctionInvocations_bool_CProgramSet_Callback;
				public:
					CHardwareSkinningProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareSkinning(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getType_EVString_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getExecutionOrder_int_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_copyFrom_void_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_createCpuSubPrograms_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveParameters_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveDependencies_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_addFunctionInvocations_bool_CProgramSet_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getType_EVString(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getExecutionOrder_int(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getExecutionOrder_int_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getExecutionOrder_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_copyFrom_void_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_copyFrom_void_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_copyFrom_void_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_createCpuSubPrograms_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_createCpuSubPrograms_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_createCpuSubPrograms_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_preAddToRenderState_bool_CRenderState_CPass_CPass(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveParameters_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveParameters_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveParameters_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveDependencies_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveDependencies_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveDependencies_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_addFunctionInvocations_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_addFunctionInvocations_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_addFunctionInvocations_bool_CProgramSet_Callback = pCallback;
					}
					virtual EVString getType() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CHardwareSkinning::getType();
					}
					virtual int getExecutionOrder() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getExecutionOrder_int_Callback != NULL && this->isCustomExtend())
						{
							int returnValue = m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getExecutionOrder_int_Callback();
							return returnValue;
						}
						else
							return this->CHardwareSkinning::getExecutionOrder();
					}
					virtual void copyFrom(_in const EarthView::World::Graphic::RTShaderSystem::CSubRenderState& rhs)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_copyFrom_void_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_copyFrom_void_CSubRenderState_Callback(&rhs);
						}
						else
							return this->CHardwareSkinning::copyFrom(rhs);
					}
					virtual bool preAddToRenderState(_in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback(renderState, srcPass, dstPass);
							return returnValue;
						}
						else
							return this->CHardwareSkinning::preAddToRenderState(renderState, srcPass, dstPass);
					}
					virtual bool resolveParameters(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveParameters_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveParameters_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CHardwareSkinning::resolveParameters(programSet);
					}
					virtual bool resolveDependencies(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveDependencies_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveDependencies_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CHardwareSkinning::resolveDependencies(programSet);
					}
					virtual bool addFunctionInvocations(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_addFunctionInvocations_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_addFunctionInvocations_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CHardwareSkinning::addFunctionInvocations(programSet);
					}
					virtual bool createCpuSubPrograms(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_createCpuSubPrograms_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_createCpuSubPrograms_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CHardwareSkinning::createCpuSubPrograms(programSet);
					}
					virtual void updateGpuProgramsParams(_in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback(rend, pass, source, pLightList);
						}
						else
							return this->CHardwareSkinning::updateGpuProgramsParams(rend, pass, source, pLightList);
					}
				};
				REGISTER_FACTORY_CLASS(CHardwareSkinningProxy);
				extern "C" EV_DLL_EXPORT  bool  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_SkinningData_isValid( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->isValid;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_SkinningData_isValid( void *pObjectXXXX, bool  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjectXXXX)->isValid = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_SkinningData_maxBoneCount( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->maxBoneCount;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_SkinningData_maxBoneCount( void *pObjectXXXX, ev_uint16  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjectXXXX)->maxBoneCount = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_SkinningData_maxWeightCount( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->maxWeightCount;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_SkinningData_maxWeightCount( void *pObjectXXXX, ev_uint16  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjectXXXX)->maxWeightCount = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_SkinningData_skinningType( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::SkinningType objXXXX = ptrNativeObject->skinningType;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_SkinningData_skinningType( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjectXXXX)->skinningType = (EarthView::World::Graphic::RTShaderSystem::SkinningType)value;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_SkinningData_correctAntipodalityHandling( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->correctAntipodalityHandling;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_SkinningData_correctAntipodalityHandling( void *pObjectXXXX, bool  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjectXXXX)->correctAntipodalityHandling = value;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_SkinningData_scalingShearingSupport( void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->scalingShearingSupport;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_SkinningData_scalingShearingSupport( void *pObjectXXXX, bool  value )
				{
					((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::SkinningData*)pObjectXXXX)->scalingShearingSupport = value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					if (dynamic_cast<CHardwareSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::getType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getType_EVString_Callback* pCallback )
				{
					CHardwareSkinningProxy* ptr = dynamic_cast<CHardwareSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getType_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::getType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getExecutionOrder_int(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					if (dynamic_cast<CHardwareSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*)ptrNativeObject) != NULL)
					{
						int objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::getExecutionOrder();
						return objXXXX;
					}
					else
					{
						int objXXXX = ptrNativeObject->getExecutionOrder();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getExecutionOrder_int( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getExecutionOrder_int_Callback* pCallback )
				{
					CHardwareSkinningProxy* ptr = dynamic_cast<CHardwareSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getExecutionOrder_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getExecutionOrder_int_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					int objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::getExecutionOrder();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_copyFrom_void_CSubRenderState(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					if (dynamic_cast<CHardwareSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
					else
						ptrNativeObject->copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_copyFrom_void_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_copyFrom_void_CSubRenderState_Callback* pCallback )
				{
					CHardwareSkinningProxy* ptr = dynamic_cast<CHardwareSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_copyFrom_void_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_copyFrom_void_CSubRenderState_NoVirtual(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_setHardwareSkinningParam_void_ev_uint16_ev_uint16_SkinningType_bool_bool(void *pObjectXXXX, _in ev_uint16 boneCount, _in ev_uint16 weightCount, _in int skinningType, _in bool correctAntipodalityHandling, _in bool scalingShearingSupport )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					ptrNativeObject->setHardwareSkinningParam(boneCount, weightCount, (EarthView::World::Graphic::RTShaderSystem::SkinningType)skinningType, correctAntipodalityHandling, scalingShearingSupport);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_setHardwareSkinningParam_void_ev_uint16_ev_uint16_SkinningType_bool(void *pObjectXXXX, _in ev_uint16 boneCount, _in ev_uint16 weightCount, _in int skinningType, _in bool correctAntipodalityHandling )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					ptrNativeObject->setHardwareSkinningParam(boneCount, weightCount, (EarthView::World::Graphic::RTShaderSystem::SkinningType)skinningType, correctAntipodalityHandling);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_setHardwareSkinningParam_void_ev_uint16_ev_uint16_SkinningType(void *pObjectXXXX, _in ev_uint16 boneCount, _in ev_uint16 weightCount, _in int skinningType )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					ptrNativeObject->setHardwareSkinningParam(boneCount, weightCount, (EarthView::World::Graphic::RTShaderSystem::SkinningType)skinningType);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_setHardwareSkinningParam_void_ev_uint16_ev_uint16(void *pObjectXXXX, _in ev_uint16 boneCount, _in ev_uint16 weightCount )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					ptrNativeObject->setHardwareSkinningParam(boneCount, weightCount);
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getBoneCount_ev_uint16(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->getBoneCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getWeightCount_ev_uint16(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->getWeightCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_getSkinningType_SkinningType(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::SkinningType objXXXX = ptrNativeObject->getSkinningType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_hasCorrectAntipodalityHandling_bool(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->hasCorrectAntipodalityHandling();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_hasScalingShearingSupport_bool(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->hasScalingShearingSupport();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_preAddToRenderState_bool_CRenderState_CPass_CPass(void *pObjectXXXX, _in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					if (dynamic_cast<CHardwareSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::preAddToRenderState(renderState, srcPass, dstPass);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->preAddToRenderState(renderState, srcPass, dstPass);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_preAddToRenderState_bool_CRenderState_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* pCallback )
				{
					CHardwareSkinningProxy* ptr = dynamic_cast<CHardwareSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_preAddToRenderState_bool_CRenderState_CPass_CPass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_preAddToRenderState_bool_CRenderState_CPass_CPass_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::preAddToRenderState(renderState, srcPass, dstPass);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning__setCreator_void_CHardwareSkinningFactory(void *pObjectXXXX, _in const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* pCreator )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					ptrNativeObject->_setCreator(pCreator);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_Type()
				{
					EVString objXXXX = EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::Type;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_Type( char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::Type = value1;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveParameters_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					if (dynamic_cast<CHardwareSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::resolveParameters(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveParameters(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveParameters_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveParameters_bool_CProgramSet_Callback* pCallback )
				{
					CHardwareSkinningProxy* ptr = dynamic_cast<CHardwareSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveParameters_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveParameters_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::resolveParameters(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveDependencies_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					if (dynamic_cast<CHardwareSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::resolveDependencies(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveDependencies(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveDependencies_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveDependencies_bool_CProgramSet_Callback* pCallback )
				{
					CHardwareSkinningProxy* ptr = dynamic_cast<CHardwareSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveDependencies_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_resolveDependencies_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::resolveDependencies(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_addFunctionInvocations_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					if (dynamic_cast<CHardwareSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::addFunctionInvocations(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->addFunctionInvocations(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_addFunctionInvocations_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_addFunctionInvocations_bool_CProgramSet_Callback* pCallback )
				{
					CHardwareSkinningProxy* ptr = dynamic_cast<CHardwareSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_addFunctionInvocations_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_addFunctionInvocations_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning::addFunctionInvocations(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_createCpuSubPrograms_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_createCpuSubPrograms_bool_CProgramSet_Callback* pCallback )
				{
					CHardwareSkinningProxy* ptr = dynamic_cast<CHardwareSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_createCpuSubPrograms_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* pCallback )
				{
					CHardwareSkinningProxy* ptr = dynamic_cast<CHardwareSkinningProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinning*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinning_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(pCallback);
					}
				}
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowCasterMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback)(_in const int skinningType, _in const void* caster1Weight, _in const void* caster2Weight, _in const void* caster3Weight, _in const void* caster4Weight);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowReceiverMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback)(_in const int skinningType, _in const void* receiver1Weight, _in const void* receiver2Weight, _in const void* receiver3Weight, _in const void* receiver4Weight);
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getType_EVString_Callback)();
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_Callback)();
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CTextureUnitState* texState, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyInstance_void_CSubRenderState_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyAllInstances_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in const EarthView::World::Graphic::CTextureUnitState* srcTextureUnit, _in const EarthView::World::Graphic::CTextureUnitState* dstTextureUnit);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstanceImpl_CSubRenderState_Callback)();
				class CHardwareSkinningFactoryProxy : public EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowCasterMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowCasterMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowReceiverMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowReceiverMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getType_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getType_EVString_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyInstance_void_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyInstance_void_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyAllInstances_void_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyAllInstances_void_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstanceImpl_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstanceImpl_CSubRenderState_Callback;
				public:
					CHardwareSkinningFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareSkinningFactory(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowCasterMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowReceiverMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getType_EVString_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyInstance_void_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyAllInstances_void_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstanceImpl_CSubRenderState_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowCasterMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowCasterMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowCasterMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowReceiverMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowReceiverMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowReceiverMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getType_EVString(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyInstance_void_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyInstance_void_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyInstance_void_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyAllInstances_void(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyAllInstances_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyAllInstances_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstanceImpl_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstanceImpl_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstanceImpl_CSubRenderState_Callback = pCallback;
					}
					virtual EVString getType() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CHardwareSkinningFactory::getType();
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstance(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback(compiler, prop, pass, translator);
							return returnValue;
						}
						else
							return this->CHardwareSkinningFactory::createInstance(compiler, prop, pass, translator);
					}
					virtual void writeInstance(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback(ser, subRenderState, srcPass, dstPass);
						}
						else
							return this->CHardwareSkinningFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
					}
					virtual void setCustomShadowCasterMaterials(_in const EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType, _in const EarthView::World::Graphic::CMaterialPtr& caster1Weight, _in const EarthView::World::Graphic::CMaterialPtr& caster2Weight, _in const EarthView::World::Graphic::CMaterialPtr& caster3Weight, _in const EarthView::World::Graphic::CMaterialPtr& caster4Weight)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowCasterMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowCasterMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback((int)skinningType, &caster1Weight, &caster2Weight, &caster3Weight, &caster4Weight);
						}
						else
							return this->CHardwareSkinningFactory::setCustomShadowCasterMaterials(skinningType, caster1Weight, caster2Weight, caster3Weight, caster4Weight);
					}
					virtual void setCustomShadowReceiverMaterials(_in const EarthView::World::Graphic::RTShaderSystem::SkinningType skinningType, _in const EarthView::World::Graphic::CMaterialPtr& receiver1Weight, _in const EarthView::World::Graphic::CMaterialPtr& receiver2Weight, _in const EarthView::World::Graphic::CMaterialPtr& receiver3Weight, _in const EarthView::World::Graphic::CMaterialPtr& receiver4Weight)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowReceiverMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowReceiverMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback((int)skinningType, &receiver1Weight, &receiver2Weight, &receiver3Weight, &receiver4Weight);
						}
						else
							return this->CHardwareSkinningFactory::setCustomShadowReceiverMaterials(skinningType, receiver1Weight, receiver2Weight, receiver3Weight, receiver4Weight);
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstanceImpl()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstanceImpl_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstanceImpl_CSubRenderState_Callback();
							return returnValue;
						}
						else
							return this->CHardwareSkinningFactory::createInstanceImpl();
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createOrRetrieveInstance(_in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback(translator);
							return returnValue;
						}
						else
							return this->CHardwareSkinningFactory::createOrRetrieveInstance(translator);
					}
					virtual void destroyInstance(_in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyInstance_void_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyInstance_void_CSubRenderState_Callback(subRenderState);
						}
						else
							return this->CHardwareSkinningFactory::destroyInstance(subRenderState);
					}
					virtual void destroyAllInstances()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyAllInstances_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyAllInstances_void_Callback();
						}
						else
							return this->CHardwareSkinningFactory::destroyAllInstances();
					}
				};
				REGISTER_FACTORY_CLASS(CHardwareSkinningFactoryProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					if (dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::getType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getType_EVString_Callback* pCallback )
				{
					CHardwareSkinningFactoryProxy* ptr = dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getType_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::getType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					if (dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::createInstance(compiler, prop, pass, translator);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->createInstance(compiler, prop, pass, translator);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* pCallback )
				{
					CHardwareSkinningFactoryProxy* ptr = dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::createInstance(compiler, prop, pass, translator);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					if (dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
					else
						ptrNativeObject->writeInstance(ser, subRenderState, srcPass, dstPass);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* pCallback )
				{
					CHardwareSkinningFactoryProxy* ptr = dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowCasterMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr(void *pObjectXXXX, _in const int skinningType, _in const void* caster1Weight, _in const void* caster2Weight, _in const void* caster3Weight, _in const void* caster4Weight )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					if (dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::setCustomShadowCasterMaterials((EarthView::World::Graphic::RTShaderSystem::SkinningType)skinningType, *(EarthView::World::Graphic::CMaterialPtr*)caster1Weight, *(EarthView::World::Graphic::CMaterialPtr*)caster2Weight, *(EarthView::World::Graphic::CMaterialPtr*)caster3Weight, *(EarthView::World::Graphic::CMaterialPtr*)caster4Weight);
					else
						ptrNativeObject->setCustomShadowCasterMaterials((EarthView::World::Graphic::RTShaderSystem::SkinningType)skinningType, *(EarthView::World::Graphic::CMaterialPtr*)caster1Weight, *(EarthView::World::Graphic::CMaterialPtr*)caster2Weight, *(EarthView::World::Graphic::CMaterialPtr*)caster3Weight, *(EarthView::World::Graphic::CMaterialPtr*)caster4Weight);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowCasterMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowCasterMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback* pCallback )
				{
					CHardwareSkinningFactoryProxy* ptr = dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowCasterMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowCasterMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_NoVirtual(void *pObjectXXXX, _in const int skinningType, _in const void* caster1Weight, _in const void* caster2Weight, _in const void* caster3Weight, _in const void* caster4Weight )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::setCustomShadowCasterMaterials((EarthView::World::Graphic::RTShaderSystem::SkinningType)skinningType, *(EarthView::World::Graphic::CMaterialPtr*)caster1Weight, *(EarthView::World::Graphic::CMaterialPtr*)caster2Weight, *(EarthView::World::Graphic::CMaterialPtr*)caster3Weight, *(EarthView::World::Graphic::CMaterialPtr*)caster4Weight);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowReceiverMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr(void *pObjectXXXX, _in const int skinningType, _in const void* receiver1Weight, _in const void* receiver2Weight, _in const void* receiver3Weight, _in const void* receiver4Weight )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					if (dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::setCustomShadowReceiverMaterials((EarthView::World::Graphic::RTShaderSystem::SkinningType)skinningType, *(EarthView::World::Graphic::CMaterialPtr*)receiver1Weight, *(EarthView::World::Graphic::CMaterialPtr*)receiver2Weight, *(EarthView::World::Graphic::CMaterialPtr*)receiver3Weight, *(EarthView::World::Graphic::CMaterialPtr*)receiver4Weight);
					else
						ptrNativeObject->setCustomShadowReceiverMaterials((EarthView::World::Graphic::RTShaderSystem::SkinningType)skinningType, *(EarthView::World::Graphic::CMaterialPtr*)receiver1Weight, *(EarthView::World::Graphic::CMaterialPtr*)receiver2Weight, *(EarthView::World::Graphic::CMaterialPtr*)receiver3Weight, *(EarthView::World::Graphic::CMaterialPtr*)receiver4Weight);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowReceiverMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowReceiverMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_Callback* pCallback )
				{
					CHardwareSkinningFactoryProxy* ptr = dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowReceiverMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setCustomShadowReceiverMaterials_void_SkinningType_CMaterialPtr_CMaterialPtr_CMaterialPtr_CMaterialPtr_NoVirtual(void *pObjectXXXX, _in const int skinningType, _in const void* receiver1Weight, _in const void* receiver2Weight, _in const void* receiver3Weight, _in const void* receiver4Weight )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::setCustomShadowReceiverMaterials((EarthView::World::Graphic::RTShaderSystem::SkinningType)skinningType, *(EarthView::World::Graphic::CMaterialPtr*)receiver1Weight, *(EarthView::World::Graphic::CMaterialPtr*)receiver2Weight, *(EarthView::World::Graphic::CMaterialPtr*)receiver3Weight, *(EarthView::World::Graphic::CMaterialPtr*)receiver4Weight);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getCustomShadowCasterMaterial_CMaterialPtr_SkinningType_ev_uint16(void *pObjectXXXX, _in const int skinningType, _in ev_uint16 index )
				{
					const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->getCustomShadowCasterMaterial((EarthView::World::Graphic::RTShaderSystem::SkinningType)skinningType, index);
					const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getCustomShadowReceiverMaterial_CMaterialPtr_SkinningType_ev_uint16(void *pObjectXXXX, _in const int skinningType, _in ev_uint16 index )
				{
					const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->getCustomShadowReceiverMaterial((EarthView::World::Graphic::RTShaderSystem::SkinningType)skinningType, index);
					const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_prepareEntityForSkinning_void_CEntity_SkinningType_bool_bool(void *pObjectXXXX, _in const EarthView::World::Graphic::CEntity* pEntity, _in int skinningType, _in bool correctAntidpodalityHandling, _in bool shearScale )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					ptrNativeObject->prepareEntityForSkinning(pEntity, (EarthView::World::Graphic::RTShaderSystem::SkinningType)skinningType, correctAntidpodalityHandling, shearScale);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_prepareEntityForSkinning_void_CEntity_SkinningType_bool(void *pObjectXXXX, _in const EarthView::World::Graphic::CEntity* pEntity, _in int skinningType, _in bool correctAntidpodalityHandling )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					ptrNativeObject->prepareEntityForSkinning(pEntity, (EarthView::World::Graphic::RTShaderSystem::SkinningType)skinningType, correctAntidpodalityHandling);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_prepareEntityForSkinning_void_CEntity_SkinningType(void *pObjectXXXX, _in const EarthView::World::Graphic::CEntity* pEntity, _in int skinningType )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					ptrNativeObject->prepareEntityForSkinning(pEntity, (EarthView::World::Graphic::RTShaderSystem::SkinningType)skinningType);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_prepareEntityForSkinning_void_CEntity(void *pObjectXXXX, _in const EarthView::World::Graphic::CEntity* pEntity )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					ptrNativeObject->prepareEntityForSkinning(pEntity);
				}
				extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getMaxCalculableBoneCount_ev_uint16(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					ev_uint16 objXXXX = ptrNativeObject->getMaxCalculableBoneCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_setMaxCalculableBoneCount_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 count )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					ptrNativeObject->setMaxCalculableBoneCount(count);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getSingleton_CHardwareSkinningFactory( )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory& objXXXX = EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::getSingleton();
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_getSingletonPtr_CHardwareSkinningFactory( )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* objXXXX = EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstanceImpl_CSubRenderState(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					if (dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::createInstanceImpl();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->createInstanceImpl();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstanceImpl_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstanceImpl_CSubRenderState_Callback* pCallback )
				{
					CHardwareSkinningFactoryProxy* ptr = dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstanceImpl_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstanceImpl_CSubRenderState_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory::createInstanceImpl();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_Callback* pCallback )
				{
					CHardwareSkinningFactoryProxy* ptr = dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* pCallback )
				{
					CHardwareSkinningFactoryProxy* ptr = dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* pCallback )
				{
					CHardwareSkinningFactoryProxy* ptr = dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyInstance_void_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyInstance_void_CSubRenderState_Callback* pCallback )
				{
					CHardwareSkinningFactoryProxy* ptr = dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyInstance_void_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyAllInstances_void( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyAllInstances_void_Callback* pCallback )
				{
					CHardwareSkinningFactoryProxy* ptr = dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_destroyAllInstances_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* pCallback )
				{
					CHardwareSkinningFactoryProxy* ptr = dynamic_cast<CHardwareSkinningFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CHardwareSkinningFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CHardwareSkinningFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(pCallback);
					}
				}
			}
		}
	}
}
