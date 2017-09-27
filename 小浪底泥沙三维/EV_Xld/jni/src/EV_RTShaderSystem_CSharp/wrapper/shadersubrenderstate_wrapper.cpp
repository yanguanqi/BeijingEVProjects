/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shadersubrenderstate.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor*  _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateAccessorPtr_get_CSubRenderStateAccessor(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_Callback)();
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_Callback)(_in const void* rhs);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback)(_in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				class CSubRenderStateProxy : public EarthView::World::Graphic::RTShaderSystem::CSubRenderState
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_Callback;
				public:
					CSubRenderStateProxy(EarthView::World::Core::CNameValuePairList *pList) : CSubRenderState(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString(EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int(EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass(EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_Callback = pCallback;
					}
					virtual EVString getType() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSubRenderState::getType();
					}
					virtual int getExecutionOrder() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_Callback != NULL && this->isCustomExtend())
						{
							int returnValue = m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_Callback();
							return returnValue;
						}
						else
							return this->CSubRenderState::getExecutionOrder();
					}
					virtual void copyFrom(_in const EarthView::World::Graphic::RTShaderSystem::CSubRenderState& rhs)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_Callback(&rhs);
						}
						else
							return this->CSubRenderState::copyFrom(rhs);
					}
					virtual bool createCpuSubPrograms(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CSubRenderState::createCpuSubPrograms(programSet);
					}
					virtual void updateGpuProgramsParams(_in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback(rend, pass, source, pLightList);
						}
						else
							return this->CSubRenderState::updateGpuProgramsParams(rend, pass, source, pLightList);
					}
					virtual bool preAddToRenderState(_in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback(renderState, srcPass, dstPass);
							return returnValue;
						}
						else
							return this->CSubRenderState::preAddToRenderState(renderState, srcPass, dstPass);
					}
					virtual bool resolveParameters(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CSubRenderState::resolveParameters(programSet);
					}
					virtual bool resolveDependencies(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CSubRenderState::resolveDependencies(programSet);
					}
					virtual bool addFunctionInvocations(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CSubRenderState::addFunctionInvocations(programSet);
					}
				};
				REGISTER_FACTORY_CLASS(CSubRenderStateProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::getType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_Callback* pCallback )
				{
					CSubRenderStateProxy* ptr = dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getType_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::getType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)ptrNativeObject) != NULL)
					{
						int objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::getExecutionOrder();
						return objXXXX;
					}
					else
					{
						int objXXXX = ptrNativeObject->getExecutionOrder();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_Callback* pCallback )
				{
					CSubRenderStateProxy* ptr = dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getExecutionOrder_int_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					int objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::getExecutionOrder();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
					else
						ptrNativeObject->copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_Callback* pCallback )
				{
					CSubRenderStateProxy* ptr = dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_copyFrom_void_CSubRenderState_NoVirtual(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_OperatorAssign_CSubRenderState_CSubRenderState(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState& objXXXX = *((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjXXXX);
					objXXXX = *(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::createCpuSubPrograms(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->createCpuSubPrograms(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_Callback* pCallback )
				{
					CSubRenderStateProxy* ptr = dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_createCpuSubPrograms_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::createCpuSubPrograms(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::updateGpuProgramsParams(rend, pass, source, pLightList);
					else
						ptrNativeObject->updateGpuProgramsParams(rend, pass, source, pLightList);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* pCallback )
				{
					CSubRenderStateProxy* ptr = dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::updateGpuProgramsParams(rend, pass, source, pLightList);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass(void *pObjectXXXX, _in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::preAddToRenderState(renderState, srcPass, dstPass);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->preAddToRenderState(renderState, srcPass, dstPass);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* pCallback )
				{
					CSubRenderStateProxy* ptr = dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_preAddToRenderState_bool_CRenderState_CPass_CPass_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::preAddToRenderState(renderState, srcPass, dstPass);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_getAccessor_SubRenderStateAccessorPtr(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr objXXXX = ptrNativeObject->getAccessor();
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr *pXXXX = new EarthView::World::Graphic::RTShaderSystem::SubRenderStateAccessorPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::resolveParameters(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveParameters(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_Callback* pCallback )
				{
					CSubRenderStateProxy* ptr = dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveParameters_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::resolveParameters(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::resolveDependencies(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveDependencies(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_Callback* pCallback )
				{
					CSubRenderStateProxy* ptr = dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_resolveDependencies_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::resolveDependencies(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::addFunctionInvocations(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->addFunctionInvocations(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_Callback* pCallback )
				{
					CSubRenderStateProxy* ptr = dynamic_cast<CSubRenderStateProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderState_addFunctionInvocations_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderState*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderState::addFunctionInvocations(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_push_back_void_CSubRenderState(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* t )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_front_CSubRenderState(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_back_CSubRenderState(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_insert_void_ev_uint32_CSubRenderState(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState*& t )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::SubRenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_OperatorIndex_CSubRenderState_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList& objYYYY = *(EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_at_CSubRenderState_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::SubRenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_insert_void_CSubRenderState(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* val )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*) pObjectXXXX;
					ptrNativeObject->insert(val);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_size_ev_size_t(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_erase_ev_size_t_CSubRenderState(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState*& key )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->erase(key);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_empty_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_count_ev_size_t_CSubRenderState(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState*& key )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->count(key);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_max_size_ev_size_t(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->max_size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_SubRenderStateSet_swap_void_SubRenderStateSet(void *pObjectXXXX, _inout void* other )
				{
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*) pObjectXXXX;
					ptrNativeObject->swap(*(EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet*)other);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateAccessor_addSubRenderStateInstance_void_CSubRenderState(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState )
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor*) pObjectXXXX;
					ptrNativeObject->addSubRenderStateInstance(subRenderState);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateAccessor_removeSubRenderStateInstance_void_CSubRenderState(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState )
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor*) pObjectXXXX;
					ptrNativeObject->removeSubRenderStateInstance(subRenderState);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateAccessor_getSubRenderStateInstanceSet_SubRenderStateSet(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateAccessor*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet& objXXXX = ptrNativeObject->getSubRenderStateInstanceSet();
					EarthView::World::Graphic::RTShaderSystem::SubRenderStateSet *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString_Callback)();
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_Callback)();
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CTextureUnitState* texState, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in const EarthView::World::Graphic::CTextureUnitState* srcTextureUnit, _in const EarthView::World::Graphic::CTextureUnitState* dstTextureUnit);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState_Callback)();
				class CSubRenderStateFactoryProxy : public EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState_Callback;
				public:
					CSubRenderStateFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CSubRenderStateFactory(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString(EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void(EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState_Callback = pCallback;
					}
					virtual EVString getType() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CSubRenderStateFactory::getType();
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstance()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_Callback();
							return returnValue;
						}
						else
							return this->CSubRenderStateFactory::createInstance();
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstance(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback(compiler, prop, pass, translator);
							return returnValue;
						}
						else
							return this->CSubRenderStateFactory::createInstance(compiler, prop, pass, translator);
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstance(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CTextureUnitState* texState, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback(compiler, prop, texState, translator);
							return returnValue;
						}
						else
							return this->CSubRenderStateFactory::createInstance(compiler, prop, texState, translator);
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createOrRetrieveInstance(_in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback(translator);
							return returnValue;
						}
						else
							return this->CSubRenderStateFactory::createOrRetrieveInstance(translator);
					}
					virtual void destroyInstance(_in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState_Callback(subRenderState);
						}
						else
							return this->CSubRenderStateFactory::destroyInstance(subRenderState);
					}
					virtual void destroyAllInstances()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void_Callback();
						}
						else
							return this->CSubRenderStateFactory::destroyAllInstances();
					}
					virtual void writeInstance(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback(ser, subRenderState, srcPass, dstPass);
						}
						else
							return this->CSubRenderStateFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
					}
					virtual void writeInstance(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in const EarthView::World::Graphic::CTextureUnitState* srcTextureUnit, _in const EarthView::World::Graphic::CTextureUnitState* dstTextureUnit)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback(ser, subRenderState, srcTextureUnit, dstTextureUnit);
						}
						else
							return this->CSubRenderStateFactory::writeInstance(ser, subRenderState, srcTextureUnit, dstTextureUnit);
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstanceImpl()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState_Callback();
							return returnValue;
						}
						else
							return this->CSubRenderStateFactory::createInstanceImpl();
					}
				};
				REGISTER_FACTORY_CLASS(CSubRenderStateFactoryProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::getType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString_Callback* pCallback )
				{
					CSubRenderStateFactoryProxy* ptr = dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_getType_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::getType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createInstance();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->createInstance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_Callback* pCallback )
				{
					CSubRenderStateFactoryProxy* ptr = dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createInstance(compiler, prop, pass, translator);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->createInstance(compiler, prop, pass, translator);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* pCallback )
				{
					CSubRenderStateFactoryProxy* ptr = dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createInstance(compiler, prop, pass, translator);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CTextureUnitState* texState, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createInstance(compiler, prop, texState, translator);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->createInstance(compiler, prop, texState, translator);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* pCallback )
				{
					CSubRenderStateFactoryProxy* ptr = dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CTextureUnitState* texState, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createInstance(compiler, prop, texState, translator);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createOrRetrieveInstance(translator);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->createOrRetrieveInstance(translator);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* pCallback )
				{
					CSubRenderStateFactoryProxy* ptr = dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createOrRetrieveInstance(translator);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::destroyInstance(subRenderState);
					else
						ptrNativeObject->destroyInstance(subRenderState);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState_Callback* pCallback )
				{
					CSubRenderStateFactoryProxy* ptr = dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyInstance_void_CSubRenderState_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::destroyInstance(subRenderState);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::destroyAllInstances();
					else
						ptrNativeObject->destroyAllInstances();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void_Callback* pCallback )
				{
					CSubRenderStateFactoryProxy* ptr = dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_destroyAllInstances_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::destroyAllInstances();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
					else
						ptrNativeObject->writeInstance(ser, subRenderState, srcPass, dstPass);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* pCallback )
				{
					CSubRenderStateFactoryProxy* ptr = dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::writeInstance(ser, subRenderState, srcPass, dstPass);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in const EarthView::World::Graphic::CTextureUnitState* srcTextureUnit, _in const EarthView::World::Graphic::CTextureUnitState* dstTextureUnit )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::writeInstance(ser, subRenderState, srcTextureUnit, dstTextureUnit);
					else
						ptrNativeObject->writeInstance(ser, subRenderState, srcTextureUnit, dstTextureUnit);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* pCallback )
				{
					CSubRenderStateFactoryProxy* ptr = dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in const EarthView::World::Graphic::CTextureUnitState* srcTextureUnit, _in const EarthView::World::Graphic::CTextureUnitState* dstTextureUnit )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::writeInstance(ser, subRenderState, srcTextureUnit, dstTextureUnit);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					if (dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createInstanceImpl();
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->createInstanceImpl();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState_Callback* pCallback )
				{
					CSubRenderStateFactoryProxy* ptr = dynamic_cast<CSubRenderStateFactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CSubRenderStateFactory_createInstanceImpl_CSubRenderState_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CSubRenderStateFactory::createInstanceImpl();
					return objXXXX;
				}
			}
		}
	}
}
