/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rtshadersystem/shaderexintegratedpssm3.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			namespace RTShaderSystem
			{
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getType_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getExecutionOrder_int_Callback)();
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_copyFrom_void_CSubRenderState_Callback)(_in const void* rhs);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_createCpuSubPrograms_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback)(_in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback)(_in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveParameters_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveDependencies_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				typedef bool  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_addFunctionInvocations_bool_CProgramSet_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet);
				class CIntegratedPSSM3Proxy : public EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getType_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getType_EVString_Callback;
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getExecutionOrder_int_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getExecutionOrder_int_Callback;
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_copyFrom_void_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_copyFrom_void_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_createCpuSubPrograms_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_createCpuSubPrograms_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback;
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback;
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveParameters_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveParameters_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveDependencies_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveDependencies_bool_CProgramSet_Callback;
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_addFunctionInvocations_bool_CProgramSet_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_addFunctionInvocations_bool_CProgramSet_Callback;
				public:
					CIntegratedPSSM3Proxy(EarthView::World::Core::CNameValuePairList *pList) : CIntegratedPSSM3(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getType_EVString_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getExecutionOrder_int_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_copyFrom_void_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_createCpuSubPrograms_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveParameters_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveDependencies_bool_CProgramSet_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_addFunctionInvocations_bool_CProgramSet_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getType_EVString(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getExecutionOrder_int(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getExecutionOrder_int_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getExecutionOrder_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_copyFrom_void_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_copyFrom_void_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_copyFrom_void_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_createCpuSubPrograms_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_createCpuSubPrograms_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_createCpuSubPrograms_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_preAddToRenderState_bool_CRenderState_CPass_CPass(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveParameters_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveParameters_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveParameters_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveDependencies_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveDependencies_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveDependencies_bool_CProgramSet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_addFunctionInvocations_bool_CProgramSet(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_addFunctionInvocations_bool_CProgramSet_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_addFunctionInvocations_bool_CProgramSet_Callback = pCallback;
					}
					virtual EVString getType() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CIntegratedPSSM3::getType();
					}
					virtual int getExecutionOrder() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getExecutionOrder_int_Callback != NULL && this->isCustomExtend())
						{
							int returnValue = m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getExecutionOrder_int_Callback();
							return returnValue;
						}
						else
							return this->CIntegratedPSSM3::getExecutionOrder();
					}
					virtual void updateGpuProgramsParams(_in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback(rend, pass, source, pLightList);
						}
						else
							return this->CIntegratedPSSM3::updateGpuProgramsParams(rend, pass, source, pLightList);
					}
					virtual void copyFrom(_in const EarthView::World::Graphic::RTShaderSystem::CSubRenderState& rhs)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_copyFrom_void_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_copyFrom_void_CSubRenderState_Callback(&rhs);
						}
						else
							return this->CIntegratedPSSM3::copyFrom(rhs);
					}
					virtual bool preAddToRenderState(_in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback(renderState, srcPass, dstPass);
							return returnValue;
						}
						else
							return this->CIntegratedPSSM3::preAddToRenderState(renderState, srcPass, dstPass);
					}
					virtual bool resolveParameters(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveParameters_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveParameters_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CIntegratedPSSM3::resolveParameters(programSet);
					}
					virtual bool resolveDependencies(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveDependencies_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveDependencies_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CIntegratedPSSM3::resolveDependencies(programSet);
					}
					virtual bool addFunctionInvocations(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_addFunctionInvocations_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_addFunctionInvocations_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CIntegratedPSSM3::addFunctionInvocations(programSet);
					}
					virtual bool createCpuSubPrograms(_in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_createCpuSubPrograms_bool_CProgramSet_Callback != NULL && this->isCustomExtend())
						{
							bool returnValue = m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_createCpuSubPrograms_bool_CProgramSet_Callback(programSet);
							return returnValue;
						}
						else
							return this->CIntegratedPSSM3::createCpuSubPrograms(programSet);
					}
				};
				REGISTER_FACTORY_CLASS(CIntegratedPSSM3Proxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_Integratedppssm3SplitPointList_push_back_void_Real(void *pObjectXXXX, _in Real t )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_Integratedppssm3SplitPointList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_Integratedppssm3SplitPointList_front_Real(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList*) pObjectXXXX;
					Real& objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_Integratedppssm3SplitPointList_back_Real(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList*) pObjectXXXX;
					Real& objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_Integratedppssm3SplitPointList_insert_void_ev_uint32_Real(void *pObjectXXXX, _in ev_uint32 pos, _in Real& t )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_Integratedppssm3SplitPointList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_Integratedppssm3SplitPointList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_Integratedppssm3SplitPointList_OperatorIndex_Real_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList& objYYYY = *(EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList*) pObjXXXX;
					Real& objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_Integratedppssm3SplitPointList_at_Real_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList*) pObjectXXXX;
					Real& objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_Integratedppssm3SplitPointList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_Integratedppssm3SplitPointList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_Integratedppssm3SplitPointList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_Integratedppssm3SplitPointList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX;
					if (dynamic_cast<CIntegratedPSSM3Proxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::getType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getType_EVString_Callback* pCallback )
				{
					CIntegratedPSSM3Proxy* ptr = dynamic_cast<CIntegratedPSSM3Proxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getType_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::getType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getExecutionOrder_int(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX;
					if (dynamic_cast<CIntegratedPSSM3Proxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*)ptrNativeObject) != NULL)
					{
						int objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::getExecutionOrder();
						return objXXXX;
					}
					else
					{
						int objXXXX = ptrNativeObject->getExecutionOrder();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getExecutionOrder_int( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getExecutionOrder_int_Callback* pCallback )
				{
					CIntegratedPSSM3Proxy* ptr = dynamic_cast<CIntegratedPSSM3Proxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getExecutionOrder_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_getExecutionOrder_int_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX;
					int objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::getExecutionOrder();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX;
					if (dynamic_cast<CIntegratedPSSM3Proxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::updateGpuProgramsParams(rend, pass, source, pLightList);
					else
						ptrNativeObject->updateGpuProgramsParams(rend, pass, source, pLightList);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_Callback* pCallback )
				{
					CIntegratedPSSM3Proxy* ptr = dynamic_cast<CIntegratedPSSM3Proxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_updateGpuProgramsParams_void_CRenderable_CPass_CAutoParamDataSource_LightList_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderable* rend, _in EarthView::World::Graphic::CPass* pass, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in const EarthView::World::Graphic::LightList* pLightList )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::updateGpuProgramsParams(rend, pass, source, pLightList);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_copyFrom_void_CSubRenderState(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX;
					if (dynamic_cast<CIntegratedPSSM3Proxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
					else
						ptrNativeObject->copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_copyFrom_void_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_copyFrom_void_CSubRenderState_Callback* pCallback )
				{
					CIntegratedPSSM3Proxy* ptr = dynamic_cast<CIntegratedPSSM3Proxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_copyFrom_void_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_copyFrom_void_CSubRenderState_NoVirtual(void *pObjectXXXX, _in const void* rhs )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::copyFrom(*(EarthView::World::Graphic::RTShaderSystem::CSubRenderState*)rhs);
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_preAddToRenderState_bool_CRenderState_CPass_CPass(void *pObjectXXXX, _in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX;
					if (dynamic_cast<CIntegratedPSSM3Proxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::preAddToRenderState(renderState, srcPass, dstPass);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->preAddToRenderState(renderState, srcPass, dstPass);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_preAddToRenderState_bool_CRenderState_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_preAddToRenderState_bool_CRenderState_CPass_CPass_Callback* pCallback )
				{
					CIntegratedPSSM3Proxy* ptr = dynamic_cast<CIntegratedPSSM3Proxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_preAddToRenderState_bool_CRenderState_CPass_CPass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_preAddToRenderState_bool_CRenderState_CPass_CPass_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::RTShaderSystem::CRenderState* renderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::preAddToRenderState(renderState, srcPass, dstPass);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_setSplitPoints_void_Integratedppssm3SplitPointList(void *pObjectXXXX, _in const void* newSplitPoints )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX;
					ptrNativeObject->setSplitPoints(*(EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Integratedppssm3SplitPointList*)newSplitPoints);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_Type()
				{
					EVString objXXXX = EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Type;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_Type( char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::Type = value1;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveParameters_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX;
					if (dynamic_cast<CIntegratedPSSM3Proxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::resolveParameters(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveParameters(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveParameters_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveParameters_bool_CProgramSet_Callback* pCallback )
				{
					CIntegratedPSSM3Proxy* ptr = dynamic_cast<CIntegratedPSSM3Proxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveParameters_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveParameters_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::resolveParameters(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveDependencies_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX;
					if (dynamic_cast<CIntegratedPSSM3Proxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::resolveDependencies(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->resolveDependencies(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveDependencies_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveDependencies_bool_CProgramSet_Callback* pCallback )
				{
					CIntegratedPSSM3Proxy* ptr = dynamic_cast<CIntegratedPSSM3Proxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveDependencies_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_resolveDependencies_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::resolveDependencies(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_addFunctionInvocations_bool_CProgramSet(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX;
					if (dynamic_cast<CIntegratedPSSM3Proxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*)ptrNativeObject) != NULL)
					{
						bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::addFunctionInvocations(programSet);
						return objXXXX;
					}
					else
					{
						bool objXXXX = ptrNativeObject->addFunctionInvocations(programSet);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_addFunctionInvocations_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_addFunctionInvocations_bool_CProgramSet_Callback* pCallback )
				{
					CIntegratedPSSM3Proxy* ptr = dynamic_cast<CIntegratedPSSM3Proxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_addFunctionInvocations_bool_CProgramSet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_addFunctionInvocations_bool_CProgramSet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::RTShaderSystem::CProgramSet* programSet )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3::addFunctionInvocations(programSet);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_createCpuSubPrograms_bool_CProgramSet( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_createCpuSubPrograms_bool_CProgramSet_Callback* pCallback )
				{
					CIntegratedPSSM3Proxy* ptr = dynamic_cast<CIntegratedPSSM3Proxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3_createCpuSubPrograms_bool_CProgramSet(pCallback);
					}
				}
				typedef char*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_getType_EVString_Callback)();
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_Callback)();
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CTextureUnitState* texState, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyInstance_void_CSubRenderState_Callback)(_in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyAllInstances_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass);
				typedef void  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback)(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in const EarthView::World::Graphic::CTextureUnitState* srcTextureUnit, _in const EarthView::World::Graphic::CTextureUnitState* dstTextureUnit);
				typedef EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  ( _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstanceImpl_CSubRenderState_Callback)();
				class CIntegratedPSSM3FactoryProxy : public EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory
				{
				private:
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_getType_EVString_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_getType_EVString_Callback;
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback;
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyInstance_void_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyInstance_void_CSubRenderState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyAllInstances_void_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyAllInstances_void_Callback;
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback;
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback;
					EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstanceImpl_CSubRenderState_Callback* m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstanceImpl_CSubRenderState_Callback;
				public:
					CIntegratedPSSM3FactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CIntegratedPSSM3Factory(pList)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_getType_EVString_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyInstance_void_CSubRenderState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyAllInstances_void_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback = NULL;
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstanceImpl_CSubRenderState_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_getType_EVString(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_getType_EVString_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_getType_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyInstance_void_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyInstance_void_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyInstance_void_CSubRenderState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyAllInstances_void(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyAllInstances_void_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyAllInstances_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstanceImpl_CSubRenderState(EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstanceImpl_CSubRenderState_Callback* pCallback)
					{
						m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstanceImpl_CSubRenderState_Callback = pCallback;
					}
					virtual EVString getType() const
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_getType_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_getType_EVString_Callback();
							return returnValue;
						}
						else
							return this->CIntegratedPSSM3Factory::getType();
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstance(_in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback(compiler, prop, pass, translator);
							return returnValue;
						}
						else
							return this->CIntegratedPSSM3Factory::createInstance(compiler, prop, pass, translator);
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createOrRetrieveInstance(_in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback(translator);
							return returnValue;
						}
						else
							return this->CIntegratedPSSM3Factory::createOrRetrieveInstance(translator);
					}
					virtual void destroyInstance(_in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyInstance_void_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyInstance_void_CSubRenderState_Callback(subRenderState);
						}
						else
							return this->CIntegratedPSSM3Factory::destroyInstance(subRenderState);
					}
					virtual void destroyAllInstances()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyAllInstances_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyAllInstances_void_Callback();
						}
						else
							return this->CIntegratedPSSM3Factory::destroyAllInstances();
					}
					virtual void writeInstance(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in EarthView::World::Graphic::CPass* srcPass, _in EarthView::World::Graphic::CPass* dstPass)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback(ser, subRenderState, srcPass, dstPass);
						}
						else
							return this->CIntegratedPSSM3Factory::writeInstance(ser, subRenderState, srcPass, dstPass);
					}
					virtual void writeInstance(_in EarthView::World::Graphic::CMaterialSerializer* ser, _in EarthView::World::Graphic::RTShaderSystem::CSubRenderState* subRenderState, _in const EarthView::World::Graphic::CTextureUnitState* srcTextureUnit, _in const EarthView::World::Graphic::CTextureUnitState* dstTextureUnit)
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback(ser, subRenderState, srcTextureUnit, dstTextureUnit);
						}
						else
							return this->CIntegratedPSSM3Factory::writeInstance(ser, subRenderState, srcTextureUnit, dstTextureUnit);
					}
					virtual EarthView::World::Graphic::RTShaderSystem::CSubRenderState* createInstanceImpl()
					{
						if(m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstanceImpl_CSubRenderState_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Graphic::RTShaderSystem::CSubRenderState* returnValue = m_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstanceImpl_CSubRenderState_Callback();
							return returnValue;
						}
						else
							return this->CIntegratedPSSM3Factory::createInstanceImpl();
					}
				};
				REGISTER_FACTORY_CLASS(CIntegratedPSSM3FactoryProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_getType_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory*) pObjectXXXX;
					if (dynamic_cast<CIntegratedPSSM3FactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory::getType();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getType();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_getType_EVString_Callback* pCallback )
				{
					CIntegratedPSSM3FactoryProxy* ptr = dynamic_cast<CIntegratedPSSM3FactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_getType_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_getType_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory::getType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory*) pObjectXXXX;
					if (dynamic_cast<CIntegratedPSSM3FactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory::createInstance(compiler, prop, pass, translator);
						return objXXXX;
					}
					else
					{
						EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->createInstance(compiler, prop, pass, translator);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_Callback* pCallback )
				{
					CIntegratedPSSM3FactoryProxy* ptr = dynamic_cast<CIntegratedPSSM3FactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::RTShaderSystem::CSubRenderState*  _stdcall EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CPass_CSGScriptTranslator_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptCompiler* compiler, _in EarthView::World::Graphic::CPropertyAbstractNode* prop, _in EarthView::World::Graphic::CPass* pass, _in EarthView::World::Graphic::RTShaderSystem::CSGScriptTranslator* translator )
				{
					EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory* ptrNativeObject = (EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory*) pObjectXXXX;
					EarthView::World::Graphic::RTShaderSystem::CSubRenderState* objXXXX = ptrNativeObject->EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory::createInstance(compiler, prop, pass, translator);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_Callback* pCallback )
				{
					CIntegratedPSSM3FactoryProxy* ptr = dynamic_cast<CIntegratedPSSM3FactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator_Callback* pCallback )
				{
					CIntegratedPSSM3FactoryProxy* ptr = dynamic_cast<CIntegratedPSSM3FactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstance_CSubRenderState_CScriptCompiler_CPropertyAbstractNode_CTextureUnitState_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator_Callback* pCallback )
				{
					CIntegratedPSSM3FactoryProxy* ptr = dynamic_cast<CIntegratedPSSM3FactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createOrRetrieveInstance_CSubRenderState_CSGScriptTranslator(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyInstance_void_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyInstance_void_CSubRenderState_Callback* pCallback )
				{
					CIntegratedPSSM3FactoryProxy* ptr = dynamic_cast<CIntegratedPSSM3FactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyInstance_void_CSubRenderState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyAllInstances_void( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyAllInstances_void_Callback* pCallback )
				{
					CIntegratedPSSM3FactoryProxy* ptr = dynamic_cast<CIntegratedPSSM3FactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_destroyAllInstances_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass_Callback* pCallback )
				{
					CIntegratedPSSM3FactoryProxy* ptr = dynamic_cast<CIntegratedPSSM3FactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CPass_CPass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState_Callback* pCallback )
				{
					CIntegratedPSSM3FactoryProxy* ptr = dynamic_cast<CIntegratedPSSM3FactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_writeInstance_void_CMaterialSerializer_CSubRenderState_CTextureUnitState_CTextureUnitState(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstanceImpl_CSubRenderState( void *pObjectXXXX, EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstanceImpl_CSubRenderState_Callback* pCallback )
				{
					CIntegratedPSSM3FactoryProxy* ptr = dynamic_cast<CIntegratedPSSM3FactoryProxy*>((EarthView::World::Graphic::RTShaderSystem::CIntegratedPSSM3Factory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Graphic_RTShaderSystem_CIntegratedPSSM3Factory_createInstanceImpl_CSubRenderState(pCallback);
					}
				}
			}
		}
	}
}
